#pragma once

#include <stdint.h>

typedef void(*fnOnClock)();

typedef struct
{
    // how many clock pulses for this cycle
    uint8_t clocks;
    uint8_t altClocks;

    fnOnClock OnClock;

} MachineCycleInfo;

typedef struct
{
    uint8_t Bytes[4];
    // x, y, z, p and q
    // bytes
    // extensions
    // nn, n, d
} DecodeInfo;

typedef struct
{
    const char *Format;

} Mnemonic;

typedef struct
{
    // how to decode this instruction
    DecodeInfo Decode;

    // max 6 M-cycles per instruction
    MachineCycleInfo Cycles[6];

} InstructionInfo;
