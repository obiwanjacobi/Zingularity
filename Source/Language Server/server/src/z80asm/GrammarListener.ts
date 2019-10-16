import { 
    AssemblyNode, 
    Comment, 
    Label, 
    Instruction, 
    InstructionMeta, 
    Expression, 
    Numeric, 
    Directive, 
    AsmError, 
    AssemblyNodeKind, 
    BlockCommentLine,
    BlockComment,
} from "./CodeModel";
import { 
    ExpressionContext, 
    DirectiveContext, 
    InstructionContext, 
    SymbolContext, 
    CommentContext, 
    LabelContext, 
    Directive_elseblockContext, 
    Directive_endifContext, 
    BlockcommentContext
} from "./z80asmParser";
import { z80asmListener } from "./z80asmListener";
import { z80asmVisitor } from "./z80asmVisitor";
import { ParserRuleContext, RecognitionException } from "antlr4ts";
import { AbstractParseTreeVisitor } from "antlr4ts/tree/AbstractParseTreeVisitor";
import { TerminalNode } from "antlr4ts/tree/TerminalNode";
import { ErrorNode } from "antlr4ts/tree/ErrorNode";
import { findMap, createMeta } from "./InstructionNavigator";
import { ExpressionBuilder } from "./ExpressionBuilder";
import { toString } from "./TokenToString";

const _meta: InstructionMeta = {
    altCycles: [],
    bytes: [],
    cycles: [],
    flags: []
};


function toErrorMessage(exception: RecognitionException): string {
    const typeName = (<any> exception).constructor.name;
    switch(typeName) {
        default:
        case "FailedPredicateException":
        case "LexerNoViableAltException":
        case "InputMismatchException":
            return "Syntax Error";
        case "NoViableAltException":
            return "Illegal Instruction";
    }
}

class ExpressionExtractor extends AbstractParseTreeVisitor<Expression[]> implements z80asmVisitor<Expression[]>{
    defaultResult(): Expression[] {
        return new Array<Expression>();
    }

    aggregateResult(aggregate: Expression[], result: Expression[]): Expression[] {
        return aggregate.concat(result);
    }

    visitExpression(ctx: ExpressionContext): Expression[] {
        const builder = new ExpressionBuilder();
        const expression = builder.build(ctx);
        return [ expression ];
    }

    findNumeric(expressions: Expression[]): Numeric | undefined {
        const numerics = expressions
            .filter(e => e.numeric)
            .map(e => e.numeric);

        return numerics.length ? numerics[0] : undefined;
    }

    findSymbol(expressions: Expression[]): string | undefined {
        const symbols = expressions
            .filter(e => e.symbol)
            .map(e => e.symbol);

        return symbols.length ? symbols[0] : undefined;
    }
}

class SymbolExtractor extends AbstractParseTreeVisitor<string[]> implements z80asmVisitor<string[]>{
    defaultResult(): string[] {
        return new Array<string>();
    }

    aggregateResult(aggregate: string[], result: string[]): string[] {
        return aggregate.concat(result);
    }

    visitSymbol(ctx: SymbolContext): string[] {
        return [ ctx.text ];
    }
}

class TextCollector extends AbstractParseTreeVisitor<string[]> {
    defaultResult(): string[] {
        return new Array<string>();
    }

    aggregateResult(aggregate: string[], result: string[]): string[] {
        return aggregate.concat(result);
    }

    visitTerminal(node: TerminalNode): string[] {
        return [ node.text ];
    }
}

export class GrammarListener implements z80asmListener {
    readonly nodes: AssemblyNode[];
    
    private skipDirective: boolean;

    constructor() {
        this.nodes = new Array<AssemblyNode>();
        this.skipDirective = false;
    }

    exitExpression(ctx: ExpressionContext) {
        if (this.hasException(ctx)) { return; }

        if (!ctx.parent) {
            const builder = new ExpressionBuilder();
            const expression = builder.build(ctx);
            this.nodes.push(expression);
        }
    }

