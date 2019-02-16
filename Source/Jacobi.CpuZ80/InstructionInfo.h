#pragma once

#include "Async.h"
#include "CpuZ80.h"
#include <stdint.h>

typedef void(*fnOnClock)(AsyncThis* async);

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
    const uint8_t OpCode;
    const InstructionInfo* Instruction;

} InstructionTableEntry;
