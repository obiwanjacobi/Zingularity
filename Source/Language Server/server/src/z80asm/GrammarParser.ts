import { AssemblyNode, Comment, Label, Instruction, InstructionMeta, Expression, Numeric, Radix, Directive } from "./CodeModel";
import * as antlr4 from "antlr4ts";
import { ParseTreeWalker } from "antlr4ts/tree/ParseTreeWalker";
import { AbstractParseTreeVisitor } from "antlr4ts/tree/AbstractParseTreeVisitor";
import { z80asmLexer } from "./z80asmLexer";
import { z80asmParser, ExpressionContext, Number_binContext, NumberContext, Number_octContext, Number_decContext, Number_hexContext, OperatorContext, AsmContext, DirectiveContext } from "./z80asmParser";
import { z80asmListener } from "./z80asmListener";
import { z80asmVisitor } from "./z80asmVisitor";
import { ParserRuleContext } from "antlr4ts";
import { expression } from "@babel/template";
import { ParseTree } from "antlr4ts/tree/ParseTree";

const _meta: InstructionMeta = {
    altCycles: [],
    bytes: [],
    cycles: [],
    flags: []
};

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

    constructor(text: string, line: number, column: number) {
        this.text = text;
        this.line = line;
        this.column = column;
    }
}

class ExpressionBuilder extends AbstractParseTreeVisitor<ExpressionTreeNode> implements z80asmVisitor<ExpressionTreeNode> {
    static readonly empty = new ExpressionTreeNode("", 0, 0);

    defaultResult(): ExpressionTreeNode {
        return ExpressionBuilder.empty;
    }

    visitNumber(ctx: NumberContext): ExpressionTreeNode {
        const numericBuilder = new NumericBuilder();
        const expr = new ExpressionTreeNode(ctx.text, ctx.start.line, ctx.start.charPositionInLine);
        expr.numeric = numericBuilder.visit(ctx);
        return expr;
    }

    visitOperator(ctx: OperatorContext): ExpressionTreeNode {
        return new ExpressionTreeNode(ctx.text, ctx.start.line, ctx.start.charPositionInLine);
    }

    visitExpression(ctx: ExpressionContext): ExpressionTreeNode {
        if (ctx.childCount > 0) {
            return super.visitChildren(ctx);
        }
        return new ExpressionTreeNode(ctx.text, ctx.start.line, ctx.start.charPositionInLine);
    }

    aggregateResult(aggregate: ExpressionTreeNode, result: ExpressionTreeNode): ExpressionTreeNode {
        if (aggregate === ExpressionBuilder.empty) { return result; }
        if (result === ExpressionBuilder.empty) { return aggregate; }
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
                treeNode.text,
                treeNode.line,
                treeNode.column,
            );
        }
    
        return undefined;
    }
}

class GrammarListener implements z80asmListener {
    readonly nodes: AssemblyNode[];

    constructor() {
        this.nodes = new Array<AssemblyNode>();
    }

    exitExpression(ctx: ExpressionContext) {
        if (!ctx.parent) {
            const builder = new ExpressionBuilder();
            const expression = builder.build(ctx);
            this.nodes.push(expression);
        }
    }

    exitDirective(ctx: DirectiveContext) {
        if (!ctx.parent) {
            this.nodes.push(new Directive(undefined, ctx.text, ctx.start.line, ctx.start.charPositionInLine));
        }
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