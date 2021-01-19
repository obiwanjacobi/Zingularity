function add(acc: number, input: number): number {
    return acc + input;
}

export function sum(inputs: number[]): number {
    if (inputs.length === 0) { return 0; }
    return inputs.reduce(add, 0);
}

export function applyMixins(derivedCtor: any, constructors: any[]) {
    constructors.forEach((baseCtor) => {
        Object.getOwnPropertyNames(baseCtor.prototype).forEach((name) => {
        Object.defineProperty(
            derivedCtor.prototype,
            name,
            Object.getOwnPropertyDescriptor(baseCtor.prototype, name) ||
            Object.create(null)
        );
        });
    });
}