#include "stdafx.h"
#include "FunctionsZ80.hpp"

// BIT 0, A   -  BIT0_A_CB2  -  CB, 47
extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 1, A   -  BIT1_A_CB2  -  CB, 4F
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 2, A   -  BIT2_A_CB2  -  CB, 57
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 3, A   -  BIT3_A_CB2  -  CB, 5F
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 4, A   -  BIT4_A_CB2  -  CB, 67
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 5, A   -  BIT5_A_CB2  -  CB, 6F
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 6, A   -  BIT6_A_CB2  -  CB, 77
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 7, A   -  BIT7_A_CB2  -  CB, 7F
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, B   -  BIT0_B_CB2  -  CB, 40
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 1, B   -  BIT1_B_CB2  -  CB, 48
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 2, B   -  BIT2_B_CB2  -  CB, 50
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 3, B   -  BIT3_B_CB2  -  CB, 58
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 4, B   -  BIT4_B_CB2  -  CB, 60
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 5, B   -  BIT5_B_CB2  -  CB, 68
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 6, B   -  BIT6_B_CB2  -  CB, 70
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 7, B   -  BIT7_B_CB2  -  CB, 78
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, C   -  BIT0_C_CB2  -  CB, 41
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 1, C   -  BIT1_C_CB2  -  CB, 49
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 2, C   -  BIT2_C_CB2  -  CB, 51
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 3, C   -  BIT3_C_CB2  -  CB, 59
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 4, C   -  BIT4_C_CB2  -  CB, 61
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 5, C   -  BIT5_C_CB2  -  CB, 69
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 6, C   -  BIT6_C_CB2  -  CB, 71
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 7, C   -  BIT7_C_CB2  -  CB, 79
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, D   -  BIT0_D_CB2  -  CB, 42
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 1, D   -  BIT1_D_CB2  -  CB, 4A
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 2, D   -  BIT2_D_CB2  -  CB, 52
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 3, D   -  BIT3_D_CB2  -  CB, 5A
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 4, D   -  BIT4_D_CB2  -  CB, 62
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 5, D   -  BIT5_D_CB2  -  CB, 6A
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 6, D   -  BIT6_D_CB2  -  CB, 72
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 7, D   -  BIT7_D_CB2  -  CB, 7A
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, E   -  BIT0_E_CB2  -  CB, 43
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 1, E   -  BIT1_E_CB2  -  CB, 4B
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 2, E   -  BIT2_E_CB2  -  CB, 53
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 3, E   -  BIT3_E_CB2  -  CB, 5B
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 4, E   -  BIT4_E_CB2  -  CB, 63
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 5, E   -  BIT5_E_CB2  -  CB, 6B
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 6, E   -  BIT6_E_CB2  -  CB, 73
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 7, E   -  BIT7_E_CB2  -  CB, 7B
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, H   -  BIT0_H_CB2  -  CB, 44
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 1, H   -  BIT1_H_CB2  -  CB, 4C
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 2, H   -  BIT2_H_CB2  -  CB, 54
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 3, H   -  BIT3_H_CB2  -  CB, 5C
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 4, H   -  BIT4_H_CB2  -  CB, 64
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 5, H   -  BIT5_H_CB2  -  CB, 6C
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 6, H   -  BIT6_H_CB2  -  CB, 74
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 7, H   -  BIT7_H_CB2  -  CB, 7C
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, L   -  BIT0_L_CB2  -  CB, 45
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 1, L   -  BIT1_L_CB2  -  CB, 4D
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 2, L   -  BIT2_L_CB2  -  CB, 55
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 3, L   -  BIT3_L_CB2  -  CB, 5D
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 4, L   -  BIT4_L_CB2  -  CB, 65
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 5, L   -  BIT5_L_CB2  -  CB, 6D
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 6, L   -  BIT6_L_CB2  -  CB, 75
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 7, L   -  BIT7_L_CB2  -  CB, 7D
// extern void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, (HL)   -  BIT0__HL__CB2  -  CB, 46
extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 1, (HL)   -  BIT1__HL__CB2  -  CB, 4E
// extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 2, (HL)   -  BIT2__HL__CB2  -  CB, 56
// extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 3, (HL)   -  BIT3__HL__CB2  -  CB, 5E
// extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 4, (HL)   -  BIT4__HL__CB2  -  CB, 66
// extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 5, (HL)   -  BIT5__HL__CB2  -  CB, 6E
// extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 6, (HL)   -  BIT6__HL__CB2  -  CB, 76
// extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 7, (HL)   -  BIT7__HL__CB2  -  CB, 7E
// extern void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 0, (IX+d)   -  BIT0__IX_d__DD4  -  DD, CB, d, 46
extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 0, (IY+d)   -  BIT0__IY_d__FD4  -  FD, CB, d, 46
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 1, (IX+d)   -  BIT1__IX_d__DD4  -  DD, CB, d, 4E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 1, (IY+d)   -  BIT1__IY_d__FD4  -  FD, CB, d, 4E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 2, (IX+d)   -  BIT2__IX_d__DD4  -  DD, CB, d, 56
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 2, (IY+d)   -  BIT2__IY_d__FD4  -  FD, CB, d, 56
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 3, (IX+d)   -  BIT3__IX_d__DD4  -  DD, CB, d, 5E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 3, (IY+d)   -  BIT3__IY_d__FD4  -  FD, CB, d, 5E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 4, (IX+d)   -  BIT4__IX_d__DD4  -  DD, CB, d, 66
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 4, (IY+d)   -  BIT4__IY_d__FD4  -  FD, CB, d, 66
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 5, (IX+d)   -  BIT5__IX_d__DD4  -  DD, CB, d, 6E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 5, (IY+d)   -  BIT5__IY_d__FD4  -  FD, CB, d, 6E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 6, (IX+d)   -  BIT6__IX_d__DD4  -  DD, CB, d, 76
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 6, (IY+d)   -  BIT6__IY_d__FD4  -  FD, CB, d, 76
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 7, (IX+d)   -  BIT7__IX_d__DD4  -  DD, CB, d, 7E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// BIT 7, (IY+d)   -  BIT7__IY_d__FD4  -  FD, CB, d, 7E
// extern void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// SET 0, A   -  SET0_A_CB2  -  CB, C7
extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 1, A   -  SET1_A_CB2  -  CB, CF
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 2, A   -  SET2_A_CB2  -  CB, D7
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 3, A   -  SET3_A_CB2  -  CB, DF
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 4, A   -  SET4_A_CB2  -  CB, E7
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 5, A   -  SET5_A_CB2  -  CB, EF
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 6, A   -  SET6_A_CB2  -  CB, F7
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 7, A   -  SET7_A_CB2  -  CB, FF
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, B   -  SET0_B_CB2  -  CB, C0
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 1, B   -  SET1_B_CB2  -  CB, C8
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 2, B   -  SET2_B_CB2  -  CB, D0
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 3, B   -  SET3_B_CB2  -  CB, D8
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 4, B   -  SET4_B_CB2  -  CB, E0
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 5, B   -  SET5_B_CB2  -  CB, E8
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 6, B   -  SET6_B_CB2  -  CB, F0
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 7, B   -  SET7_B_CB2  -  CB, F8
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, C   -  SET0_C_CB2  -  CB, C1
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 1, C   -  SET1_C_CB2  -  CB, C9
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 2, C   -  SET2_C_CB2  -  CB, D1
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 3, C   -  SET3_C_CB2  -  CB, D9
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 4, C   -  SET4_C_CB2  -  CB, E1
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 5, C   -  SET5_C_CB2  -  CB, E9
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 6, C   -  SET6_C_CB2  -  CB, F1
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 7, C   -  SET7_C_CB2  -  CB, F9
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, D   -  SET0_D_CB2  -  CB, C2
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 1, D   -  SET1_D_CB2  -  CB, CA
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 2, D   -  SET2_D_CB2  -  CB, D2
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 3, D   -  SET3_D_CB2  -  CB, DA
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 4, D   -  SET4_D_CB2  -  CB, E2
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 5, D   -  SET5_D_CB2  -  CB, EA
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 6, D   -  SET6_D_CB2  -  CB, F2
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 7, D   -  SET7_D_CB2  -  CB, FA
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, E   -  SET0_E_CB2  -  CB, C3
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 1, E   -  SET1_E_CB2  -  CB, CB
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 2, E   -  SET2_E_CB2  -  CB, D3
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 3, E   -  SET3_E_CB2  -  CB, DB
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 4, E   -  SET4_E_CB2  -  CB, E3
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 5, E   -  SET5_E_CB2  -  CB, EB
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 6, E   -  SET6_E_CB2  -  CB, F3
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 7, E   -  SET7_E_CB2  -  CB, FB
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, H   -  SET0_H_CB2  -  CB, C4
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 1, H   -  SET1_H_CB2  -  CB, CC
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 2, H   -  SET2_H_CB2  -  CB, D4
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 3, H   -  SET3_H_CB2  -  CB, DC
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 4, H   -  SET4_H_CB2  -  CB, E4
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 5, H   -  SET5_H_CB2  -  CB, EC
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 6, H   -  SET6_H_CB2  -  CB, F4
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 7, H   -  SET7_H_CB2  -  CB, FC
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, L   -  SET0_L_CB2  -  CB, C5
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 1, L   -  SET1_L_CB2  -  CB, CD
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 2, L   -  SET2_L_CB2  -  CB, D5
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 3, L   -  SET3_L_CB2  -  CB, DD
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 4, L   -  SET4_L_CB2  -  CB, E5
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 5, L   -  SET5_L_CB2  -  CB, ED
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 6, L   -  SET6_L_CB2  -  CB, F5
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 7, L   -  SET7_L_CB2  -  CB, FD
// extern void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, (HL)   -  SET0__HL__CB2  -  CB, C6
extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 1, (HL)   -  SET1__HL__CB2  -  CB, CE
// extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 2, (HL)   -  SET2__HL__CB2  -  CB, D6
// extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 3, (HL)   -  SET3__HL__CB2  -  CB, DE
// extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 4, (HL)   -  SET4__HL__CB2  -  CB, E6
// extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 5, (HL)   -  SET5__HL__CB2  -  CB, EE
// extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 6, (HL)   -  SET6__HL__CB2  -  CB, F6
// extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 7, (HL)   -  SET7__HL__CB2  -  CB, FE
// extern void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 0, (IX+d)   -  SET0__IX_d__DD4  -  DD, CB, d, C6
extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 0, (IY+d)   -  SET0__IY_d__FD4  -  FD, CB, d, C6
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d)   -  SET1__IX_d__DD4  -  DD, CB, d, CE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d)   -  SET1__IY_d__FD4  -  FD, CB, d, CE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d)   -  SET2__IX_d__DD4  -  DD, CB, d, D6
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d)   -  SET2__IY_d__FD4  -  FD, CB, d, D6
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d)   -  SET3__IX_d__DD4  -  DD, CB, d, DE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d)   -  SET3__IY_d__FD4  -  FD, CB, d, DE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d)   -  SET4__IX_d__DD4  -  DD, CB, d, E6
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d)   -  SET4__IY_d__FD4  -  FD, CB, d, E6
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d)   -  SET5__IX_d__DD4  -  DD, CB, d, EE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d)   -  SET5__IY_d__FD4  -  FD, CB, d, EE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d)   -  SET6__IX_d__DD4  -  DD, CB, d, F6
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d)   -  SET6__IY_d__FD4  -  FD, CB, d, F6
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d)   -  SET7__IX_d__DD4  -  DD, CB, d, FE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d)   -  SET7__IY_d__FD4  -  FD, CB, d, FE
// extern void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), A   -  SET0__IX_d__A_DD4  -  DD, CB, d, C7
extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d), A   -  SET1__IX_d__A_DD4  -  DD, CB, d, CF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d), A   -  SET1__IY_d__A_FD4  -  FD, CB, d, CF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d), A   -  SET2__IX_d__A_DD4  -  DD, CB, d, D7
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d), A   -  SET2__IY_d__A_FD4  -  FD, CB, d, D7
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d), A   -  SET3__IX_d__A_DD4  -  DD, CB, d, DF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d), A   -  SET3__IY_d__A_FD4  -  FD, CB, d, DF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d), A   -  SET4__IX_d__A_DD4  -  DD, CB, d, E7
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d), A   -  SET4__IY_d__A_FD4  -  FD, CB, d, E7
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d), A   -  SET5__IX_d__A_DD4  -  DD, CB, d, EF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d), A   -  SET5__IY_d__A_FD4  -  FD, CB, d, EF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d), A   -  SET6__IX_d__A_DD4  -  DD, CB, d, F7
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d), A   -  SET6__IY_d__A_FD4  -  FD, CB, d, F7
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d), A   -  SET7__IX_d__A_DD4  -  DD, CB, d, FF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d), A   -  SET7__IY_d__A_FD4  -  FD, CB, d, FF
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), B   -  SET0__IX_d__B_DD4  -  DD, CB, d, C0
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d), B   -  SET1__IX_d__B_DD4  -  DD, CB, d, C8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d), B   -  SET1__IY_d__B_FD4  -  FD, CB, d, C8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d), B   -  SET2__IX_d__B_DD4  -  DD, CB, d, D0
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d), B   -  SET2__IY_d__B_FD4  -  FD, CB, d, D0
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d), B   -  SET3__IX_d__B_DD4  -  DD, CB, d, D8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d), B   -  SET3__IY_d__B_FD4  -  FD, CB, d, D8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d), B   -  SET4__IX_d__B_DD4  -  DD, CB, d, E0
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d), B   -  SET4__IY_d__B_FD4  -  FD, CB, d, E0
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d), B   -  SET5__IX_d__B_DD4  -  DD, CB, d, E8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d), B   -  SET5__IY_d__B_FD4  -  FD, CB, d, E8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d), B   -  SET6__IX_d__B_DD4  -  DD, CB, d, F0
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d), B   -  SET6__IY_d__B_FD4  -  FD, CB, d, F0
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d), B   -  SET7__IX_d__B_DD4  -  DD, CB, d, F8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d), B   -  SET7__IY_d__B_FD4  -  FD, CB, d, F8
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), C   -  SET0__IX_d__C_DD4  -  DD, CB, d, C1
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d), C   -  SET1__IX_d__C_DD4  -  DD, CB, d, C9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d), C   -  SET1__IY_d__C_FD4  -  FD, CB, d, C9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d), C   -  SET2__IX_d__C_DD4  -  DD, CB, d, D1
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d), C   -  SET2__IY_d__C_FD4  -  FD, CB, d, D1
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d), C   -  SET3__IX_d__C_DD4  -  DD, CB, d, D9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d), C   -  SET3__IY_d__C_FD4  -  FD, CB, d, D9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d), C   -  SET4__IX_d__C_DD4  -  DD, CB, d, E1
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d), C   -  SET4__IY_d__C_FD4  -  FD, CB, d, E1
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d), C   -  SET5__IX_d__C_DD4  -  DD, CB, d, E9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d), C   -  SET5__IY_d__C_FD4  -  FD, CB, d, E9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d), C   -  SET6__IX_d__C_DD4  -  DD, CB, d, F1
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d), C   -  SET6__IY_d__C_FD4  -  FD, CB, d, F1
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d), C   -  SET7__IX_d__C_DD4  -  DD, CB, d, F9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d), C   -  SET7__IY_d__C_FD4  -  FD, CB, d, F9
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), D   -  SET0__IX_d__D_DD4  -  DD, CB, d, C2
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d), D   -  SET1__IX_d__D_DD4  -  DD, CB, d, CA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d), D   -  SET1__IY_d__D_FD4  -  FD, CB, d, CA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d), D   -  SET2__IX_d__D_DD4  -  DD, CB, d, D2
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d), D   -  SET2__IY_d__D_FD4  -  FD, CB, d, D2
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d), D   -  SET3__IX_d__D_DD4  -  DD, CB, d, DA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d), D   -  SET3__IY_d__D_FD4  -  FD, CB, d, DA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d), D   -  SET4__IX_d__D_DD4  -  DD, CB, d, E2
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d), D   -  SET4__IY_d__D_FD4  -  FD, CB, d, E2
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d), D   -  SET5__IX_d__D_DD4  -  DD, CB, d, EA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d), D   -  SET5__IY_d__D_FD4  -  FD, CB, d, EA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d), D   -  SET6__IX_d__D_DD4  -  DD, CB, d, F2
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d), D   -  SET6__IY_d__D_FD4  -  FD, CB, d, F2
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d), D   -  SET7__IX_d__D_DD4  -  DD, CB, d, FA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d), D   -  SET7__IY_d__D_FD4  -  FD, CB, d, FA
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), E   -  SET0__IX_d__E_DD4  -  DD, CB, d, C3
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d), E   -  SET1__IX_d__E_DD4  -  DD, CB, d, CB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d), E   -  SET1__IY_d__E_FD4  -  FD, CB, d, CB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d), E   -  SET2__IX_d__E_DD4  -  DD, CB, d, D3
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d), E   -  SET2__IY_d__E_FD4  -  FD, CB, d, D3
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d), E   -  SET3__IX_d__E_DD4  -  DD, CB, d, DB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d), E   -  SET3__IY_d__E_FD4  -  FD, CB, d, DB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d), E   -  SET4__IX_d__E_DD4  -  DD, CB, d, E3
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d), E   -  SET4__IY_d__E_FD4  -  FD, CB, d, E3
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d), E   -  SET5__IX_d__E_DD4  -  DD, CB, d, EB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d), E   -  SET5__IY_d__E_FD4  -  FD, CB, d, EB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d), E   -  SET6__IX_d__E_DD4  -  DD, CB, d, F3
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d), E   -  SET6__IY_d__E_FD4  -  FD, CB, d, F3
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d), E   -  SET7__IX_d__E_DD4  -  DD, CB, d, FB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d), E   -  SET7__IY_d__E_FD4  -  FD, CB, d, FB
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), H   -  SET0__IX_d__H_DD4  -  DD, CB, d, C4
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d), H   -  SET1__IX_d__H_DD4  -  DD, CB, d, CC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d), H   -  SET1__IY_d__H_FD4  -  FD, CB, d, CC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d), H   -  SET2__IX_d__H_DD4  -  DD, CB, d, D4
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d), H   -  SET2__IY_d__H_FD4  -  FD, CB, d, D4
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d), H   -  SET3__IX_d__H_DD4  -  DD, CB, d, DC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d), H   -  SET3__IY_d__H_FD4  -  FD, CB, d, DC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d), H   -  SET4__IX_d__H_DD4  -  DD, CB, d, E4
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d), H   -  SET4__IY_d__H_FD4  -  FD, CB, d, E4
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d), H   -  SET5__IX_d__H_DD4  -  DD, CB, d, EC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d), H   -  SET5__IY_d__H_FD4  -  FD, CB, d, EC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d), H   -  SET6__IX_d__H_DD4  -  DD, CB, d, F4
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d), H   -  SET6__IY_d__H_FD4  -  FD, CB, d, F4
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d), H   -  SET7__IX_d__H_DD4  -  DD, CB, d, FC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d), H   -  SET7__IY_d__H_FD4  -  FD, CB, d, FC
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), L   -  SET0__IX_d__L_DD4  -  DD, CB, d, C5
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IX+d), L   -  SET1__IX_d__L_DD4  -  DD, CB, d, CD
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 1, (IY+d), L   -  SET1__IY_d__L_FD4  -  FD, CB, d, CD
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IX+d), L   -  SET2__IX_d__L_DD4  -  DD, CB, d, D5
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 2, (IY+d), L   -  SET2__IY_d__L_FD4  -  FD, CB, d, D5
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IX+d), L   -  SET3__IX_d__L_DD4  -  DD, CB, d, DD
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 3, (IY+d), L   -  SET3__IY_d__L_FD4  -  FD, CB, d, DD
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IX+d), L   -  SET4__IX_d__L_DD4  -  DD, CB, d, E5
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 4, (IY+d), L   -  SET4__IY_d__L_FD4  -  FD, CB, d, E5
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IX+d), L   -  SET5__IX_d__L_DD4  -  DD, CB, d, ED
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 5, (IY+d), L   -  SET5__IY_d__L_FD4  -  FD, CB, d, ED
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IX+d), L   -  SET6__IX_d__L_DD4  -  DD, CB, d, F5
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 6, (IY+d), L   -  SET6__IY_d__L_FD4  -  FD, CB, d, F5
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IX+d), L   -  SET7__IX_d__L_DD4  -  DD, CB, d, FD
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// SET 7, (IY+d), L   -  SET7__IY_d__L_FD4  -  FD, CB, d, FD
// extern void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, A   -  RES0_A_CB2  -  CB, 87
extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 1, A   -  RES1_A_CB2  -  CB, 8F
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 2, A   -  RES2_A_CB2  -  CB, 97
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 3, A   -  RES3_A_CB2  -  CB, 9F
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 4, A   -  RES4_A_CB2  -  CB, A7
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 5, A   -  RES5_A_CB2  -  CB, AF
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 6, A   -  RES6_A_CB2  -  CB, B7
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 7, A   -  RES7_A_CB2  -  CB, BF
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, B   -  RES0_B_CB2  -  CB, 80
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 1, B   -  RES1_B_CB2  -  CB, 88
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 2, B   -  RES2_B_CB2  -  CB, 90
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 3, B   -  RES3_B_CB2  -  CB, 98
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 4, B   -  RES4_B_CB2  -  CB, A0
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 5, B   -  RES5_B_CB2  -  CB, A8
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 6, B   -  RES6_B_CB2  -  CB, B0
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 7, B   -  RES7_B_CB2  -  CB, B8
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, C   -  RES0_C_CB2  -  CB, 81
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 1, C   -  RES1_C_CB2  -  CB, 89
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 2, C   -  RES2_C_CB2  -  CB, 91
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 3, C   -  RES3_C_CB2  -  CB, 99
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 4, C   -  RES4_C_CB2  -  CB, A1
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 5, C   -  RES5_C_CB2  -  CB, A9
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 6, C   -  RES6_C_CB2  -  CB, B1
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 7, C   -  RES7_C_CB2  -  CB, B9
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, D   -  RES0_D_CB2  -  CB, 82
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 1, D   -  RES1_D_CB2  -  CB, 8A
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 2, D   -  RES2_D_CB2  -  CB, 92
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 3, D   -  RES3_D_CB2  -  CB, 9A
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 4, D   -  RES4_D_CB2  -  CB, A2
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 5, D   -  RES5_D_CB2  -  CB, AA
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 6, D   -  RES6_D_CB2  -  CB, B2
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 7, D   -  RES7_D_CB2  -  CB, BA
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, E   -  RES0_E_CB2  -  CB, 83
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 1, E   -  RES1_E_CB2  -  CB, 8B
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 2, E   -  RES2_E_CB2  -  CB, 93
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 3, E   -  RES3_E_CB2  -  CB, 9B
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 4, E   -  RES4_E_CB2  -  CB, A3
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 5, E   -  RES5_E_CB2  -  CB, AB
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 6, E   -  RES6_E_CB2  -  CB, B3
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 7, E   -  RES7_E_CB2  -  CB, BB
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, H   -  RES0_H_CB2  -  CB, 84
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 1, H   -  RES1_H_CB2  -  CB, 8C
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 2, H   -  RES2_H_CB2  -  CB, 94
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 3, H   -  RES3_H_CB2  -  CB, 9C
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 4, H   -  RES4_H_CB2  -  CB, A4
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 5, H   -  RES5_H_CB2  -  CB, AC
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 6, H   -  RES6_H_CB2  -  CB, B4
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 7, H   -  RES7_H_CB2  -  CB, BC
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, L   -  RES0_L_CB2  -  CB, 85
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 1, L   -  RES1_L_CB2  -  CB, 8D
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 2, L   -  RES2_L_CB2  -  CB, 95
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 3, L   -  RES3_L_CB2  -  CB, 9D
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 4, L   -  RES4_L_CB2  -  CB, A5
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 5, L   -  RES5_L_CB2  -  CB, AD
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 6, L   -  RES6_L_CB2  -  CB, B5
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 7, L   -  RES7_L_CB2  -  CB, BD
// extern void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, (HL)   -  RES0__HL__CB2  -  CB, 86
extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 1, (HL)   -  RES1__HL__CB2  -  CB, 8E
// extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 2, (HL)   -  RES2__HL__CB2  -  CB, 96
// extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 3, (HL)   -  RES3__HL__CB2  -  CB, 9E
// extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 4, (HL)   -  RES4__HL__CB2  -  CB, A6
// extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 5, (HL)   -  RES5__HL__CB2  -  CB, AE
// extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 6, (HL)   -  RES6__HL__CB2  -  CB, B6
// extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 7, (HL)   -  RES7__HL__CB2  -  CB, BE
// extern void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
// extern void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 0, (IX+d)   -  RES0__IX_d__DD4  -  DD, CB, d, 86
extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 0, (IY+d)   -  RES0__IY_d__FD4  -  FD, CB, d, 86
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d)   -  RES1__IX_d__DD4  -  DD, CB, d, 8E
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d)   -  RES1__IY_d__FD4  -  FD, CB, d, 8E
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d)   -  RES2__IX_d__DD4  -  DD, CB, d, 96
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d)   -  RES2__IY_d__FD4  -  FD, CB, d, 96
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d)   -  RES3__IX_d__DD4  -  DD, CB, d, 9E
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d)   -  RES3__IY_d__FD4  -  FD, CB, d, 9E
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d)   -  RES4__IX_d__DD4  -  DD, CB, d, A6
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d)   -  RES4__IY_d__FD4  -  FD, CB, d, A6
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d)   -  RES5__IX_d__DD4  -  DD, CB, d, AE
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d)   -  RES5__IY_d__FD4  -  FD, CB, d, AE
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d)   -  RES6__IX_d__DD4  -  DD, CB, d, B6
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d)   -  RES6__IY_d__FD4  -  FD, CB, d, B6
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d)   -  RES7__IX_d__DD4  -  DD, CB, d, BE
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d)   -  RES7__IY_d__FD4  -  FD, CB, d, BE
// extern void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), A   -  RES0__IX_d__A_DD4  -  DD, CB, d, 87
extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d), A   -  RES1__IX_d__A_DD4  -  DD, CB, d, 8F
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d), A   -  RES1__IY_d__A_FD4  -  FD, CB, d, 8F
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d), A   -  RES2__IX_d__A_DD4  -  DD, CB, d, 97
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d), A   -  RES2__IY_d__A_FD4  -  FD, CB, d, 97
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d), A   -  RES3__IX_d__A_DD4  -  DD, CB, d, 9F
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d), A   -  RES3__IY_d__A_FD4  -  FD, CB, d, 9F
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d), A   -  RES4__IX_d__A_DD4  -  DD, CB, d, A7
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d), A   -  RES4__IY_d__A_FD4  -  FD, CB, d, A7
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d), A   -  RES5__IX_d__A_DD4  -  DD, CB, d, AF
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d), A   -  RES5__IY_d__A_FD4  -  FD, CB, d, AF
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d), A   -  RES6__IX_d__A_DD4  -  DD, CB, d, B7
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d), A   -  RES6__IY_d__A_FD4  -  FD, CB, d, B7
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d), A   -  RES7__IX_d__A_DD4  -  DD, CB, d, BF
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d), A   -  RES7__IY_d__A_FD4  -  FD, CB, d, BF
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), B   -  RES0__IX_d__B_DD4  -  DD, CB, d, 80
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d), B   -  RES1__IX_d__B_DD4  -  DD, CB, d, 88
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d), B   -  RES1__IY_d__B_FD4  -  FD, CB, d, 88
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d), B   -  RES2__IX_d__B_DD4  -  DD, CB, d, 90
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d), B   -  RES2__IY_d__B_FD4  -  FD, CB, d, 90
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d), B   -  RES3__IX_d__B_DD4  -  DD, CB, d, 98
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d), B   -  RES3__IY_d__B_FD4  -  FD, CB, d, 98
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d), B   -  RES4__IX_d__B_DD4  -  DD, CB, d, A0
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d), B   -  RES4__IY_d__B_FD4  -  FD, CB, d, A0
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d), B   -  RES5__IX_d__B_DD4  -  DD, CB, d, A8
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d), B   -  RES5__IY_d__B_FD4  -  FD, CB, d, A8
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d), B   -  RES6__IX_d__B_DD4  -  DD, CB, d, B0
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d), B   -  RES6__IY_d__B_FD4  -  FD, CB, d, B0
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d), B   -  RES7__IX_d__B_DD4  -  DD, CB, d, B8
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d), B   -  RES7__IY_d__B_FD4  -  FD, CB, d, B8
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), C   -  RES0__IX_d__C_DD4  -  DD, CB, d, 81
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d), C   -  RES1__IX_d__C_DD4  -  DD, CB, d, 89
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d), C   -  RES1__IY_d__C_FD4  -  FD, CB, d, 89
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d), C   -  RES2__IX_d__C_DD4  -  DD, CB, d, 91
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d), C   -  RES2__IY_d__C_FD4  -  FD, CB, d, 91
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d), C   -  RES3__IX_d__C_DD4  -  DD, CB, d, 99
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d), C   -  RES3__IY_d__C_FD4  -  FD, CB, d, 99
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d), C   -  RES4__IX_d__C_DD4  -  DD, CB, d, A1
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d), C   -  RES4__IY_d__C_FD4  -  FD, CB, d, A1
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d), C   -  RES5__IX_d__C_DD4  -  DD, CB, d, A9
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d), C   -  RES5__IY_d__C_FD4  -  FD, CB, d, A9
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d), C   -  RES6__IX_d__C_DD4  -  DD, CB, d, B1
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d), C   -  RES6__IY_d__C_FD4  -  FD, CB, d, B1
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d), C   -  RES7__IX_d__C_DD4  -  DD, CB, d, B9
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d), C   -  RES7__IY_d__C_FD4  -  FD, CB, d, B9
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), D   -  RES0__IX_d__D_DD4  -  DD, CB, d, 82
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d), D   -  RES1__IX_d__D_DD4  -  DD, CB, d, 8A
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d), D   -  RES1__IY_d__D_FD4  -  FD, CB, d, 8A
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d), D   -  RES2__IX_d__D_DD4  -  DD, CB, d, 92
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d), D   -  RES2__IY_d__D_FD4  -  FD, CB, d, 92
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d), D   -  RES3__IX_d__D_DD4  -  DD, CB, d, 9A
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d), D   -  RES3__IY_d__D_FD4  -  FD, CB, d, 9A
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d), D   -  RES4__IX_d__D_DD4  -  DD, CB, d, A2
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d), D   -  RES4__IY_d__D_FD4  -  FD, CB, d, A2
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d), D   -  RES5__IX_d__D_DD4  -  DD, CB, d, AA
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d), D   -  RES5__IY_d__D_FD4  -  FD, CB, d, AA
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d), D   -  RES6__IX_d__D_DD4  -  DD, CB, d, B2
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d), D   -  RES6__IY_d__D_FD4  -  FD, CB, d, B2
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d), D   -  RES7__IX_d__D_DD4  -  DD, CB, d, BA
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d), D   -  RES7__IY_d__D_FD4  -  FD, CB, d, BA
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), E   -  RES0__IX_d__E_DD4  -  DD, CB, d, 83
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d), E   -  RES1__IX_d__E_DD4  -  DD, CB, d, 8B
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d), E   -  RES1__IY_d__E_FD4  -  FD, CB, d, 8B
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d), E   -  RES2__IX_d__E_DD4  -  DD, CB, d, 93
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d), E   -  RES2__IY_d__E_FD4  -  FD, CB, d, 93
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d), E   -  RES3__IX_d__E_DD4  -  DD, CB, d, 9B
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d), E   -  RES3__IY_d__E_FD4  -  FD, CB, d, 9B
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d), E   -  RES4__IX_d__E_DD4  -  DD, CB, d, A3
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d), E   -  RES4__IY_d__E_FD4  -  FD, CB, d, A3
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d), E   -  RES5__IX_d__E_DD4  -  DD, CB, d, AB
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d), E   -  RES5__IY_d__E_FD4  -  FD, CB, d, AB
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d), E   -  RES6__IX_d__E_DD4  -  DD, CB, d, B3
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d), E   -  RES6__IY_d__E_FD4  -  FD, CB, d, B3
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d), E   -  RES7__IX_d__E_DD4  -  DD, CB, d, BB
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d), E   -  RES7__IY_d__E_FD4  -  FD, CB, d, BB
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), H   -  RES0__IX_d__H_DD4  -  DD, CB, d, 84
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d), H   -  RES1__IX_d__H_DD4  -  DD, CB, d, 8C
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d), H   -  RES1__IY_d__H_FD4  -  FD, CB, d, 8C
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d), H   -  RES2__IX_d__H_DD4  -  DD, CB, d, 94
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d), H   -  RES2__IY_d__H_FD4  -  FD, CB, d, 94
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d), H   -  RES3__IX_d__H_DD4  -  DD, CB, d, 9C
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d), H   -  RES3__IY_d__H_FD4  -  FD, CB, d, 9C
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d), H   -  RES4__IX_d__H_DD4  -  DD, CB, d, A4
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d), H   -  RES4__IY_d__H_FD4  -  FD, CB, d, A4
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d), H   -  RES5__IX_d__H_DD4  -  DD, CB, d, AC
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d), H   -  RES5__IY_d__H_FD4  -  FD, CB, d, AC
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d), H   -  RES6__IX_d__H_DD4  -  DD, CB, d, B4
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d), H   -  RES6__IY_d__H_FD4  -  FD, CB, d, B4
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d), H   -  RES7__IX_d__H_DD4  -  DD, CB, d, BC
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d), H   -  RES7__IY_d__H_FD4  -  FD, CB, d, BC
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), L   -  RES0__IX_d__L_DD4  -  DD, CB, d, 85
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IX+d), L   -  RES1__IX_d__L_DD4  -  DD, CB, d, 8D
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 1, (IY+d), L   -  RES1__IY_d__L_FD4  -  FD, CB, d, 8D
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IX+d), L   -  RES2__IX_d__L_DD4  -  DD, CB, d, 95
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 2, (IY+d), L   -  RES2__IY_d__L_FD4  -  FD, CB, d, 95
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IX+d), L   -  RES3__IX_d__L_DD4  -  DD, CB, d, 9D
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 3, (IY+d), L   -  RES3__IY_d__L_FD4  -  FD, CB, d, 9D
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IX+d), L   -  RES4__IX_d__L_DD4  -  DD, CB, d, A5
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 4, (IY+d), L   -  RES4__IY_d__L_FD4  -  FD, CB, d, A5
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IX+d), L   -  RES5__IX_d__L_DD4  -  DD, CB, d, AD
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 5, (IY+d), L   -  RES5__IY_d__L_FD4  -  FD, CB, d, AD
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IX+d), L   -  RES6__IX_d__L_DD4  -  DD, CB, d, B5
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 6, (IY+d), L   -  RES6__IY_d__L_FD4  -  FD, CB, d, B5
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IX+d), L   -  RES7__IX_d__L_DD4  -  DD, CB, d, BD
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 7, (IY+d), L   -  RES7__IY_d__L_FD4  -  FD, CB, d, BD
// extern void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
// extern void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}