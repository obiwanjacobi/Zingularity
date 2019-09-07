#include "FunctionsZ80.h"

// CALL nn   -  CALLnn_3  -  CD, n, n
void OnClock_CALLnn_3_OF() {}
void OnClock_CALLnn_3_ODl() {}
void OnClock_CALLnn_3_ODh() {}
void OnClock_CALLnn_3_SWh() {}
void OnClock_CALLnn_3_SWl() {}

// CALL NZ, nn   -  CALLNZ_nn_3  -  C4, n, n
void OnClock_CALLc_nn_3_OF() {}
void OnClock_CALLc_nn_3_ODl() {}
void OnClock_CALLc_nn_3_ODh() {}
void OnClock_CALLc_nn_3_SWh() {}
void OnClock_CALLc_nn_3_SWl() {}

// RET   -  RET_1  -  C9
void OnClock_RET_1_OF() {}
void OnClock_RET_1_SRh() {}
void OnClock_RET_1_SRl() {}

// RET NZ   -  RETNZ_1  -  C0
void OnClock_RETc_1_OF() {}
void OnClock_RETc_1_SRh() {}
void OnClock_RETc_1_SRl() {}

// RETI   -  RETI_ED2  -  ED, 4D
void OnClock_RETI_ED2_OF() {}
void OnClock_RETI_ED2_SRh() {}
void OnClock_RETI_ED2_SRl() {}

// RETN   -  RETN_ED2  -  ED, 45
void OnClock_RETN_ED2_OF() {}
void OnClock_RETN_ED2_SRh() {}
void OnClock_RETN_ED2_SRl() {}

// RST 00   -  RST00_1  -  C7
void OnClock_RSTi_1_OF() {}
void OnClock_RSTi_1_SWh() {}
void OnClock_RSTi_1_SWl() {}
