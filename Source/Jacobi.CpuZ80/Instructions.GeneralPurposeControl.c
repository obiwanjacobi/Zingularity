#include "FunctionsZ80.h"

// DAA   -  DAA_1  -  27
void OnClock_DAA_1_OF() {}

// CPL A   -  CPLA_1  -  2F
void OnClock_CPLA_1_OF() {}

// NEG   -  NEG_ED2  -  ED, 44
void OnClock_NEG_ED2_OF() {}

// CCF   -  CCF_1  -  3F
void OnClock_CCF_1_OF() {}

// SCF   -  SCF_1  -  37
void OnClock_SCF_1_OF() {}

// NOP   -  NOP_1  -  00
void OnClock_NOP_1_OF() {}

// HALT   -  HALT_1  -  76
void OnClock_HALT_1_OF() {}

// DI   -  DI_1  -  F3
void OnClock_DI_1_OF() {}

// EI   -  EI_1  -  FB
void OnClock_EI_1_OF() {}

// IM0   -  IM0_ED2  -  ED, 46
void OnClock_IM0_ED2_OF() {}

// IM1   -  IM1_ED2  -  ED, 56
void OnClock_IM1_ED2_OF() {}

// IM1*   -  IM1x_ED2  -  ED, 76
void OnClock_IM1x_ED2_OF() { OnClock_IM1_ED2_OF(); }

// IM2   -  IM2_ED2  -  ED, 5E
void OnClock_IM2_ED2_OF() {}

// IM2*   -  IM2x_ED2  -  ED, 7E
void OnClock_IM2x_ED2_OF() { OnClock_IM2_ED2_OF(); }