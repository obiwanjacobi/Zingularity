#include "FunctionsZ80.h"

// JP nn   -  JPnn_3  -  C3, n, n
void OnClock_JPnn_3_OF(AsyncThis* async) {}
void OnClock_JPnn_3_ODl(AsyncThis* async) {}
void OnClock_JPnn_3_ODh(AsyncThis* async) {}

// JP NZ, nn   -  JPNZ_nn_3  -  C2, n, n
void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JR e   -  JRe_2  -  18, e
void OnClock_JRe_2_OF(AsyncThis* async) {}
void OnClock_JRe_2_OD(AsyncThis* async) {}
void OnClock_JRe_2_OP(AsyncThis* async) {}

// JR NZ, e   -  JRNZ_e_2  -  20, e
void OnClock_JRj_e_2_OF(AsyncThis* async) {}
void OnClock_JRj_e_2_OD(AsyncThis* async) {}
void OnClock_JRj_e_2_OP(AsyncThis* async) {}

// JP HL   -  JPHL_1  -  E9
void OnClock_JPHL_1_OF(AsyncThis* async) {}

// JP IX   -  JPIX_DD2  -  DD, E9
void OnClock_JPex_ex2_OF(AsyncThis* async) {}

// JP IY   -  JPIY_FD2  -  FD, E9
// void OnClock_JPex_ex2_OF(AsyncThis* async) {}

// DJNZ e   -  DJNZe_2  -  10, e
void OnClock_DJNZe_2_OF(AsyncThis* async) {}
void OnClock_DJNZe_2_OD(AsyncThis* async) {}
void OnClock_DJNZe_2_OP(AsyncThis* async) {}