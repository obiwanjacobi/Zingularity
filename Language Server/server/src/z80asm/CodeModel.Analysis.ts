import { AssemblyNode, AssemblyNodeKind, BlockComment, Instruction } from "./CodeModel";
import { Range, FoldingRange, FoldingRangeKind } from "vscode-languageserver";

function nodeKindToFoldKind(kind: AssemblyNodeKind): FoldingRangeKind {
    switch (kind) {
        case AssemblyNodeKind.Comment:
        case AssemblyNodeKind.BlockComment:
            return FoldingRangeKind.Comment;
        case AssemblyNodeKind.Directive:
            return FoldingRangeKind.Imports;
        default:
            return FoldingRangeKind.Region;
    }
}

function addToRange(range: FoldingRange | undefined, node: AssemblyNode): FoldingRange {
    if (range) {
        range.endLine = node.line;
        range.endCharacter = node.column;
    } else {
        range = {
            startLine: node.line,
            startCharacter: node.column,
            endLine: node.line,
            endCharacter: node.column,
            kind: nodeKindToFoldKind(node.kind)
        };
    }
    return range;
}

export function buildFoldingRanges(nodes: AssemblyNode[]): FoldingRange[] {
    const ranges = new Array<FoldingRange>();

    let lastNode: AssemblyNode | undefined;
    let range: FoldingRange | undefined;

    function processNode(node: AssemblyNode) {
        if (lastNode === undefined || lastNode.kind === node.kind) { 
            range = addToRange(range, node); 
        } else {
            if (range) { ranges.push(range); }
            range = addToRange(undefined, node);
        }
    }
    
    for(let i = 0; i < nodes.length; i++) {
        const node = nodes[i];

        switch(node.kind) {
            case AssemblyNodeKind.Comment:
                processNode(node);
                break;
            case AssemblyNodeKind.BlockComment:
                const blockNode = <BlockComment> node;
                if (range) { ranges.push(range); }
                range = addToRange(undefined, blockNode);
                range = addToRange(range, blockNode.lines[blockNode.lines.length - 1]);
                break;
            case AssemblyNodeKind.Label:
                processNode(node);
                break;
            case AssemblyNodeKind.Instruction:
                processNode(node);
                const instrNode = <Instruction> node;
                // RET instruction terminates folding range
                if (instrNode.meta.bytes[0] === "C9") {
                    if (range) { ranges.push(range); }
                    range = undefined;
                }
                break;
            default:
                break;
        }

        lastNode = node;
    }

    if (range) { 
        ranges.push(range); 
    }

    return ranges;
}
