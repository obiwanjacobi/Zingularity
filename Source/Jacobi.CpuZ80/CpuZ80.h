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
    NotIninitialized,
    T1,
    T2,
    T3,
    T4,
    T5,
    T6,
};


Async_Declaration(ClockTick);