#pragma once

#include "../Jacobi.CpuZ80/CpuState.h"


#ifdef __cplusplus
extern "C" {
#endif


    extern CpuState _state;

    #define RegistersExOpcodes_IX 0xDD
    #define RegistersExOpcodes_IY 0xFD

#ifdef __cplusplus
}
#endif