    exitDirective(ctx: DirectiveContext) {
        if (this.hasException(ctx)) { return; }
        if (this.skipDirective) { this.skipDirective = false; return; }

        const extractor = new ExpressionExtractor();
        const expressions = extractor.visit(ctx);
        const expression = expressions.length ? expressions[0] : undefined;

        let symbol: string | undefined = undefined;
        const childCtx = ctx.getChild(0);
        const symbolExtractor = new SymbolExtractor();
        this.nodes.push(new Directive(childCtx.getChild(0).text, 
            symbolExtractor.visit(ctx), expression, 
            toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
    }

    exitDirective_elseblock(ctx: Directive_elseblockContext) {
        this.nodes.push(new Directive(ctx.DIRECTIVEelse().text, undefined, undefined, 
            toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
        this.skipDirective = true;
    }

    exitDirective_endif(ctx: Directive_endifContext) {
        this.nodes.push(new Directive(ctx.DIRECTIVEendif().text, undefined, undefined, 
            toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
        this.skipDirective = true;
    }

    exitInstruction(ctx: InstructionContext) {
        if (this.hasException(ctx)) { return; }

        const extractor = new ExpressionExtractor();
        const expressions = extractor.visit(ctx);

        const numeric = extractor.findNumeric(expressions);
        const external = extractor.findSymbol(expressions);

        const collector = new TextCollector();
        const parts = collector.visit(ctx);
        const map = findMap(parts);
        const meta = createMeta(map, numeric);

        this.nodes.push(new Instruction(meta || _meta, external || "", numeric, 
            toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
    }

    exitComment(ctx: CommentContext) {
        if (this.hasException(ctx)) { return; }
        const comment = new Comment(toString(ctx), ctx.start.line, ctx.start.charPositionInLine);
        this.nodes.push(comment);
    }

    exitBlockcomment(ctx: BlockcommentContext) {
        if (this.hasException(ctx)) { return; }
        const line = new BlockCommentLine(toString(ctx), ctx.start.line, ctx.start.charPositionInLine);

        if (this.nodes.length > 0 &&
            this.nodes[this.nodes.length -1].kind === AssemblyNodeKind.BlockComment) {

            const block = <BlockComment> this.nodes.pop();
            this.nodes.push(new BlockComment([...block.lines, line]));
        } else {
            this.nodes.push(new BlockComment([line]));
        }
    }

    exitLabel(ctx: LabelContext) {
        if (this.hasException(ctx)) { return; }
        let symbol = ctx.getChild<SymbolContext>(0, SymbolContext);
        if (!symbol) symbol = ctx.getChild<SymbolContext>(1, SymbolContext);
        this.nodes.push(new Label(symbol.text, toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
    }

    visitErrorNode(error: ErrorNode) {
        this.removeDuplicateError(error.payload.line);
        this.nodes.push(new AsmError(error.text, error.text, error.payload.line, error.payload.charPositionInLine));
    }

    private removeDuplicateError(line: number) {
        if (this.nodes.length > 0) {
            const lastNode = this.nodes[this.nodes.length - 1];
            if (lastNode.kind === AssemblyNodeKind.Error &&
                lastNode.line === line) {
                    // remove last error on same line
                    this.nodes.pop();
                }
        }
    }
    
    private hasException(ctx: ParserRuleContext): boolean {
        const exc = this.getException(ctx);
        if (exc) {
            this.removeDuplicateError(ctx.start.line);
            this.nodes.push(new AsmError(toErrorMessage(exc), toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
            return true;
        }
        return false;
    }

    private getException(ctx: ParserRuleContext): RecognitionException | undefined {
        if (ctx.exception) { return ctx.exception; }

        for (let i = 0; i < ctx.childCount; i++) {
            const child = ctx.tryGetChild<ParserRuleContext>(i, ParserRuleContext);
            if (child) {
                const exc = this.getException(child);
                if (exc) { return exc; }
            }
        }

        return undefined;
    }
}
