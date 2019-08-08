import { AssemblyNodeKind, AssemblyNode, Comment, Directive, Instruction, InstructionMeta, Label, Expression } from "../CodeModel";
import { parseExpression } from "./ExpressionParser";

const _meta: InstructionMeta = {
    altCycles: [],
    bytes: [],
    cycles: [],
    flags: []
};

const newLine = /\r?\n/gm;

export interface UntypedParserRule {
    exp: string;
    kind: string;
}

export interface UntypedParserConfiguration {
    rules: UntypedParserRule[];
}

export interface ParserRule {
    exp: RegExp;
    kind: AssemblyNodeKind;
}

export interface ParserConfiguration {
    rules: ParserRule[];
}

export function readParserConfiguration(json: string): ParserConfiguration {
    const config: UntypedParserConfiguration = JSON.parse(json);
    return createParserConfiguration(config);
}

// replaces string values with objects
export function createParserConfiguration(config: UntypedParserConfiguration): ParserConfiguration {
    const typedConfig: ParserConfiguration = { rules: [] };

    config.rules.forEach(r => {
        typedConfig.rules.push({
            exp: new RegExp(<string> r.exp, "gmi"),
            // @ts-ignore: implicit any
            kind: AssemblyNodeKind[r.kind]
        });
    });

    return typedConfig;
}

export class ConfigurableParser {
    private readonly config: ParserConfiguration;

    constructor(config: ParserConfiguration) {
        this.config = config;
    }

    parse(text: string): AssemblyNode[] {
        const nodes = new Array<AssemblyNode>();
        const lines = text.split(newLine);

        lines.forEach((line, l) => {
            const lineNodes = this.parseLine(line, l + 1);
            nodes.push(...lineNodes);
        });

        return nodes;
    }

    private parseLine(line: string, lineNumber: number): AssemblyNode[] {
        const nodes = new Array<AssemblyNode>();

        this.config.rules.forEach(rule => {
            const matches = this.matchRule(line, <RegExp> rule.exp);
            matches.forEach(m => {
                const node = this.createNode(<AssemblyNodeKind> rule.kind, m[0], lineNumber, m.index + 1);
                nodes.push(node);
            });
        });

        return nodes.sort((a, b) => a.column - b.column);
    }

    private createNode(kind: AssemblyNodeKind, text: string, line: number, column: number): AssemblyNode {
        switch (kind) {
            case AssemblyNodeKind.Comment:
                return new Comment(text, line, column);
            case AssemblyNodeKind.Directive:
                return new Directive(undefined, text, line, column);
            case AssemblyNodeKind.Instruction:
                const meta = _meta;
                const external = "";
                const numeric = undefined;
                return new Instruction(
                    meta, external, numeric,
                    text, line, column);
            case AssemblyNodeKind.Label:
                return new Label(text, text, line, column);
            case AssemblyNodeKind.Expression:
                return parseExpression(text, line, column);

            default:
                return new AssemblyNode(AssemblyNodeKind.Token, text, line, column);
        }
    }

    private matchRule(text: string, rule: RegExp): RegExpExecArray[] {
        const matches = new Array<RegExpExecArray>();

        let m;
        while ((m = rule.exec(text)) !== null)
        {
            // This is necessary to avoid infinite loops with zero-width matches
            if (m.index === rule.lastIndex) {
                rule.lastIndex++;
            }

            matches.push(m);
        }

        return matches;
    }
}