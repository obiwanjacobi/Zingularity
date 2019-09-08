#include "FunctionsZ80.h"

// JP nn   -  JPnn_3  -  C3, n, n
void OnClock_JPnn_3_OF() {}
void OnClock_JPnn_3_ODl() {}
void OnClock_JPnn_3_ODh() {}

// JP NZ, nn   -  JPNZ_nn_3  -  C2, n, n
void OnClock_JPc_nn_3_OF() {}
void OnClock_JPc_nn_3_ODl() {}
void OnClock_JPc_nn_3_ODh() {}

// JR e   -  JRe_2  -  18, e
void OnClock_JRe_2_OF() {}
void OnClock_JRe_2_OD() {}
void OnClock_JRe_2_OP() {}

// JR NZ, e   -  JRNZ_e_2  -  20, e
void OnClock_JRj_e_2_OF() {}
void OnClock_JRj_e_2_OD() {}
void OnClock_JRj_e_2_OP() {}

// JP HL   -  JPHL_1  -  E9
void OnClock_JPHL_1_OF() {}

// JP IX   -  JPIX_DD2  -  DD, E9
void OnClock_JPex_ex2_OF() {}

// JP IY   -  JPIY_FD2  -  FD, E9
// void OnClock_JPex_ex2_OF() {}

// DJNZ e   -  DJNZe_2  -  10, e
void OnClock_DJNZe_2_OF() {}
void OnClock_DJNZe_2_OD() {}
void OnClock_DJNZe_2_OP() {}
