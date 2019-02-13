#include "stdafx.h"
#include "FunctionsZ80.hpp"

// ADD A, A   -  ADDA_A_1  -  87
void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, B   -  ADDA_B_1  -  80
// void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, C   -  ADDA_C_1  -  81
// void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, D   -  ADDA_D_1  -  82
// void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, E   -  ADDA_E_1  -  83
// void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, H   -  ADDA_H_1  -  84
// void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, L   -  ADDA_L_1  -  85
// void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, A   -  ADDA_A_DD2  -  DD, 87
void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, B   -  ADDA_B_DD2  -  DD, 80
// void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, C   -  ADDA_C_DD2  -  DD, 81
// void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, D   -  ADDA_D_DD2  -  DD, 82
// void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, E   -  ADDA_E_DD2  -  DD, 83
// void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, IXh   -  ADDA_IXh_DD2  -  DD, 84
// void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, IXl   -  ADDA_IXl_DD2  -  DD, 85
// void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, A   -  ADDA_A_FD2  -  FD, 87
void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, B   -  ADDA_B_FD2  -  FD, 80
// void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, C   -  ADDA_C_FD2  -  FD, 81
// void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, D   -  ADDA_D_FD2  -  FD, 82
// void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, E   -  ADDA_E_FD2  -  FD, 83
// void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, IYh   -  ADDA_IYh_FD2  -  FD, 84
// void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, IYl   -  ADDA_IYl_FD2  -  FD, 85
// void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, n   -  ADDA_n_2  -  C6, n
void OnClock_ADDA_n_2_OF(AsyncThis* async) {}
void OnClock_ADDA_n_2_OD(AsyncThis* async) {}

// ADD A, (HL)   -  ADDA__HL__1  -  86
void OnClock_ADDA__HL__1_OF(AsyncThis* async) {}

// ADD A, (IX+d)   -  ADDA__IX_d__DD3  -  DD, 86, d
void OnClock_ADDA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_ADDA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_ADDA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_ADDA__ex_d__ex3_MR(AsyncThis* async) {}

// ADD A, (IY+d)   -  ADDA__IY_d__FD3  -  FD, 86, d
// void OnClock_ADDA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_ADDA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_ADDA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_ADDA__ex_d__ex3_MR(AsyncThis* async) {}

// ADC A, A   -  ADCA_A_1  -  8F
void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, B   -  ADCA_B_1  -  88
// void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, C   -  ADCA_C_1  -  89
// void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, D   -  ADCA_D_1  -  8A
// void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, E   -  ADCA_E_1  -  8B
// void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, H   -  ADCA_H_1  -  8C
// void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, L   -  ADCA_L_1  -  8D
// void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, A   -  ADCA_A_DD2  -  DD, 8F
void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, B   -  ADCA_B_DD2  -  DD, 88
// void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, C   -  ADCA_C_DD2  -  DD, 89
// void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, D   -  ADCA_D_DD2  -  DD, 8A
// void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, E   -  ADCA_E_DD2  -  DD, 8B
// void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, IXh   -  ADCA_IXh_DD2  -  DD, 8C
// void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, IXl   -  ADCA_IXl_DD2  -  DD, 8D
// void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, A   -  ADCA_A_FD2  -  FD, 8F
void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

// ADC A, B   -  ADCA_B_FD2  -  FD, 88
// void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

// ADC A, C   -  ADCA_C_FD2  -  FD, 89
// void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

// ADC A, D   -  ADCA_D_FD2  -  FD, 8A
// void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

// ADC A, E   -  ADCA_E_FD2  -  FD, 8B
// void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

// ADC A, IYh   -  ADCA_IYh_FD2  -  FD, 8C
// void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

// ADC A, IYl   -  ADCA_IYl_FD2  -  FD, 8D
// void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

// ADC A, n   -  ADCA_n_2  -  CE, n
void OnClock_ADCA_n_2_OF(AsyncThis* async) {}
void OnClock_ADCA_n_2_OD(AsyncThis* async) {}

// ADC A, (HL)   -  ADCA__HL__1  -  8E
void OnClock_ADCA__HL__1_OF(AsyncThis* async) {}

// ADC A, (IX+d)   -  ADCA__IX_d__DD3  -  DD, 8E, d
void OnClock_ADCA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_ADCA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_ADCA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_ADCA__ex_d__ex3_MR(AsyncThis* async) {}

