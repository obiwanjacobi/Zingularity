import { AssemblyNode, Comment, Label, Instruction, InstructionMeta, Expression, Numeric, Radix, Directive, AsmError } from "./CodeModel";
import * as antlr4 from "antlr4ts";
import { ParseTreeWalker } from "antlr4ts/tree/ParseTreeWalker";
import { AbstractParseTreeVisitor } from "antlr4ts/tree/AbstractParseTreeVisitor";
import { z80asmLexer } from "./z80asmLexer";
import { z80asmParser, ExpressionContext, Number_binContext, NumberContext, Number_octContext, Number_decContext, Number_hexContext, OperatorContext, AsmContext, DirectiveContext, InstructionContext, SymbolContext, CommentContext, LabelContext, Directive_elseblockContext, Directive_endifContext } from "./z80asmParser";
import { z80asmListener } from "./z80asmListener";
import { z80asmVisitor } from "./z80asmVisitor";
import { ParserRuleContext } from "antlr4ts";
import { ParseTree } from "antlr4ts/tree/ParseTree";
import { TerminalNode } from "antlr4ts/tree/TerminalNode";
import { Interval } from "antlr4ts/misc/Interval";
import { findMap, createMeta } from "./InstructionNavigator";

const _meta: InstructionMeta = {
    altCycles: [],
    bytes: [],
    cycles: [],
    flags: []
};

// grabs text from the original text stream
function toString(ctx: ParserRuleContext): string {
    if (ctx.start && ctx.stop && ctx.start.inputStream) {
        const interval = new Interval(ctx.start.startIndex, ctx.stop.stopIndex);
        return ctx.start.inputStream.getText(interval);
    }

    return ctx.text;
}

function toErrorMessage(exception: antlr4.RecognitionException): string {
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
class NumericBuilder extends AbstractParseTreeVisitor<Numeric> implements z80asmVisitor<Numeric> {
    defaultResult(): Numeric {
        return Numeric.empty;
    }

    visitNumber_bin(ctx: Number_binContext): Numeric {
        return this.new(2, ctx);
    }

    visitNumber_oct(ctx: Number_octContext): Numeric {
        return this.new(8, ctx);
    }

    visitNumber_dec(ctx: Number_decContext): Numeric {
        return this.new(10, ctx);
    }

    visitNumber_hex(ctx: Number_hexContext): Numeric {
        return this.new(16, ctx);
    }

    private new(radix: Radix, ctx: ParserRuleContext): Numeric {
        return new Numeric(parseInt(ctx.text, radix), radix, ctx.text, ctx.start.line, ctx.start.charPositionInLine);
    }
}

class ExpressionTreeNode {
    readonly text: string;
    readonly line: number;
    readonly column: number;
    left: ExpressionTreeNode | undefined;
    right: ExpressionTreeNode | undefined;
    numeric: Numeric | undefined;
    symbol: string;

    constructor(text: string, line: number, column: number) {
        this.text = text;
        this.line = line;
        this.column = column;
        this.symbol = "";
    }

    static readonly empty = new ExpressionTreeNode("", 0, 0);
}

class ExpressionBuilder extends AbstractParseTreeVisitor<ExpressionTreeNode> implements z80asmVisitor<ExpressionTreeNode> {
    

    defaultResult(): ExpressionTreeNode {
        return ExpressionTreeNode.empty;
    }

    visitSymbol(ctx: SymbolContext): ExpressionTreeNode {
        const treeNode = new ExpressionTreeNode(toString(ctx), ctx.start.line, ctx.start.charPositionInLine);
        treeNode.symbol = ctx.text;
        return treeNode;
    }

    visitNumber(ctx: NumberContext): ExpressionTreeNode {
        const numericBuilder = new NumericBuilder();
        const expr = new ExpressionTreeNode(toString(ctx), ctx.start.line, ctx.start.charPositionInLine);
        expr.numeric = numericBuilder.visit(ctx);
        return expr;
    }

    visitOperator(ctx: OperatorContext): ExpressionTreeNode {
        return new ExpressionTreeNode(toString(ctx), ctx.start.line, ctx.start.charPositionInLine);
    }

    visitExpression(ctx: ExpressionContext): ExpressionTreeNode {
        if (ctx.childCount > 0) {
            return super.visitChildren(ctx);
        }
        return new ExpressionTreeNode(toString(ctx), ctx.start.line, ctx.start.charPositionInLine);
    }

    aggregateResult(aggregate: ExpressionTreeNode, result: ExpressionTreeNode): ExpressionTreeNode {
        if (aggregate === ExpressionTreeNode.empty) { return result; }
        if (result === ExpressionTreeNode.empty) { return aggregate; }
        if (aggregate.numeric) {
            if (!result.left) { result.left = aggregate; return result; }
        }
        if (result.numeric) {
            if (!aggregate.right) { aggregate.right = result; return aggregate; }
        }
        if (!result.left) { result.left = aggregate; return result; }
        // posible loss of aggregate!
        return result;
    }

    build(tree: ParseTree): Expression {
        const treeNode = super.visit(tree);
        const expr = this.toExpression(treeNode);
        if (!expr) { return Expression.empty; }
        return expr;
    }

    private toExpression(treeNode: ExpressionTreeNode | undefined): Expression | undefined {
        if (treeNode) {
            return new Expression(
                this.toExpression(treeNode.left), 
                this.toExpression(treeNode.right),
                treeNode.numeric, 
                treeNode.symbol,
                treeNode.text,
                treeNode.line,
                treeNode.column,
            );
        }
    
        return undefined;
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

class GrammarListener implements z80asmListener {
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
        this.nodes.push(new Directive(expression, 
            toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
    }

    exitDirective_elseblock(ctx: Directive_elseblockContext) {
        this.nodes.push(new Directive(undefined, 
            toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
        this.skipDirective = true;
    }

    exitDirective_endif(ctx: Directive_endifContext) {
        this.nodes.push(new Directive(undefined, 
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
        this.nodes.push(new Comment(toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
    }

    exitLabel(ctx: LabelContext) {
        if (this.hasException(ctx)) { return; }
        let symbol = ctx.getChild<SymbolContext>(0, SymbolContext);
        if (!symbol) symbol = ctx.getChild<SymbolContext>(1, SymbolContext);
        this.nodes.push(new Label(symbol.text, toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
    }

    private hasException(ctx: ParserRuleContext): boolean {
        const exc = this.getException(ctx);
        if (exc) {
            this.nodes.push(new AsmError(toErrorMessage(exc), toString(ctx), ctx.start.line, ctx.start.charPositionInLine));
            return true;
        }
        return false;
    }

    private getException(ctx: ParserRuleContext): antlr4.RecognitionException | undefined {
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

export class GrammarParser {
    constructor() {
    }

    parse(text: string): AssemblyNode[] {
        const parser = GrammarParser.createParser(text);
        const tree = parser.asm();
        return GrammarParser.createAssemblyNodes(tree);
    }

    static createParser(text: string): z80asmParser {
        const chars = new antlr4.ANTLRInputStream(text);
        const lexer = new z80asmLexer(chars);
        const tokens  = new antlr4.CommonTokenStream(lexer);
        const parser = new z80asmParser(tokens);
        parser.buildParseTree = true;
        return parser;
    }

    static createAssemblyNodes(tree: ParserRuleContext): AssemblyNode[] {
        const listener = new GrammarListener();
        // @ts-ignore: no props in common
        ParseTreeWalker.DEFAULT.walk(listener, tree);

        return listener.nodes;
    }
}