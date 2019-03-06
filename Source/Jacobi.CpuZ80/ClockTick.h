#pragma once

#include "Async.h"
#include "CpuZ80.h"

#define AssertClock(m, t, l) \
    assert(_state.Clock.M == (uint8_t)m); \
    assert(_state.Clock.T == (uint8_t)t); \
    assert(_state.Clock.Level == l);

Async_Declaration(ClockTick);

void InitClock();
void AdvanceClock();