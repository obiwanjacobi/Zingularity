import { buildInstruction, buildCompletionList } from "../z80asm/InstructionNavigator";
import { Instruction } from "../z80asm/CodeModel";

describe("Z80 Instruction Navigator", () => {

    it("buildInstruction: LD A, 0", () => {
        const instr = buildInstruction("LD A, 0", 1, 1);
        expect(instr).toBeInstanceOf(Instruction);

        if (instr instanceof Instruction) {
            expect(instr.meta).not.toBeUndefined();
        }
    });

    it("buildCompletionList: L", () => {
        const list = buildCompletionList("L");

        expect(list).toContain("LD");
        expect(list).toContain("LDI");
        expect(list).toContain("LDIR");
        expect(list).toContain("LDD");
        expect(list).toContain("LDDR");
    });
});