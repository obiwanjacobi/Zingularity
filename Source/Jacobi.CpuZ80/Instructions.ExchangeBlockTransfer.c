#include "FunctionsZ80.h"

// EX DE, HL   -  EXDE_HL_1  -  EB
void OnClock_EXDE_HL_1_OF() {}

// EX AF, AF'   -  EXAF_AF2_1  -  08
void OnClock_EXAF_AF2_1_OF() {}

// EXX   -  EXX_1  -  D9
void OnClock_EXX_1_OF() {}

// EX (SP), HL   -  EX_SP__HL_1  -  E3
void OnClock_EX_SP__HL_1_OF() {}
void OnClock_EX_SP__HL_1_SRh() {}
void OnClock_EX_SP__HL_1_SRl() {}
void OnClock_EX_SP__HL_1_SWh() {}
void OnClock_EX_SP__HL_1_SWl() {}

// EX (SP), IX   -  EX_SP__IX_DD2  -  DD, E3
void OnClock_EX_SP__ex_ex2_OF() {}
void OnClock_EX_SP__ex_ex2_SRh() {}
void OnClock_EX_SP__ex_ex2_SRl() {}
void OnClock_EX_SP__ex_ex2_SWh() {}
void OnClock_EX_SP__ex_ex2_SWl() {}

// LDI   -  LDI_ED2  -  ED, A0
void OnClock_LDI_ED2_OF() {}
void OnClock_LDI_ED2_MR() {}
void OnClock_LDI_ED2_MW() {}

// LDIR   -  LDIR_ED2  -  ED, B0
void OnClock_LDIR_ED2_OF() {}
void OnClock_LDIR_ED2_MR() {}
void OnClock_LDIR_ED2_MW() {}
void OnClock_LDIR_ED2_PCd() {}

// LDD   -  LDD_ED2  -  ED, A8
void OnClock_LDD_ED2_OF() {}
void OnClock_LDD_ED2_MR() {}
void OnClock_LDD_ED2_MW() {}

// LDDR   -  LDDR_ED2  -  ED, B8
void OnClock_LDDR_ED2_OF() {}
void OnClock_LDDR_ED2_MR() {}
void OnClock_LDDR_ED2_MW() {}
void OnClock_LDDR_ED2_PCd() {}

// CPI   -  CPI_ED2  -  ED, A1
void OnClock_CPI_ED2_OF() {}
void OnClock_CPI_ED2_MR() {}
void OnClock_CPI_ED2_OP() {}

// CPIR   -  CPIR_ED2  -  ED, B1
void OnClock_CPIR_ED2_OF() {}
void OnClock_CPIR_ED2_MR() {}
void OnClock_CPIR_ED2_OP() {}
void OnClock_CPIR_ED2_PCd() {}

// CPD   -  CPD_ED2  -  ED, A9
void OnClock_CPD_ED2_OF() {}
void OnClock_CPD_ED2_MR() {}
void OnClock_CPD_ED2_OP() {}

// CPDR   -  CPDR_ED2  -  ED, B9
void OnClock_CPDR_ED2_OF() {}
void OnClock_CPDR_ED2_MR() {}
void OnClock_CPDR_ED2_OP() {}
void OnClock_CPDR_ED2_PCd() {}
