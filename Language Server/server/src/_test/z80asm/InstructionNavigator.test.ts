import { buildCompletionList } from "../../z80asm/InstructionNavigator";
import { Instruction } from "../../z80asm/CodeModel";
import { findMap } from "../../z80asm/InstructionNavigator";

const numericProfile = {
    bin : { prefix: [""], postfix: [""] },
    oct : { prefix: [""], postfix: [""] },
    dec : { prefix: [""], postfix: [""] },
    hex : { prefix: ["$"], postfix: [""] },
};

describe("Z80 Instruction Navigator", () => {

    it("buildCompletionList: L", () => {
        const list = buildCompletionList("L", undefined);
        const labels = list.map(c => c.label);

        expect(labels).toContain("LD");
        expect(labels).toContain("LDI");
        expect(labels).toContain("LDIR");
        expect(labels).toContain("LDD");
        expect(labels).toContain("LDDR");
    });

    it("findMap: LD A,", () => {
        const map = findMap(["LD", "A", ","]);
        const keys = Object.keys(map);

        expect(keys).toContain("A");
        expect(keys).toContain("B");
        expect(keys).toContain("C");
        expect(keys).toContain("D");
        expect(keys).toContain("E");
        expect(keys).toContain("H");
        expect(keys).toContain("L");
        expect(keys).toContain("(");
    });
});