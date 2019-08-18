#include "stdafx.h"
#include "FunctionsZ80.h"

// EX DE, HL   -  EXDE_HL_1  -  EB
void OnClock_EXDE_HL_1_OF(AsyncThis* async) {}

// EX AF, AF'   -  EXAF_AF2_1  -  08
void OnClock_EXAF_AF2_1_OF(AsyncThis* async) {}

// EXX   -  EXX_1  -  D9
void OnClock_EXX_1_OF(AsyncThis* async) {}

// EX (SP), HL   -  EX_SP__HL_1  -  E3
void OnClock_EX_SP__HL_1_OF(AsyncThis* async) {}
void OnClock_EX_SP__HL_1_SRh(AsyncThis* async) {}
void OnClock_EX_SP__HL_1_SRl(AsyncThis* async) {}
void OnClock_EX_SP__HL_1_SWh(AsyncThis* async) {}
void OnClock_EX_SP__HL_1_SWl(AsyncThis* async) {}

// EX (SP), IX   -  EX_SP__IX_DD2  -  DD, E3
void OnClock_EX_SP__ex_ex2_OF(AsyncThis* async) {}
void OnClock_EX_SP__ex_ex2_SRh(AsyncThis* async) {}
void OnClock_EX_SP__ex_ex2_SRl(AsyncThis* async) {}
void OnClock_EX_SP__ex_ex2_SWh(AsyncThis* async) {}
void OnClock_EX_SP__ex_ex2_SWl(AsyncThis* async) {}

// LDI   -  LDI_ED2  -  ED, A0
void OnClock_LDI_ED2_OF(AsyncThis* async) {}
void OnClock_LDI_ED2_MR(AsyncThis* async) {}
void OnClock_LDI_ED2_MW(AsyncThis* async) {}

// LDIR   -  LDIR_ED2  -  ED, B0
void OnClock_LDIR_ED2_OF(AsyncThis* async) {}
void OnClock_LDIR_ED2_MR(AsyncThis* async) {}
void OnClock_LDIR_ED2_MW(AsyncThis* async) {}
void OnClock_LDIR_ED2_PCd(AsyncThis* async) {}

// LDD   -  LDD_ED2  -  ED, A8
void OnClock_LDD_ED2_OF(AsyncThis* async) {}
void OnClock_LDD_ED2_MR(AsyncThis* async) {}
void OnClock_LDD_ED2_MW(AsyncThis* async) {}

// LDDR   -  LDDR_ED2  -  ED, B8
void OnClock_LDDR_ED2_OF(AsyncThis* async) {}
void OnClock_LDDR_ED2_MR(AsyncThis* async) {}
void OnClock_LDDR_ED2_MW(AsyncThis* async) {}
void OnClock_LDDR_ED2_PCd(AsyncThis* async) {}

// CPI   -  CPI_ED2  -  ED, A1
void OnClock_CPI_ED2_OF(AsyncThis* async) {}
void OnClock_CPI_ED2_MR(AsyncThis* async) {}
void OnClock_CPI_ED2_OP(AsyncThis* async) {}

// CPIR   -  CPIR_ED2  -  ED, B1
void OnClock_CPIR_ED2_OF(AsyncThis* async) {}
void OnClock_CPIR_ED2_MR(AsyncThis* async) {}
void OnClock_CPIR_ED2_OP(AsyncThis* async) {}
void OnClock_CPIR_ED2_PCd(AsyncThis* async) {}

// CPD   -  CPD_ED2  -  ED, A9
void OnClock_CPD_ED2_OF(AsyncThis* async) {}
void OnClock_CPD_ED2_MR(AsyncThis* async) {}
void OnClock_CPD_ED2_OP(AsyncThis* async) {}

// CPDR   -  CPDR_ED2  -  ED, B9
void OnClock_CPDR_ED2_OF(AsyncThis* async) {}
void OnClock_CPDR_ED2_MR(AsyncThis* async) {}
void OnClock_CPDR_ED2_OP(AsyncThis* async) {}
void OnClock_CPDR_ED2_PCd(AsyncThis* async) {}