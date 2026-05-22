export function splitInstruction(token: string): string[] {
    const parts: string[] = new Array<string>();
    let p: number = 0;
    let i: number = 0;

    parts.push("");

    const nextPart = () => {
        p++;
        parts.push("");
    };

    const testAddCharAsPart = (char: string, test: string): boolean => {
        if (char === test) {
            if (parts[p].length > 0) {
                nextPart();
            }
            parts[p] += char;
            nextPart();
            return true;
        }

        return false;
    };

    while (i < token.length) {
        const curChar = token.charAt(i);

        if (curChar === " " || curChar === "\t") {
            if (parts[p].length > 0) {
                nextPart();
            } else {
                i++;
            }
            continue;
        }

        if (!testAddCharAsPart(curChar, "(") &&
            !testAddCharAsPart(curChar, ")") &&
            !testAddCharAsPart(curChar, ",") &&
            !testAddCharAsPart(curChar, "-") &&
            !testAddCharAsPart(curChar, "+")) {

            parts[p] += curChar;
        }

        i++;
    }

    return parts;
}
