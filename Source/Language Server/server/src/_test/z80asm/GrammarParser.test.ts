import { GrammarParser } from "../../z80asm/GrammarParser";
import { AssemblyNodeKind, Expression, Directive, Instruction } from "../../z80asm/CodeModel";

const newLine = "\r\n";

describe("Grammar Parser", () => {
    it("character single quote", () => {
        const parser = GrammarParser.createParser("'x'");
        const tree = parser.character();

        expect(tree.text).toBe("'x'");
    });

    it("string double quote", () => {
        const parser = GrammarParser.createParser("\"Hello\"");
        const tree = parser.string();

        expect(tree.text).toBe("\"Hello\"");
    });

    it("comment", () => {
        const parser = GrammarParser.createParser("; comment" + newLine);
        const tree = parser.comment();

        expect(tree.text).toBe("; comment");
    });

    it("expression", () => {
        const parser = GrammarParser.createParser("(8+3)*4");
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

    it("directive defm", () => {
        const parser = GrammarParser.createParser("DEFM \"Hello\", '.', 0");
        const tree = parser.directive();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("DEFM \"Hello\", '.', 0");
    });

    it("directive defb", () => {
        const parser = GrammarParser.createParser("DEFb symbol, (2+3), 0");
        const tree = parser.directive();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("DEFb symbol, (2+3), 0");
    });

    it("directive public", () => {
        const parser = GrammarParser.createParser("public name1, name2, name3");
        const tree = parser.directive();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("public name1, name2, name3");
    });

    it("instruction LD A, n", () => {
        const parser = GrammarParser.createParser("ld a, 0");
        const tree = parser.instruction();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Instruction);
        expect(nodes[0].text).toBe("ld a, 0");
    });

    //
    // root parser rule tests
    //

    it("asm if", () => {
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

    it("asm ifdef", () => {
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

    it("asm ifdef else", () => {
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

    it("asm LD A, n (numeric)", () => {
        const parser = GrammarParser.createParser("ld a, 0" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Instruction);
        expect(nodes[0].text).toBe("ld a, 0");

        expect((<Instruction> nodes[0]).numeric).not.toBeUndefined();
        expect((<Instruction> nodes[0]).external).toBe("");
    });

    it("asm LD A, n (symbol)", () => {
        const parser = GrammarParser.createParser("ld a, symbol" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Instruction);
        expect(nodes[0].text).toBe("ld a, symbol");

        expect((<Instruction> nodes[0]).numeric).toBeUndefined();
        expect((<Instruction> nodes[0]).external).toBe("symbol");
    });

    it("asm RST 28", () => {
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

    it("asm comment", () => {
        const parser = GrammarParser.createParser("; comment" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].text).toBe("; comment");
    });

    it("asm comment empty", () => {
        const parser = GrammarParser.createParser(";" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toContain(";");
    });

    it("asm comment /w repeated ;", () => {
        const parser = GrammarParser.createParser(";;;;;;;" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Comment);
        expect(node.text).toContain(";;;;;;;");
    });

    it("asm label begin", () => {
        const parser = GrammarParser.createParser(".label" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.text).toContain(".label");
    });

    it("asm label end", () => {
        const parser = GrammarParser.createParser("label:" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        const node = nodes[0];

        expect(node.kind).toBe(AssemblyNodeKind.Label);
        expect(node.text).toContain("label:");
    });

    it("asm org + param", () => {
        const parser = GrammarParser.createParser("org $1000" + newLine);
        const tree = parser.asm();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Directive);
        expect(node.text).toContain("org $1000");
        expect((<Directive> node).expression).not.toBeUndefined();
    });

    it("file partial", () => {
        const parser = GrammarParser.createParser("de" + newLine);
        const tree = parser.file();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        let node = nodes[0];
        expect(node.kind).toBe(AssemblyNodeKind.Error);
        expect(node.text).toContain("de");
    });
});