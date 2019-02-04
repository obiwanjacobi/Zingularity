#include "stdafx.h"
#include "FunctionsZ80.hpp"

// JP nn   -  JPnn_3  -  C3, n, n
extern void OnClock_JPnn_3_OF(AsyncThis* async) {}
extern void OnClock_JPnn_3_ODl(AsyncThis* async) {}
extern void OnClock_JPnn_3_ODh(AsyncThis* async) {}

// JP NZ, nn   -  JPNZ_nn_3  -  C2, n, n
extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JP Z, nn   -  JPZ_nn_3  -  CA, n, n
// extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JP NC, nn   -  JPNC_nn_3  -  D2, n, n
// extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JP C, nn   -  JPC_nn_3  -  DA, n, n
// extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JP PO, nn   -  JPPO_nn_3  -  E2, n, n
// extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JP PE, nn   -  JPPE_nn_3  -  EA, n, n
// extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JP P, nn   -  JPP_nn_3  -  F2, n, n
// extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JP M, nn   -  JPM_nn_3  -  FA, n, n
// extern void OnClock_JPc_nn_3_OF(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODl(AsyncThis* async) {}
// extern void OnClock_JPc_nn_3_ODh(AsyncThis* async) {}

// JR e   -  JRe_2  -  18, e
extern void OnClock_JRe_2_OF(AsyncThis* async) {}
extern void OnClock_JRe_2_OD(AsyncThis* async) {}
extern void OnClock_JRe_2_OP(AsyncThis* async) {}

// JR NZ, e   -  JRNZ_e_2  -  20, e
extern void OnClock_JRj_e_2_OF(AsyncThis* async) {}
extern void OnClock_JRj_e_2_OD(AsyncThis* async) {}
extern void OnClock_JRj_e_2_OP(AsyncThis* async) {}

// JR Z, e   -  JRZ_e_2  -  28, e
// extern void OnClock_JRj_e_2_OF(AsyncThis* async) {}
// extern void OnClock_JRj_e_2_OD(AsyncThis* async) {}
// extern void OnClock_JRj_e_2_OP(AsyncThis* async) {}

// JR NC, e   -  JRNC_e_2  -  30, e
// extern void OnClock_JRj_e_2_OF(AsyncThis* async) {}
// extern void OnClock_JRj_e_2_OD(AsyncThis* async) {}
// extern void OnClock_JRj_e_2_OP(AsyncThis* async) {}

// JR C, e   -  JRC_e_2  -  38, e
// extern void OnClock_JRj_e_2_OF(AsyncThis* async) {}
// extern void OnClock_JRj_e_2_OD(AsyncThis* async) {}
// extern void OnClock_JRj_e_2_OP(AsyncThis* async) {}

// JP HL   -  JPHL_1  -  E9
extern void OnClock_JPHL_1_OF(AsyncThis* async) {}

// JP IX   -  JPIX_DD2  -  DD, E9
extern void OnClock_JPex_ex2_OF(AsyncThis* async) {}

// JP IY   -  JPIY_FD2  -  FD, E9
// extern void OnClock_JPex_ex2_OF(AsyncThis* async) {}

// DJNZ e   -  DJNZe_2  -  10, e
extern void OnClock_DJNZe_2_OF(AsyncThis* async) {}
extern void OnClock_DJNZe_2_OD(AsyncThis* async) {}
extern void OnClock_DJNZe_2_OP(AsyncThis* async) {}