export function splitInstruction(token: string): string[] {
    const parts: string[] = new Array<string>();
    let p: number = 0;
    let i: number = 0;

    parts.push("");

    const nextPart = () => {
        p++;
        parts.push("");
    };

    const testAddCharAsPart = (char: string, test: string) => {
        if (char === test) {
            if (parts[p].length > 0) {
                nextPart();
            }
            parts[p] += char;
            nextPart();
        }
    };

    while (i < token.length) {
        const curChar = token.charAt(i);
        const curCode = token.charCodeAt(i);

        // A = 65, Z = 90
        // a = 97, z = 122

        if (curChar === " " || curChar === "\t") {
            if (parts[p].length > 0) {
                nextPart();
                continue;
            }
        }
        // A-Z || a-z || 0-9
        if ((curCode >= 64 && curCode <= 90) ||
            (curCode >= 97 && curCode <= 122) ||
            (curCode >= 48 && curCode <= 57)) {
            parts[p] += curChar;
        }
        testAddCharAsPart(curChar, "(");
        testAddCharAsPart(curChar, ")");
        testAddCharAsPart(curChar, ",");
        testAddCharAsPart(curChar, "+");
        // TODO: get these from NumericProfile
        testAddCharAsPart(curChar, "$");
        testAddCharAsPart(curChar, "#");

        i++;
    }

    return parts;
}
