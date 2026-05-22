import instructionMap from "./InstructionMap.json";
import { Numeric, InstructionMeta } from "./CodeModel";
import { splitInstruction } from "./InstructionSplitter";
import { CompletionItemKind } from "vscode-languageserver";
import { SymbolReference, SymbolTable } from "./SymbolTable.js";

const byteLiteralKeys = ["d", "e", "n", "nn"];
const byteReplaceKeys = ["d", "e", "n", "n-lo", "n-hi"];
const ignoreKeys = [",", "(", ")"];

interface OnNavigateMap {
    (parentMap: {}, newMap: {} | undefined, part: string, key: string): void;
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

export function findMap(parts: string[]): {} {
    
    let map = undefined;

    navigateMap(parts, (_parentMap, newMap, _part:string) => {
        if (newMap) {
            map = newMap;
        }
    });

    // @ts-ignore: undefined
    return map;
}

export interface CompletionInfo {
    label: string;
    kind: CompletionItemKind;
    path: string;
    symbol?: SymbolReference;
}

export interface CompletionContext {
    symbolTable: SymbolTable;
    docUri: string;
}

export function buildCompletionList(token: string, ctx?: CompletionContext): CompletionInfo[] {
    const parts = splitInstruction(token);
    if (parts.length == 0) throw new RangeError("No Parts.");

    let path: string[] = [];
    
    const map = navigateMap(parts, (parentMap, newMap, part) => {
        if (newMap) {
            path.push(part);
        }
    });

    if (map) {
        const lastPart = parts[parts.length - 1];
        const keys = Object.keys(map)
            .filter(k => k.startsWith(lastPart.toUpperCase()));
        
        let i = keys.findIndex(k => k === "_");
        if (i >= 0) {
            // don't go there
            return [];
        }

        let mode = 0;
        i = keys.findIndex(k => k === "n");
        if (i >= 0) {
            keys.splice(i, 1);
            mode = 1;
        }
        i = keys.findIndex(k => k === "nn");
        if (i >= 0) {
            keys.splice(i, 1);
            mode = 2;
        }
        i = keys.findIndex(k => k === "e");
        if (i >= 0) {
            keys.splice(i, 1);
            mode = 3;
        }

        const pathTxt = path.join("/");
        let infos = keys.map(k => <CompletionInfo> { 
                label: k, 
                kind: CompletionItemKind.Keyword,
                path: pathTxt
            });

        if (ctx) {
            switch (mode) {
                case 1:
                    infos.push(...ctx.symbolTable.allConstants.map(c => <CompletionInfo> {
                        label: c.name,
                        kind: CompletionItemKind.Constant,
                        path: pathTxt,
                    }));
                    break;
                case 2:
                    infos.push(...ctx.symbolTable.allSymbols.map(s => <CompletionInfo> {
                        label: s.name,
                        kind: CompletionItemKind.Function,
                        path: pathTxt,
                        symbol: s.declaration
                    }));
                    break;
                case 3:
                    infos.push(...ctx.symbolTable.findSymbols(ctx.docUri).map(ds => <CompletionInfo> {
                        label: ds.symbol,
                        kind: CompletionItemKind.Function,
                        path: pathTxt,
                        symbol: ds.reference
                    }));
                    break;
                default:
                    break;
            }
        }

        return infos;
    }

    return [];
}

export function createMeta(map: {} | undefined, numeric: Numeric | undefined): InstructionMeta | undefined {
    if (map) {
        // @ts-ignore: implicit any
        const meta = map["_"];

        if (meta) {
            let bytes = [...<string[]> meta["bytes"]];
            if (numeric) {
                const n = bytes.findIndex(b => byteReplaceKeys.filter(k => k.length == 1).indexOf(b) >= 0);
                if (n >= 0) {
                    bytes[n] = numeric.loString(16);
                } else {
                    const lo = bytes.findIndex(b => b === byteReplaceKeys[3]);
                    const hi = bytes.findIndex(b => b === byteReplaceKeys[4]);
                    bytes[lo] = numeric.loString(16);
                    bytes[hi] = numeric.hiString(16);
                }
            }
            
            // @ts-ignore: implicit any
            const cycles = <number[]> meta["cycles"].map(k => Number(k));
            // @ts-ignore: implicit any
            const alt = <numerb[]> meta["altCcyles"] ? meta["altCcyles"].map(k => Number(k)) : [];
            const flags = <string[]> meta["flags"] ? meta["flags"] : [];

            return {
                bytes: bytes, 
                cycles: cycles, 
                altCycles: alt, 
                flags: flags
            };
        }
    }
    
    return undefined;
}
