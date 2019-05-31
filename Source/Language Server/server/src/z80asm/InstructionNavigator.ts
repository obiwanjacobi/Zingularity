import instructionMap from "./InstructionMap.json";
import { Instruction, AsmError } from "./CodeModel.js";
import { splitInstruction } from "./InstructionSplitter.js";

export function buildCompletionList(token: string): string[] {
    const parts = splitInstruction(token);
    if (parts.length == 0) throw new Error("No Parts.");

    let map = instructionMap;

    // not the last part
    for (let i = 0; i < parts.length - 1; i++) {
        const part = parts[i];

        if (part === "" || part === "$" || part === "#") {
            continue;
        }

        // @ts-ignore: implicit any
        if (!map[part.toUpperCase()]) {
            // @ts-ignore: implicit any
            let m = map["d"];
            if (m) { 
                map = m;
                continue; 
            }

            // @ts-ignore: implicit any
            m = map["e"];
            if (m) { 
                map = m;
                continue; 
            }

            // @ts-ignore: implicit any
            m = map["n"];
            if (m) { 
                map = m;
                continue; 
            }

            // @ts-ignore: implicit any
            map = map["nn"];

        } else {
            // @ts-ignore: implicit any
            map = map[part.toUpperCase()];
        }
    }

    if (map) {
        const lastPart = parts[parts.length - 1];
        return Object.keys(map).filter(k => k.startsWith(lastPart));
    }

    return [];
}

export function buildInstruction(token: string, line: number, column: number): Instruction | AsmError {
    const parts = splitInstruction(token);
    if (parts.length == 0) throw new Error("No Parts.");

    let map = instructionMap;
    let external = "";

    for (let i = 0; i < parts.length; i++) {
        const part = parts[i];

        if (part === "" || part === "$" || part === "#") {
            continue;
        }

        // @ts-ignore: implicit any
        if (!map[part.toUpperCase()]) {
            // @ts-ignore: implicit any
            let m = map["d"];
            if (m) { 
                external = part;
                map = m;
                continue; 
            }

            // @ts-ignore: implicit any
            m = map["e"];
            if (m) { 
                if (isNaN(Number(part))) {
                    external = part;
                }
                map = m;
                continue; 
            }

            // @ts-ignore: implicit any
            m = map["n"];
            if (m) { 
                external = part;
                map = m;
                continue; 
            }

            // @ts-ignore: implicit any
            map = map["nn"];

            if (!map) {
                let msg = i == 0 ? `Unrecognized text '${part}' in ${token}.` : `Invalid Instruction at '${part}' in ${token}.`;
                return new AsmError(msg, line, column);
            }

            if (isNaN(Number(part))) {
                external = part;
            }
        } else {
            // @ts-ignore: implicit any
            map = map[part.toUpperCase()];
        }
    }

    // @ts-ignore: implicit any
    const meta = map["_"];

    const bytes = Object.keys(meta["bytes"]);
    const cycles = Object.keys(meta["cycles"]).map(k => Number(k));
    const alt = meta["altCcyles"] ? Object.keys(meta["altCcyles"]).map(k => Number(k)) : [];
    const flags = meta["flags"] ? Object.keys(meta["flags"]) : [];

    return new Instruction({ bytes: bytes, cycles: cycles, altCycles: alt, flags: flags}, external, token, line, column);
}