#pragma once

#include "Async.h"
#include <stdint.h>

typedef void(*fnOnClock)(AsyncThis* async);

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

enum class Condition8
{
    NZ,
    Z,
    NC,
    C,
    PO,
    PE,
    P,
    M
};

enum class Condition4
{
    NZ,
    Z,
    NC,
    C,
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

enum class Bits8
{
    Bit0,
    Bit1,
    Bit2,
    Bit3,
    Bit4,
    Bit5,
    Bit6,
    Bit7
};

enum class RstAddress
{
    Rst00,
    Rst08,
    Rst10,
    Rst18,
    Rst20,
    Rst28,
    Rst30,
    Rst38
};


enum class VariableType
{
    None,
    Registers8,
    Registers16,
    RegistersSP16,
    Condition8,
    Condition4,
    Bits8,
    RstAddress,
    AluOps,
    AluRot,
};


typedef struct
{
    VariableType VariableType;
    union
    {
        uint8_t value;
        Registers8 Register8;
        Registers16 Register16;
        RegistersSP16 RegisterSP16;
        Condition8 Condition8;
        Condition4 Condition4;
        Bits8 Bits8;
        RstAddress RstAddress;
        AluOps AluOps;
        AluRot AluRot;
    };

} InstructionVariable;

typedef struct
{
    // how many clock pulses for this mcycle
    uint8_t clocks;
    fnOnClock OnClock;

} MachineCycleInfo;

typedef struct
{
    InstructionVariable Variable1;
    InstructionVariable Variable2;

} DecodeInfo;

typedef struct
{
    int8_t Count;
    int8_t AltCount;
    // max 6 M-cycles per instruction
    MachineCycleInfo Cycles[6];

    // how to decode this instruction
    DecodeInfo Decode;

} InstructionInfo;

typedef struct
{
    uint8_t OpCode;
    InstructionInfo* Instruction;

} InstructionTableEntry;
