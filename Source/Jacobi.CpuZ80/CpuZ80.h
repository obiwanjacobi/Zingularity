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

Async_Declaration(ClockTick);