// ADC A, (IY+d)   -  ADCA__IY_d__FD3  -  FD, 8E, d
// void OnClock_ADCA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_ADCA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_ADCA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_ADCA__ex_d__ex3_MR(AsyncThis* async) {}

// SUB A, A   -  SUBA_A_1  -  97
void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, B   -  SUBA_B_1  -  90
// void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, C   -  SUBA_C_1  -  91
// void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, D   -  SUBA_D_1  -  92
// void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, E   -  SUBA_E_1  -  93
// void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, H   -  SUBA_H_1  -  94
// void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, L   -  SUBA_L_1  -  95
// void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, A   -  SUBA_A_DD2  -  DD, 97
void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, B   -  SUBA_B_DD2  -  DD, 90
// void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, C   -  SUBA_C_DD2  -  DD, 91
// void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, D   -  SUBA_D_DD2  -  DD, 92
// void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, E   -  SUBA_E_DD2  -  DD, 93
// void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, IXh   -  SUBA_IXh_DD2  -  DD, 94
// void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, IXl   -  SUBA_IXl_DD2  -  DD, 95
// void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, A   -  SUBA_A_FD2  -  FD, 97
void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, B   -  SUBA_B_FD2  -  FD, 90
// void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, C   -  SUBA_C_FD2  -  FD, 91
// void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, D   -  SUBA_D_FD2  -  FD, 92
// void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, E   -  SUBA_E_FD2  -  FD, 93
// void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, IYh   -  SUBA_IYh_FD2  -  FD, 94
// void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, IYl   -  SUBA_IYl_FD2  -  FD, 95
// void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, n   -  SUBA_n_2  -  8E, n
void OnClock_SUBA_n_2_OF(AsyncThis* async) {}
void OnClock_SUBA_n_2_OD(AsyncThis* async) {}

// SUB A, (HL)   -  SUBA__HL__1  -  96
void OnClock_SUBA__HL__1_OF(AsyncThis* async) {}

// SUB A, (IX+d)   -  SUBA__IX_d__DD3  -  DD, 96, d
void OnClock_SUBA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_SUBA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_SUBA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_SUBA__ex_d__ex3_MR(AsyncThis* async) {}

// SUB A, (IY+d)   -  SUBA__IY_d__FD3  -  FD, 96, d
// void OnClock_SUBA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_SUBA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_SUBA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_SUBA__ex_d__ex3_MR(AsyncThis* async) {}

// SBC A, A   -  SBCA_A_1  -  9F
void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, B   -  SBCA_B_1  -  98
// void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, C   -  SBCA_C_1  -  99
// void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, D   -  SBCA_D_1  -  9A
// void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, E   -  SBCA_E_1  -  9B
// void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, H   -  SBCA_H_1  -  9C
// void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, L   -  SBCA_L_1  -  9D
// void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, A   -  SBCA_A_DD2  -  DD, 9F
void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, B   -  SBCA_B_DD2  -  DD, 98
// void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, C   -  SBCA_C_DD2  -  DD, 99
// void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, D   -  SBCA_D_DD2  -  DD, 9A
// void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, E   -  SBCA_E_DD2  -  DD, 9B
// void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, IXh   -  SBCA_IXh_DD2  -  DD, 9C
// void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, IXl   -  SBCA_IXl_DD2  -  DD, 9D
// void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, A   -  SBCA_A_FD2  -  FD, 9F
void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, B   -  SBCA_B_FD2  -  FD, 98
// void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, C   -  SBCA_C_FD2  -  FD, 99
// void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, D   -  SBCA_D_FD2  -  FD, 9A
// void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, E   -  SBCA_E_FD2  -  FD, 9B
// void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, IYh   -  SBCA_IYh_FD2  -  FD, 9C
// void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, IYl   -  SBCA_IYl_FD2  -  FD, 9D
// void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, n   -  SBCA_n_2  -  DE, n
void OnClock_SBCA_n_2_OF(AsyncThis* async) {}
void OnClock_SBCA_n_2_OD(AsyncThis* async) {}

// SBC A, (HL)   -  SBCA__HL__1  -  9E
void OnClock_SBCA__HL__1_OF(AsyncThis* async) {}

