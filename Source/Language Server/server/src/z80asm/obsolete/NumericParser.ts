import { Numeric, Radix } from "../CodeModel";

export interface NumericInfo {
    prefix: string[];
    postfix: string[];
}

export interface NumericProfile {
    bin: NumericInfo;
    dec: NumericInfo;
    oct: NumericInfo;
    hex: NumericInfo;
}

function matchStart(token: string, tests: string[]): string {
    for (let i = 0; i < tests.length; i++) {
        const matchThis = tests[i];
        if (matchThis.length > 0 && token.startsWith(matchThis)) {
            return matchThis;
        }
    }

    return "";
}

function matchEnd(token: string, tests: string[]): string {
    for (let i = 0; i < tests.length; i++) {
        const matchThis = tests[i];
        if (matchThis.length > 0 && token.endsWith(matchThis)) {
            return matchThis;
        }
    }

    return "";
}

function parsePrefix(profile: NumericProfile, token: string): { token: string, radix: number } {
    let prefix = matchStart(token, profile.bin.prefix);
    if (prefix.length > 0) {
        return { token: token.slice(prefix.length), radix: 2 };
    }

    prefix = matchStart(token, profile.oct.prefix);
    if (prefix.length > 0) {
        return { token: token.slice(prefix.length), radix: 8 };
    }

    prefix = matchStart(token, profile.dec.prefix);
    if (prefix.length > 0) {
        return { token: token.slice(prefix.length), radix: 10 };
    }

    prefix = matchStart(token, profile.hex.prefix);
    if (prefix.length > 0) {
        return { token: token.slice(prefix.length), radix: 16 };
    }

    return { token: token, radix: 0 };
}

function parsePostfix(profile: NumericProfile, token: string): { token: string, radix: number } {
    let postfix = matchEnd(token, profile.bin.postfix);
    if (postfix.length > 0) {
        return { token: token.slice(0, token.length - postfix.length), radix: 2 };
    }

    postfix = matchEnd(token, profile.oct.postfix);
    if (postfix.length > 0) {
        return { token: token.slice(0, token.length - postfix.length), radix: 8 };
    }

    postfix = matchEnd(token, profile.dec.postfix);
    if (postfix.length > 0) {
        return { token: token.slice(0, token.length - postfix.length), radix: 10 };
    }

    postfix = matchEnd(token, profile.hex.postfix);
    if (postfix.length > 0) {
        return { token: token.slice(0, token.length - postfix.length), radix: 16 };
    }

    return { token: token, radix: 0 };
}

export function parseNumeric(profile: NumericProfile, numericToken: string, line: number, column: number): Numeric {
    let token: string = "";
    let radix: number = 0;
    
    ({ token, radix } = parsePrefix(profile, numericToken));
    if (radix === 0) {
        ({ token, radix } = parsePostfix(profile, numericToken));
    }
    if (radix === 0) { radix = 10; }

    const number = parseInt(token, radix);

    return new Numeric(number, <Radix> radix, numericToken, line, column);
}