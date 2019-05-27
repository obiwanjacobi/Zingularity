import instructionMap from "./InstructionMap.json";
import { Instruction, AsmError, InstructionMeta } from "./CodeModel.js";
import { isNumber } from "util";
import { splitInstruction } from "./InstructionSplitter.js";



export function buildInstruction(token: string, index: number, line: number, column: number): Instruction | AsmError {
    const parts = splitInstruction(token.toUpperCase());
    if (parts.length == 0) throw new Error("No Parts.");

    let map = instructionMap;
    for (let i = 0; i < parts.length; i++) {
        const part = parts[i];

        if (part === '$' || part === '#') {
            continue;
        }

        if (isNaN(Number(part))) {
            // @ts-ignore: implicit any
            map = map[part];
            if (!map) {
                let msg = i == 0 ? `Unrecognized text '${part}' in ${token}.` : `Invalid Instruction at '${part}' in ${token}.`;
                return new AsmError(msg, index, line, column);
            }
        } else {
            // @ts-ignore: implicit any
            let m = map["d"];
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

            if (!map) {
                let msg = `Expected a number in ${token}, instead found '${part}'.`;
                return new AsmError(msg, index, line, column);
            }
        }
    }

    // @ts-ignore: implicit any
    const meta = map["_"];

    const bytes = Object.keys(meta["bytes"]);
    const cycles = Object.keys(meta["cycles"]).map(k => Number(k));
    const alt = meta["altCcyles"] ? Object.keys(meta["altCcyles"]).map(k => Number(k)) : [];
    const flags = meta["flags"] ? Object.keys(meta["flags"]) : [];

    return new Instruction({ bytes: bytes, cycles: cycles, altCycles: alt, flags: flags}, token, index, line, column);
}