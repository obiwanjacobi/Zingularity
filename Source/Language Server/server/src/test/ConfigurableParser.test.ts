import { createParserConfiguration } from "../z80asm/ConfigurableParser";
import { AssemblyNodeKind } from "../z80asm/CodeModel";

// regex's
// comments: (?:;.*)
// preprocessor: (#.*$)
// directive: \b(equ|org)\b[0-9a-zA-Z\-+$#@&*]*\b
// label: \b[a-zA-Z0-9_]*\b:|\.\b[a-zA-Z0-9_]*\b


describe("Configurable Parser", () => {
    it("regex match test", () => {
        const txt = "add a, 0   ;;; some comment\r\n;more comments";
        const regex = /(?:;.*)/gmi;
        let matches;
        
        while ((matches = regex.exec(txt)) !== null)
        {
            // This is necessary to avoid infinite loops with zero-width matches
            if (matches.index === regex.lastIndex) {
                regex.lastIndex++;
            }

            matches.forEach((match, groupIndex) => {
                expect(match).toContain(";");
            });
        }
    });

    it("ParserConfiguration json", () => {
        const json = "{\"rules\":[{\"rule\":\"(?:;.*)\", \"target\":\"Comment\"}]}";
        const config = createParserConfiguration(json);

        expect(config).not.toBeUndefined();
        expect(config.rules).not.toBeUndefined();
        expect(config.rules.length).toBe(1);
        expect(config.rules[0].rule).toBeInstanceOf(RegExp);
        expect(config.rules[0].target).toBe(AssemblyNodeKind.Comment);
    });
});