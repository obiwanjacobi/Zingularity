import { buildInstruction } from "../z80asm/InstructionNavigator";
import fs from "fs";
import { Instruction, AsmError } from "../z80asm/CodeModel";

describe("Z80 Instruction Navigator", () => {

    it("find: LD A, 0", () => {
        const instr = buildInstruction("LD A, 0", 0, 1, 1);
        expect(instr).not.toBeInstanceOf(AsmError);
        expect(instr).toBeInstanceOf(Instruction);

        if (instr instanceof Instruction) {
            expect(instr.meta).not.toBeUndefined();
        }
    });

});