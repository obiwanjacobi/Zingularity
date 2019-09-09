#pragma once

#include "../Jacobi.CpuZ80/CpuState.h"


#ifdef __cplusplus
extern "C" {
#endif


    extern CpuState _state;

    #define RegistersExOpcodesSize 3
    extern const uint8_t RegistersExOpcodes[];

#ifdef __cplusplus
}
#endif
