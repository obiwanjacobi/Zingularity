#include "stdafx.h"
#include "FunctionsZ80.hpp"

// LD A, A   -  LDA_A_1  -  7F
extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, B   -  LDA_B_1  -  78
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, C   -  LDA_C_1  -  79
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, D   -  LDA_D_1  -  7A
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, E   -  LDA_E_1  -  7B
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, H   -  LDA_H_1  -  7C
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, L   -  LDA_L_1  -  7D
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD B, A   -  LDB_A_1  -  47
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD B, B   -  LDB_B_1  -  40
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD B, C   -  LDB_C_1  -  41
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD B, D   -  LDB_D_1  -  42
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD B, E   -  LDB_E_1  -  43
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD B, H   -  LDB_H_1  -  44
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD B, L   -  LDB_L_1  -  45
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD C, A   -  LDC_A_1  -  4F
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD C, B   -  LDC_B_1  -  48
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD C, C   -  LDC_C_1  -  49
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD C, D   -  LDC_D_1  -  4A
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD C, E   -  LDC_E_1  -  4B
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD C, H   -  LDC_H_1  -  4C
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD C, L   -  LDC_L_1  -  4D
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD D, A   -  LDD_A_1  -  57
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD D, B   -  LDD_B_1  -  50
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD D, C   -  LDD_C_1  -  51
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD D, D   -  LDD_D_1  -  52
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD D, E   -  LDD_E_1  -  53
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD D, H   -  LDD_H_1  -  54
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD D, L   -  LDD_L_1  -  55
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD E, A   -  LDE_A_1  -  5F
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD E, B   -  LDE_B_1  -  58
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD E, C   -  LDE_C_1  -  59
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD E, D   -  LDE_D_1  -  5A
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD E, E   -  LDE_E_1  -  5B
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD E, H   -  LDE_H_1  -  5C
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD E, L   -  LDE_L_1  -  5D
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD H, A   -  LDH_A_1  -  67
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD H, B   -  LDH_B_1  -  60
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD H, C   -  LDH_C_1  -  61
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD H, D   -  LDH_D_1  -  62
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD H, E   -  LDH_E_1  -  63
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD H, H   -  LDH_H_1  -  64
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD H, L   -  LDH_L_1  -  65
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD L, A   -  LDL_A_1  -  6F
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD L, B   -  LDL_B_1  -  68
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD L, C   -  LDL_C_1  -  69
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD L, D   -  LDL_D_1  -  6A
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD L, E   -  LDL_E_1  -  6B
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD L, H   -  LDL_H_1  -  6C
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD L, L   -  LDL_L_1  -  6D
// extern void OnClock_LDr_s_1_OF(AsyncThis* async) {}

