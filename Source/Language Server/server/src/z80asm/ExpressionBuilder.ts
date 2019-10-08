import { Expression, Numeric, Radix } from "./CodeModel";
import { AbstractParseTreeVisitor } from "antlr4ts/tree/AbstractParseTreeVisitor";
import { ExpressionContext, Number_binContext, NumberContext, Number_octContext, Number_decContext, Number_hexContext, OperatorContext, SymbolContext } from "./z80asmParser";
import { z80asmVisitor } from "./z80asmVisitor";
import { ParserRuleContext } from "antlr4ts";
import { ParseTree } from "antlr4ts/tree/ParseTree";
import { toString } from "./TokenToString";


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
        let txt = ctx.text;
        const first = txt[0];
        if (first < '0' || first > '9') {
            txt = txt.substring(1);
        }
        return new Numeric(parseInt(txt, radix), radix, ctx.text, ctx.start.line, ctx.start.charPositionInLine);
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


export class ExpressionBuilder extends AbstractParseTreeVisitor<ExpressionTreeNode> implements z80asmVisitor<ExpressionTreeNode> {

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

