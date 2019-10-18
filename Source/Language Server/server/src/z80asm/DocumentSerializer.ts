import { Comment, Label, AssemblyNode, AssemblyNodeKind, Directive, Expression, Instruction, Numeric, InstructionMeta, BlockComment } from "./CodeModel";
import { toLines } from "./CodeModelManager";
import { sum } from "../utils";
import { splitInstruction } from "./InstructionSplitter";

const ignoreNodes = [
    AssemblyNodeKind.Error,
    AssemblyNodeKind.Whitespace,
    AssemblyNodeKind.Token
];

// used for emptyLineAfterRet option
const retOpcodes = ["C9", "ED4D", "ED45"];

export interface SerializerProfile {
    tabSize: number;        // how many chars does one tab represent?
    insertSpaces: boolean;  // use spaces instead of tab
    newLine: string;        // what new-line character(s) to use
    columnTabs: number[];   // 3 column layout
    printCycles: boolean;   // print instruction cycle counts  (comments)
    printBytes: boolean;    // prints opcode bytes (comments)
    emptyLineAfterRet: boolean;   // insert an empty line after each 'ret' operation

    // TODO
    //maxEmptyLines: number;    // max number of consegutive empty lines
}

export class DocumentSerializer {
    private readonly profile: SerializerProfile;
    private instructionMeta?: InstructionMeta;
    private addToEndOfLine: string;

    constructor(profile: SerializerProfile) {
        this.profile = profile;
        this.addToEndOfLine = "";

        if (this.profile.tabSize <= 0) {
            this.profile.tabSize = 4;
        }
        if (this.profile.columnTabs.length < 3) {
            this.profile.columnTabs = [0, 2, 8];
        }
    }

    serialize(nodes: AssemblyNode[]): string {
        const lines = toLines(nodes, n => ignoreNodes.indexOf(n.kind) < 0);
        let lastLine = 1;
        let output = "";

        lines.forEach(l => {
            // nodes may be skipping lines
            while (lastLine < l.line) {
                output += this.profile.newLine;
                lastLine++;
            }

            let line = "";

            if (l.nodes.length === 1) {
                const node = l.nodes[0];
                switch(node.kind) {
                    case AssemblyNodeKind.Comment:
                        line += this.tab(0, this.profile.columnTabs[0]);
                        break;
                    default:
                        line += this.tab(0, this.columnTabs(node.kind));
                        break;
                }

                line += this.serializeNode(node);
            } else {
                l.nodes.forEach(node => {
                    line += this.tab(line.length, this.columnTabs(node.kind));
                    line += this.serializeNode(node);
                });
            }

            lastLine += line.split(this.profile.newLine).length - 1;

            if (this.instructionMeta) {
                line += this.tab(line.length, this.columnTabs(AssemblyNodeKind.Comment));
                line += this.serializeMetaComment();
                this.instructionMeta = undefined;
            }
            
            line += this.addToEndOfLine;
            this.addToEndOfLine = "";
            output += line;
        });

        return output;
    }

    private serializeNode(node: AssemblyNode): string {
        switch(node.kind) {
            case AssemblyNodeKind.Comment:
                return this.serializeComment(<Comment> node);
            case AssemblyNodeKind.BlockComment:
                return this.serializeBlockComment(<BlockComment> node);
            case AssemblyNodeKind.Instruction:
                const instr = <Instruction> node;
                this.instructionMeta = 
                    (this.profile.printBytes || this.profile.printCycles) ? instr.meta : undefined;
                if (this.profile.emptyLineAfterRet && 
                    retOpcodes.indexOf(instr.meta.bytes.join("")) >= 0) {
                    this.addToEndOfLine = this.profile.newLine;
                }
                return this.serializeInstruction(instr);
            default:
                return node.toString();
        }
    }

    private serializeInstruction(instruction: Instruction): string {
        const parts = splitInstruction(instruction.text);
        return parts.reduce((acc, p) => {
            const lastChar = acc.charAt(acc.length - 1);
            if (p === "," || p === ")" || lastChar === "(") {
                return acc.concat(p);
            }
            return acc.concat(" ", p);
        });
    }

    private serializeBlockComment(comment: BlockComment): string {
        return comment.toString(this.profile.newLine);
    }

    private serializeComment(comment: Comment): string {
        if (this.instructionMeta) {
            const txt = `${this.serializeMetaComment()}\t${comment.toString().substring(1).trim()}`;
            this.instructionMeta = undefined;
            return txt;
        }
        return comment.toString();
    }

    private serializeMetaComment(): string {
        return `; ${this.serializeMeta()}`;
    }

    private serializeMeta(): string {
        if (this.instructionMeta) {
            if (this.profile.printBytes && this.profile.printCycles) {
                return `${sum(this.instructionMeta.cycles)}C - ${this.instructionMeta.bytes.length}B`;
            } else if(this.profile.printBytes) {
                return `${this.instructionMeta.bytes.length}B`;
            } else {
                return `${sum(this.instructionMeta.cycles)}C`;
            }
        }
        return "";
    }

    private columnTabs(kind: AssemblyNodeKind): number {
        switch(kind) {
            case AssemblyNodeKind.Comment:
                return this.profile.columnTabs[2];
            case AssemblyNodeKind.Instruction:
                return this.profile.columnTabs[1];
            default:
                return this.profile.columnTabs[0];
        }
    }
    
    // column: current line character pos
    // tabCount: target line character pos based on # of tabs
    // return: string with whitespace (tab or spaces) to get from column to tabCount pos
    private tab(column: number, tabCount: number): string {
        if (this.profile.insertSpaces) {
            while (column > tabCount * this.profile.tabSize) {
                tabCount++;
            }
            return " ".repeat(tabCount * this.profile.tabSize - column);
        }
        while(column / this.profile.tabSize > tabCount) {
            tabCount++;
        }
        return "\t".repeat(tabCount - column / this.profile.tabSize);
    }
}