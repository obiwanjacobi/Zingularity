import { AssemblyModel, AssemblyDocument, AssemblyNode, SymbolTable, SymbolProfile, CasingMatch, CasingRule } from "./CodeModel";
import { Position, Range } from "vscode-languageserver";

const symbolProfile: SymbolProfile = {
    matchCasing: CasingMatch.CaseSensitive,
    nameCasing: CasingRule.Mixed
};

export class CodeModelManager {
    readonly codeModel: AssemblyModel = { documents: [], symbols: new SymbolTable(symbolProfile) };

    setDocument(doc: AssemblyDocument) {
        const i = this.codeModel.documents.findIndex(d => d.uri === doc.uri);
        if (i >= 0) {
            this.codeModel.documents[i] = doc;
        } else {
            this.codeModel.documents.push(doc);
        }

        this.codeModel.symbols.addDoc(doc);
    }

    findNode(uri: string, position: Position): {document: AssemblyDocument, node: AssemblyNode} | undefined {
        const doc = this.codeModel.documents.find(d => d.uri === uri);
        if (doc && doc.nodes && doc.nodes.length > 0) {
            const node = doc.nodes
                .filter(n => n.line - 1 === position.line)
                .reduce((prevNode, thisNode) => thisNode.column - 1 > position.character ? prevNode : thisNode);
            
            return { document: doc, node: node };
        }

        return undefined;
    }
}

export function toPosition(node: AssemblyNode) : Position {
    return { line: node.line - 1, character: node.column - 1 };
}

export function toRange(node: AssemblyNode) : Range {
    return { 
        start: toPosition(node),
        end: { line: node.line -1 , character: node.column + node.text.length - 1 }
    };
}