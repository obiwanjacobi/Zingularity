#pragma once

#include "CpuState.h"

const InstructionInfo NMI;
const InstructionInfo INT_M0;
const InstructionInfo INT_M1;
const InstructionInfo INT_M2;

bool_t IsLastInterruptTCycle(Level level);
void CheckForInterrupt();