// LD A, A   -  LDA_A_DD2  -  DD, 7F
extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, B   -  LDA_B_DD2  -  DD, 78
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, C   -  LDA_C_DD2  -  DD, 79
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, D   -  LDA_D_DD2  -  DD, 7A
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, E   -  LDA_E_DD2  -  DD, 7B
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, IXh   -  LDA_IXh_DD2  -  DD, 7C
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, IXl   -  LDA_IXl_DD2  -  DD, 7D
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD B, A   -  LDB_A_DD2  -  DD, 47
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD B, B   -  LDB_B_DD2  -  DD, 40
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD B, C   -  LDB_C_DD2  -  DD, 41
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD B, D   -  LDB_D_DD2  -  DD, 42
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD B, E   -  LDB_E_DD2  -  DD, 43
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD B, IXh   -  LDB_IXh_DD2  -  DD, 44
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD B, IXl   -  LDB_IXl_DD2  -  DD, 45
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD C, A   -  LDC_A_DD2  -  DD, 4F
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD C, B   -  LDC_B_DD2  -  DD, 48
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD C, C   -  LDC_C_DD2  -  DD, 49
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD C, D   -  LDC_D_DD2  -  DD, 4A
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD C, E   -  LDC_E_DD2  -  DD, 4B
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD C, IXh   -  LDC_IXh_DD2  -  DD, 4C
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD C, IXl   -  LDC_IXl_DD2  -  DD, 4D
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD D, A   -  LDD_A_DD2  -  DD, 57
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD D, B   -  LDD_B_DD2  -  DD, 50
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD D, C   -  LDD_C_DD2  -  DD, 51
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD D, D   -  LDD_D_DD2  -  DD, 52
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD D, E   -  LDD_E_DD2  -  DD, 53
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD D, IXh   -  LDD_IXh_DD2  -  DD, 54
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD D, IXl   -  LDD_IXl_DD2  -  DD, 55
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD E, A   -  LDE_A_DD2  -  DD, 5F
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD E, B   -  LDE_B_DD2  -  DD, 58
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD E, C   -  LDE_C_DD2  -  DD, 59
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD E, D   -  LDE_D_DD2  -  DD, 5A
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD E, E   -  LDE_E_DD2  -  DD, 5B
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD E, IXh   -  LDE_IXh_DD2  -  DD, 5C
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD E, IXl   -  LDE_IXl_DD2  -  DD, 5D
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXh, A   -  LDIXh_A_DD2  -  DD, 67
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXh, B   -  LDIXh_B_DD2  -  DD, 60
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXh, C   -  LDIXh_C_DD2  -  DD, 61
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXh, D   -  LDIXh_D_DD2  -  DD, 62
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXh, E   -  LDIXh_E_DD2  -  DD, 63
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXh, IXh   -  LDIXh_IXh_DD2  -  DD, 64
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXh, IXl   -  LDIXh_IXl_DD2  -  DD, 65
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXl, A   -  LDIXl_A_DD2  -  DD, 6F
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXl, B   -  LDIXl_B_DD2  -  DD, 68
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXl, C   -  LDIXl_C_DD2  -  DD, 69
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXl, D   -  LDIXl_D_DD2  -  DD, 6A
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXl, E   -  LDIXl_E_DD2  -  DD, 6B
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXl, IXh   -  LDIXl_IXh_DD2  -  DD, 6C
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD IXl, IXl   -  LDIXl_IXl_DD2  -  DD, 6D
// extern void OnClock_LDt_u_DD2_OF(AsyncThis* async) {}

