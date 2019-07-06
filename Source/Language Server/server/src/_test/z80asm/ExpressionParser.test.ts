import { parseExpression } from "../../z80asm/ExpressionParser";
import { AssemblyNodeKind } from "../../z80asm/CodeModel";


describe("Expression Parser", () => {
    it("42", () => {
        const expression = parseExpression("42", 1, 1);
        
        expect(expression.text).toBe("42");
    });

    it("8+1", () => {
        const expression = parseExpression("8+1", 1, 1);
        
        expect(expression.text).toBe("+");
        if (expression.left) {
            expect(expression.left.text).toBe("8");
        }
        if (expression.right) {
            expect(expression.right.text).toBe("1");
        }
    });

    it("8+1+4", () => {
        const expression = parseExpression("8+1+4", 1, 1);
        
        expect(expression.text).toBe("+");
        if (expression.left) {
            expect(expression.left.text).toBe("+");
        }
        if (expression.right) {
            expect(expression.right.text).toBe("4");
        }
    });

    it("(8+1)*4", () => {
        const expression = parseExpression("(8+1)*4", 1, 1);
        
        expect(expression.text).toBe("*");
        if (expression.left) {
            expect(expression.left.text).toBe("+");
        }
        if (expression.right) {
            expect(expression.right.text).toBe("4");
        }
    });
});