#include "stdafx.h"
#include "FunctionsZ80.hpp"

// LD BC, nn   -  LDBC_nn_3  -  01, n, n
extern void OnClock_LDp_nn_3_OF(AsyncThis* async) {}
extern void OnClock_LDp_nn_3_ODl(AsyncThis* async) {}
extern void OnClock_LDp_nn_3_ODh(AsyncThis* async) {}

// LD DE, nn   -  LDDE_nn_3  -  11, n, n
// extern void OnClock_LDp_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_LDp_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_LDp_nn_3_ODh(AsyncThis* async) {}

// LD HL, nn   -  LDHL_nn_3  -  21, n, n
// extern void OnClock_LDp_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_LDp_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_LDp_nn_3_ODh(AsyncThis* async) {}

// LD SP, nn   -  LDSP_nn_3  -  31, n, n
// extern void OnClock_LDp_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_LDp_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_LDp_nn_3_ODh(AsyncThis* async) {}

// LD IX, nn   -  LDIX_nn_DD4  -  DD, 21, n, n
extern void OnClock_LDex_nn_ex4_OF(AsyncThis* async) {}
extern void OnClock_LDex_nn_ex4_ODl(AsyncThis* async) {}
extern void OnClock_LDex_nn_ex4_ODh(AsyncThis* async) {}

// LD IY, nn   -  LDIY_nn_FD4  -  FD, 21, n, n
// extern void OnClock_LDex_nn_ex4_OF(AsyncThis* async) {}
// extern void OnClock_LDex_nn_ex4_ODl(AsyncThis* async) {}
// extern void OnClock_LDex_nn_ex4_ODh(AsyncThis* async) {}

// LD HL, (nn)   -  LDHL__nn__3  -  2A, n, n
extern void OnClock_LDHL__nn__3_OF(AsyncThis* async) {}
extern void OnClock_LDHL__nn__3_ODl(AsyncThis* async) {}
extern void OnClock_LDHL__nn__3_ODh(AsyncThis* async) {}
extern void OnClock_LDHL__nn__3_MRl(AsyncThis* async) {}
extern void OnClock_LDHL__nn__3_MRh(AsyncThis* async) {}

// LD BC, (nn)   -  LDBC__nn__ED4  -  ED, 4B, n, n
extern void OnClock_LDp__nn__ED4_OF(AsyncThis* async) {}
extern void OnClock_LDp__nn__ED4_ODl(AsyncThis* async) {}
extern void OnClock_LDp__nn__ED4_ODh(AsyncThis* async) {}
extern void OnClock_LDp__nn__ED4_MWl(AsyncThis* async) {}
extern void OnClock_LDp__nn__ED4_MRh(AsyncThis* async) {}

// LD DE, (nn)   -  LDDE__nn__ED4  -  ED, 5B, n, n
// extern void OnClock_LDp__nn__ED4_OF(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_ODl(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_ODh(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_MWl(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_MRh(AsyncThis* async) {}

// LD HL, (nn)   -  LDHL__nn__ED4  -  ED, 6B, n, n
// extern void OnClock_LDp__nn__ED4_OF(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_ODl(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_ODh(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_MWl(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_MRh(AsyncThis* async) {}

// LD SP, (nn)   -  LDSP__nn__ED4  -  ED, 7B, n, n
// extern void OnClock_LDp__nn__ED4_OF(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_ODl(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_ODh(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_MWl(AsyncThis* async) {}
// extern void OnClock_LDp__nn__ED4_MRh(AsyncThis* async) {}

// LD IX, (nn)   -  LDIX__nn__DD4  -  DD, 2A, n, n
extern void OnClock_LDex__nn__ex4_OF(AsyncThis* async) {}
extern void OnClock_LDex__nn__ex4_ODl(AsyncThis* async) {}
extern void OnClock_LDex__nn__ex4_ODh(AsyncThis* async) {}
extern void OnClock_LDex__nn__ex4_MRl(AsyncThis* async) {}
extern void OnClock_LDex__nn__ex4_MRh(AsyncThis* async) {}

