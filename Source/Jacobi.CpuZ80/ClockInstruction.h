#pragma once


#include "CpuState.h"


#ifdef __cplusplus
extern "C" {
#endif

    const InstructionInfo* LookupInstruction();
    void Decode();

    void ClearInstructionIfDone();
    bool_t SetIfInstructionIsDone();
    bool_t InstructionIsDone();
    bool_t IsLastInstructionTCycle(Level level);

    const InstructionInfo ExtendedReverseOpcodeFetch;

#ifdef __cplusplus
}
#endif
