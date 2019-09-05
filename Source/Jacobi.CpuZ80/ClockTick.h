#pragma once

#include "Async.h"
#include "CpuZ80.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MaxMCycleIndex  5

#define AssertClockM(m) \
    assert(_state.Clock.M == (uint8_t)m);

#define AssertClock(m, tl) \
    assert(_state.Clock.M == (uint8_t)m && \
        _state.Clock.T == (uint8_t)(tl / 2) + (tl % 2) && \
        _state.Clock.Level == (tl % 2) ? Level_PosEdge : Level_NegEdge && \
        _state.Clock.TL == tl);

#define AssertMCycle() \
    assert(_state.Clock.M <= MaxMCycleIndex); \
    assert(_state.Instruction.MCycleIndex <= MaxMCycleIndex);


void ResetClock();
void ClockTick(AsyncThis* async, Level clockLevel);
bool_t ClockTickAsync(AsyncThis* async);


#ifdef __cplusplus
}
#endif