// SBC A, (IX+d)   -  SBCA__IX_d__DD3  -  DD, 9E, d
void OnClock_SBCA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_SBCA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_SBCA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_SBCA__ex_d__ex3_MR(AsyncThis* async) {}

// SBC A, (IY+d)   -  SBCA__IY_d__FD3  -  FD, 9E, d
// void OnClock_SBCA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_SBCA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_SBCA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_SBCA__ex_d__ex3_MR(AsyncThis* async) {}

// AND A, A   -  ANDA_A_1  -  A7
void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, B   -  ANDA_B_1  -  A0
// void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, C   -  ANDA_C_1  -  A1
// void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, D   -  ANDA_D_1  -  A2
// void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, E   -  ANDA_E_1  -  A3
// void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, H   -  ANDA_H_1  -  A4
// void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, L   -  ANDA_L_1  -  A5
// void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, A   -  ANDA_A_DD2  -  DD, A7
void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, B   -  ANDA_B_DD2  -  DD, A0
// void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, C   -  ANDA_C_DD2  -  DD, A1
// void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, D   -  ANDA_D_DD2  -  DD, A2
// void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, E   -  ANDA_E_DD2  -  DD, A3
// void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, IXh   -  ANDA_IXh_DD2  -  DD, A4
// void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, IXl   -  ANDA_IXl_DD2  -  DD, A5
// void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, A   -  ANDA_A_FD2  -  FD, A7
void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, B   -  ANDA_B_FD2  -  FD, A0
// void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, C   -  ANDA_C_FD2  -  FD, A1
// void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, D   -  ANDA_D_FD2  -  FD, A2
// void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, E   -  ANDA_E_FD2  -  FD, A3
// void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, IYh   -  ANDA_IYh_FD2  -  FD, A4
// void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, IYl   -  ANDA_IYl_FD2  -  FD, A5
// void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, n   -  ANDA_n_2  -  E6, n
void OnClock_ANDA_n_2_OF(AsyncThis* async) {}
void OnClock_ANDA_n_2_OD(AsyncThis* async) {}

// AND A, (HL)   -  ANDA__HL__1  -  A6
void OnClock_ANDA__HL__1_OF(AsyncThis* async) {}

// AND A, (IX+d)   -  ANDA__IX_d__DD3  -  DD, A6, d
void OnClock_ANDA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_ANDA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_ANDA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_ANDA__ex_d__ex3_MR(AsyncThis* async) {}

// AND A, (IY+d)   -  ANDA__IY_d__FD3  -  FD, A6, d
// void OnClock_ANDA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_ANDA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_ANDA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_ANDA__ex_d__ex3_MR(AsyncThis* async) {}

// OR A, A   -  ORA_A_1  -  B7
void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, B   -  ORA_B_1  -  B0
// void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, C   -  ORA_C_1  -  B1
// void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, D   -  ORA_D_1  -  B2
// void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, E   -  ORA_E_1  -  B3
// void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, H   -  ORA_H_1  -  B4
// void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, L   -  ORA_L_1  -  B5
// void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, A   -  ORA_A_DD2  -  DD, B7
void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, B   -  ORA_B_DD2  -  DD, B0
// void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, C   -  ORA_C_DD2  -  DD, B1
// void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, D   -  ORA_D_DD2  -  DD, B2
// void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, E   -  ORA_E_DD2  -  DD, B3
// void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, IXh   -  ORA_IXh_DD2  -  DD, B4
// void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, IXl   -  ORA_IXl_DD2  -  DD, B5
// void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, A   -  ORA_A_FD2  -  FD, B7
void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, B   -  ORA_B_FD2  -  FD, B0
// void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, C   -  ORA_C_FD2  -  FD, B1
// void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, D   -  ORA_D_FD2  -  FD, B2
// void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, E   -  ORA_E_FD2  -  FD, B3
// void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, IYh   -  ORA_IYh_FD2  -  FD, B4
// void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, IYl   -  ORA_IYl_FD2  -  FD, B5
// void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, n   -  ORA_n_2  -  F6, n
void OnClock_ORA_n_2_OF(AsyncThis* async) {}
void OnClock_ORA_n_2_OD(AsyncThis* async) {}

// OR A, (HL)   -  ORA__HL__1  -  B6
void OnClock_ORA__HL__1_OF(AsyncThis* async) {}

