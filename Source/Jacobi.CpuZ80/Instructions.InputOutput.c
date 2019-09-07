#include "FunctionsZ80.h"

// IN A, (n)   -  INA__n__2  -  DB, n
void OnClock_INA__n__2_OF() {}
void OnClock_INA__n__2_OD() {}
void OnClock_INA__n__2_PR() {}

// IN A, (C)   -  INA__C__ED2  -  ED, 78
void OnClock_INr__C__ED2_OF() {}
void OnClock_INr__C__ED2_PR() {}

// IN (C)   -  IN_C__ED2  -  ED, 70
void OnClock_IN_C__ED2_OF() {}
void OnClock_IN_C__ED2_PR() {}

// INI   -  INI_ED2  -  ED, A2
void OnClock_INI_ED2_OF() {}
void OnClock_INI_ED2_PR() {}
void OnClock_INI_ED2_MW() {}

// INIR   -  INIR_ED2  -  ED, B2
void OnClock_INIR_ED2_OF() {}
void OnClock_INIR_ED2_PR() {}
void OnClock_INIR_ED2_MW() {}
void OnClock_INIR_ED2_PCd() {}

// IND   -  IND_ED2  -  ED, AA
void OnClock_IND_ED2_OF() {}
void OnClock_IND_ED2_PR() {}
void OnClock_IND_ED2_MW() {}

// INDR   -  INDR_ED2  -  ED, BA
void OnClock_INDR_ED2_OF() {}
void OnClock_INDR_ED2_PR() {}
void OnClock_INDR_ED2_MW() {}
void OnClock_INDR_ED2_PCd() {}

// OUT (n), A   -  OUT_n__A_2  -  D3, n
void OnClock_OUT_n__A_2_OF() {}
void OnClock_OUT_n__A_2_OD() {}
void OnClock_OUT_n__A_2_PW() {}

// OUT (C), A   -  OUT_C__A_ED2  -  ED, 79
void OnClock_OUT_C__r_ED2_OF() {}
void OnClock_OUT_C__r_ED2_PW() {}

// OUT (C), 0   -  OUT_C__0_ED2  -  ED, 71
void OnClock_OUT_C__0_ED2_OF() {}
void OnClock_OUT_C__0_ED2_PW() {}

// OUTI   -  OUTI_ED2  -  ED, A3
void OnClock_OUTI_ED2_OF() {}
void OnClock_OUTI_ED2_MR() {}
void OnClock_OUTI_ED2_PW() {}

// OTIR   -  OTIR_ED2  -  ED, B3
void OnClock_OTIR_ED2_OF() {}
void OnClock_OTIR_ED2_MR() {}
void OnClock_OTIR_ED2_PW() {}
void OnClock_OTIR_ED2_PCd() {}

// OUTD   -  OUTD_ED2  -  ED, A3
void OnClock_OUTD_ED2_OF() {}
void OnClock_OUTD_ED2_MR() {}
void OnClock_OUTD_ED2_PW() {}

// OTDR   -  OTDR_ED2  -  ED, BB
void OnClock_OTDR_ED2_OF() {}
void OnClock_OTDR_ED2_MR() {}
void OnClock_OTDR_ED2_PW() {}
void OnClock_OTDR_ED2_PCd() {}
