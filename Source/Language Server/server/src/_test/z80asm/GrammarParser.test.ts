import { GrammarParser } from "../../z80asm/GrammarParser";
import { AssemblyNodeKind, Expression, Instruction, BlockComment } from "../../z80asm/CodeModel";
import { z80asmParser } from "../../z80asm/z80asmParser";

const newLine = "\r\n";

function createParser(code: string): z80asmParser {
    return GrammarParser.createParser(code, "z80asm");
}

describe("Grammar Parser", () => {
    // it("character single quote", () => {
    //     const parser = createParser("'x'");
    //     const tree = parser.character();

    //     expect(tree.text).toBe("'x'");
    // });

    // it("string double quote", () => {
    //     const parser = createParser("\"Hello\"");
    //     const tree = parser.string();

    //     expect(tree.text).toBe("\"Hello\"");
    // });

    it("comment", () => {
        const parser = createParser("; comment" + newLine);
        const tree = parser.comment();

        expect(tree.text).toBe("; comment");
    });


    it("expression", () => {
        const parser = createParser("(8+3)*4");
        const tree = parser.expression();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Expression);
        const node = <Expression> nodes[0];
        expect(node.numeric).toBeUndefined();
        expect(node.text).toBe("*");
        expect(node.left).not.toBeUndefined();
        expect(node.right).not.toBeUndefined();
        const left = node.left;
        if (left) {
            expect(left.text).toBe("+");
            expect(left.left).not.toBeUndefined();
            expect(left.right).not.toBeUndefined();
            expect(left.numeric).toBeUndefined();
            if (left.left) {
                expect(left.left.numeric).not.toBeUndefined();
                expect(left.left.text).toBe("8");
            }
            if (left.right) {
                expect(left.right.numeric).not.toBeUndefined();
                expect(left.right.text).toBe("3");
            }
        }
        const right = node.right;
        if (right) {
            expect(right.numeric).not.toBeUndefined();
            expect(right.text).toBe("4");
        }
    });

    //
    // root parser rule tests
    //

    it("asm comment", () => {
        const parser = createParser("; comment" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].text).toBe("; comment");
    });

    it("asm comment empty", () => {
        const parser = createParser(";" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toContain(";");
    });

    it("asm comment /w repeated ;", () => {
        const parser = createParser(";;;;;;;" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toContain(";;;;;;;");
    });

    it("asm label begin", () => {
        const parser = createParser(".label" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.text).toContain(".label");
    });

    it("asm label end", () => {
        const parser = createParser("label:" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.text).toContain("label:");
    });

    it("blockcomment", () => {
        const parser = createParser(";; comment" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.BlockComment);
        expect(node.text).toContain(";; comment");

        const block = <BlockComment> node;
        expect(block.lines.length).toBe(1);
        expect(block.lines[0].doc).toBe("comment");
    });

    it("blockcomment", () => {
        const parser = createParser(";;\t@param hl comment comment" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.BlockComment);
        expect(node.text).toContain(";;\t@param hl comment comment");
        
        const block = <BlockComment> node;
        expect(block.lines.length).toBe(1);
        expect(block.lines[0].paramName).toBe("@param");
        expect(block.lines[0].paramValue).toBe("hl");
        expect(block.lines[0].doc).toBe("comment comment");
    });

    it("blockcomment - 2 lines", () => {
        const parser = createParser(";;\t@param hl comment comment" + newLine + ";; @returns a bla bla" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.BlockComment);
        
        const block = <BlockComment> node;
        expect(block.lines.length).toBe(2);
        expect(block.lines[0].paramName).toBe("@param");
        expect(block.lines[0].paramValue).toBe("hl");
        expect(block.lines[0].doc).toBe("comment comment");
        expect(block.lines[1].paramName).toBe("@returns");
        expect(block.lines[1].paramValue).toBe("a");
        expect(block.lines[1].doc).toBe("bla bla");
    });
});