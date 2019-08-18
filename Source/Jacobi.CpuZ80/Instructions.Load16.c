#include "FunctionsZ80.h"

// LD BC, nn   -  LDBC_nn_3  -  01, n, n
void OnClock_LDp_nn_3_OF(AsyncThis* async) {}
void OnClock_LDp_nn_3_ODl(AsyncThis* async) {}
void OnClock_LDp_nn_3_ODh(AsyncThis* async) {}

// LD IX, nn   -  LDIX_nn_DD4  -  DD, 21, n, n
void OnClock_LDex_nn_ex4_OF(AsyncThis* async) {}
void OnClock_LDex_nn_ex4_ODl(AsyncThis* async) {}
void OnClock_LDex_nn_ex4_ODh(AsyncThis* async) {}

// LD HL, (nn)   -  LDHL__nn__3  -  2A, n, n
void OnClock_LDHL__nn__3_OF(AsyncThis* async) {}
void OnClock_LDHL__nn__3_ODl(AsyncThis* async) {}
void OnClock_LDHL__nn__3_ODh(AsyncThis* async) {}
void OnClock_LDHL__nn__3_MRl(AsyncThis* async) {}
void OnClock_LDHL__nn__3_MRh(AsyncThis* async) {}

// LD BC, (nn)   -  LDBC__nn__ED4  -  ED, 4B, n, n
void OnClock_LDp__nn__ED4_OF(AsyncThis* async) {}
void OnClock_LDp__nn__ED4_ODl(AsyncThis* async) {}
void OnClock_LDp__nn__ED4_ODh(AsyncThis* async) {}
void OnClock_LDp__nn__ED4_MWl(AsyncThis* async) {}
void OnClock_LDp__nn__ED4_MRh(AsyncThis* async) {}

// LD IX, (nn)   -  LDIX__nn__DD4  -  DD, 2A, n, n
void OnClock_LDex__nn__ex4_OF(AsyncThis* async) {}
void OnClock_LDex__nn__ex4_ODl(AsyncThis* async) {}
void OnClock_LDex__nn__ex4_ODh(AsyncThis* async) {}
void OnClock_LDex__nn__ex4_MRl(AsyncThis* async) {}
void OnClock_LDex__nn__ex4_MRh(AsyncThis* async) {}

// LD (nn), HL   -  LD_nn__HL_3  -  22, n, n
void OnClock_LD_nn__HL_3_OF(AsyncThis* async) {}
void OnClock_LD_nn__HL_3_ODl(AsyncThis* async) {}
void OnClock_LD_nn__HL_3_ODh(AsyncThis* async) {}
void OnClock_LD_nn__HL_3_MWl(AsyncThis* async) {}
void OnClock_LD_nn__HL_3_MWh(AsyncThis* async) {}

// LD (nn), BC   -  LD_nn__BC_ED4  -  ED, 43, n, n
void OnClock_LD_nn__p_ED4_OF(AsyncThis* async) {}
void OnClock_LD_nn__p_ED4_ODl(AsyncThis* async) {}
void OnClock_LD_nn__p_ED4_ODh(AsyncThis* async) {}
void OnClock_LD_nn__p_ED4_MWl(AsyncThis* async) {}
void OnClock_LD_nn__p_ED4_MWh(AsyncThis* async) {}

// LD (nn), IX   -  LD_nn__IX_DD4  -  DD, 22, n, n
void OnClock_LD_nn__ex_ex4_OF(AsyncThis* async) {}
void OnClock_LD_nn__ex_ex4_ODl(AsyncThis* async) {}
void OnClock_LD_nn__ex_ex4_ODh(AsyncThis* async) {}
void OnClock_LD_nn__ex_ex4_MWl(AsyncThis* async) {}
void OnClock_LD_nn__ex_ex4_MWh(AsyncThis* async) {}

// LD SP, HL   -  LDSP_HL_1  -  F9
void OnClock_LDSP_HL_1_OF(AsyncThis* async) {}

// LD SP, IX   -  LDSP_IX_DD2  -  DD, F9
void OnClock_LDSP_ex_ex2_OF(AsyncThis* async) {}

// LD SP, IY   -  LDSP_IY_FD2  -  FD, F9
// void OnClock_LDSP_ex_ex2_OF(AsyncThis* async) {}

// PUSH BC   -  PUSHBC_1  -  C5
void OnClock_PUSHq_1_OF(AsyncThis* async) {}
void OnClock_PUSHq_1_SWh(AsyncThis* async) {}
void OnClock_PUSHq_1_SWl(AsyncThis* async) {}

// PUSH IX   -  PUSHIX_DD2  -  DD, E5
void OnClock_PUSHex_ex2_OF(AsyncThis* async) {}
void OnClock_PUSHex_ex2_SWh(AsyncThis* async) {}
void OnClock_PUSHex_ex2_SWl(AsyncThis* async) {}

// POP BC   -  POPBC_1  -  C1
void OnClock_POPq_1_OF(AsyncThis* async) {}
void OnClock_POPq_1_SRh(AsyncThis* async) {}
void OnClock_POPq_1_SRl(AsyncThis* async) {}

// POP IX   -  POPIX_DD2  -  DD, E1
void OnClock_POPex_ex2_OF(AsyncThis* async) {}
void OnClock_POPex_ex2_SRh(AsyncThis* async) {}
void OnClock_POPex_ex2_SRl(AsyncThis* async) {}
