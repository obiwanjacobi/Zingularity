#include "stdafx.h"
#include "FunctionsZ80.hpp"

// ADD HL, BC   -  ADDHL_BC_1  -  09
extern void OnClock_ADDHL_p_1_OF(AsyncThis* async) {}
extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}
// extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}

// ADD HL, DE   -  ADDHL_DE_1  -  19
// extern void OnClock_ADDHL_p_1_OF(AsyncThis* async) {}
// extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}
// extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}

// ADD HL, HL   -  ADDHL_HL_1  -  29
// extern void OnClock_ADDHL_p_1_OF(AsyncThis* async) {}
// extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}
// extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}

// ADD HL, SP   -  ADDHL_SP_1  -  39
// extern void OnClock_ADDHL_p_1_OF(AsyncThis* async) {}
// extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}
// extern void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}

// ADD IX, BC   -  ADDIX_BC_DD2  -  DD, 09
extern void OnClock_ADDIX_m_DD2_OF(AsyncThis* async) {}
extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}

// ADD IX, DE   -  ADDIX_DE_DD2  -  DD, 19
// extern void OnClock_ADDIX_m_DD2_OF(AsyncThis* async) {}
// extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}

// ADD IX, IX   -  ADDIX_IX_DD2  -  DD, 29
// extern void OnClock_ADDIX_m_DD2_OF(AsyncThis* async) {}
// extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}

// ADD IX, SP   -  ADDIX_SP_DD2  -  DD, 39
// extern void OnClock_ADDIX_m_DD2_OF(AsyncThis* async) {}
// extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}

// ADD IY, BC   -  ADDIY_BC_FD2  -  FD, 09
extern void OnClock_ADDIY_o_FD2_OF(AsyncThis* async) {}
extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}

// ADD IY, DE   -  ADDIY_DE_FD2  -  FD, 19
// extern void OnClock_ADDIY_o_FD2_OF(AsyncThis* async) {}
// extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}

// ADD IY, IY   -  ADDIY_IY_FD2  -  FD, 29
// extern void OnClock_ADDIY_o_FD2_OF(AsyncThis* async) {}
// extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}

// ADD IY, SP   -  ADDIY_SP_FD2  -  FD, 39
// extern void OnClock_ADDIY_o_FD2_OF(AsyncThis* async) {}
// extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}
// extern void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}

// ADC HL, BC   -  ADCHL_BC_ED2  -  ED, 4A
extern void OnClock_ADCHL_p_ED2_OF(AsyncThis* async) {}
extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}

// ADC HL, DE   -  ADCHL_DE_ED2  -  ED, 5A
// extern void OnClock_ADCHL_p_ED2_OF(AsyncThis* async) {}
// extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}

// ADC HL, HL   -  ADCHL_HL_ED2  -  ED, 6A
// extern void OnClock_ADCHL_p_ED2_OF(AsyncThis* async) {}
// extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}

// ADC HL, SP   -  ADCHL_SP_ED2  -  ED, 7A
// extern void OnClock_ADCHL_p_ED2_OF(AsyncThis* async) {}
// extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}

// SBC HL, BC   -  SBCHL_BC_ED2  -  ED, 42
extern void OnClock_SBCHL_p_ED2_OF(AsyncThis* async) {}
extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}

// SBC HL, DE   -  SBCHL_DE_ED2  -  ED, 52
// extern void OnClock_SBCHL_p_ED2_OF(AsyncThis* async) {}
// extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}

// SBC HL, HL   -  SBCHL_HL_ED2  -  ED, 62
// extern void OnClock_SBCHL_p_ED2_OF(AsyncThis* async) {}
// extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}

// SBC HL, SP   -  SBCHL_SP_ED2  -  ED, 72
// extern void OnClock_SBCHL_p_ED2_OF(AsyncThis* async) {}
// extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}
// extern void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}

// INC BC   -  INCBC_1  -  03
extern void OnClock_INCp_1_OF(AsyncThis* async) {}

// INC DE   -  INCDE_1  -  13
// extern void OnClock_INCp_1_OF(AsyncThis* async) {}

// INC HL   -  INCHL_1  -  23
// extern void OnClock_INCp_1_OF(AsyncThis* async) {}

// INC SP   -  INCSP_1  -  33
// extern void OnClock_INCp_1_OF(AsyncThis* async) {}

// INC IX   -  INCIX_DD2  -  DD, 23
extern void OnClock_INCex_ex2_OF(AsyncThis* async) {}

// INC IY   -  INCIY_FD2  -  FD, 23
// extern void OnClock_INCex_ex2_OF(AsyncThis* async) {}

// DEC BC   -  DECBC_1  -  0B
extern void OnClock_DECp_1_OF(AsyncThis* async) {}

// DEC DE   -  DECDE_1  -  1B
// extern void OnClock_DECp_1_OF(AsyncThis* async) {}

// DEC HL   -  DECHL_1  -  2B
// extern void OnClock_DECp_1_OF(AsyncThis* async) {}

// DEC SP   -  DECSP_1  -  3B
// extern void OnClock_DECp_1_OF(AsyncThis* async) {}

// DEC IX   -  DECIX_DD2  -  DD, 2B
extern void OnClock_DECex_ex2_OF(AsyncThis* async) {}

// DEC IY   -  DECIY_FD2  -  FD, 2B
// extern void OnClock_DECex_ex2_OF(AsyncThis* async) {}