function add(acc: number, input: number): number {
    return acc + input;
}

export function sum(inputs: number[]): number {
    return inputs.reduce(add, 0);
}