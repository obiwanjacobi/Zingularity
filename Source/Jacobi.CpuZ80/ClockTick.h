#pragma once

#include "Async.h"
#include "CpuZ80.h"

Async_Declaration(ClockTick);

void InitClock();
void AdvanceClock();