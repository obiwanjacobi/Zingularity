import { AssemblyModel, AssemblyDocument, AssemblyNode } from "./CodeModel";
import { Position } from "vscode-languageserver";

export class CodeModelManager {
    readonly codeModel: AssemblyModel = { documents: [] };

    setDocument(doc: AssemblyDocument) {
        const i = this.codeModel.documents.findIndex(d => d.uri === doc.uri);
        if (i >= 0) {
            this.codeModel.documents.splice(i, 1, doc);
        } else {
            this.codeModel.documents.push(doc);
        }
    }

    findNode(uri: string, position: Position): {document: AssemblyDocument, node: AssemblyNode} | undefined {
        const doc = this.codeModel.documents.find(d => d.uri === uri);
        if (doc) {
            const node = doc.nodes
                .filter(n => n.line - 1 === position.line)
                .reduce((prevNode, thisNode) => thisNode.column - 1 > position.character ? prevNode : thisNode);
            
            return { document: doc, node: node };
        }

        return undefined;
    }
}