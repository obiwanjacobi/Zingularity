#pragma once

#include "Async.h"
#include "CpuZ80.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MaxMCycleIndex  5

#define AssertClock(m, t, l, tl) \
    assert(_state.Clock.M == (uint8_t)m); \
    assert(_state.Clock.T == (uint8_t)t); \
    assert(_state.Clock.Level == l);      \
    assert(_state.Clock.TL == tl);

#define AssertMCycle() \
    assert(_state.Clock.M <= MaxMCycleIndex); \
    assert(_state.Instruction.MCycleIndex <= MaxMCycleIndex);


void ResetClock();
void ClockTick(AsyncThis* async, Level clockLevel);
bool_t ClockTickAsync(AsyncThis* async);


#ifdef __cplusplus
}
#endif