// LD IY, (nn)   -  LDIY__nn__FD4  -  FD, 2A, n, n
// extern void OnClock_LDex__nn__ex4_OF(AsyncThis* async) {}
// extern void OnClock_LDex__nn__ex4_ODl(AsyncThis* async) {}
// extern void OnClock_LDex__nn__ex4_ODh(AsyncThis* async) {}
// extern void OnClock_LDex__nn__ex4_MRl(AsyncThis* async) {}
// extern void OnClock_LDex__nn__ex4_MRh(AsyncThis* async) {}

// LD (nn), HL   -  LD_nn__HL_3  -  22, n, n
extern void OnClock_LD_nn__HL_3_OF(AsyncThis* async) {}
extern void OnClock_LD_nn__HL_3_ODl(AsyncThis* async) {}
extern void OnClock_LD_nn__HL_3_ODh(AsyncThis* async) {}
extern void OnClock_LD_nn__HL_3_MWl(AsyncThis* async) {}
extern void OnClock_LD_nn__HL_3_MWh(AsyncThis* async) {}

// LD (nn), BC   -  LD_nn__BC_ED4  -  ED, 43, n, n
extern void OnClock_LD_nn__p_ED4_OF(AsyncThis* async) {}
extern void OnClock_LD_nn__p_ED4_ODl(AsyncThis* async) {}
extern void OnClock_LD_nn__p_ED4_ODh(AsyncThis* async) {}
extern void OnClock_LD_nn__p_ED4_MWl(AsyncThis* async) {}
extern void OnClock_LD_nn__p_ED4_MWh(AsyncThis* async) {}

// LD (nn), DE   -  LD_nn__DE_ED4  -  ED, 53, n, n
// extern void OnClock_LD_nn__p_ED4_OF(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_ODl(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_ODh(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_MWl(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_MWh(AsyncThis* async) {}

// LD (nn), HL   -  LD_nn__HL_ED4  -  ED, 63, n, n
// extern void OnClock_LD_nn__p_ED4_OF(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_ODl(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_ODh(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_MWl(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_MWh(AsyncThis* async) {}

// LD (nn), SP   -  LD_nn__SP_ED4  -  ED, 73, n, n
// extern void OnClock_LD_nn__p_ED4_OF(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_ODl(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_ODh(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_MWl(AsyncThis* async) {}
// extern void OnClock_LD_nn__p_ED4_MWh(AsyncThis* async) {}

// LD (nn), IX   -  LD_nn__IX_DD4  -  DD, 22, n, n
extern void OnClock_LD_nn__ex_ex4_OF(AsyncThis* async) {}
extern void OnClock_LD_nn__ex_ex4_ODl(AsyncThis* async) {}
extern void OnClock_LD_nn__ex_ex4_ODh(AsyncThis* async) {}
extern void OnClock_LD_nn__ex_ex4_MWl(AsyncThis* async) {}
extern void OnClock_LD_nn__ex_ex4_MWh(AsyncThis* async) {}

// LD (nn), IY   -  LD_nn__IY_FD4  -  FD, 22, n, n
// extern void OnClock_LD_nn__ex_ex4_OF(AsyncThis* async) {}
// extern void OnClock_LD_nn__ex_ex4_ODl(AsyncThis* async) {}
// extern void OnClock_LD_nn__ex_ex4_ODh(AsyncThis* async) {}
// extern void OnClock_LD_nn__ex_ex4_MWl(AsyncThis* async) {}
// extern void OnClock_LD_nn__ex_ex4_MWh(AsyncThis* async) {}

// LD SP, HL   -  LDSP_HL_1  -  F9
extern void OnClock_LDSP_HL_1_OF(AsyncThis* async) {}

