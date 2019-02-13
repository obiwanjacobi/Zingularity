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

// CALL Z, nn   -  CALLZ_nn_3  -  CC, n, n
// void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// CALL NC, nn   -  CALLNC_nn_3  -  D4, n, n
// void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// CALL C, nn   -  CALLC_nn_3  -  DC, n, n
// void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// CALL PO, nn   -  CALLPO_nn_3  -  E4, n, n
// void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// CALL PE, nn   -  CALLPE_nn_3  -  EC, n, n
// void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// CALL P, nn   -  CALLP_nn_3  -  F4, n, n
// void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// CALL M, nn   -  CALLM_nn_3  -  FC, n, n
// void OnClock_CALLc_nn_3_OF(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODl(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_ODh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWh(AsyncThis* async) {}
// void OnClock_CALLc_nn_3_SWl(AsyncThis* async) {}

// RET   -  RET_1  -  C9
void OnClock_RET_1_OF(AsyncThis* async) {}

// RET NZ   -  RETNZ_1  -  C0
void OnClock_RETc_1_OF(AsyncThis* async) {}
void OnClock_RETc_1_SRh(AsyncThis* async) {}
void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RET Z   -  RETZ_1  -  C8
// void OnClock_RETc_1_OF(AsyncThis* async) {}
// void OnClock_RETc_1_SRh(AsyncThis* async) {}
// void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RET NC   -  RETNC_1  -  D0
// void OnClock_RETc_1_OF(AsyncThis* async) {}
// void OnClock_RETc_1_SRh(AsyncThis* async) {}
// void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RET C   -  RETC_1  -  D8
// void OnClock_RETc_1_OF(AsyncThis* async) {}
// void OnClock_RETc_1_SRh(AsyncThis* async) {}
// void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RET PO   -  RETPO_1  -  E0
// void OnClock_RETc_1_OF(AsyncThis* async) {}
// void OnClock_RETc_1_SRh(AsyncThis* async) {}
// void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RET PE   -  RETPE_1  -  E8
// void OnClock_RETc_1_OF(AsyncThis* async) {}
// void OnClock_RETc_1_SRh(AsyncThis* async) {}
// void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RET P   -  RETP_1  -  F0
// void OnClock_RETc_1_OF(AsyncThis* async) {}
// void OnClock_RETc_1_SRh(AsyncThis* async) {}
// void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RET M   -  RETM_1  -  F8
// void OnClock_RETc_1_OF(AsyncThis* async) {}
// void OnClock_RETc_1_SRh(AsyncThis* async) {}
// void OnClock_RETc_1_SRl(AsyncThis* async) {}

// RETI   -  RETI_ED2  -  ED, 4D
void OnClock_RETI_ED2_OF(AsyncThis* async) {}

// RETN   -  RETN_ED2  -  ED, 45
void OnClock_RETN_ED2_OF(AsyncThis* async) {}

// RST 00   -  RST00_1  -  C7
void OnClock_RSTi_1_OF(AsyncThis* async) {}
void OnClock_RSTi_1_SWh(AsyncThis* async) {}
void OnClock_RSTi_1_SWl(AsyncThis* async) {}

// RST 08   -  RST08_1  -  CF
// void OnClock_RSTi_1_OF(AsyncThis* async) {}
// void OnClock_RSTi_1_SWh(AsyncThis* async) {}
// void OnClock_RSTi_1_SWl(AsyncThis* async) {}

// RST 10   -  RST10_1  -  D7
// void OnClock_RSTi_1_OF(AsyncThis* async) {}
// void OnClock_RSTi_1_SWh(AsyncThis* async) {}
// void OnClock_RSTi_1_SWl(AsyncThis* async) {}

// RST 18   -  RST18_1  -  DF
// void OnClock_RSTi_1_OF(AsyncThis* async) {}
// void OnClock_RSTi_1_SWh(AsyncThis* async) {}
// void OnClock_RSTi_1_SWl(AsyncThis* async) {}

// RST 20   -  RST20_1  -  E7
// void OnClock_RSTi_1_OF(AsyncThis* async) {}
// void OnClock_RSTi_1_SWh(AsyncThis* async) {}
// void OnClock_RSTi_1_SWl(AsyncThis* async) {}

// RST 28   -  RST28_1  -  EF
// void OnClock_RSTi_1_OF(AsyncThis* async) {}
// void OnClock_RSTi_1_SWh(AsyncThis* async) {}
// void OnClock_RSTi_1_SWl(AsyncThis* async) {}

// RST 30   -  RST30_1  -  F7
// void OnClock_RSTi_1_OF(AsyncThis* async) {}
// void OnClock_RSTi_1_SWh(AsyncThis* async) {}
// void OnClock_RSTi_1_SWl(AsyncThis* async) {}

// RST 38   -  RST38_1  -  FF
// void OnClock_RSTi_1_OF(AsyncThis* async) {}
// void OnClock_RSTi_1_SWh(AsyncThis* async) {}
// void OnClock_RSTi_1_SWl(AsyncThis* async) {}