#include "stdafx.h"
#include "FunctionsZ80.hpp"

// LD A, A   -  LDA_A_1  -  7F
void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, A   -  LDA_A_DD2  -  DD, 7F
void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, A   -  LDA_A_FD2  -  FD, 7F
void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, n   -  LDA_n_2  -  3E, n
void OnClock_LDr_n_2_OF(AsyncThis* async) {}
void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD A, n   -  LDA_n_DD3  -  DD, 3E, n
void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD A, n   -  LDA_n_FD3  -  FD, 3E, n
void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD A, (HL)   -  LDA__HL__1  -  7E
void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD A, (IX+d)   -  LDA__IX_d__DD3  -  DD, BE, d
void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD (HL), A   -  LD_HL__A_1  -  77
void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (IX+d), A   -  LD_IX_d__A_DD3  -  DD, 77, d
void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (HL), n   -  LD_HL__n_2  -  36, n
void OnClock_LD_HL__n_2_OF(AsyncThis* async) {}
void OnClock_LD_HL__n_2_OD(AsyncThis* async) {}
void OnClock_LD_HL__n_2_MW(AsyncThis* async) {}

// LD (IX+d), n   -  LD_IX_d__n_DD4  -  DD, 36, d, n
void OnClock_LD_ex_d__n_ex4_OF(AsyncThis* async) {}
void OnClock_LD_ex_d__n_ex4_OD(AsyncThis* async) {}
void OnClock_LD_ex_d__n_ex4_FD(AsyncThis* async) {}
void OnClock_LD_ex_d__n_ex4_MW(AsyncThis* async) {}

// LD A, (BC)   -  LDA__BC__1  -  0A
void OnClock_LDA__BC__1_OF(AsyncThis* async) {}
void OnClock_LDA__BC__1_MR(AsyncThis* async) {}

// LD A, (DE)   -  LDA__DE__1  -  1A
void OnClock_LDA__DE__1_OF(AsyncThis* async) {}
void OnClock_LDA__DE__1_MR(AsyncThis* async) {}

// LD A, (nn)   -  LDA__nn__3  -  3A, n, n
void OnClock_LDA__nn__3_OF(AsyncThis* async) {}
void OnClock_LDA__nn__3_ODl(AsyncThis* async) {}
void OnClock_LDA__nn__3_ODh(AsyncThis* async) {}
void OnClock_LDA__nn__3_MR(AsyncThis* async) {}

// LD (BC), A   -  LD_BC__A_1  -  02
void OnClock_LD_BC__A_1_OF(AsyncThis* async) {}
void OnClock_LD_BC__A_1_MW(AsyncThis* async) {}

// LD (DE), A   -  LD_DE__A_1  -  12
void OnClock_LD_DE__A_1_OF(AsyncThis* async) {}
void OnClock_LD_DE__A_1_MW(AsyncThis* async) {}

// LD (nn), A   -  LD_nn__A_3  -  32, n, n
void OnClock_LD_nn__A_3_OF(AsyncThis* async) {}
void OnClock_LD_nn__A_3_ODl(AsyncThis* async) {}
void OnClock_LD_nn__A_3_ODh(AsyncThis* async) {}
void OnClock_LD_nn__A_3_MW(AsyncThis* async) {}

// LD A, I   -  LDA_I_ED2  -  ED, 57
void OnClock_LDA_I_ED2_OF(AsyncThis* async) {}

// LD A, R   -  LDA_R_ED2  -  ED, 5F
void OnClock_LDA_R_ED2_OF(AsyncThis* async) {}

// LD I, A   -  LDI_A_ED2  -  ED, 47
void OnClock_LDI_A_ED2_OF(AsyncThis* async) {}

// LD R, A   -  LDR_A_ED2  -  ED, 4F
void OnClock_LDR_A_ED2_OF(AsyncThis* async) {}
