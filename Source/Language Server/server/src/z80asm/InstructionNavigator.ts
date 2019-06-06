import instructionMap from "./InstructionMap.json";
import { Instruction, AsmError } from "./CodeModel.js";
import { splitInstruction } from "./InstructionSplitter.js";

const byteLiteralKeys = ["d", "e", "n", "nn"];
const hexPrefixes = ["$", "#"];

interface OnNavigateMap {
    (parentMap: {}, newMap: {} | undefined, part: string, key: string): void;
}

function navigateMapPath(path: string, onNavigate: OnNavigateMap): {} {
    const parts = splitInstruction(path);
    if (parts.length == 0) throw new Error("No Parts.");

    return navigateMap(parts, onNavigate);
}

function navigateMap(parts: string[], onNavigate: OnNavigateMap): {} {
    let map = instructionMap;
    let m = undefined;

    const testMap = (key: string, part: string): boolean => {
        // @ts-ignore: implicit any
        m = map[key];
        if (m) {
            onNavigate(map, m, part, key);
            map = m;
        }
        return !!m;
    };

    for (let i = 0; i < parts.length; i++) {
        const part = parts[i];

        if (part === "") { continue; }
        
        if (!testMap(part.toUpperCase(), part)) {
            if (testMap(byteLiteralKeys[0], part)) { continue; }
            if (testMap(byteLiteralKeys[1], part)) { continue; }
            if (testMap(byteLiteralKeys[2], part)) { continue; }
            if (testMap(byteLiteralKeys[3], part)) { continue; }
        }
    }

    return map;
}

export function findMap(path: string): {} {
    
    let map = undefined;

    navigateMapPath(path, (_parentMap, newMap, _part:string) => {
        if (newMap) {
            map = newMap;
        }
    });

    // @ts-ignore: undefined
    return map;
}

export interface CompletionInfo {
    label: string;
    path: string;
}

export function buildCompletionList(token: string): CompletionInfo[] {
    const parts = splitInstruction(token);
    if (parts.length == 0) throw new Error("No Parts.");

    let path: string[] = [];

    const map = navigateMap(parts, (parentMap, newMap, part) => {
        if (hexPrefixes.indexOf(part) >= 0) {
            return;
        }
        if (newMap) {
            path.push(part);
        }
    });

    if (map) {
        const lastPart = parts[parts.length - 1];
        return Object.keys(map)
            .filter(k => k.startsWith(lastPart.toUpperCase()))
            .map(k => <CompletionInfo> { 
                label: k, 
                path: path.join()
            });
    }

    return [];
}

export function buildInstruction(token: string, line: number, column: number): Instruction | AsmError {
    let external = "";
    let err;

    const map = navigateMapPath(token, (_parentMap, newMap, part, key) => {
        if (hexPrefixes.indexOf(part) >= 0) {
            return;
        }

        if (!newMap) {
            err = new AsmError(`Unrecognized text '${part}' (${token})`, token, line, column);
        }

        if (byteLiteralKeys.indexOf(key) >= 0 && isNaN(Number(part))) {
            external = part;
        }
    });

    if (err) {
        return err;
    }

    // @ts-ignore: implicit any
    const meta = map["_"];

    if (meta) {
        const bytes = meta["bytes"];
        // @ts-ignore: implicit any
        const cycles = meta["cycles"].map(k => Number(k));
        // @ts-ignore: implicit any
        const alt = meta["altCcyles"] ? meta["altCcyles"].map(k => Number(k)) : [];
        // @ts-ignore: implicit any
        const flags = meta["flags"] ? meta["flags"] : [];

        return new Instruction({ bytes: bytes, cycles: cycles, altCycles: alt, flags: flags}, external, token, line, column);
    }

    return new AsmError(`Unrecognized text '${token}'`, token, line, column);
}
