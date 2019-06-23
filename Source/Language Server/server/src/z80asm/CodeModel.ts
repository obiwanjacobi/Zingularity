import { VersionedTextDocumentIdentifier } from "vscode-languageserver";

export enum AssemblyNodeKind {
    Token,
    Comment,
    Directive,
    Instruction,
    Label,
    Whitespace,
    Numeric,
    Expression,
    Error
}

export enum CasingRule {
    Mixed,
    AllUpper,
    AllLower
}

export enum CasingMatch {
    CaseInsensitive,
    CaseSensitive
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
}

export class Directive extends AssemblyNode {
    readonly expression: Expression | undefined;

    constructor(expression: Expression | undefined, text: string, line: number, column: number) {
        super(AssemblyNodeKind.Directive, text, line, column);
        this.expression = expression;
    }
}

export class Expression extends AssemblyNode {
    readonly left: Expression | undefined;
    readonly right: Expression | undefined;
    
    constructor(left: Expression | undefined, right: Expression | undefined, token: string, line: number, column: number) {
        super(AssemblyNodeKind.Expression, token, line, column);
        this.left = left;
        this.right = right;
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
    readonly bits: Bits;
    readonly number: number;

    constructor(number: number, radix: Radix, bits: Bits, text: string, line: number, column: number) {
        super(AssemblyNodeKind.Numeric, text, line, column);
        this.number = number;
        this.radix = radix;
        this.bits = bits;
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

export interface SymbolProfile {
    nameCasing: CasingRule;
    matchCasing: CasingMatch;
}

export interface SymbolReference {
    node: AssemblyNode;
    document: AssemblyDocument;
}

export interface DocumentSymbol {
    symbol: string;
    reference: SymbolReference;
}

export class Symbol {
    readonly name: string;
    private readonly _references: Set<SymbolReference>;
    private _value: string;

    constructor(name: string) {
        this._references = new Set<SymbolReference>();
        this._value = "";
        this.name = name;
    }

    get value(): string {
        return this._value;
    }

    get references(): SymbolReference[] {
        return Array.from(this._references.values());
    }

    get isEmpty(): boolean {
        return this._references.size === 0;
    }

    get declaration(): SymbolReference | undefined {
        let decl: SymbolReference | undefined = undefined;
        
        this._references.forEach(r => {
            if (r.node.kind === AssemblyNodeKind.Label) { decl = r; }
        });

        return decl;
    }

    addReference(node: AssemblyNode, doc: AssemblyDocument) {
        this._references.add({ node: node, document: doc });
    }

    removeReference(doc: AssemblyDocument) {
        const removeThese = new Array<SymbolReference>();
        
        this._references.forEach(r => {
            if (r.document.uri === doc.uri) { removeThese.push(r); }
        });

        removeThese.forEach(r => this._references.delete(r));
    }
}

export class SymbolTable {
    private readonly profile: SymbolProfile;
    private table: Map<string, Symbol>;

    constructor(profile: SymbolProfile) {
        this.profile = profile;
        this.table = new Map<string, Symbol>();
    }

    remove(symbol: string) {
        this.table.delete(this.toKey(symbol));
    }

    addDoc(doc: AssemblyDocument) {
        const symbolNodes = doc.nodes.filter(n => 
            (n.kind === AssemblyNodeKind.Instruction && (<Instruction> n).external.length) ||
            n.kind === AssemblyNodeKind.Label);

        symbolNodes.forEach(n => this.addNode(n, doc));
    }

    removeDoc(doc: AssemblyDocument) {
        this.table.forEach(s => s.removeReference(doc));
        this.purge();
    }

    addNode(node: AssemblyNode, doc: AssemblyDocument) {
        const symbol = this.toSymbol(node);
        
        if (symbol.length) {
            const key = this.toKey(symbol);
            let sym = this.table.get(key);
            if (!sym) {
                sym = new Symbol(symbol);
                this.table.set(key, sym);
            }
            sym.addReference(node, doc);
        }
    }

    findReferences(node: AssemblyNode): SymbolReference[] {
        const symbol = this.toSymbol(node);
        const key = this.toKey(symbol);
        const sym = this.table.get(key);
        
        if (sym) {
            return sym.references;
        }
        return [];
    }

    findDeclaration(node: AssemblyNode): SymbolReference | undefined {
        const symbol = this.toSymbol(node);
        const key = this.toKey(symbol);
        const sym = this.table.get(key);
        
        if (sym) {
            return sym.declaration;
        }
        return undefined;
    }

    findSymbols(docUri: string): DocumentSymbol[] {
        const symbols = new Array<DocumentSymbol>();

        this.table.forEach(s => {
            if (s.declaration && s.declaration.document.uri === docUri) {
                symbols.push({ symbol: s.name, reference: s.declaration });
            }
        });

        return symbols;
    }

    private toSymbol(node: AssemblyNode): string {
        let symbol: string = "";

        switch (node.kind) {
            case AssemblyNodeKind.Label:
                symbol = node.text;
                break;
            case AssemblyNodeKind.Instruction:
                symbol = (<Instruction>node).external;
                break;
        }

        return symbol;
    }

    private toKey(symbol: string): string {
        switch(this.profile.matchCasing) {
            case CasingMatch.CaseInsensitive:
                return symbol.toUpperCase();
            default:
                return symbol;
        }
    }

    private purge() {
        const unusedSymbols = new Array<string>();

        this.table.forEach(s => {
            if (s.isEmpty) { unusedSymbols.push(s.name); } 
        });
    }
}

export interface AssemblyDocument extends VersionedTextDocumentIdentifier {
    nodes: AssemblyNode[];
}

export interface AssemblyModel {
    documents: AssemblyDocument[];
    symbols: SymbolTable;
}