// LD A, A   -  LDA_A_FD2  -  FD, 7F
extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, B   -  LDA_B_FD2  -  FD, 78
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, C   -  LDA_C_FD2  -  FD, 79
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, D   -  LDA_D_FD2  -  FD, 7A
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, E   -  LDA_E_FD2  -  FD, 7B
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, IYh   -  LDA_IYh_FD2  -  FD, 7C
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, IYl   -  LDA_IYl_FD2  -  FD, 7D
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD B, A   -  LDB_A_FD2  -  FD, 47
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD B, B   -  LDB_B_FD2  -  FD, 40
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD B, C   -  LDB_C_FD2  -  FD, 41
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD B, D   -  LDB_D_FD2  -  FD, 42
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD B, E   -  LDB_E_FD2  -  FD, 43
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD B, IYh   -  LDB_IYh_FD2  -  FD, 44
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD B, IYl   -  LDB_IYl_FD2  -  FD, 45
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD C, A   -  LDC_A_FD2  -  FD, 4F
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD C, B   -  LDC_B_FD2  -  FD, 48
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD C, C   -  LDC_C_FD2  -  FD, 49
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD C, D   -  LDC_D_FD2  -  FD, 4A
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD C, E   -  LDC_E_FD2  -  FD, 4B
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD C, IYh   -  LDC_IYh_FD2  -  FD, 4C
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD C, IYl   -  LDC_IYl_FD2  -  FD, 4D
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD D, A   -  LDD_A_FD2  -  FD, 57
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD D, B   -  LDD_B_FD2  -  FD, 50
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD D, C   -  LDD_C_FD2  -  FD, 51
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD D, D   -  LDD_D_FD2  -  FD, 52
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD D, E   -  LDD_E_FD2  -  FD, 53
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD D, IYh   -  LDD_IYh_FD2  -  FD, 54
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD D, IYl   -  LDD_IYl_FD2  -  FD, 55
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD E, A   -  LDE_A_FD2  -  FD, 5F
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD E, B   -  LDE_B_FD2  -  FD, 58
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD E, C   -  LDE_C_FD2  -  FD, 59
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD E, D   -  LDE_D_FD2  -  FD, 5A
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD E, E   -  LDE_E_FD2  -  FD, 5B
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD E, IYh   -  LDE_IYh_FD2  -  FD, 5C
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD E, IYl   -  LDE_IYl_FD2  -  FD, 5D
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYh, A   -  LDIYh_A_FD2  -  FD, 67
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYh, B   -  LDIYh_B_FD2  -  FD, 60
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYh, C   -  LDIYh_C_FD2  -  FD, 61
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYh, D   -  LDIYh_D_FD2  -  FD, 62
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYh, E   -  LDIYh_E_FD2  -  FD, 63
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYh, IYh   -  LDIYh_IYh_FD2  -  FD, 64
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYh, IYl   -  LDIYh_IYl_FD2  -  FD, 65
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYl, A   -  LDIYl_A_FD2  -  FD, 6F
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYl, B   -  LDIYl_B_FD2  -  FD, 68
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYl, C   -  LDIYl_C_FD2  -  FD, 69
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYl, D   -  LDIYl_D_FD2  -  FD, 6A
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYl, E   -  LDIYl_E_FD2  -  FD, 6B
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYl, IYh   -  LDIYl_IYh_FD2  -  FD, 6C
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD IYl, IYl   -  LDIYl_IYl_FD2  -  FD, 6D
// extern void OnClock_LDv_w_FD2_OF(AsyncThis* async) {}

// LD A, n   -  LDA_n_2  -  3E, n
extern void OnClock_LDr_n_2_OF(AsyncThis* async) {}
extern void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD B, n   -  LDB_n_2  -  06, n
// extern void OnClock_LDr_n_2_OF(AsyncThis* async) {}
// extern void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD C, n   -  LDC_n_2  -  0E, n
// extern void OnClock_LDr_n_2_OF(AsyncThis* async) {}
// extern void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD D, n   -  LDD_n_2  -  16, n
// extern void OnClock_LDr_n_2_OF(AsyncThis* async) {}
// extern void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD E, n   -  LDE_n_2  -  1E, n
// extern void OnClock_LDr_n_2_OF(AsyncThis* async) {}
// extern void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD H, n   -  LDH_n_2  -  26, n
// extern void OnClock_LDr_n_2_OF(AsyncThis* async) {}
// extern void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD L, n   -  LDL_n_2  -  2E, n
// extern void OnClock_LDr_n_2_OF(AsyncThis* async) {}
// extern void OnClock_LDr_n_2_OD(AsyncThis* async) {}

// LD A, n   -  LDA_n_DD3  -  DD, 3E, n
extern void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
extern void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD B, n   -  LDB_n_DD3  -  DD, 06, n
// extern void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
// extern void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD C, n   -  LDC_n_DD3  -  DD, 0E, n
// extern void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
// extern void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD D, n   -  LDD_n_DD3  -  DD, 16, n
// extern void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
// extern void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD E, n   -  LDE_n_DD3  -  DD, 1E, n
// extern void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
// extern void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD IXh, n   -  LDIXh_n_DD3  -  DD, 26, n
// extern void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
// extern void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD IXl, n   -  LDIXl_n_DD3  -  DD, 2E, n
// extern void OnClock_LDt_n_DD3_OF(AsyncThis* async) {}
// extern void OnClock_LDt_n_DD3_OD(AsyncThis* async) {}

