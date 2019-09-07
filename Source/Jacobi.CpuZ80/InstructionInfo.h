#pragma once

#include "Async.h"
#include "CpuZ80.h"
#include "Types.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void(*fnOnClock)();
typedef void(*fnAssignFlags)();

typedef enum 
{
    Type_None,
    Type_Registers8,
    Type_Registers16,
    Type_RegistersSP16,
    Type_Condition8,
    Type_Condition4,
    Type_Bits8,
    Type_RstAddress,
    Type_AluOps,
    Type_AluRot,
} VariableType;


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
    // max 6 M-cycles per instruction
    const MachineCycleInfo Cycles[6];

    // how to decode this instruction
    const DecodeInfo Decode;

    // set the flags for this instruction
    const fnAssignFlags AssignFlags;

} InstructionInfo;

typedef struct
{
    const uint8_t OpCode;
    const InstructionInfo* Instruction;

} InstructionTableEntry;

#ifdef __cplusplus
}
#endif
