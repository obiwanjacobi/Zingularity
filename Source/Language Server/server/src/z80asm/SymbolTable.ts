import { AssemblyNode, AssemblyDocument, AssemblyNodeKind, Instruction, Directive, Label } from "./CodeModel";
import { Directive_symbollistContext } from "./z80asmParser";
import { Parser } from "antlr4ts";

export enum CasingRule {
    Mixed,
    AllUpper,
    AllLower
}

export enum CasingMatch {
    CaseInsensitive,
    CaseSensitive
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
    private readonly _references: Array<SymbolReference>;
    private _value: string;

    constructor(name: string, value: string = "") {
        this._references = new Array<SymbolReference>();
        this._value = value;
        this.name = name;
    }

    get value(): string {
        return this._value;
    }

    get references(): SymbolReference[] {
        return Array.from(this._references.values());
    }

    get isEmpty(): boolean {
        return this._references.length === 0;
    }

    get declaration(): SymbolReference | undefined {
        const symbol = this._references.find(r => r.node.kind === AssemblyNodeKind.Label);
        if (!symbol) {
            return this._references.find(r => r.node.kind === AssemblyNodeKind.Directive && 
                (<Directive> r.node).directive.toUpperCase() === "DEFC");
        }
        return symbol;
    }

    addReference(node: AssemblyNode, doc: AssemblyDocument) {
        if (this._references.findIndex(r => r.document.uri === doc.uri && r.node.equals(node)) < 0) {
            this._references.push({ node: node, document: doc });
        }
    }

    removeReference(doc: AssemblyDocument) {
        for(var i = 0; i < this._references.length; i++) {
            if ( this._references[i].document.uri === doc.uri) {
                this._references.splice(i, 1);
            }
         }
    }
}

export class SymbolTable {
    private readonly profile: SymbolProfile;
    private readonly symbols: Map<string, Symbol>;

    constructor(profile: SymbolProfile) {
        this.profile = profile;
        this.symbols = new Map<string, Symbol>();
    }

    get allConstants(): Symbol[] {
        return Array.from(this.symbols.values()).filter(s => s.value.length !== 0);
    }

    get allSymbols(): Symbol[] {
        return Array.from(this.symbols.values()).filter(s => s.value.length === 0);
    }

    remove(symbol: string) {
        this.symbols.delete(this.toKey(symbol));
    }

    addDoc(doc: AssemblyDocument) {
        const symbolNodes = doc.nodes.filter(n => 
            (n.kind === AssemblyNodeKind.Instruction && (<Instruction> n).external.length) ||
            (n.kind === AssemblyNodeKind.Directive && (<Directive> n).text.toLowerCase().startsWith("defc")) ||
            n.kind === AssemblyNodeKind.Label);

        symbolNodes.forEach(n => this.addNode(n, doc));
    }

    removeDoc(doc: AssemblyDocument) {
        this.symbols.forEach(s => s.removeReference(doc));
        this.purge();
    }

    addNode(node: AssemblyNode, doc: AssemblyDocument) {
        const symbols = this.toSymbols(node);
        
        symbols.forEach(symbol => {
            const key = this.toKey(symbol);
            let sym = this.symbols.get(key);
            if (!sym) {
                let value = "";
                if (node.kind === AssemblyNodeKind.Directive) {
                    const directiveNode = <Directive> node;
                    if (directiveNode.expression && directiveNode.expression.numeric) {
                        value = directiveNode.expression.numeric.text;
                    }
                }
                sym = new Symbol(symbol, value);
                this.symbols.set(key, sym);
            }
            sym.addReference(node, doc);
        });
    }

    findReferences(node: AssemblyNode): SymbolReference[] {
        const symbols = this.toSymbols(node);
        const references = Array<SymbolReference>();

        symbols.forEach(symbol => {
            const key = this.toKey(symbol);
            const sym = this.symbols.get(key);

            if (sym) {
                references.push(...sym.references);
            }
    
        });

        return references;
    }

    findDeclaration(node: AssemblyNode): SymbolReference | undefined {
        const symbols = this.toSymbols(node);
        if (symbols.length) {
            const key = this.toKey(symbols[0]);
            const sym = this.symbols.get(key);
            
            if (sym) {
                return sym.declaration;
            }
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

    private toSymbols(node: AssemblyNode): string[] {
        switch (node.kind) {
            case AssemblyNodeKind.Label:
                return [(<Label>node).symbol];
            case AssemblyNodeKind.Instruction:
                const instrNode = <Instruction> node;
                if (instrNode.external.length) {
                    return [instrNode.external];
                }
            case AssemblyNodeKind.Directive:
                const directiveNode = <Directive> node;
                if (directiveNode.symbols) {
                    return directiveNode.symbols;
                }
        }

        return [];
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