// LD A, n   -  LDA_n_FD3  -  FD, 3E, n
extern void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
extern void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD B, n   -  LDB_n_FD3  -  FD, 06, n
// extern void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
// extern void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD C, n   -  LDC_n_FD3  -  FD, 0E, n
// extern void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
// extern void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD D, n   -  LDD_n_FD3  -  FD, 16, n
// extern void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
// extern void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD E, n   -  LDE_n_FD3  -  FD, 1E, n
// extern void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
// extern void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD IYh, n   -  LDIYh_n_FD3  -  FD, 26, n
// extern void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
// extern void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD IYl, n   -  LDIYl_n_FD3  -  FD, 2E, n
// extern void OnClock_LDv_n_FD3_OF(AsyncThis* async) {}
// extern void OnClock_LDv_n_FD3_OD(AsyncThis* async) {}

// LD A, (HL)   -  LDA__HL__1  -  7E
extern void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
extern void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD B, (HL)   -  LDB__HL__1  -  46
// extern void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
// extern void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD C, (HL)   -  LDC__HL__1  -  4E
// extern void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
// extern void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD D, (HL)   -  LDD__HL__1  -  56
// extern void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
// extern void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD E, (HL)   -  LDE__HL__1  -  5E
// extern void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
// extern void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD H, (HL)   -  LDH__HL__1  -  66
// extern void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
// extern void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD L, (HL)   -  LDL__HL__1  -  6E
// extern void OnClock_LDr__HL__1_OF(AsyncThis* async) {}
// extern void OnClock_LDr__HL__1_MR(AsyncThis* async) {}

// LD A, (IX+d)   -  LDA__IX_d__DD3  -  DD, BE, d
extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD A, (IY+d)   -  LDA__IY_d__FD3  -  FD, BE, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD B, (IX+d)   -  LDB__IX_d__DD3  -  DD, 86, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD B, (IY+d)   -  LDB__IY_d__FD3  -  FD, 86, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD C, (IX+d)   -  LDC__IX_d__DD3  -  DD, 8E, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD C, (IY+d)   -  LDC__IY_d__FD3  -  FD, 8E, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD D, (IX+d)   -  LDD__IX_d__DD3  -  DD, 96, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD D, (IY+d)   -  LDD__IY_d__FD3  -  FD, 96, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD E, (IX+d)   -  LDE__IX_d__DD3  -  DD, 9E, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD E, (IY+d)   -  LDE__IY_d__FD3  -  FD, 9E, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD H, (IX+d)   -  LDH__IX_d__DD3  -  DD, A6, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD H, (IY+d)   -  LDH__IY_d__FD3  -  FD, A6, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD L, (IX+d)   -  LDL__IX_d__DD3  -  DD, AE, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD L, (IY+d)   -  LDL__IY_d__FD3  -  FD, AE, d
// extern void OnClock_LDr__ex_d__ex3_OF(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_OD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_AD(AsyncThis* async) {}
// extern void OnClock_LDr__ex_d__ex3_MR(AsyncThis* async) {}

// LD (HL), A   -  LD_HL__A_1  -  77
extern void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
extern void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (HL), B   -  LD_HL__B_1  -  70
// extern void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
// extern void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (HL), C   -  LD_HL__C_1  -  71
// extern void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
// extern void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (HL), D   -  LD_HL__D_1  -  72
// extern void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
// extern void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (HL), E   -  LD_HL__E_1  -  73
// extern void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
// extern void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (HL), H   -  LD_HL__H_1  -  74
// extern void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
// extern void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (HL), L   -  LD_HL__L_1  -  75
// extern void OnClock_LD_HL__r_1_OF(AsyncThis* async) {}
// extern void OnClock_LD_HL__r_1_MW(AsyncThis* async) {}

