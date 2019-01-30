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
    Register8,
    Register16,
    RegisterSP16,
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
        Registers8 Register8;
        Registers16 Register16;
        RegistersSP16 RegisterSP16;
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
    InstructionVariable Variable1 = { VariableType::None };
    InstructionVariable Variable2 = { VariableType::None };
    
    bool nn = false;
    bool n = false;
    bool d = false;

} DecodeInfo;

typedef struct
{
    // how to decode this instruction
    //DecodeInfo Decode;

    int8_t Count;
    int8_t AltCount;
    // max 6 M-cycles per instruction
    MachineCycleInfo Cycles[6];

} InstructionInfo;

typedef struct
{
    uint8_t OpCode;
    InstructionInfo* Instruction;

} InstructionTableEntry;
