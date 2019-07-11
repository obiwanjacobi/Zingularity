import { GrammarParser } from "../../z80asm/GrammarParser";
import { AssemblyNodeKind, Expression, Directive, Instruction } from "../../z80asm/CodeModel";

// const parser = new GrammarParser();
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

    it("directive if", () => {
        const parser = GrammarParser.createParser("if (100-symbol) > 0\r\n; comment\r\nendif\r\n");
        const tree = parser.directive();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("if (100-symbol) > 0\r\n; comment\r\nendif\r\n");

        expect((<Directive> nodes[0]).expression).not.toBeUndefined();
    });

    it("directive ifdef", () => {
        const parser = GrammarParser.createParser("ifdef symbol\r\n; comment\r\nendif\r\n");
        const tree = parser.directive();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("ifdef symbol\r\n; comment\r\nendif\r\n");
    });

    it("directive ifdef else", () => {
        const parser = GrammarParser.createParser("ifdef symbol\r\n; comment\r\nelse\r\nendif\r\n");
        const tree = parser.directive();
        const nodes = GrammarParser.createAssemblyNodes(tree);

        expect(nodes.length).toBe(1);
        expect(nodes[0].kind).toBe(AssemblyNodeKind.Directive);
        expect(nodes[0].text).toBe("ifdef symbol\r\n; comment\r\nelse\r\nendif\r\n");
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
});