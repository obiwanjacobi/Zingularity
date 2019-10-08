import { GrammarParser } from "../../z80asm/GrammarParser";
import { AssemblyNodeKind, Directive } from "../../z80asm/CodeModel";

const newLine = "\r\n";

describe("Grammar Parser - Directives", () => {

    it("defm", () => {
        const parser = GrammarParser.createParser("DEFM \"Hello\", '.', 0" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("DEFM \"Hello\", '.', 0");
    });

    it("defb", () => {
        const parser = GrammarParser.createParser("DEFb symbol, (2+3), 0" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("DEFb symbol, (2+3), 0");
    });

    it("public", () => {
        const parser = GrammarParser.createParser("public name1, name2, name3" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("public name1, name2, name3");
    });

    it("if", () => {
        const parser = GrammarParser.createParser("if (100-symbol) > 0\r\n; comment\r\nendif\r\n");
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(3);
        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("if (100-symbol) > 0");
        expect((<Directive> node).expression).not.toBeUndefined();

        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toBe("; comment");

        node = nodes[2];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("endif");
    });

    it("ifdef", () => {
        const parser = GrammarParser.createParser("ifdef symbol\r\n; comment\r\nendif\r\n");
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(3);
        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("ifdef symbol");

        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toBe("; comment");

        node = nodes[2];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("endif");
    });

    it("ifdef else", () => {
        const parser = GrammarParser.createParser("ifdef symbol\r\n; comment\r\nelse\r\nendif\r\n");
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(4);
        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("ifdef symbol");
        
        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toBe("; comment");
        
        node = nodes[2];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("else");
        
        node = nodes[3];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("endif");
    });

    it("org + param", () => {
        const parser = GrammarParser.createParser("org $1000" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toContain("org $1000");
        expect((<Directive> node).expression).not.toBeUndefined();
    });
});