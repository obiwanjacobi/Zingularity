import { VersionedTextDocumentIdentifier } from "vscode-languageserver";
import { SymbolTable } from "./SymbolTable";

export enum AssemblyNodeKind {
    Token,
    Comment,
    BlockComment,
    Directive,
    Instruction,
    Label,
    Whitespace,
    Numeric,
    Expression,
    Error
}

export class AssemblyNode {
    readonly kind: AssemblyNodeKind;
    readonly line: number;
    readonly column: number;
    readonly text: string;

    constructor(kind: AssemblyNodeKind, text: string, line: number, column: number) {
        this.kind = kind;
        this.text = text;
        this.line = line;
        this.column = column;
    }

    toString(): string {
        return this.text.trim();
    }

    equals(node: AssemblyNode): boolean {
        return (
            this.column === node.column &&
            this.kind === node.kind &&
            this.line === node.line &&
            this.text === node.text);
    }
}

export class AsmError extends AssemblyNode {
    readonly message: string;

    constructor(text: string, token: string, line: number, column: number) {
        super(AssemblyNodeKind.Error, token, line, column);
        this.message = text;
    }

    toString(): string {
        return `${this.message} at line ${this.line}.`;
    }
}

export class Comment extends AssemblyNode {
    constructor(text: string, line: number, column: number) {
        super(AssemblyNodeKind.Comment, text, line, column);
    }

    toText(): string {
        return this.text.substring(1).trim();
    }
}

export class BlockComment extends AssemblyNode {
    readonly lines: BlockCommentLine[];
    constructor(lines: BlockCommentLine[]) {
        super(AssemblyNodeKind.BlockComment, lines[0].text, lines[0].line, lines[0].column);
        this.lines = lines;
    }

    toText(separator: string = "\r\n"): string {
        return this.lines.map(l => l.toText()).join(separator);
    }

    toString(separator: string = "\r\n"): string {
        return this.lines.map(l => l.toString()).join(separator);
    }
}

export class BlockCommentLine extends AssemblyNode {
    readonly paramName: string;
    readonly paramValue: string;
    readonly doc: string;

    constructor(text: string, line: number, column: number) {
        super(AssemblyNodeKind.Comment, text, line, column);
        this.paramName = "";
        this.paramValue = "";
        // manual parsing because I can't get the grammar to work :-(
        const regex = /[ \t]/g;
        const parts = text.split(regex);
        let idx = parts.findIndex(v => v.startsWith("@"));
        if (idx >= 0) {
            this.paramName = parts[idx].trim();
            idx++;
            if (idx < parts.length) {
                this.paramValue = parts[idx].trim();
            }
            idx++;
        } else {
            idx = 1;
        }

        this.doc = parts.reduce((prev: string, curr: string, i: number) => {
            if (i < idx) { return ""; }
            if (i === idx) { return curr; }
            return (prev + " " + curr).trim();
        });
    }

    toText(): string {
        return this.text.substring(2).trim();
    }
}

export class Directive extends AssemblyNode {
    readonly directive: string;
    readonly symbols: string[] | undefined;
    readonly expression: Expression | undefined;

    constructor(directive: string, symbols: string[] | undefined, expression: Expression | undefined, 
                text: string, line: number, column: number) {

        super(AssemblyNodeKind.Directive, text, line, column);
        this.directive = directive;
        this.symbols = symbols;
        this.expression = expression;
    }
}

export class Expression extends AssemblyNode {
    readonly left: Expression | undefined;
    readonly right: Expression | undefined;
    readonly numeric: Numeric | undefined;
    readonly symbol: string | undefined;

    static readonly empty: Expression = new Expression(undefined, undefined, undefined, undefined, "", 0, 0);

    constructor(left: Expression | undefined, right: Expression | undefined, 
        number: Numeric | undefined, symbol: string | undefined,
        token: string, line: number, column: number) {

        super(AssemblyNodeKind.Expression, token, line, column);
        this.left = left;
        this.right = right;
        this.numeric = number;
        this.symbol = symbol;
    }

    toString(): string {
        if (this.left && this.right) {
            return `${this.left.toString()} ${this.text} ${this.right.toString()}`;    
        }
        return this.text;
    }
}

export type Radix = 2 | 8 | 10 | 16;
export type Bits = 8 | 16;

export class Numeric extends AssemblyNode {
    readonly radix: Radix;
    readonly number: number;

    static readonly empty: Numeric = new Numeric(0, 10, "", 0, 0);

    constructor(number: number, radix: Radix, text: string, line: number, column: number) {
        super(AssemblyNodeKind.Numeric, text, line, column);
        this.number = number;
        this.radix = radix;
    }

    loString(radix: Radix): string {
        return (this.number & 255).toString(radix);
    }

    hiString(radix: Radix): string {
        return (this.number >> 8).toString(radix);
    }
}

export interface InstructionMeta {
    bytes: string[];
    cycles: number[];
    altCycles: number[];
    flags: string[];
}

export class Instruction extends AssemblyNode {
    readonly meta: InstructionMeta;
    readonly external: string;
    readonly numeric: Numeric | undefined;

    constructor(meta: InstructionMeta, external: string, numeric: Numeric | undefined, 
                text: string, line: number, column: number) {
        super(AssemblyNodeKind.Instruction, text, line, column);
        this.meta = meta;
        this.external = external;
        this.numeric = numeric;
    }
}

export class Label extends AssemblyNode {
    readonly symbol: string;

    constructor(symbol: string, text: string, line: number, column: number) {
        super(AssemblyNodeKind.Label, text, line, column);
        this.symbol = symbol;
    }
}

export interface AssemblyDocument extends VersionedTextDocumentIdentifier {
    nodes: AssemblyNode[];
}

export interface AssemblyModel {
    documents: AssemblyDocument[];
    symbols: SymbolTable;
}
