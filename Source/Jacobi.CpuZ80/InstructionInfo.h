#pragma once

#include <stdint.h>

typedef void(*fnOnClock)();

enum class Registers8
{
    B,
    C,
    D,
    E,
    H,
    L,
    HL,
    A
};

enum class Registers16
{
    BC,
    DE,
    HL,
    AF
};

enum class RegistersSP16
{
    BC,
    DE,
    HL,
    SP
};

enum class RegistersIX16
{
    BC,
    DE,
    IX,
    SP
};

enum class RegistersIY16
{
    BC,
    DE,
    IY,
    SP
};

enum class AluOps
{
    ADD,
    ADC,
    SUB,
    SBC,
    AND,
    XOR,
    OR,
    CP
};

enum class AluRot
{
    RLC,
    RRC,
    RL,
    RR,
    SLA,
    SRA,
    SLL,
    SRL
};


typedef struct
{
    // how many clock pulses for this mcycle
    uint8_t clocks;
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
    // how to decode this instruction
    DecodeInfo Decode;

    int8_t LastIndex;
    int8_t LastAltIndex;
    // max 6 M-cycles per instruction
    MachineCycleInfo Cycles[6];

} InstructionInfo;

typedef struct
{
    uint8_t OpCode;
    InstructionInfo* Instruction;

} InstructionTableEntry;
