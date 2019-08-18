#pragma once 

#include "CpuZ80.h"
#include "InstructionInfo.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct
    {
        // running clock info
        uint8_t M;
        uint8_t T;
        Level Level;
        uint8_t TL;     // increments on every level and T change

    } ClockState;

    typedef struct
    {
        uint8_t MCycleIndex;
        const InstructionInfo* Instruction;
        uint16_t InstructionAddress;

        uint16_t Address;
        uint8_t Data;

        uint8_t ExtIndex;
        uint8_t Ext[2];

        int8_t d;
        int8_t e;
        uint8_t n;
        uint16_t nn;

        bool_t IsCompleted;
        bool_t Alternate;

        AsyncThis Async;

    } InstructionState;

#define RegisterPairUnion(hl, h, l)  \
    union {                         \
        uint16_t hl;                \
        struct { uint8_t h; uint8_t l; } _##hl; \
    }

#define RegisterPair(h, l) \
RegisterPairUnion(h##l, h, l)

#define RegisterPair2(h, l) \
RegisterPairUnion(h##l##2, h##2, l##2)

#define RegisterPairEx(ii) \
RegisterPairUnion(ii, ii##h, ii##l)

    typedef struct
    {
        RegisterPair(A, F);
        RegisterPair(B, C);
        RegisterPair(D, E);
        RegisterPair(H, L);
        RegisterPair2(A, F);
        RegisterPair2(B, C);
        RegisterPair2(D, E);
        RegisterPair2(H, L);
        RegisterPairEx(IX);
        RegisterPairEx(IY);
        RegisterPair(I, R);
        uint16_t SP;
        uint16_t PC;

    } Registers;

    typedef struct
    {
        bool_t IFF1;
        bool_t IFF2;

    } InterruptState;

    typedef struct
    {
        ClockState Clock;
        InstructionState Instruction;
        Registers Registers;
        InterruptState Interrupt;

    } CpuState;

#ifdef __cplusplus
}
#endif