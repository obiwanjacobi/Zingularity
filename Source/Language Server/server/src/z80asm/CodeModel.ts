import { VersionedTextDocumentIdentifier } from "vscode-languageserver";

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

export enum CasingRule {
    Mixed,
    AllUpper,
    AllLower
}

export enum CasingMatch {
    CaseInsensitive,
    CaseSensitive
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

    toText(): string {
        return this.lines.map(l => l.toText()).join("\r\n");
    }

    toString(): string {
        return this.lines.map(l => l.toString()).join("\r\n");
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
    readonly expression: Expression | undefined;

    constructor(expression: Expression | undefined, text: string, line: number, column: number) {
        super(AssemblyNodeKind.Directive, text, line, column);
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

export class Constant {
    readonly name: string;

    constructor(name: string) {
        this.name = name;
    }
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
            if (r.node.kind === AssemblyNodeKind.Label) { 
                decl = r; 
            }
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
    private readonly symbols: Map<string, Symbol>;
    private readonly constants: Map<string, Constant>;

    constructor(profile: SymbolProfile) {
        this.profile = profile;
        this.symbols = new Map<string, Symbol>();
        this.constants = new Map<string, Constant>();
    }

    get allConstants(): Constant[] {
        return Array.from(this.constants.values());
    }

    get allSymbols(): Symbol[] {
        return Array.from(this.symbols.values());
    }

    remove(symbol: string) {
        this.symbols.delete(this.toKey(symbol));
    }

    addDoc(doc: AssemblyDocument) {
        const symbolNodes = doc.nodes.filter(n => 
            (n.kind === AssemblyNodeKind.Instruction && (<Instruction> n).external.length) ||
            n.kind === AssemblyNodeKind.Label);

        symbolNodes.forEach(n => this.addNode(n, doc));
    }

    removeDoc(doc: AssemblyDocument) {
        this.symbols.forEach(s => s.removeReference(doc));
        this.purge();
    }

    addNode(node: AssemblyNode, doc: AssemblyDocument) {
        const symbol = this.toSymbol(node);
        
        if (symbol.length) {
            const key = this.toKey(symbol);
            let sym = this.symbols.get(key);
            if (!sym) {
                sym = new Symbol(symbol);
                this.symbols.set(key, sym);
            }
            sym.addReference(node, doc);
        }
    }

    findReferences(node: AssemblyNode): SymbolReference[] {
        const symbol = this.toSymbol(node);
        const key = this.toKey(symbol);
        const sym = this.symbols.get(key);
        
        if (sym) {
            return sym.references;
        }
        return [];
    }

    findDeclaration(node: AssemblyNode): SymbolReference | undefined {
        const symbol = this.toSymbol(node);
        const key = this.toKey(symbol);
        const sym = this.symbols.get(key);
        
        if (sym) {
            return sym.declaration;
        }
        return undefined;
    }

    findSymbols(docUri: string): DocumentSymbol[] {
        const symbols = new Array<DocumentSymbol>();

        this.symbols.forEach(s => {
            if (s.declaration && s.declaration.document.uri === docUri) {
                symbols.push({ symbol: s.name, reference: s.declaration });
            }
        });

        return symbols;
    }

    private toSymbol(node: AssemblyNode): string {
        switch (node.kind) {
            case AssemblyNodeKind.Label:
                return (<Label>node).symbol;
            case AssemblyNodeKind.Instruction:
                return (<Instruction>node).external;
        }

        return "";
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

        this.symbols.forEach(s => {
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
