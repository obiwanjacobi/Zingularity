#pragma once

#include "Async.h"

enum class Level
{
    Floating,
    PosEdge,
    High,
    NegEdge,
    Low
};

enum class MCycle
{
    NotInitialized,
    M1,
    M2,
    M3,
    M4,
    M5,
    M6
};

enum class TCycle
{
    NotInitialized,
    T1,
    T2,
    T3,
    T4,
    T5,
    T6,
};

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

Async_Declaration(ClockTick);