import { Comment, Label, AssemblyNode, AssemblyNodeKind, Directive, Expression, Instruction, Numeric, InstructionMeta } from "./CodeModel";
import { toLines } from "./CodeModelManager";
import { sum } from "../utils";

const ignoreNodes = [
    AssemblyNodeKind.Error,
    AssemblyNodeKind.Whitespace,
    AssemblyNodeKind.Token
];

export interface SerializerProfile {
    tabSize: number;        // how many chars does one tab represent?
    insertSpaces: boolean;  // use spaces instead of tab
    newLine: string;        // what new-line character(s) to use
    columnTabs: number[];   // 3 column layout
    printCycles: boolean;   // print instruction cycle counts  (comments)
    printBytes: boolean;    // prints opcode bytes (comments)

    // TODO
    //maxEmptyLines: number;    // max number of consegutive empty lines
    //emptyLineAfterRet: boolean;   // insert an empty line after each 'ret' operation
}

export class DocumentSerializer {
    private readonly profile: SerializerProfile;
    private instructionMeta?: InstructionMeta;

    constructor(profile: SerializerProfile) {
        this.profile = profile;
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

            if (this.instructionMeta) {
                line += this.tab(line.length, this.columnTabs(AssemblyNodeKind.Comment));
                line += this.serializeMetaComment();
            }
            output += line;
        });

        return output;
    }

    private serializeNode(node: AssemblyNode): string {
        switch(node.kind) {
            case AssemblyNodeKind.Comment:
                return this.serializeComment(<Comment> node);
            case AssemblyNodeKind.Directive:
                return this.serializeDirective(<Directive> node);
            case AssemblyNodeKind.Expression:
                return this.serializeExpression(<Expression> node);
            case AssemblyNodeKind.Instruction:
                const instr = <Instruction> node;
                this.instructionMeta = 
                    (this.profile.printBytes || this.profile.printCycles) ? instr.meta : undefined;
                return this.serializeInstruction(instr);
            case AssemblyNodeKind.Label:
                return this.serializeLabel(<Label> node);
            case AssemblyNodeKind.Numeric:
                return this.serializeNumeric(<Numeric> node);
            default:
                return "";
        }
    }

    private serializeNumeric(numeric: Numeric): string {
        return numeric.toString();
    }

    private serializeLabel(label: Label): string {
        return label.toString();
    }

    private serializeInstruction(instruction: Instruction): string {
        return instruction.toString();
    }

    private serializeExpression(expression: Expression): string {
        return expression.toString();
    }

    private serializeDirective(directive: Directive): string {
        return directive.toString();
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