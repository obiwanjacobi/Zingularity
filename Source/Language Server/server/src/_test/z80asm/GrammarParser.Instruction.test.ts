import { GrammarParser } from "../../z80asm/GrammarParser";
import { AssemblyNodeKind, Expression, Instruction, BlockComment } from "../../z80asm/CodeModel";

const newLine = "\r\n";

describe("Grammar Parser - Instructions", () => {

    it("LD A, n", () => {
        const parser = GrammarParser.createParser("ld a, 0" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Instruction);
        expect(nodes[0].text).toBe("ld a, 0");
    });

    it("LD A, n (numeric)", () => {
        const parser = GrammarParser.createParser("ld a, 0" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Instruction);
        expect(nodes[0].text).toBe("ld a, 0");

        expect((<Instruction> nodes[0]).numeric).not.toBeUndefined();
        expect((<Instruction> nodes[0]).external).toBe("");
    });

    it("LD A, n (symbol)", () => {
        const parser = GrammarParser.createParser("ld a, symbol" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Instruction);
        expect(nodes[0].text).toBe("ld a, symbol");

        expect((<Instruction> nodes[0]).numeric).toBeUndefined();
        expect((<Instruction> nodes[0]).external).toBe("symbol");
    });

    it("RST 28", () => {
        const parser = GrammarParser.createParser("rst 28" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Instruction);
        expect(nodes[0].text).toBe("rst 28");
    });

    it("error ld (hl), sp (instruction does not exist)", () => {
        const parser = GrammarParser.createParser("ld (hl), sp" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Error);
        expect(nodes[0].text).toBe("ld (hl), sp");
    });

    it("partial instrucion", () => {
        const parser = GrammarParser.createParser("de" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Error);
        expect(node.text).toContain("de");
    });

});