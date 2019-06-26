import { AssemblyNodeKind, AssemblyNode, Comment, Directive, Instruction, InstructionMeta, Label } from "./CodeModel";

const _meta: InstructionMeta = {
    altCycles: [],
    bytes: [],
    cycles: [],
    flags: []
};

const newLine = /\r?\n/gm;

export interface ParserRule {
    rule: RegExp | string;
    target: AssemblyNodeKind | string;
}

export interface ParserConfiguration {
    rules: ParserRule[];
}

// replaces string regex expressions with RegExp objects
export function createParserConfiguration(json: string) {
    const config: ParserConfiguration = JSON.parse(json);

    config.rules.forEach(r => {
        r.rule = new RegExp(`/${r.rule}/gmi`);
        // @ts-ignore: implicit any
        r.target = AssemblyNodeKind[r.target];
    });

    return config;
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
            const lineNodes = this.parseLine(line, l);
            nodes.push(...lineNodes);
        });

        return nodes;
    }

    private parseLine(line: string, lineNumber: number): AssemblyNode[] {
        const nodes = new Array<AssemblyNode>();

        this.config.rules.forEach(rule => {
            const matches = this.matchRule(line, <RegExp> rule.rule);
            matches.forEach(m => {
                const node = this.createNode(<AssemblyNodeKind> rule.target, m[0], lineNumber, m.index);
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
                return new Label(text, line, column);

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