// OR A, (IX+d)   -  ORA__IX_d__DD3  -  DD, B6, d
void OnClock_ORA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_ORA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_ORA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_ORA__ex_d__ex3_MR(AsyncThis* async) {}

// OR A, (IY+d)   -  ORA__IY_d__FD3  -  FD, B6, d
// void OnClock_ORA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_ORA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_ORA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_ORA__ex_d__ex3_MR(AsyncThis* async) {}

// XOR A, A   -  XORA_A_1  -  AF
void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, B   -  XORA_B_1  -  A8
// void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, C   -  XORA_C_1  -  A9
// void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, D   -  XORA_D_1  -  AA
// void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, E   -  XORA_E_1  -  AB
// void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, H   -  XORA_H_1  -  AC
// void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, L   -  XORA_L_1  -  AD
// void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, A   -  XORA_A_DD2  -  DD, AF
void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, B   -  XORA_B_DD2  -  DD, A8
// void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, C   -  XORA_C_DD2  -  DD, A9
// void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, D   -  XORA_D_DD2  -  DD, AA
// void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, E   -  XORA_E_DD2  -  DD, AB
// void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, IXh   -  XORA_IXh_DD2  -  DD, AC
// void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, IXl   -  XORA_IXl_DD2  -  DD, AD
// void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, A   -  XORA_A_FD2  -  FD, AF
void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, B   -  XORA_B_FD2  -  FD, A8
// void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, C   -  XORA_C_FD2  -  FD, A9
// void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, D   -  XORA_D_FD2  -  FD, AA
// void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, E   -  XORA_E_FD2  -  FD, AB
// void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, IYh   -  XORA_IYh_FD2  -  FD, AC
// void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, IYl   -  XORA_IYl_FD2  -  FD, AD
// void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, n   -  XORA_n_2  -  EE, n
void OnClock_XORA_n_2_OF(AsyncThis* async) {}
void OnClock_XORA_n_2_OD(AsyncThis* async) {}

// XOR A, (HL)   -  XORA__HL__1  -  AE
void OnClock_XORA__HL__1_OF(AsyncThis* async) {}

// XOR A, (IX+d)   -  XORA__IX_d__DD3  -  DD, AE, d
void OnClock_XORA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_XORA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_XORA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_XORA__ex_d__ex3_MR(AsyncThis* async) {}

// XOR A, (IY+d)   -  XORA__IY_d__FD3  -  FD, AE, d
// void OnClock_XORA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_XORA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_XORA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_XORA__ex_d__ex3_MR(AsyncThis* async) {}

// CP A, A   -  CPA_A_1  -  BF
void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, B   -  CPA_B_1  -  B8
// void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, C   -  CPA_C_1  -  B9
// void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, D   -  CPA_D_1  -  BA
// void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, E   -  CPA_E_1  -  BB
// void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, H   -  CPA_H_1  -  BC
// void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, L   -  CPA_L_1  -  BD
// void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, A   -  CPA_A_DD2  -  DD, BF
void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, B   -  CPA_B_DD2  -  DD, B8
// void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, C   -  CPA_C_DD2  -  DD, B9
// void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, D   -  CPA_D_DD2  -  DD, BA
// void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, E   -  CPA_E_DD2  -  DD, BB
// void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, IXh   -  CPA_IXh_DD2  -  DD, BC
// void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, IXl   -  CPA_IXl_DD2  -  DD, BD
// void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, A   -  CPA_A_FD2  -  FD, BF
void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, B   -  CPA_B_FD2  -  FD, B8
// void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, C   -  CPA_C_FD2  -  FD, B9
// void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, D   -  CPA_D_FD2  -  FD, BA
// void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, E   -  CPA_E_FD2  -  FD, BB
// void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, IYh   -  CPA_IYh_FD2  -  FD, BC
// void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, IYl   -  CPA_IYl_FD2  -  FD, BD
// void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, n   -  CPA_n_2  -  FE, n
void OnClock_CPA_n_2_OF(AsyncThis* async) {}
void OnClock_CPA_n_2_OD(AsyncThis* async) {}

// CP A, (HL)   -  CPA__HL__1  -  BE
void OnClock_CPA__HL__1_OF(AsyncThis* async) {}

// CP A, (IX+d)   -  CPA__IX_d__DD3  -  DD, BE, d
void OnClock_CPA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_CPA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_CPA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_CPA__ex_d__ex3_MR(AsyncThis* async) {}

