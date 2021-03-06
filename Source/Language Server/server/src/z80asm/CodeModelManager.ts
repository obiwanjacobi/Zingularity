import { AssemblyModel, AssemblyDocument, AssemblyNode, BlockComment, AssemblyNodeKind, Comment } from "./CodeModel";
import { Position, Range } from "vscode-languageserver";
import { Comparable } from "antlr4ts/misc/Stubs";
import { SymbolProfile, CasingMatch, CasingRule, SymbolTable } from "./SymbolTable";

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
        
        if (doc && doc.nodes) {
            const nodes = doc.nodes.filter(n => n.hitTest(position.line + 1));
            if (nodes.length) {
                const node = nodes.reduce((prevNode, thisNode) => 
                        thisNode.column > position.character ? prevNode : thisNode
                );
                return { document: doc, node: node };
            }
        }

        return undefined;
    }

    commentFor(document: AssemblyDocument, node: AssemblyNode): Comment | undefined {
        const prevNode = this.previousNode(document, node);
        if (prevNode && prevNode.kind === AssemblyNodeKind.Comment) {
            return <Comment> prevNode;
        }
        return undefined;
    }

    blockCommentFor(document: AssemblyDocument, node: AssemblyNode): BlockComment | undefined {
        const prevNode = this.previousNode(document, node);
        if (prevNode && prevNode.kind === AssemblyNodeKind.BlockComment) {
            return <BlockComment> prevNode;
        }
        return undefined;
    }

    private previousNode(document: AssemblyDocument, node: AssemblyNode): AssemblyNode | undefined {
        const i = document.nodes.findIndex(n => n.equals(node));
            
        if (i > 0) {
            return document.nodes[i - 1];
        }
        return undefined;
    }
}

export interface AssemblyLine {
    line: number;
    nodes: AssemblyNode[];
}

export function toLines(nodes: AssemblyNode[], filter?: (node: AssemblyNode) => boolean): AssemblyLine[] {
    const lines = new Array<AssemblyLine>();

    nodes.forEach(n => {
        let line = lines.find(l => l.line === n.line);
        if (!line) {
            line = { line: n.line, nodes: [] };
            lines.push(line);
        }
        if (!filter || filter(n)) {
            line.nodes.push(n);
        }
    });

    return lines;
}

export function toPosition(node: AssemblyNode) : Position {
    return Position.create(node.line - 1, node.column);
}

export function toRange(node: AssemblyNode) : Range {
    return { 
        start: toPosition(node),
        end: Position.create(node.line - 1, node.column + node.text.length)
    };
}

function comparePosition(pos1: Position, pos2: Position): number {
    const deltaLine = pos1.line - pos2.line;
    if (deltaLine === 0) {
        return pos1.character - pos2.character;
    }
    return deltaLine;
}

function unionRange(r1: Range, r2: Range): Range {
    const minPos = comparePosition(r1.start, r2.start) < 0 ? r1.start: r2.start;
    const maxPos = comparePosition(r1.end, r2.end) > 0 ? r1.end: r2.end;
    return Range.create(minPos, maxPos);
}

export function rangeFrom(nodes: AssemblyNode[]) : Range {
    return nodes
        .map(n => toRange(n))
        .reduce((prev, curr) => {
            return unionRange(prev, curr);
        });
}