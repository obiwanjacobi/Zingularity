#pragma once 

#include "CpuZ80.h"
#include "InstructionInfo.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define RegisterPairUnion(hl, h, l)  \
    union {                         \
        uint16_t hl;                \
        struct { uint8_t l; uint8_t h; }; \
    }

#define RegisterPair(h, l) \
RegisterPairUnion(h##l, h, l)

#define RegisterPair2(h, l) \
RegisterPairUnion(h##l##2, h##2, l##2)

#define RegisterPairEx(ii) \
RegisterPairUnion(ii, ii##h, ii##l)


    typedef struct
    {
        // running clock info
        uint8_t M;
        uint8_t T;
        Level Level;
        TCycleLevel TL;     // increments on every level, reset on new M-Cycle

    } ClockState;

    typedef struct
    {
        // current M-Cycle index into the InstructionInfo's Cycles array.
        uint8_t MCycleIndex;
        // current instruction being executed. Can be null during OF.
        const InstructionInfo* Info;
        // captured address where instruction starts
        uint16_t InstructionAddress;

        // next index into Ext for storing exension opcodes (CB,DD,ED,FD)
        uint8_t ExtIndex;
        uint8_t Ext[2];

        // running vars of instruction
        RegisterPairEx(Address);
        RegisterPairEx(DataIn);
        RegisterPairEx(DataOut);   // result

        int8_t d;
        int8_t e;
        uint8_t n;
        uint16_t nn;

        bool_t IsCompleted;
        bool_t Alternate;

        AsyncThis Async;

    } InstructionState;


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