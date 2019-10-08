import { GrammarParser } from "../../z80asm/GrammarParser";
import { AssemblyNodeKind, Directive } from "../../z80asm/CodeModel";
import { nodeAs } from "./GrammarParserHelpers";

const newLine = "\r\n";

describe("Grammar Parser - Directives", () => {

    it("defc", () => {
        const parser = GrammarParser.createParser("DEFC symbol = 42" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        const node = nodeAs<Directive>(nodes, 0);
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("DEFC symbol = 42");
    });

    it("defm", () => {
        const parser = GrammarParser.createParser("DEFM \"Hello\", '.', 0" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        const node = nodeAs<Directive>(nodes, 0);
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("DEFM \"Hello\", '.', 0");
    });

    it("defb", () => {
        const parser = GrammarParser.createParser("DEFB symbol, (2+3), 0" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("DEFB symbol, (2+3), 0");
    });
    

    it(".label defb", () => {
        const parser = GrammarParser.createParser(".label defb    5,3,12,1,0,7,2,4" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(2);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Label);
        expect(nodes[0].text).toBe(".label");
        expect(nodes[1].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[1].text).toBe("defb    5,3,12,1,0,7,2,4");
    });

    it("public", () => {
        const parser = GrammarParser.createParser("public name1, name2, name3" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("public name1, name2, name3");
    });

    it("if (symbol = 0)", () => {
        const parser = GrammarParser.createParser("if (symbol=0)\r\n; comment\r\nendif\r\n");
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(3);
        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("if (symbol=0)");
        expect((<Directive> node).expression).not.toBeUndefined();

        node = nodes[1];
        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toBe("; comment");

        node = nodes[2];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toBe("endif");
    });

    it("if (100-symbol)", () => {
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

    it("ifdef symbol", () => {
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

    it("ifdef symbol else", () => {
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