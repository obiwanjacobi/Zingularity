#pragma once

#include "Async.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum 
{
    Level_Floating,
    Level_PosEdge,
    Level_High,
    Level_NegEdge,
    Level_Low
} Level;

typedef enum 
{
    MCycle_NotInitialized,
    M1,
    M2,
    M3,
    M4,
    M5,
    M6
} MCycle;

typedef enum 
{
    TCycle_NotInitialized,
    T1,
    T2,
    T3,
    T4,
    T5,
    T6,
} TCycle;

typedef enum 
{
    Reg8_B,
    Reg8_C,
    Reg8_D,
    Reg8_E,
    Reg8_H,
    Reg8_L,
    Reg8_HL,
    Reg8_A
} Registers8;

typedef enum 
{
    Reg16_BC,
    Reg16_DE,
    Reg16_HL,
    Reg16_AF
} Registers16;

typedef enum 
{
    Reg16sp_BC,
    Reg16sp_DE,
    Reg16sp_HL,
    Reg16sp_SP
} RegistersSP16;

typedef enum 
{
    Cond8_NZ,
    Cond8_Z,
    Cond8_NC,
    Cond8_C,
    Cond8_PO,
    Cond8_PE,
    Cond8_P,
    Cond8_M
} Condition8;

typedef enum 
{
    Cond4_NZ,
    Cond4_Z,
    Cond4_NC,
    Cond4_C,
} Condition4;

typedef enum 
{
    ADD,
    ADC,
    SUB,
    SBC,
    AND,
    XOR,
    OR,
    CP
} AluOps;

typedef enum 
{
    RLC,
    RRC,
    RL,
    RR,
    SLA,
    SRA,
    SLL,
    SRL
} AluRot;

typedef enum 
{
    Bit0,
    Bit1,
    Bit2,
    Bit3,
    Bit4,
    Bit5,
    Bit6,
    Bit7
} Bits8;

typedef enum 
{
    Rst00,
    Rst08,
    Rst10,
    Rst18,
    Rst20,
    Rst28,
    Rst30,
    Rst38
} RstAddress;

void SetRegister8(Registers8 reg, uint8_t value);
uint8_t GetRegister8(Registers8 reg);

void SetRegister16(Registers16 reg, uint16_t value);
uint16_t GetRegister16(Registers16 reg);

void SetRegisterSP16(RegistersSP16 reg, uint16_t value);
uint16_t GetRegisterSP16(RegistersSP16 reg);

// based on extension opcodes
void SetRegisterEx16(uint16_t reg);
uint16_t GetRegisterEx16();

void setAddressPC();
void setAddressIR();

#ifdef __cplusplus
}
#endif
