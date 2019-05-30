import { Parser, ParserProfile } from "../z80asm/Parser";
import { AssemblyNode, AssemblyNodeKind, Instruction } from "../z80asm/CodeModel";

const parserProfile: ParserProfile = { 
    comment: ";", 
    labelBegin: ".", 
    labelEnd: ":",
    directives: [
        "EQU", 
        "SECTION"
    ],
    hex: ["$"]
};

describe("Z80 Assembly Parser", () => {
    it("single line comment", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("; hello world!");
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).not.toContain(";");
        expect(node.text).toContain("hello world!");
    });

    it("single line comment /w newline", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("; hello world!\r\n");
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).not.toContain(";");
        expect(node.text).toContain("hello world!");
    });

    it("two single line comment /w newline and whitespace", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("; hello world!\r\n  ; bye bye         ");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).not.toContain(";");
        expect(node.text).toContain("hello world!");

        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Whitespace);
        expect(node.line).toBe(2);
        expect(node.column).toBe(1);
        expect(node.index).toBe(16);

        node = nodes[2];
        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(2);
        expect(node.column).toBe(3);
        expect(node.index).toBe(18);
        expect(node.text).not.toContain(";");
        expect(node.text).toContain("bye bye");
        expect(node.text).toContain("      ");
    });

    it("label begin", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse(".label");
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).not.toContain(".");
        expect(node.text).toContain("label");
    });

    it("label begin /w whitespace", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse(".label ");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).not.toContain(".");
        expect(node.text).not.toContain(" ");
        expect(node.text).toContain("label");

        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Whitespace);
        expect(node.line).toBe(1);
        expect(node.column).toBe(7);
        expect(node.index).toBe(6);
    });
    
    it("label end", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("label:");
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).not.toContain(":");
        expect(node.text).toContain("label");
    });

    it("label end /w whitespace", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("label: ");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).not.toContain(":");
        expect(node.text).toContain("label");

        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Whitespace);
        expect(node.line).toBe(1);
        expect(node.column).toBe(7);
        expect(node.index).toBe(6);
    });

    it("directive - match case", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("SECTION");
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).toContain("SECTION");
    });

    // it("directive - mismatch case", () => {
    //     const parser = new Parser(parserProfile);
    //     const nodes = parser.parse("section");
    //     const node = nodes[0];

    //     expect(node.kind).toBe(AssemblyNodeKind.Error);
    //     expect(node.line).toBe(1);
    //     expect(node.column).toBe(1);
    //     expect(node.index).toBe(0);
    //     expect(node.text).toContain("section");
    // });

    it("instruction", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("ld hl, $0000");
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Instruction);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).toContain("ld hl, $0000");
    });

    it("instruction /w label", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("JP label");
        const node = <Instruction> nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Instruction);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).toContain("JP label");
        expect(node.external).toBe("label");
    });

    it("instruction /w comment", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("ld hl, $0000   ; comment");
        let node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Instruction);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).toContain("ld hl, $0000");

        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.line).toBe(1);
        expect(node.column).toBe(16);
        expect(node.index).toBe(15);
        expect(node.text).toContain("comment");
    });

    it("instruction: RST", () => {
        const parser = new Parser(parserProfile);
        const nodes = parser.parse("RST 28");
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Instruction);
        expect(node.line).toBe(1);
        expect(node.column).toBe(1);
        expect(node.index).toBe(0);
        expect(node.text).toContain("RST 28");
    });
});