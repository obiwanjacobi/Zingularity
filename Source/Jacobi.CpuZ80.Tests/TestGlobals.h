#pragma once

#include "../Jacobi.CpuZ80/CpuState.h"

#define ToggleClockLevel() _state.Clock.Level = _state.Clock.Level == Level_PosEdge ? Level_NegEdge : Level_PosEdge;


#ifdef __cplusplus
extern "C" {
#endif


    extern CpuState _state;
    extern AsyncThis asyncClockTick;


#ifdef __cplusplus
}
#endif
