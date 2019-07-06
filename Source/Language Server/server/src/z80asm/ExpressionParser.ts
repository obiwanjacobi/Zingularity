import { Expression } from "./CodeModel";

// in order of precedence
const operators = ["*", "/", "&", "|", "-", "+"];
const scopeStart = "(";
const scopeEnd = ")";

class Token {
    readonly text: string;
    readonly column: number;

    constructor(token: string, column: number) {
        this.text = token;
        this.column = column;
    }
}

enum TreeNodeKind {
    Unknown,
    ScopeStart, 
    ScopeEnd,
    Operator,
    Value
}

function determineKind(token: string): TreeNodeKind {
    if (operators.indexOf(token) >= 0) { return TreeNodeKind.Operator; }
    if (scopeEnd === token) { return TreeNodeKind.ScopeEnd; }
    if (scopeStart === token) { return TreeNodeKind.ScopeStart; }
    return TreeNodeKind.Value;
}

class TreeNode {
    token: Token;
    kind: TreeNodeKind = TreeNodeKind.Unknown;
    left: TreeNode | undefined;
    right: TreeNode | undefined;

    constructor(token: Token) {
        this.token = token;
        this.kind = determineKind(token.text);
    }
}

function tokenize(text: string, column: number): Token[] {
    const tokens: Token[] = [];
    
    let i = 0;
    let token = "";
    let tokenCol = 0;

    while (i < text.length) {
        const curChar = text.charAt(i);
        const kind = determineKind(curChar);
        if (kind === TreeNodeKind.Operator || kind === TreeNodeKind.ScopeEnd || kind === TreeNodeKind.ScopeStart) {
            if (token.length > 0) {
                tokens.push(new Token(token, tokenCol));
                token = "";
                tokenCol = 0;
            }
            tokens.push(new Token(curChar, column + i));
        } else {
            if (tokenCol === 0) {
                tokenCol = column + i;
            }
            token += curChar;
        }

        i++;
    }

    if (token.length > 0) {
        tokens.push(new Token(token, tokenCol));
    }

    return tokens;
}

function buildExpressionTree(tokens: Token[]): TreeNode {
    // shunting yard algorithm
    const opStack = new Array<TreeNode>();
    const valStack = new Array<TreeNode>();

    tokens.forEach(t => {
        const node = new TreeNode(t);
        switch (node.kind) {
            case TreeNodeKind.Value:
                valStack.push(node);
                break;
            case TreeNodeKind.Operator:
                if (opStack.length > 0) {
                    if (operators.indexOf(opStack[opStack.length - 1].token.text) < operators.indexOf(node.token.text)) {
                        // current operator node has higher precedence
                        opStack.push(node);
                    } else {
                        let lowerPrecedenceOp = opStack.pop();
                        if (lowerPrecedenceOp) {
                            lowerPrecedenceOp.right = valStack.pop();
                            lowerPrecedenceOp.left = valStack.pop();
                            valStack.push(lowerPrecedenceOp);
                        }
                        opStack.push(node);
                    }
                } else {
                    opStack.push(node);
                }
                break;
            case TreeNodeKind.ScopeStart:
                    opStack.push(node);
                break;
            case TreeNodeKind.ScopeEnd:
                    let lowerPrecedenceOp = opStack.pop();
                    while (lowerPrecedenceOp && lowerPrecedenceOp.kind !== TreeNodeKind.ScopeStart) {
                        lowerPrecedenceOp.right = valStack.pop();
                        lowerPrecedenceOp.left = valStack.pop();
                        valStack.push(lowerPrecedenceOp);
                        
                        lowerPrecedenceOp = opStack.pop();
                    }
                break;
        }
    });

    let root = opStack.pop();
    if (root) {
        root.right = valStack.pop();
        root.left = valStack.pop();
        return root;
    }
    // single value expression
    root = valStack.pop();
    if (root) {
        return root;
    }

    throw Error("Syntax error in expression");
}

function toExpression(treeNode: TreeNode | undefined, line: number): Expression | undefined {
    if (treeNode) {
        return new Expression(
            toExpression(treeNode.left, line), 
            toExpression(treeNode.right, line),
            undefined, 
            treeNode.token.text,
            line,
            treeNode.token.column,
        );
    }

    return undefined;
}

export function parseExpression(expression: string, line: number, column: number): Expression {
    const tokens = tokenize(expression, column);
    const tree = buildExpressionTree(tokens);
    const expr = toExpression(tree, line);

    if (expr) {
        return expr;
    }

    throw Error("No root expression node.");
}