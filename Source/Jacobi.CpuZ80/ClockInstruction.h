#pragma once


#include "CpuState.h"


#ifdef __cplusplus
extern "C" {
#endif

    const InstructionInfo* LookupInstruction();
    void Decode();
    void ClearInstructionIfDone();
    bool_t InstructionIsDone();

    const InstructionInfo ExtendedReverseOpcodeFetch;

#ifdef __cplusplus
}
#endif