// CP A, (IY+d)   -  CPA__IY_d__FD3  -  FD, BE, d
// void OnClock_CPA__ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_CPA__ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_CPA__ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_CPA__ex_d__ex3_MR(AsyncThis* async) {}

// INC A   -  INCA_1  -  3C
void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC B   -  INCB_1  -  04
// void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC C   -  INCC_1  -  0C
// void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC D   -  INCD_1  -  14
// void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC E   -  INCE_1  -  1C
// void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC H   -  INCH_1  -  24
// void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC L   -  INCL_1  -  2C
// void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC A   -  INCA_DD2  -  DD, 3C
void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC B   -  INCB_DD2  -  DD, 04
// void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC C   -  INCC_DD2  -  DD, 0C
// void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC D   -  INCD_DD2  -  DD, 14
// void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC E   -  INCE_DD2  -  DD, 1C
// void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC IXh   -  INCIXh_DD2  -  DD, 24
// void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC IXl   -  INCIXl_DD2  -  DD, 2C
// void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC A   -  INCA_FD2  -  FD, 3C
void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC B   -  INCB_FD2  -  FD, 04
// void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC C   -  INCC_FD2  -  FD, 0C
// void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC D   -  INCD_FD2  -  FD, 14
// void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC E   -  INCE_FD2  -  FD, 1C
// void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC IYh   -  INCIYh_FD2  -  FD, 24
// void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC IYl   -  INCIYl_FD2  -  FD, 2C
// void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC (HL)   -  INC_HL__1  -  34
void OnClock_INC_HL__1_OF(AsyncThis* async) {}
void OnClock_INC_HL__1_MR(AsyncThis* async) {}

// INC (IX+d)   -  INC_IX_d__DD3  -  DD, 34, d
void OnClock_INC_ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_MR(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_MW(AsyncThis* async) {}

// INC (IY+d)   -  INC_IY_d__FD3  -  FD, 34, d
// void OnClock_INC_ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_INC_ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_INC_ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_INC_ex_d__ex3_MR(AsyncThis* async) {}
// void OnClock_INC_ex_d__ex3_MW(AsyncThis* async) {}

// DEC A   -  DECA_1  -  3D
void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC B   -  DECB_1  -  05
// void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC C   -  DECC_1  -  0D
// void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC D   -  DECD_1  -  15
// void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC E   -  DECE_1  -  1D
// void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC H   -  DECH_1  -  25
// void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC L   -  DECL_1  -  2D
// void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC A   -  DECA_DD2  -  DD, 3D
void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC B   -  DECB_DD2  -  DD, 05
// void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC C   -  DECC_DD2  -  DD, 0D
// void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC D   -  DECD_DD2  -  DD, 15
// void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC E   -  DECE_DD2  -  DD, 1D
// void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC IXh   -  DECIXh_DD2  -  DD, 25
// void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC IXl   -  DECIXl_DD2  -  DD, 2D
// void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC A   -  DECA_FD2  -  FD, 3D
void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC B   -  DECB_FD2  -  FD, 05
// void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC C   -  DECC_FD2  -  FD, 0D
// void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC D   -  DECD_FD2  -  FD, 15
// void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC E   -  DECE_FD2  -  FD, 1D
// void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC IYh   -  DECIYh_FD2  -  FD, 25
// void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC IYl   -  DECIYl_FD2  -  FD, 2D
// void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC (HL)   -  DEC_HL__1  -  35
void OnClock_DEC_HL__1_OF(AsyncThis* async) {}
void OnClock_DEC_HL__1_MR(AsyncThis* async) {}

// DEC (IX+d)   -  DEC_IX_d__DD3  -  DD, 35, d
void OnClock_DEC_ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_MR(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_MW(AsyncThis* async) {}

// DEC (IY+d)   -  DEC_IY_d__FD3  -  FD, 35, d
// void OnClock_DEC_ex_d__ex3_OF(AsyncThis* async) {}
// void OnClock_DEC_ex_d__ex3_OD(AsyncThis* async) {}
// void OnClock_DEC_ex_d__ex3_AD(AsyncThis* async) {}
// void OnClock_DEC_ex_d__ex3_MR(AsyncThis* async) {}
// void OnClock_DEC_ex_d__ex3_MW(AsyncThis* async) {}