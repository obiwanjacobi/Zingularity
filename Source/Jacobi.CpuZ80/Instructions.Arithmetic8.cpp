#include "stdafx.h"
#include "FunctionsZ80.hpp"

// ADD A, A   -  ADDA_A_1  -  87
void OnClock_ADDA_r_1_OF(AsyncThis* async) {}

// ADD A, A   -  ADDA_A_DD2  -  DD, 87
void OnClock_ADDA_t_DD2_OF(AsyncThis* async) {}

// ADD A, A   -  ADDA_A_FD2  -  FD, 87
void OnClock_ADDA_v_FD2_OF(AsyncThis* async) {}

// ADD A, n   -  ADDA_n_2  -  C6, n
void OnClock_ADDA_n_2_OF(AsyncThis* async) {}
void OnClock_ADDA_n_2_OD(AsyncThis* async) {}

// ADD A, (HL)   -  ADDA__HL__1  -  86
void OnClock_ADDA__HL__1_OF(AsyncThis* async) {}
void OnClock_ADDA__HL__1_MR(AsyncThis* async) {}

// ADD A, (IX+d)   -  ADDA__IX_d__DD3  -  DD, 86, d
void OnClock_ADDA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_ADDA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_ADDA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_ADDA__ex_d__ex3_MR(AsyncThis* async) {}

// ADC A, A   -  ADCA_A_1  -  8F
void OnClock_ADCA_r_1_OF(AsyncThis* async) {}

// ADC A, A   -  ADCA_A_DD2  -  DD, 8F
void OnClock_ADCA_t_DD2_OF(AsyncThis* async) {}

// ADC A, A   -  ADCA_A_FD2  -  FD, 8F
void OnClock_ADCA_v_FD2_OF(AsyncThis* async) {}

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

// SUB A, A   -  SUBA_A_1  -  97
void OnClock_SUBA_r_1_OF(AsyncThis* async) {}

// SUB A, A   -  SUBA_A_DD2  -  DD, 97
void OnClock_SUBA_t_DD2_OF(AsyncThis* async) {}

// SUB A, A   -  SUBA_A_FD2  -  FD, 97
void OnClock_SUBA_v_FD2_OF(AsyncThis* async) {}

// SUB A, n   -  SUBA_n_2  -  8E, n
void OnClock_SUBA_n_2_OF(AsyncThis* async) {}
void OnClock_SUBA_n_2_OD(AsyncThis* async) {}

// SUB A, (HL)   -  SUBA__HL__1  -  96
void OnClock_SUBA__HL__1_OF(AsyncThis* async) {}
void OnClock_SUBA__HL__1_MR(AsyncThis* async) {}

// SUB A, (IX+d)   -  SUBA__IX_d__DD3  -  DD, 96, d
void OnClock_SUBA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_SUBA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_SUBA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_SUBA__ex_d__ex3_MR(AsyncThis* async) {}

// SBC A, A   -  SBCA_A_1  -  9F
void OnClock_SBCA_r_1_OF(AsyncThis* async) {}

// SBC A, A   -  SBCA_A_DD2  -  DD, 9F
void OnClock_SBCA_t_DD2_OF(AsyncThis* async) {}

// SBC A, A   -  SBCA_A_FD2  -  FD, 9F
void OnClock_SBCA_v_FD2_OF(AsyncThis* async) {}

// SBC A, n   -  SBCA_n_2  -  DE, n
void OnClock_SBCA_n_2_OF(AsyncThis* async) {}
void OnClock_SBCA_n_2_OD(AsyncThis* async) {}

// SBC A, (HL)   -  SBCA__HL__1  -  9E
void OnClock_SBCA__HL__1_OF(AsyncThis* async) {}
void OnClock_SBCA__HL__1_MR(AsyncThis* async) {}

// SBC A, (IX+d)   -  SBCA__IX_d__DD3  -  DD, 9E, d
void OnClock_SBCA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_SBCA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_SBCA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_SBCA__ex_d__ex3_MR(AsyncThis* async) {}

// AND A, A   -  ANDA_A_1  -  A7
void OnClock_ANDA_r_1_OF(AsyncThis* async) {}

// AND A, A   -  ANDA_A_DD2  -  DD, A7
void OnClock_ANDA_t_DD2_OF(AsyncThis* async) {}

// AND A, A   -  ANDA_A_FD2  -  FD, A7
void OnClock_ANDA_v_FD2_OF(AsyncThis* async) {}

// AND A, n   -  ANDA_n_2  -  E6, n
void OnClock_ANDA_n_2_OF(AsyncThis* async) {}
void OnClock_ANDA_n_2_OD(AsyncThis* async) {}

// AND A, (HL)   -  ANDA__HL__1  -  A6
void OnClock_ANDA__HL__1_OF(AsyncThis* async) {}
void OnClock_ANDA__HL__1_MR(AsyncThis* async) {}

// AND A, (IX+d)   -  ANDA__IX_d__DD3  -  DD, A6, d
void OnClock_ANDA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_ANDA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_ANDA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_ANDA__ex_d__ex3_MR(AsyncThis* async) {}

