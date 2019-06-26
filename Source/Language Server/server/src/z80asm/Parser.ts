import { AssemblyNode, Comment, Directive, Label, Whitespace, AsmError, Instruction, AssemblyNodeKind, Expression } from "./CodeModel";
import { buildInstruction } from "./InstructionNavigator";
import { NumericProfile } from "./NumericParser";
import { parseExpression } from "./ExpressionParser";

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
    readonly numericProfile: NumericProfile;    // pre and postfixes for numerics
    readonly lineComment: string;               // rest of line is comment after this
    //readonly blockComment: string[];            // two items: start and end block comments
    readonly labelBegin: string;                // denoting a label
    readonly labelEnd: string;                  // ending a label (or with labelBegin)
    readonly directives: string[];              // assembler directives (will be refctored out)
    //readonly instructionSeparator: string[];    // separator chars that allow multiple instructions on one line
}

export class Parser {
    private readonly profile: ParserProfile;

    constructor(profile: ParserProfile) {
        this.profile = profile;
    }

    parse(text: string): AssemblyNode[] {
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
                        this.addNode(nodes, state, token, line, column);

                        state = ParserState.NewLine;
                        token = "";
                        l++;
                        c = 1;
                        capture();
                    } else if (line === l && index + 1 < i) {
                        l++;
                        capture();
                    }
                    i++;
                    break;

                case " ":
                case "\t":
                    if (state === ParserState.LabelBegin) {
                        this.addNode(nodes, state, token, line, column);
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
                
                case this.profile.lineComment:
                    if (!canChangeState() && state != ParserState.Comment) {
                        this.addNode(nodes, state, token, line, column);
                        token = "";
                    }
                    if (state != ParserState.Comment) {
                        state = ParserState.Comment;
                        capture();
                    }
                    nextTokenChar(curChar);
                    break;

                case this.profile.labelBegin:
                    if (canChangeState())
                    {
                        state = ParserState.LabelBegin;
                        capture();
                    }
                    nextTokenChar(curChar);
                    break;
                case this.profile.labelEnd:
                    if (state === ParserState.Pending || state === ParserState.NewLine)
                    {
                        state = ParserState.LabelEnd;
                        nextTokenChar(curChar);
                        this.addNode(nodes, state, token, line, column);
                        state = ParserState.Pending;
                        token = "";
                    } else {
                        nextTokenChar(curChar);
                    }
                    break;

                default:
                    if (state === ParserState.WhiteSpace) {
                        this.addNode(nodes, state, token, line, column);
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

        this.addNode(nodes, state, token, line, column);

        return nodes;
    }  

    private addNode(nodes: AssemblyNode[], state: ParserState, token: string, line: number, col: number) {
        let node = undefined;
    
        switch (state) {
            case ParserState.Comment:
                node = new Comment(token, line, col);
                break;
    
            case ParserState.Directive:
                node = new Directive(undefined, token, line, col);
                break;
            
            case ParserState.LabelBegin:
            case ParserState.LabelEnd:
                node = new Label(token, line, col);
                break;
    
            case ParserState.WhiteSpace:
                node = new Whitespace(token, line, col);
                break;
    
            default:
                if (token.length > 0) {
                    node = this.tryParseInstruction(token, line, col);
                    if (node.kind === AssemblyNodeKind.Error) {
                        if (this.tryParseDirective(nodes, token, line, col)) {
                            //node = new AsmError(`Syntax error: '${token}'`, token, line, col);
                            node = undefined;
                        }
                    }
                }
                break;
        }
    
        if (node) {
            nodes.push(node);
        }
    }

    private tryParseDirective(nodes: AssemblyNode[], token: string, line: number, col: number): boolean {
        const parts = token.split(/[ \t]+/);
        if (this.profile.directives.findIndex(d => d === parts[0]) >= 0) {
            const exprToken = parts[1];
            let expr: Expression | undefined;
            if (exprToken) {
                expr = parseExpression(exprToken, line, col + parts[0].length);
            }
            nodes.push(new Directive(expr, token, line, col));
            return true;
        }

        return false;
    }

    private tryParseInstruction(token: string, line: number, col: number): Instruction | AsmError {
        return buildInstruction(this.profile.numericProfile, token, line, col);
    }
}
