#include "stdafx.h"
#include "FunctionsZ80.hpp"

// DAA   -  DAA_1  -  27
extern void OnClock_DAA_1_OF(AsyncThis* async) {}

// CPL A   -  CPLA_1  -  2F
extern void OnClock_CPLA_1_OF(AsyncThis* async) {}

// NEG   -  NEG_ED2  -  ED, 44
extern void OnClock_NEG_ED2_OF(AsyncThis* async) {}

// CCF   -  CCF_1  -  3F
extern void OnClock_CCF_1_OF(AsyncThis* async) {}

// SCF   -  SCF_1  -  37
extern void OnClock_SCF_1_OF(AsyncThis* async) {}

// NOP   -  NOP_1  -  00
extern void OnClock_NOP_1_OF(AsyncThis* async) {}

// HALT   -  HALT_1  -  76
extern void OnClock_HALT_1_OF(AsyncThis* async) {}

// DI   -  DI_1  -  F3
extern void OnClock_DI_1_OF(AsyncThis* async) {}

// EI   -  EI_1  -  FB
extern void OnClock_EI_1_OF(AsyncThis* async) {}

// IM0   -  IM0_ED2  -  ED, 46
extern void OnClock_IM0_ED2_OF(AsyncThis* async) {}

// IM1   -  IM1_ED2  -  ED, 56
extern void OnClock_IM1_ED2_OF(AsyncThis* async) {}

// IM1*   -  IM1x_ED2  -  ED, 76
extern void OnClock_IM1x_ED2_OF(AsyncThis* async) {}

// IM2   -  IM2_ED2  -  ED, 5E
extern void OnClock_IM2_ED2_OF(AsyncThis* async) {}

// IM2*   -  IM2x_ED2  -  ED, 7E
extern void OnClock_IM2x_ED2_OF(AsyncThis* async) {}