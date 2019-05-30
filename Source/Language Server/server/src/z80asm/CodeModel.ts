import { VersionedTextDocumentIdentifier } from "vscode-languageserver";

export enum AssemblyNodeKind {
    Unknown,
    Comment,
    Directive,
    Instruction,
    Label,
    Whitespace,
    Error
}

export abstract class AssemblyNode {
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
}

export class AsmError extends AssemblyNode {
    constructor(text: string, line: number, column: number) {
        super(AssemblyNodeKind.Error, text, line, column);
    }

    toString(): string {
        return `${this.text.trim()} at ${this.line}, ${this.column}.`;
    }
}

export class Comment extends AssemblyNode {
    constructor(text: string, line: number, column: number) {
        super(AssemblyNodeKind.Comment, text, line, column);
    }
}

export class Directive extends AssemblyNode {
    constructor(text: string, line: number, column: number) {
        super(AssemblyNodeKind.Directive, text, line, column);
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

    constructor(meta: InstructionMeta, external: string, text: string, line: number, column: number) {
        super(AssemblyNodeKind.Instruction, text, line, column);
        this.meta = meta;
        this.external = external;
    }
}

export class Label extends AssemblyNode {
    constructor(text: string, line: number, column: number) {
        super(AssemblyNodeKind.Label, text, line, column);
    }
}

export class Whitespace extends AssemblyNode {
    constructor(text: string, line: number, column: number) {
        super(AssemblyNodeKind.Whitespace, text, line, column);
    }

    toString(): string {
        return this.text;
    }
}


export interface AssemblyDocument extends VersionedTextDocumentIdentifier {
    nodes: AssemblyNode[];
}

export interface AssemblyModel {
    documents: AssemblyDocument[];
}
