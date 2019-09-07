#include "FunctionsZ80.h"

// LD BC, nn   -  LDBC_nn_3  -  01, n, n
void OnClock_LDp_nn_3_OF() {}
void OnClock_LDp_nn_3_ODl() {}
void OnClock_LDp_nn_3_ODh() {}

// LD IX, nn   -  LDIX_nn_DD4  -  DD, 21, n, n
void OnClock_LDex_nn_ex4_OF() {}
void OnClock_LDex_nn_ex4_ODl() {}
void OnClock_LDex_nn_ex4_ODh() {}

// LD HL, (nn)   -  LDHL__nn__3  -  2A, n, n
void OnClock_LDHL__nn__3_OF() {}
void OnClock_LDHL__nn__3_ODl() {}
void OnClock_LDHL__nn__3_ODh() {}
void OnClock_LDHL__nn__3_MRl() {}
void OnClock_LDHL__nn__3_MRh() {}

// LD BC, (nn)   -  LDBC__nn__ED4  -  ED, 4B, n, n
void OnClock_LDp__nn__ED4_OF() {}
void OnClock_LDp__nn__ED4_ODl() {}
void OnClock_LDp__nn__ED4_ODh() {}
void OnClock_LDp__nn__ED4_MWl() {}
void OnClock_LDp__nn__ED4_MRh() {}

// LD IX, (nn)   -  LDIX__nn__DD4  -  DD, 2A, n, n
void OnClock_LDex__nn__ex4_OF() {}
void OnClock_LDex__nn__ex4_ODl() {}
void OnClock_LDex__nn__ex4_ODh() {}
void OnClock_LDex__nn__ex4_MRl() {}
void OnClock_LDex__nn__ex4_MRh() {}

// LD (nn), HL   -  LD_nn__HL_3  -  22, n, n
void OnClock_LD_nn__HL_3_OF() {}
void OnClock_LD_nn__HL_3_ODl() {}
void OnClock_LD_nn__HL_3_ODh() {}
void OnClock_LD_nn__HL_3_MWl() {}
void OnClock_LD_nn__HL_3_MWh() {}

// LD (nn), BC   -  LD_nn__BC_ED4  -  ED, 43, n, n
void OnClock_LD_nn__p_ED4_OF() {}
void OnClock_LD_nn__p_ED4_ODl() {}
void OnClock_LD_nn__p_ED4_ODh() {}
void OnClock_LD_nn__p_ED4_MWl() {}
void OnClock_LD_nn__p_ED4_MWh() {}

// LD (nn), IX   -  LD_nn__IX_DD4  -  DD, 22, n, n
void OnClock_LD_nn__ex_ex4_OF() {}
void OnClock_LD_nn__ex_ex4_ODl() {}
void OnClock_LD_nn__ex_ex4_ODh() {}
void OnClock_LD_nn__ex_ex4_MWl() {}
void OnClock_LD_nn__ex_ex4_MWh() {}

// LD SP, HL   -  LDSP_HL_1  -  F9
void OnClock_LDSP_HL_1_OF() {}

// LD SP, IX   -  LDSP_IX_DD2  -  DD, F9
void OnClock_LDSP_ex_ex2_OF() {}

// LD SP, IY   -  LDSP_IY_FD2  -  FD, F9
// void OnClock_LDSP_ex_ex2_OF() {}

// PUSH BC   -  PUSHBC_1  -  C5
void OnClock_PUSHq_1_OF() {}
void OnClock_PUSHq_1_SWh() {}
void OnClock_PUSHq_1_SWl() {}

// PUSH IX   -  PUSHIX_DD2  -  DD, E5
void OnClock_PUSHex_ex2_OF() {}
void OnClock_PUSHex_ex2_SWh() {}
void OnClock_PUSHex_ex2_SWl() {}

// POP BC   -  POPBC_1  -  C1
void OnClock_POPq_1_OF() {}
void OnClock_POPq_1_SRh() {}
void OnClock_POPq_1_SRl() {}

// POP IX   -  POPIX_DD2  -  DD, E1
void OnClock_POPex_ex2_OF() {}
void OnClock_POPex_ex2_SRh() {}
void OnClock_POPex_ex2_SRl() {}
