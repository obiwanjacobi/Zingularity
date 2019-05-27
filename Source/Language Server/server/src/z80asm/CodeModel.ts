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
    readonly index: number;
    readonly text: string;

    constructor(kind: AssemblyNodeKind, text: string, index: number, line: number, column: number) {
        this.kind = kind;
        this.text = text;
        this.index = index;
        this.line = line;
        this.column = column;
    }

    toString(): string {
        return this.text.trim();
    }
}

export class AsmError extends AssemblyNode {
    constructor(text: string, index: number, line: number, column: number) {
        super(AssemblyNodeKind.Error, text, index, line, column);
    }

    toString(): string {
        return `${this.text.trim()} at ${this.line}, ${this.column}.`;
    }
}

export class Comment extends AssemblyNode {
    constructor(text: string, index: number, line: number, column: number) {
        super(AssemblyNodeKind.Comment, text, index, line, column);
    }
}

export class Directive extends AssemblyNode {
    constructor(text: string, index: number, line: number, column: number) {
        super(AssemblyNodeKind.Directive, text, index, line, column);
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

    constructor(meta: InstructionMeta, text: string, index: number, line: number, column: number) {
        super(AssemblyNodeKind.Instruction, text, index, line, column);
        this.meta = meta;
    }
}

export class Label extends AssemblyNode {
    constructor(text: string, index: number, line: number, column: number) {
        super(AssemblyNodeKind.Label, text, index, line, column);
    }
}

export class Whitespace extends AssemblyNode {
    constructor(text: string, index: number, line: number, column: number) {
        super(AssemblyNodeKind.Whitespace, text, index, line, column);
    }

    toString(): string {
        return this.text;
    }
}


export interface AssemblyDocument {
    nodes: AssemblyNode[];
}

export interface AssemblyModel {
    documents: AssemblyDocument[];
}
