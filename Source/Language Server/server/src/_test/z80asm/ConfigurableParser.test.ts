import { createParserConfiguration, ConfigurableParser } from "../../z80asm/ConfigurableParser";
import { AssemblyNodeKind, Instruction } from "../../z80asm/CodeModel";
import parserConfiguration from "./ParserConfiguration.json";

const config = createParserConfiguration(parserConfiguration);
const parser = new ConfigurableParser(config);

describe("Configurable Parser", () => {
    it("regex match test", () => {
        const txt = "add a, 0   ;;; some comment\r\n;more comments";
        const regex = /(?:;.*)/gmi;
        let matches;
        
        while ((matches = regex.exec(txt)) !== null)
        {
            // This is necessary to avoid infinite loops with zero-width matches
            if (matches.index === regex.lastIndex) {
                regex.lastIndex++;
            }

            matches.forEach((match, groupIndex) => {
                expect(match).toContain(";");
            });
        }
    });

    it("ParserConfiguration json", () => {
        expect(config).not.toBeUndefined();
        expect(config.rules).not.toBeUndefined();
        expect(config.rules.length).toBeGreaterThan(1);
        expect(config.rules[0].exp).toBeInstanceOf(RegExp);
        expect(config.rules[0].kind).toBe(AssemblyNodeKind.Comment);
    });
    
    it("single line comment", () => {
        let nodes = parser.parse("; hello world!");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain("; hello world!");
    });

    it("single line comment /w newline", () => {
        let nodes = parser.parse("; hello world!\r\n");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain("; hello world!");
    });

    it("single line comment /w repeated ;", () => {
        let nodes = parser.parse(";;;;;;;;");
        expect(nodes.length).toBe(1);
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain(";;;;;;;");
    });


    it("two single line comment /w newline and whitespace", () => {
        let nodes = parser.parse("; hello world!\r\n  ; bye bye         ");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain("; hello world!");
        
        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(2);
        expect(node.column).toBe(3);
        expect(node.text).toContain("; bye bye");
        expect(node.text).toContain("      ");
    });

    it("label begin", () => {
        let nodes = parser.parse(".label");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain(".label");
    });

    it("label begin /w whitespace", () => {
        let nodes = parser.parse(".label ");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).not.toContain(" ");
        expect(node.text).toContain(".label");
    });
    
    it("label end", () => {
        let nodes = parser.parse("label:");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain("label:");
    });

    it("label end /w whitespace", () => {
        let nodes = parser.parse("label: ");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain("label:");
    });

    it("directive - upper case", () => {
        let nodes = parser.parse("SECTION");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.text).toContain("SECTION");
    });

    // it("directive with param", () => {
    //     let nodes = parser.parse(".Label EQU $1000");
    //     let node = nodes[0];

    //     expect(node.kind).toBe(AssemblyNodeKind.Label);
    //     expect(node.line).toBe(1);
    //     expect(node.column).toBe(1);
    //     expect(node.text).toContain(".Label");
        
    //     node = nodes[1];
    //     expect(node.kind).toBe(AssemblyNodeKind.Whitespace);
        
    //     node = nodes[2];
    //     expect(node.kind).toBe(AssemblyNodeKind.Directive);
    //     expect(node.text).toContain("EQU $1000");
    // });

    // it("instruction", () => {
    //     let nodes = parser.parse("ld hl, $0000");
    //     let node = nodes[0];

    //     expect(node.kind).toBe(AssemblyNodeKind.Instruction);
    //     expect(node.line).toBe(1);
    //     expect(node.column).toBe(1);
    //     expect(node.text).toContain("ld hl, $0000");
    // });

    // it("instruction /w label", () => {
    //     let nodes = parser.parse("JP label");
    //     let node = nodes[0];

    //     expect(node.kind).toBe(AssemblyNodeKind.Instruction);
    //     expect(node.line).toBe(1);
    //     expect(node.column).toBe(1);
    //     expect(node.text).toContain("JP label");
    //     expect((<Instruction> node).external).toBe("label");
    // });

    // it("instruction /w comment", () => {
    //     let nodes = parser.parse("ld hl, $0000   ; comment");
    //     let node = nodes[0];

    //     expect(node.kind).toBe(AssemblyNodeKind.Instruction);
    //     expect(node.line).toBe(1);
    //     expect(node.column).toBe(1);
    //     expect(node.text).toContain("ld hl, $0000");
    //     expect((<Instruction> node).external).toBe("");

    //     node = nodes[1];
    //     expect(node.kind).toBe(AssemblyNodeKind.Comment);
    //     expect(node.line).toBe(1);
    //     expect(node.column).toBe(16);
    //     expect(node.text).toContain("; comment");
    // });

    // it("instruction: RST", () => {
    //     let nodes = parser.parse("RST 28");
    //     let node = nodes[0];

    //     expect(node.kind).toBe(AssemblyNodeKind.Instruction);
    //     expect(node.line).toBe(1);
    //     expect(node.column).toBe(1);
    //     expect(node.text).toContain("RST 28");
    // });
});