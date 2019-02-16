#include "stdafx.h"
#include "FunctionsZ80.hpp"

// IN A, (n)   -  INA__n__2  -  DB, n
void OnClock_INA__n__2_OF(AsyncThis* async) {}
void OnClock_INA__n__2_OD(AsyncThis* async) {}
void OnClock_INA__n__2_PR(AsyncThis* async) {}

// IN A, (C)   -  INA__C__ED2  -  ED, 78
void OnClock_INr__C__ED2_OF(AsyncThis* async) {}
void OnClock_INr__C__ED2_PR(AsyncThis* async) {}

// IN B, (C)   -  INB__C__ED2  -  ED, 40
// void OnClock_INr__C__ED2_OF(AsyncThis* async) {}
// void OnClock_INr__C__ED2_PR(AsyncThis* async) {}

// IN C, (C)   -  INC__C__ED2  -  ED, 48
// void OnClock_INr__C__ED2_OF(AsyncThis* async) {}
// void OnClock_INr__C__ED2_PR(AsyncThis* async) {}

// IN D, (C)   -  IND__C__ED2  -  ED, 50
// void OnClock_INr__C__ED2_OF(AsyncThis* async) {}
// void OnClock_INr__C__ED2_PR(AsyncThis* async) {}

// IN E, (C)   -  INE__C__ED2  -  ED, 58
// void OnClock_INr__C__ED2_OF(AsyncThis* async) {}
// void OnClock_INr__C__ED2_PR(AsyncThis* async) {}

// IN H, (C)   -  INH__C__ED2  -  ED, 60
// void OnClock_INr__C__ED2_OF(AsyncThis* async) {}
// void OnClock_INr__C__ED2_PR(AsyncThis* async) {}

// IN L, (C)   -  INL__C__ED2  -  ED, 68
// void OnClock_INr__C__ED2_OF(AsyncThis* async) {}
// void OnClock_INr__C__ED2_PR(AsyncThis* async) {}

// IN (C)   -  IN_C__ED2  -  ED, 70
void OnClock_IN_C__ED2_OF(AsyncThis* async) {}
void OnClock_IN_C__ED2_PR(AsyncThis* async) {}

// INI   -  INI_ED2  -  ED, A2
void OnClock_INI_ED2_OF(AsyncThis* async) {}
void OnClock_INI_ED2_PR(AsyncThis* async) {}
void OnClock_INI_ED2_MW(AsyncThis* async) {}

// INIR   -  INIR_ED2  -  ED, B2
void OnClock_INIR_ED2_OF(AsyncThis* async) {}
void OnClock_INIR_ED2_PR(AsyncThis* async) {}
void OnClock_INIR_ED2_MW(AsyncThis* async) {}
void OnClock_INIR_ED2_PCd(AsyncThis* async) {}

// IND   -  IND_ED2  -  ED, AA
void OnClock_IND_ED2_OF(AsyncThis* async) {}
void OnClock_IND_ED2_PR(AsyncThis* async) {}
void OnClock_IND_ED2_MW(AsyncThis* async) {}

// INDR   -  INDR_ED2  -  ED, BA
void OnClock_INDR_ED2_OF(AsyncThis* async) {}
void OnClock_INDR_ED2_PR(AsyncThis* async) {}
void OnClock_INDR_ED2_MW(AsyncThis* async) {}
void OnClock_INDR_ED2_PCd(AsyncThis* async) {}

// OUT (n), A   -  OUT_n__A_2  -  D3, n
void OnClock_OUT_n__A_2_OF(AsyncThis* async) {}
void OnClock_OUT_n__A_2_OD(AsyncThis* async) {}
void OnClock_OUT_n__A_2_PW(AsyncThis* async) {}

// OUT (C), A   -  OUT_C__A_ED2  -  ED, 79
void OnClock_OUT_C__r_ED2_OF(AsyncThis* async) {}
void OnClock_OUT_C__r_ED2_PW(AsyncThis* async) {}

// OUT (C), B   -  OUT_C__B_ED2  -  ED, 41
// void OnClock_OUT_C__r_ED2_OF(AsyncThis* async) {}
// void OnClock_OUT_C__r_ED2_PW(AsyncThis* async) {}

// OUT (C), C   -  OUT_C__C_ED2  -  ED, 49
// void OnClock_OUT_C__r_ED2_OF(AsyncThis* async) {}
// void OnClock_OUT_C__r_ED2_PW(AsyncThis* async) {}

// OUT (C), D   -  OUT_C__D_ED2  -  ED, 51
// void OnClock_OUT_C__r_ED2_OF(AsyncThis* async) {}
// void OnClock_OUT_C__r_ED2_PW(AsyncThis* async) {}

// OUT (C), E   -  OUT_C__E_ED2  -  ED, 59
// void OnClock_OUT_C__r_ED2_OF(AsyncThis* async) {}
// void OnClock_OUT_C__r_ED2_PW(AsyncThis* async) {}

// OUT (C), H   -  OUT_C__H_ED2  -  ED, 61
// void OnClock_OUT_C__r_ED2_OF(AsyncThis* async) {}
// void OnClock_OUT_C__r_ED2_PW(AsyncThis* async) {}

// OUT (C), L   -  OUT_C__L_ED2  -  ED, 69
// void OnClock_OUT_C__r_ED2_OF(AsyncThis* async) {}
// void OnClock_OUT_C__r_ED2_PW(AsyncThis* async) {}

// OUT (C), 0   -  OUT_C__0_ED2  -  ED, 71
void OnClock_OUT_C__0_ED2_OF(AsyncThis* async) {}
void OnClock_OUT_C__0_ED2_PW(AsyncThis* async) {}

// OUTI   -  OUTI_ED2  -  ED, A3
void OnClock_OUTI_ED2_OF(AsyncThis* async) {}
void OnClock_OUTI_ED2_MR(AsyncThis* async) {}
void OnClock_OUTI_ED2_PW(AsyncThis* async) {}

// OTIR   -  OTIR_ED2  -  ED, B3
void OnClock_OTIR_ED2_OF(AsyncThis* async) {}
void OnClock_OTIR_ED2_MR(AsyncThis* async) {}
void OnClock_OTIR_ED2_PW(AsyncThis* async) {}
void OnClock_OTIR_ED2_PCd(AsyncThis* async) {}

// OUTD   -  OUTD_ED2  -  ED, A3
void OnClock_OUTD_ED2_OF(AsyncThis* async) {}
void OnClock_OUTD_ED2_MR(AsyncThis* async) {}
void OnClock_OUTD_ED2_PW(AsyncThis* async) {}

// OTDR   -  OTDR_ED2  -  ED, BB
void OnClock_OTDR_ED2_OF(AsyncThis* async) {}
void OnClock_OTDR_ED2_MR(AsyncThis* async) {}
void OnClock_OTDR_ED2_PW(AsyncThis* async) {}
void OnClock_OTDR_ED2_PCd(AsyncThis* async) {}
