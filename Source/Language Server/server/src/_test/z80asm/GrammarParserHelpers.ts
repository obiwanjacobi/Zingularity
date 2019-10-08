import { AssemblyNode } from "../../z80asm/CodeModel";

export function nodeAs<T extends AssemblyNode>(nodes: AssemblyNode[], index: number): T
{
    if (nodes.length > index) {
        return <T> nodes[index];
    }
    throw new RangeError();
}