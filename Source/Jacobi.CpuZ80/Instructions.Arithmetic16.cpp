#include "stdafx.h"
#include "FunctionsZ80.hpp"

// ADD HL, BC   -  ADDHL_BC_1  -  09
void OnClock_ADDHL_p_1_OF(AsyncThis* async) {}
void OnClock_ADDHL_p_1_OP(AsyncThis* async) {}

// ADD IX, BC   -  ADDIX_BC_DD2  -  DD, 09
void OnClock_ADDIX_m_DD2_OF(AsyncThis* async) {}
void OnClock_ADDIX_m_DD2_OP(AsyncThis* async) {}

// ADD IY, BC   -  ADDIY_BC_FD2  -  FD, 09
void OnClock_ADDIY_o_FD2_OF(AsyncThis* async) {}
void OnClock_ADDIY_o_FD2_OP(AsyncThis* async) {}

// ADC HL, BC   -  ADCHL_BC_ED2  -  ED, 4A
void OnClock_ADCHL_p_ED2_OF(AsyncThis* async) {}
void OnClock_ADCHL_p_ED2_OP(AsyncThis* async) {}

// SBC HL, BC   -  SBCHL_BC_ED2  -  ED, 42
void OnClock_SBCHL_p_ED2_OF(AsyncThis* async) {}
void OnClock_SBCHL_p_ED2_OP(AsyncThis* async) {}

// INC BC   -  INCBC_1  -  03
void OnClock_INCp_1_OF(AsyncThis* async) {}

// INC IX   -  INCIX_DD2  -  DD, 23
void OnClock_INCex_ex2_OF(AsyncThis* async) {}

// DEC BC   -  DECBC_1  -  0B
void OnClock_DECp_1_OF(AsyncThis* async) {}

// DEC IX   -  DECIX_DD2  -  DD, 2B
void OnClock_DECex_ex2_OF(AsyncThis* async) {}
