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
    const VariableType VariableType;
    union
    {
        const uint8_t value;
        const Registers8 Register8;
        const Registers16 Register16;
        const RegistersSP16 RegisterSP16;
        const Condition8 Condition8;
        const Condition4 Condition4;
        const Bits8 Bits8;
        const RstAddress RstAddress;
        const AluOps AluOps;
        const AluRot AluRot;
    };

} InstructionVariable;

typedef struct
{
    // how many clock pulses for this mcycle
    const uint8_t clocks;
    const fnOnClock OnClock;

} MachineCycleInfo;

typedef struct
{
    const InstructionVariable Variable1;
    const InstructionVariable Variable2;

} DecodeInfo;

typedef struct
{
    const int8_t Count;
    const int8_t AltCount;
    // max 6 M-cycles per instruction
    const MachineCycleInfo Cycles[6];

    // how to decode this instruction
    const DecodeInfo Decode;

} InstructionInfo;

typedef struct
{
    const uint8_t OpCode;
    const InstructionInfo* Instruction;

} InstructionTableEntry;