// LD (IX+d), A   -  LD_IX_d__A_DD3  -  DD, 77, d
extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IY+d), A   -  LD_IY_d__A_FD3  -  FD, 77, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IX+d), B   -  LD_IX_d__B_DD3  -  DD, 70, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IY+d), B   -  LD_IY_d__B_FD3  -  FD, 70, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IX+d), C   -  LD_IX_d__C_DD3  -  DD, 71, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IY+d), C   -  LD_IY_d__C_FD3  -  FD, 71, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IX+d), D   -  LD_IX_d__D_DD3  -  DD, 72, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IY+d), D   -  LD_IY_d__D_FD3  -  FD, 72, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IX+d), E   -  LD_IX_d__E_DD3  -  DD, 73, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IY+d), E   -  LD_IY_d__E_FD3  -  FD, 73, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IX+d), H   -  LD_IX_d__H_DD3  -  DD, 74, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IY+d), H   -  LD_IY_d__H_FD3  -  FD, 74, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IX+d), L   -  LD_IX_d__L_DD3  -  DD, 75, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (IY+d), L   -  LD_IY_d__L_FD3  -  FD, 75, d
// extern void OnClock_LD_ex_d__r_ex3_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_AD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__r_ex3_MW(AsyncThis* async) {}

// LD (HL), n   -  LD_HL__n_2  -  36, n
extern void OnClock_LD_HL__n_2_OF(AsyncThis* async) {}
extern void OnClock_LD_HL__n_2_OD(AsyncThis* async) {}
extern void OnClock_LD_HL__n_2_MW(AsyncThis* async) {}

// LD (IX+d), n   -  LD_IX_d__n_DD4  -  DD, 36, d, n
extern void OnClock_LD_ex_d__n_ex4_OF(AsyncThis* async) {}
extern void OnClock_LD_ex_d__n_ex4_OD(AsyncThis* async) {}
extern void OnClock_LD_ex_d__n_ex4_FD(AsyncThis* async) {}
extern void OnClock_LD_ex_d__n_ex4_MW(AsyncThis* async) {}

// LD (IY+d), n   -  LD_IY_d__n_FD4  -  FD, 36, d, n
// extern void OnClock_LD_ex_d__n_ex4_OF(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__n_ex4_OD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__n_ex4_FD(AsyncThis* async) {}
// extern void OnClock_LD_ex_d__n_ex4_MW(AsyncThis* async) {}

// LD A, (BC)   -  LDA__BC__1  -  0A
extern void OnClock_LDA__BC__1_OF(AsyncThis* async) {}

// LD A, (DE)   -  LDA__DE__1  -  1A
extern void OnClock_LDA__DE__1_OF(AsyncThis* async) {}

// LD A, (nn)   -  LDA__nn__3  -  3A, n, n
extern void OnClock_LDA__nn__3_OF(AsyncThis* async) {}
extern void OnClock_LDA__nn__3_ODl(AsyncThis* async) {}
extern void OnClock_LDA__nn__3_ODh(AsyncThis* async) {}
extern void OnClock_LDA__nn__3_MR(AsyncThis* async) {}

// LD (BC), A   -  LD_BC__A_1  -  02
extern void OnClock_LD_BC__A_1_OF(AsyncThis* async) {}

// LD (DE), A   -  LD_DE__A_1  -  12
extern void OnClock_LD_DE__A_1_OF(AsyncThis* async) {}

// LD (nn), A   -  LD_nn__A_3  -  32, n, n
extern void OnClock_LD_nn__A_3_OF(AsyncThis* async) {}
extern void OnClock_LD_nn__A_3_ODl(AsyncThis* async) {}
extern void OnClock_LD_nn__A_3_ODh(AsyncThis* async) {}
extern void OnClock_LD_nn__A_3_MW(AsyncThis* async) {}

// LD A, I   -  LDA_I_ED2  -  ED, 57
extern void OnClock_LDA_I_ED2_OF(AsyncThis* async) {}

// LD A, R   -  LDA_R_ED2  -  ED, 5F
extern void OnClock_LDA_R_ED2_OF(AsyncThis* async) {}

// LD I, A   -  LDI_A_ED2  -  ED, 47
extern void OnClock_LDI_A_ED2_OF(AsyncThis* async) {}

// LD R, A   -  LDR_A_ED2  -  ED, 4F
extern void OnClock_LDR_A_ED2_OF(AsyncThis* async) {}