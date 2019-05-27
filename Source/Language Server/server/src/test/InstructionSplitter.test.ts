import { splitInstruction } from "../z80asm/InstructionSplitter";

describe("Z80 Instruction splitter", () => {
    it("ld a, 0", () => {
        const parts = splitInstruction("LD A, 0");
        expect(parts[0]).toBe("LD");
        expect(parts[1]).toBe("A");
        expect(parts[2]).toBe(",");
        expect(parts[3]).toBe("0");
    });

    it("ld (hl), $0000", () => {
        const parts = splitInstruction("LD (HL), $0000");
        expect(parts[0]).toBe("LD");
        expect(parts[1]).toBe("(");
        expect(parts[2]).toBe("HL");
        expect(parts[3]).toBe(")");
        expect(parts[4]).toBe(",");
        expect(parts[5]).toBe("$");
        expect(parts[6]).toBe("0000");
    });

    it("ld (hl), $0000", () => {
        const parts = splitInstruction("LD (IX+6), $0000");
        expect(parts[0]).toBe("LD");
        expect(parts[1]).toBe("(");
        expect(parts[2]).toBe("IX");
        expect(parts[3]).toBe("+");
        expect(parts[4]).toBe("6");
        expect(parts[5]).toBe(")");
        expect(parts[6]).toBe(",");
        expect(parts[7]).toBe("$");
        expect(parts[8]).toBe("0000");
    });

    it("CALL NZ, label", () => {
        const parts = splitInstruction("call nz, label");
        expect(parts[0]).toBe("call");
        expect(parts[1]).toBe("nz");
        expect(parts[2]).toBe(",");
        expect(parts[3]).toBe("label");
    });

    it("ret", () => {
        const parts = splitInstruction("RET");
        expect(parts[0]).toBe("RET");
    });
});