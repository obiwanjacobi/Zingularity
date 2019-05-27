#include "stdafx.h"
#include "FunctionsZ80.hpp"

// CALL nn   -  CALLnn_3  -  CD, n, n
void OnClock_CALLnn_3_OF(AsyncThis* async) {}
void OnClock_CALLnn_3_ODl(AsyncThis* async) {}
void OnClock_CALLnn_3_ODh(AsyncThis* async) {}
void OnClock_CALLnn_3_SWh(AsyncThis* async) {}
void OnClock_CALLnn_3_SWl(AsyncThis* async) {}

// CALL NZ, nn   -  CALLNZ_nn_3  -  C4, n, n
void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// RET   -  RET_1  -  C9
void OnClock_RET_1_OF(AsyncThis* async) {}
void OnClock_RET_1_SRh(AsyncThis* async) {}
void OnClock_RET_1_SRl(AsyncThis* async) {}

// RET NZ   -  RETNZ_1  -  C0
void OnClock_RETc_1_OF(AsyncThis* async) {}
void OnClock_RETc_1_SRh(AsyncThis* async) {}
void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RETI   -  RETI_ED2  -  ED, 4D
void OnClock_RETI_ED2_OF(AsyncThis* async) {}
void OnClock_RETI_ED2_SRh(AsyncThis* async) {}
void OnClock_RETI_ED2_SRl(AsyncThis* async) {}

// RETN   -  RETN_ED2  -  ED, 45
void OnClock_RETN_ED2_OF(AsyncThis* async) {}
void OnClock_RETN_ED2_SRh(AsyncThis* async) {}
void OnClock_RETN_ED2_SRl(AsyncThis* async) {}

// RST 00   -  RST00_1  -  C7
void OnClock_RSTi_1_OF(AsyncThis* async) {}
void OnClock_RSTi_1_SWh(AsyncThis* async) {}
void OnClock_RSTi_1_SWl(AsyncThis* async) {}
