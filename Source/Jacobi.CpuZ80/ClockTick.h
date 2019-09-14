#pragma once

#include "Async.h"
#include "CpuZ80.h"

#ifdef __cplusplus
extern "C" {
#endif

#define AssertClockM(m) \
    Assert(_state.Clock.M == (uint8_t)m);

#define AssertClock(m, tl) \
    Assert(_state.Clock.M == (uint8_t)m); \
    Assert(_state.Clock.T == (uint8_t)(tl / 2) + (tl % 2)); \
    if (tl % 2) Assert(_state.Clock.Level == Level_PosEdge); \
    else Assert(_state.Clock.Level == Level_NegEdge); \
    Assert(_state.Clock.TL == tl);

#define AssertMCycle() \
    Assert(_state.Clock.M <= MaxMCycleIndex); \
    Assert(_state.Instruction.MCycleIndex <= MaxMCycleIndex);


void ResetClock();
void ClockTick(AsyncThis* async, Level clockLevel);
bool_t ClockTickAsync(AsyncThis* async);


#ifdef __cplusplus
}
#endif