// LD SP, IX   -  LDSP_IX_DD2  -  DD, F9
extern void OnClock_LDSP_ex_ex2_OF(AsyncThis* async) {}

// LD SP, IY   -  LDSP_IY_FD2  -  FD, F9
// extern void OnClock_LDSP_ex_ex2_OF(AsyncThis* async) {}

// PUSH BC   -  PUSHBC_1  -  C5
extern void OnClock_PUSHq_1_OF(AsyncThis* async) {}
extern void OnClock_PUSHq_1_SWh(AsyncThis* async) {}
extern void OnClock_PUSHq_1_SWl(AsyncThis* async) {}

// PUSH DE   -  PUSHDE_1  -  D5
// extern void OnClock_PUSHq_1_OF(AsyncThis* async) {}
// extern void OnClock_PUSHq_1_SWh(AsyncThis* async) {}
// extern void OnClock_PUSHq_1_SWl(AsyncThis* async) {}

// PUSH HL   -  PUSHHL_1  -  E5
// extern void OnClock_PUSHq_1_OF(AsyncThis* async) {}
// extern void OnClock_PUSHq_1_SWh(AsyncThis* async) {}
// extern void OnClock_PUSHq_1_SWl(AsyncThis* async) {}

// PUSH AF   -  PUSHAF_1  -  F5
// extern void OnClock_PUSHq_1_OF(AsyncThis* async) {}
// extern void OnClock_PUSHq_1_SWh(AsyncThis* async) {}
// extern void OnClock_PUSHq_1_SWl(AsyncThis* async) {}

// PUSH IX   -  PUSHIX_DD2  -  DD, E5
extern void OnClock_PUSHex_ex2_OF(AsyncThis* async) {}
extern void OnClock_PUSHex_ex2_SWh(AsyncThis* async) {}
extern void OnClock_PUSHex_ex2_SWl(AsyncThis* async) {}

// PUSH IY   -  PUSHIY_FD2  -  FD, E5
// extern void OnClock_PUSHex_ex2_OF(AsyncThis* async) {}
// extern void OnClock_PUSHex_ex2_SWh(AsyncThis* async) {}
// extern void OnClock_PUSHex_ex2_SWl(AsyncThis* async) {}

// POP BC   -  POPBC_1  -  C1
extern void OnClock_POPq_1_OF(AsyncThis* async) {}
extern void OnClock_POPq_1_SRh(AsyncThis* async) {}
extern void OnClock_POPq_1_SRl(AsyncThis* async) {}

// POP DE   -  POPDE_1  -  D1
// extern void OnClock_POPq_1_OF(AsyncThis* async) {}
// extern void OnClock_POPq_1_SRh(AsyncThis* async) {}
// extern void OnClock_POPq_1_SRl(AsyncThis* async) {}

// POP HL   -  POPHL_1  -  E1
// extern void OnClock_POPq_1_OF(AsyncThis* async) {}
// extern void OnClock_POPq_1_SRh(AsyncThis* async) {}
// extern void OnClock_POPq_1_SRl(AsyncThis* async) {}

// POP AF   -  POPAF_1  -  F1
// extern void OnClock_POPq_1_OF(AsyncThis* async) {}
// extern void OnClock_POPq_1_SRh(AsyncThis* async) {}
// extern void OnClock_POPq_1_SRl(AsyncThis* async) {}

// POP IX   -  POPIX_DD2  -  DD, E1
extern void OnClock_POPex_ex2_OF(AsyncThis* async) {}
extern void OnClock_POPex_ex2_SRh(AsyncThis* async) {}
extern void OnClock_POPex_ex2_SRl(AsyncThis* async) {}

// POP IY   -  POPIY_FD2  -  FD, E1
// extern void OnClock_POPex_ex2_OF(AsyncThis* async) {}
// extern void OnClock_POPex_ex2_SRh(AsyncThis* async) {}
// extern void OnClock_POPex_ex2_SRl(AsyncThis* async) {}