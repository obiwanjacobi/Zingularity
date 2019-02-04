#include "stdafx.h"
#include "FunctionsZ80.hpp"

// EX DE, HL   -  EXDE_HL_1  -  EB
extern void OnClock_EXDE_HL_1_OF(AsyncThis* async) {}

// EX AF, AF'   -  EXAF_AF2_1  -  08
extern void OnClock_EXAF_AF2_1_OF(AsyncThis* async) {}

// EXX   -  EXX_1  -  D9
extern void OnClock_EXX_1_OF(AsyncThis* async) {}

// EX (SP), HL   -  EX_SP__HL_1  -  E3
extern void OnClock_EX_SP__HL_1_OF(AsyncThis* async) {}
extern void OnClock_EX_SP__HL_1_SRl(AsyncThis* async) {}
extern void OnClock_EX_SP__HL_1_SWl(AsyncThis* async) {}

// EX (SP), IX   -  EX_SP__IX_DD2  -  DD, E3
extern void OnClock_EX_SP__ex_ex2_OF(AsyncThis* async) {}
extern void OnClock_EX_SP__ex_ex2_SRh(AsyncThis* async) {}
extern void OnClock_EX_SP__ex_ex2_SRl(AsyncThis* async) {}
extern void OnClock_EX_SP__ex_ex2_SWh(AsyncThis* async) {}
extern void OnClock_EX_SP__ex_ex2_SWl(AsyncThis* async) {}

// EX (SP), IY   -  EX_SP__IY_FD2  -  FD, E3
// extern void OnClock_EX_SP__ex_ex2_OF(AsyncThis* async) {}
// extern void OnClock_EX_SP__ex_ex2_SRh(AsyncThis* async) {}
// extern void OnClock_EX_SP__ex_ex2_SRl(AsyncThis* async) {}
// extern void OnClock_EX_SP__ex_ex2_SWh(AsyncThis* async) {}
// extern void OnClock_EX_SP__ex_ex2_SWl(AsyncThis* async) {}

// LDI   -  LDI_ED2  -  ED, A0
extern void OnClock_LDI_ED2_OF(AsyncThis* async) {}
extern void OnClock_LDI_ED2_MW(AsyncThis* async) {}

// LDIR   -  LDIR_ED2  -  ED, B0
extern void OnClock_LDIR_ED2_OF(AsyncThis* async) {}
extern void OnClock_LDIR_ED2_MW(AsyncThis* async) {}

// LDD   -  LDD_ED2  -  ED, A8
extern void OnClock_LDD_ED2_OF(AsyncThis* async) {}
extern void OnClock_LDD_ED2_MW(AsyncThis* async) {}

// LDDR   -  LDDR_ED2  -  ED, B8
extern void OnClock_LDDR_ED2_OF(AsyncThis* async) {}
extern void OnClock_LDDR_ED2_MW(AsyncThis* async) {}

// CPI   -  CPI_ED2  -  ED, A1
extern void OnClock_CPI_ED2_OF(AsyncThis* async) {}
extern void OnClock_CPI_ED2_OP(AsyncThis* async) {}

// CPIR   -  CPIR_ED2  -  ED, B1
extern void OnClock_CPIR_ED2_OF(AsyncThis* async) {}
extern void OnClock_CPIR_ED2_OP(AsyncThis* async) {}

// CPD   -  CPD_ED2  -  ED, A9
extern void OnClock_CPD_ED2_OF(AsyncThis* async) {}
extern void OnClock_CPD_ED2_OP(AsyncThis* async) {}

// CPDR   -  CPDR_ED2  -  ED, B9
extern void OnClock_CPDR_ED2_OF(AsyncThis* async) {}
extern void OnClock_CPDR_ED2_OP(AsyncThis* async) {}