// OR A, A   -  ORA_A_1  -  B7
void OnClock_ORA_r_1_OF(AsyncThis* async) {}

// OR A, A   -  ORA_A_DD2  -  DD, B7
void OnClock_ORA_t_DD2_OF(AsyncThis* async) {}

// OR A, A   -  ORA_A_FD2  -  FD, B7
void OnClock_ORA_v_FD2_OF(AsyncThis* async) {}

// OR A, n   -  ORA_n_2  -  F6, n
void OnClock_ORA_n_2_OF(AsyncThis* async) {}
void OnClock_ORA_n_2_OD(AsyncThis* async) {}

// OR A, (HL)   -  ORA__HL__1  -  B6
void OnClock_ORA__HL__1_OF(AsyncThis* async) {}
void OnClock_ORA__HL__1_MR(AsyncThis* async) {}

// OR A, (IX+d)   -  ORA__IX_d__DD3  -  DD, B6, d
void OnClock_ORA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_ORA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_ORA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_ORA__ex_d__ex3_MR(AsyncThis* async) {}

// XOR A, A   -  XORA_A_1  -  AF
void OnClock_XORA_r_1_OF(AsyncThis* async) {}

// XOR A, A   -  XORA_A_DD2  -  DD, AF
void OnClock_XORA_t_DD2_OF(AsyncThis* async) {}

// XOR A, A   -  XORA_A_FD2  -  FD, AF
void OnClock_XORA_v_FD2_OF(AsyncThis* async) {}

// XOR A, n   -  XORA_n_2  -  EE, n
void OnClock_XORA_n_2_OF(AsyncThis* async) {}
void OnClock_XORA_n_2_OD(AsyncThis* async) {}

// XOR A, (HL)   -  XORA__HL__1  -  AE
void OnClock_XORA__HL__1_OF(AsyncThis* async) {}
void OnClock_XORA__HL__1_MR(AsyncThis* async) {}

// XOR A, (IX+d)   -  XORA__IX_d__DD3  -  DD, AE, d
void OnClock_XORA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_XORA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_XORA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_XORA__ex_d__ex3_MR(AsyncThis* async) {}

// CP A, A   -  CPA_A_1  -  BF
void OnClock_CPA_r_1_OF(AsyncThis* async) {}

// CP A, A   -  CPA_A_DD2  -  DD, BF
void OnClock_CPA_t_DD2_OF(AsyncThis* async) {}

// CP A, A   -  CPA_A_FD2  -  FD, BF
void OnClock_CPA_v_FD2_OF(AsyncThis* async) {}

// CP A, n   -  CPA_n_2  -  FE, n
void OnClock_CPA_n_2_OF(AsyncThis* async) {}
void OnClock_CPA_n_2_OD(AsyncThis* async) {}

// CP A, (HL)   -  CPA__HL__1  -  BE
void OnClock_CPA__HL__1_OF(AsyncThis* async) {}
void OnClock_CPA__HL__1_MR(AsyncThis* async) {}

// CP A, (IX+d)   -  CPA__IX_d__DD3  -  DD, BE, d
void OnClock_CPA__ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_CPA__ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_CPA__ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_CPA__ex_d__ex3_MR(AsyncThis* async) {}

// INC A   -  INCA_1  -  3C
void OnClock_INCr_1_OF(AsyncThis* async) {}

// INC A   -  INCA_DD2  -  DD, 3C
void OnClock_INCt_DD2_OF(AsyncThis* async) {}

// INC A   -  INCA_FD2  -  FD, 3C
void OnClock_INCv_FD2_OF(AsyncThis* async) {}

// INC (HL)   -  INC_HL__1  -  34
void OnClock_INC_HL__1_OF(AsyncThis* async) {}
void OnClock_INC_HL__1_MR(AsyncThis* async) {}
void OnClock_INC_HL__1_MW(AsyncThis* async) {}

// INC (IX+d)   -  INC_IX_d__DD3  -  DD, 34, d
void OnClock_INC_ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_MR(AsyncThis* async) {}
void OnClock_INC_ex_d__ex3_MW(AsyncThis* async) {}

// DEC A   -  DECA_1  -  3D
void OnClock_DECr_1_OF(AsyncThis* async) {}

// DEC A   -  DECA_DD2  -  DD, 3D
void OnClock_DECt_DD2_OF(AsyncThis* async) {}

// DEC A   -  DECA_FD2  -  FD, 3D
void OnClock_DECv_FD2_OF(AsyncThis* async) {}

// DEC (HL)   -  DEC_HL__1  -  35
void OnClock_DEC_HL__1_OF(AsyncThis* async) {}
void OnClock_DEC_HL__1_MR(AsyncThis* async) {}
void OnClock_DEC_HL__1_MW(AsyncThis* async) {}

// DEC (IX+d)   -  DEC_IX_d__DD3  -  DD, 35, d
void OnClock_DEC_ex_d__ex3_OF(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_OD(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_AD(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_MR(AsyncThis* async) {}
void OnClock_DEC_ex_d__ex3_MW(AsyncThis* async) {}
