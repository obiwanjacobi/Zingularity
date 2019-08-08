function add(acc: number, input: number): number {
    return acc + input;
}

export function sum(inputs: number[]): number {
    if (inputs.length === 0) { return 0; }
    return inputs.reduce(add, 0);
}