import { parseNumeric } from "../z80asm/NumericParser";

const profile = {
    bin : { prefix: [""], postfix: [""] },
    oct : { prefix: [""], postfix: [""] },
    dec : { prefix: [""], postfix: [""] },
    hex : { prefix: ["$"], postfix: ["h"] },
};

describe("Numeric Parser", () => {
    it("42", () => {
        const numeric = parseNumeric(profile, "42", 1, 1);
        
        expect(numeric.text).toBe("42");
        expect(numeric.number).toBe(42);
        expect(numeric.bits).toBe(8);
        expect(numeric.radix).toBe(10);
    });

    it("$42", () => {
        const numeric = parseNumeric(profile, "$42", 1, 1);
        
        expect(numeric.text).toBe("$42");
        expect(numeric.number).toBe(66);
        expect(numeric.bits).toBe(8);
        expect(numeric.radix).toBe(16);
    });

    it("42h", () => {
        const numeric = parseNumeric(profile, "42h", 1, 1);
        
        expect(numeric.text).toBe("42h");
        expect(numeric.number).toBe(66);
        expect(numeric.bits).toBe(8);
        expect(numeric.radix).toBe(16);
    });
});