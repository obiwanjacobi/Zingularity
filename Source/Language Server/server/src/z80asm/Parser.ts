import { AssemblyNode, Comment, Directive, Label, Whitespace, AsmError, Instruction } from "./CodeModel";
import { buildInstruction } from "./InstructionNavigator";
import { splitInstruction } from "./InstructionSplitter";

enum ParserState {
    Pending,
    NewLine,
    WhiteSpace,
    Comment,
    Directive,
    LabelBegin,
    LabelEnd,
}

export interface ParserProfile {
    // parsing chars
    readonly comment: string;
    readonly labelBegin: string;
    readonly labelEnd: string;
    readonly directives: string[];
    readonly hex: string[];
}

export class Parser {
    private readonly profile: ParserProfile;

    constructor(profile: ParserProfile) {
        this.profile = profile;
    }

    public parse(text: string): AssemblyNode[] {
        const nodes = new Array<AssemblyNode>();
        
        let i = 0;
        let c = 1;
        let l = 1;
        let index = 0;
        let line = 0;
        let column = 0;
        let state: ParserState = ParserState.Pending;
        let token = "";

        const increment = () => {
            i++;
            c++;
        };

        const nextTokenChar = (char: string) => {
            token += char;
            increment();
        };

        const canChangeState = (): boolean => {
            return  token.length === 0 && 
                (state === ParserState.Pending ||
                 state === ParserState.NewLine);
        };
        
        const capture = () => {
            line = l;
            column = c;
            index = i;
        };

        while (i < text.length) {
            const curChar = text.charAt(i);

            switch (curChar) {
                case "\n":
                case "\r":
                    if (state != ParserState.NewLine) {
                        this.addNode(nodes, state, token, index, line, column);

                        state = ParserState.NewLine;
                        token = "";
                        l++;
                        c = 1;
                    }
                    i++;
                    break;

                case " ":
                case "\t":
                    if (state === ParserState.LabelBegin) {
                        this.addNode(nodes, state, token, index, line, column);
                        state = ParserState.Pending;
                        token = "";
                    }
                    if (canChangeState())
                    {
                        state = ParserState.WhiteSpace;
                        capture();
                    }
                    nextTokenChar(curChar);
                    break;
                
                case this.profile.comment:
                    if (state === ParserState.WhiteSpace) {
                        this.addNode(nodes, state, token, index, line, column);
                        state = ParserState.Pending;
                        token = "";
                    }
                    if (canChangeState())
                    {
                        state = ParserState.Comment;
                        capture();
                        increment();
                    }
                    else {
                        nextTokenChar(curChar);
                    }
                    break;

                case this.profile.labelBegin:
                    if (canChangeState())
                    {
                        state = ParserState.LabelBegin;
                        capture();
                        increment();
                    } else {
                        nextTokenChar(curChar);
                    }
                    break;
                case this.profile.labelEnd:
                    if (state === ParserState.Pending || state === ParserState.NewLine)
                    {
                        state = ParserState.LabelEnd;
                        this.addNode(nodes, state, token, index, line, column);
                        increment();
                        state = ParserState.Pending;
                        token = "";
                    } else {
                        nextTokenChar(curChar);
                    }
                    break;

                default:
                    if (state === ParserState.WhiteSpace) {
                        this.addNode(nodes, state, token, index, line, column);
                        state = ParserState.Pending;
                        token = "";
                    }
                    if (state === ParserState.Pending &&
                        token.length == 0) {
                        capture();
                    }
                    nextTokenChar(curChar);
                    break;
            }
        }

        this.addNode(nodes, state, token, index, line, column);

        return nodes;
    }

    private addNode(nodes: AssemblyNode[], state: ParserState, token: string, index: number, line: number, col: number) {
        let node = undefined;
    
        switch (state) {
            case ParserState.Comment:
                node = new Comment(token, index, line, col);
                break;
    
            case ParserState.Directive:
                node = new Directive(token, index, line, col);
                break;
            
            case ParserState.LabelBegin:
            case ParserState.LabelEnd:
                node = new Label(token, index, line, col);
                break;
    
            case ParserState.WhiteSpace:
                node = new Whitespace(token, index, line, col);
                break;
    
            default:
                if (token.length > 0) {
                    node = this.tryParseDirective(token, index, line, col) || this.tryParseInstruction(token, index, line, col);
                    if (!node) {
                        node = new AsmError(`Syntax error: '${token}'`, index, line, col);
                    }
                }
                break;
        }
    
        if (node) {
            nodes.push(node);
        }
    }

    private tryParseDirective(token: string, index: number, line: number, col: number): Directive | null {
        if (this.profile.directives.findIndex(d => d === token) >= 0) {
            return new Directive(token, index, line, col);
        }
        return null;
    }

    private tryParseInstruction(token: string, index: number, line: number, col: number): Instruction | AsmError {
        return buildInstruction(token, index, line, col);
    }
}
