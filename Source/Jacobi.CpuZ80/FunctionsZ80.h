/**
 *  Generated Source Code
 *  Any changes you make will be lost when the code is regenerated.
 */


#ifdef __cplusplus
extern "C" {
#endif

// generic cpu operations
extern void OnClock_OF();
extern void OnClock_OD();
extern void OnClock_ODd();
extern void OnClock_MR();
extern void OnClock_MW();
extern void OnClock_PCd();
extern void OnClock_SRh();
extern void OnClock_SRl();
extern void OnClock_SWh();
extern void OnClock_SWl();
extern void OnClock_PR();
extern void OnClock_PW();

// Functions for the emulating the Z80:

// LD A, A   -  LDA_A_1  -  7F
extern void OnClock_LDr_s_1_OF();

// LD A, B   -  LDA_B_1  -  78
// extern void OnClock_LDr_s_1_OF();

// LD A, C   -  LDA_C_1  -  79
// extern void OnClock_LDr_s_1_OF();

// LD A, D   -  LDA_D_1  -  7A
// extern void OnClock_LDr_s_1_OF();

// LD A, E   -  LDA_E_1  -  7B
// extern void OnClock_LDr_s_1_OF();

// LD A, H   -  LDA_H_1  -  7C
// extern void OnClock_LDr_s_1_OF();

// LD A, L   -  LDA_L_1  -  7D
// extern void OnClock_LDr_s_1_OF();

// LD B, A   -  LDB_A_1  -  47
// extern void OnClock_LDr_s_1_OF();

// LD B, B   -  LDB_B_1  -  40
// extern void OnClock_LDr_s_1_OF();

// LD B, C   -  LDB_C_1  -  41
// extern void OnClock_LDr_s_1_OF();

// LD B, D   -  LDB_D_1  -  42
// extern void OnClock_LDr_s_1_OF();

// LD B, E   -  LDB_E_1  -  43
// extern void OnClock_LDr_s_1_OF();

// LD B, H   -  LDB_H_1  -  44
// extern void OnClock_LDr_s_1_OF();

// LD B, L   -  LDB_L_1  -  45
// extern void OnClock_LDr_s_1_OF();

// LD C, A   -  LDC_A_1  -  4F
// extern void OnClock_LDr_s_1_OF();

// LD C, B   -  LDC_B_1  -  48
// extern void OnClock_LDr_s_1_OF();

// LD C, C   -  LDC_C_1  -  49
// extern void OnClock_LDr_s_1_OF();

// LD C, D   -  LDC_D_1  -  4A
// extern void OnClock_LDr_s_1_OF();

// LD C, E   -  LDC_E_1  -  4B
// extern void OnClock_LDr_s_1_OF();

// LD C, H   -  LDC_H_1  -  4C
// extern void OnClock_LDr_s_1_OF();

// LD C, L   -  LDC_L_1  -  4D
// extern void OnClock_LDr_s_1_OF();

// LD D, A   -  LDD_A_1  -  57
// extern void OnClock_LDr_s_1_OF();

// LD D, B   -  LDD_B_1  -  50
// extern void OnClock_LDr_s_1_OF();

// LD D, C   -  LDD_C_1  -  51
// extern void OnClock_LDr_s_1_OF();

// LD D, D   -  LDD_D_1  -  52
// extern void OnClock_LDr_s_1_OF();

// LD D, E   -  LDD_E_1  -  53
// extern void OnClock_LDr_s_1_OF();

// LD D, H   -  LDD_H_1  -  54
// extern void OnClock_LDr_s_1_OF();

// LD D, L   -  LDD_L_1  -  55
// extern void OnClock_LDr_s_1_OF();

// LD E, A   -  LDE_A_1  -  5F
// extern void OnClock_LDr_s_1_OF();

// LD E, B   -  LDE_B_1  -  58
// extern void OnClock_LDr_s_1_OF();

// LD E, C   -  LDE_C_1  -  59
// extern void OnClock_LDr_s_1_OF();

// LD E, D   -  LDE_D_1  -  5A
// extern void OnClock_LDr_s_1_OF();

// LD E, E   -  LDE_E_1  -  5B
// extern void OnClock_LDr_s_1_OF();

// LD E, H   -  LDE_H_1  -  5C
// extern void OnClock_LDr_s_1_OF();

// LD E, L   -  LDE_L_1  -  5D
// extern void OnClock_LDr_s_1_OF();

// LD H, A   -  LDH_A_1  -  67
// extern void OnClock_LDr_s_1_OF();

// LD H, B   -  LDH_B_1  -  60
// extern void OnClock_LDr_s_1_OF();

// LD H, C   -  LDH_C_1  -  61
// extern void OnClock_LDr_s_1_OF();

// LD H, D   -  LDH_D_1  -  62
// extern void OnClock_LDr_s_1_OF();

// LD H, E   -  LDH_E_1  -  63
// extern void OnClock_LDr_s_1_OF();

// LD H, H   -  LDH_H_1  -  64
// extern void OnClock_LDr_s_1_OF();

// LD H, L   -  LDH_L_1  -  65
// extern void OnClock_LDr_s_1_OF();

// LD L, A   -  LDL_A_1  -  6F
// extern void OnClock_LDr_s_1_OF();

// LD L, B   -  LDL_B_1  -  68
// extern void OnClock_LDr_s_1_OF();

// LD L, C   -  LDL_C_1  -  69
// extern void OnClock_LDr_s_1_OF();

// LD L, D   -  LDL_D_1  -  6A
// extern void OnClock_LDr_s_1_OF();

// LD L, E   -  LDL_E_1  -  6B
// extern void OnClock_LDr_s_1_OF();

// LD L, H   -  LDL_H_1  -  6C
// extern void OnClock_LDr_s_1_OF();

// LD L, L   -  LDL_L_1  -  6D
// extern void OnClock_LDr_s_1_OF();

// LD A, A   -  LDA_A_DD2  -  DD, 7F
extern void OnClock_LDt_u_DD2_OF();

// LD A, B   -  LDA_B_DD2  -  DD, 78
// extern void OnClock_LDt_u_DD2_OF();

// LD A, C   -  LDA_C_DD2  -  DD, 79
// extern void OnClock_LDt_u_DD2_OF();

// LD A, D   -  LDA_D_DD2  -  DD, 7A
// extern void OnClock_LDt_u_DD2_OF();

// LD A, E   -  LDA_E_DD2  -  DD, 7B
// extern void OnClock_LDt_u_DD2_OF();

// LD A, IXh   -  LDA_IXh_DD2  -  DD, 7C
// extern void OnClock_LDt_u_DD2_OF();

// LD A, IXl   -  LDA_IXl_DD2  -  DD, 7D
// extern void OnClock_LDt_u_DD2_OF();

// LD B, A   -  LDB_A_DD2  -  DD, 47
// extern void OnClock_LDt_u_DD2_OF();

// LD B, B   -  LDB_B_DD2  -  DD, 40
// extern void OnClock_LDt_u_DD2_OF();

// LD B, C   -  LDB_C_DD2  -  DD, 41
// extern void OnClock_LDt_u_DD2_OF();

// LD B, D   -  LDB_D_DD2  -  DD, 42
// extern void OnClock_LDt_u_DD2_OF();

// LD B, E   -  LDB_E_DD2  -  DD, 43
// extern void OnClock_LDt_u_DD2_OF();

// LD B, IXh   -  LDB_IXh_DD2  -  DD, 44
// extern void OnClock_LDt_u_DD2_OF();

// LD B, IXl   -  LDB_IXl_DD2  -  DD, 45
// extern void OnClock_LDt_u_DD2_OF();

// LD C, A   -  LDC_A_DD2  -  DD, 4F
// extern void OnClock_LDt_u_DD2_OF();

// LD C, B   -  LDC_B_DD2  -  DD, 48
// extern void OnClock_LDt_u_DD2_OF();

// LD C, C   -  LDC_C_DD2  -  DD, 49
// extern void OnClock_LDt_u_DD2_OF();

// LD C, D   -  LDC_D_DD2  -  DD, 4A
// extern void OnClock_LDt_u_DD2_OF();

// LD C, E   -  LDC_E_DD2  -  DD, 4B
// extern void OnClock_LDt_u_DD2_OF();

// LD C, IXh   -  LDC_IXh_DD2  -  DD, 4C
// extern void OnClock_LDt_u_DD2_OF();

// LD C, IXl   -  LDC_IXl_DD2  -  DD, 4D
// extern void OnClock_LDt_u_DD2_OF();

// LD D, A   -  LDD_A_DD2  -  DD, 57
// extern void OnClock_LDt_u_DD2_OF();

// LD D, B   -  LDD_B_DD2  -  DD, 50
// extern void OnClock_LDt_u_DD2_OF();

// LD D, C   -  LDD_C_DD2  -  DD, 51
// extern void OnClock_LDt_u_DD2_OF();

// LD D, D   -  LDD_D_DD2  -  DD, 52
// extern void OnClock_LDt_u_DD2_OF();

// LD D, E   -  LDD_E_DD2  -  DD, 53
// extern void OnClock_LDt_u_DD2_OF();

// LD D, IXh   -  LDD_IXh_DD2  -  DD, 54
// extern void OnClock_LDt_u_DD2_OF();

// LD D, IXl   -  LDD_IXl_DD2  -  DD, 55
// extern void OnClock_LDt_u_DD2_OF();

// LD E, A   -  LDE_A_DD2  -  DD, 5F
// extern void OnClock_LDt_u_DD2_OF();

// LD E, B   -  LDE_B_DD2  -  DD, 58
// extern void OnClock_LDt_u_DD2_OF();

// LD E, C   -  LDE_C_DD2  -  DD, 59
// extern void OnClock_LDt_u_DD2_OF();

// LD E, D   -  LDE_D_DD2  -  DD, 5A
// extern void OnClock_LDt_u_DD2_OF();

// LD E, E   -  LDE_E_DD2  -  DD, 5B
// extern void OnClock_LDt_u_DD2_OF();

// LD E, IXh   -  LDE_IXh_DD2  -  DD, 5C
// extern void OnClock_LDt_u_DD2_OF();

// LD E, IXl   -  LDE_IXl_DD2  -  DD, 5D
// extern void OnClock_LDt_u_DD2_OF();

// LD IXh, A   -  LDIXh_A_DD2  -  DD, 67
// extern void OnClock_LDt_u_DD2_OF();

// LD IXh, B   -  LDIXh_B_DD2  -  DD, 60
// extern void OnClock_LDt_u_DD2_OF();

// LD IXh, C   -  LDIXh_C_DD2  -  DD, 61
// extern void OnClock_LDt_u_DD2_OF();

// LD IXh, D   -  LDIXh_D_DD2  -  DD, 62
// extern void OnClock_LDt_u_DD2_OF();

// LD IXh, E   -  LDIXh_E_DD2  -  DD, 63
// extern void OnClock_LDt_u_DD2_OF();

// LD IXh, IXh   -  LDIXh_IXh_DD2  -  DD, 64
// extern void OnClock_LDt_u_DD2_OF();

// LD IXh, IXl   -  LDIXh_IXl_DD2  -  DD, 65
// extern void OnClock_LDt_u_DD2_OF();

// LD IXl, A   -  LDIXl_A_DD2  -  DD, 6F
// extern void OnClock_LDt_u_DD2_OF();

// LD IXl, B   -  LDIXl_B_DD2  -  DD, 68
// extern void OnClock_LDt_u_DD2_OF();

// LD IXl, C   -  LDIXl_C_DD2  -  DD, 69
// extern void OnClock_LDt_u_DD2_OF();

// LD IXl, D   -  LDIXl_D_DD2  -  DD, 6A
// extern void OnClock_LDt_u_DD2_OF();

// LD IXl, E   -  LDIXl_E_DD2  -  DD, 6B
// extern void OnClock_LDt_u_DD2_OF();

// LD IXl, IXh   -  LDIXl_IXh_DD2  -  DD, 6C
// extern void OnClock_LDt_u_DD2_OF();

// LD IXl, IXl   -  LDIXl_IXl_DD2  -  DD, 6D
// extern void OnClock_LDt_u_DD2_OF();

// LD A, A   -  LDA_A_FD2  -  FD, 7F
extern void OnClock_LDv_w_FD2_OF();

// LD A, B   -  LDA_B_FD2  -  FD, 78
// extern void OnClock_LDv_w_FD2_OF();

// LD A, C   -  LDA_C_FD2  -  FD, 79
// extern void OnClock_LDv_w_FD2_OF();

// LD A, D   -  LDA_D_FD2  -  FD, 7A
// extern void OnClock_LDv_w_FD2_OF();

// LD A, E   -  LDA_E_FD2  -  FD, 7B
// extern void OnClock_LDv_w_FD2_OF();

// LD A, IYh   -  LDA_IYh_FD2  -  FD, 7C
// extern void OnClock_LDv_w_FD2_OF();

// LD A, IYl   -  LDA_IYl_FD2  -  FD, 7D
// extern void OnClock_LDv_w_FD2_OF();

// LD B, A   -  LDB_A_FD2  -  FD, 47
// extern void OnClock_LDv_w_FD2_OF();

// LD B, B   -  LDB_B_FD2  -  FD, 40
// extern void OnClock_LDv_w_FD2_OF();

// LD B, C   -  LDB_C_FD2  -  FD, 41
// extern void OnClock_LDv_w_FD2_OF();

// LD B, D   -  LDB_D_FD2  -  FD, 42
// extern void OnClock_LDv_w_FD2_OF();

// LD B, E   -  LDB_E_FD2  -  FD, 43
// extern void OnClock_LDv_w_FD2_OF();

// LD B, IYh   -  LDB_IYh_FD2  -  FD, 44
// extern void OnClock_LDv_w_FD2_OF();

// LD B, IYl   -  LDB_IYl_FD2  -  FD, 45
// extern void OnClock_LDv_w_FD2_OF();

// LD C, A   -  LDC_A_FD2  -  FD, 4F
// extern void OnClock_LDv_w_FD2_OF();

// LD C, B   -  LDC_B_FD2  -  FD, 48
// extern void OnClock_LDv_w_FD2_OF();

// LD C, C   -  LDC_C_FD2  -  FD, 49
// extern void OnClock_LDv_w_FD2_OF();

// LD C, D   -  LDC_D_FD2  -  FD, 4A
// extern void OnClock_LDv_w_FD2_OF();

// LD C, E   -  LDC_E_FD2  -  FD, 4B
// extern void OnClock_LDv_w_FD2_OF();

// LD C, IYh   -  LDC_IYh_FD2  -  FD, 4C
// extern void OnClock_LDv_w_FD2_OF();

// LD C, IYl   -  LDC_IYl_FD2  -  FD, 4D
// extern void OnClock_LDv_w_FD2_OF();

// LD D, A   -  LDD_A_FD2  -  FD, 57
// extern void OnClock_LDv_w_FD2_OF();

// LD D, B   -  LDD_B_FD2  -  FD, 50
// extern void OnClock_LDv_w_FD2_OF();

// LD D, C   -  LDD_C_FD2  -  FD, 51
// extern void OnClock_LDv_w_FD2_OF();

// LD D, D   -  LDD_D_FD2  -  FD, 52
// extern void OnClock_LDv_w_FD2_OF();

// LD D, E   -  LDD_E_FD2  -  FD, 53
// extern void OnClock_LDv_w_FD2_OF();

// LD D, IYh   -  LDD_IYh_FD2  -  FD, 54
// extern void OnClock_LDv_w_FD2_OF();

// LD D, IYl   -  LDD_IYl_FD2  -  FD, 55
// extern void OnClock_LDv_w_FD2_OF();

// LD E, A   -  LDE_A_FD2  -  FD, 5F
// extern void OnClock_LDv_w_FD2_OF();

// LD E, B   -  LDE_B_FD2  -  FD, 58
// extern void OnClock_LDv_w_FD2_OF();

// LD E, C   -  LDE_C_FD2  -  FD, 59
// extern void OnClock_LDv_w_FD2_OF();

// LD E, D   -  LDE_D_FD2  -  FD, 5A
// extern void OnClock_LDv_w_FD2_OF();

// LD E, E   -  LDE_E_FD2  -  FD, 5B
// extern void OnClock_LDv_w_FD2_OF();

// LD E, IYh   -  LDE_IYh_FD2  -  FD, 5C
// extern void OnClock_LDv_w_FD2_OF();

// LD E, IYl   -  LDE_IYl_FD2  -  FD, 5D
// extern void OnClock_LDv_w_FD2_OF();

// LD IYh, A   -  LDIYh_A_FD2  -  FD, 67
// extern void OnClock_LDv_w_FD2_OF();

// LD IYh, B   -  LDIYh_B_FD2  -  FD, 60
// extern void OnClock_LDv_w_FD2_OF();

// LD IYh, C   -  LDIYh_C_FD2  -  FD, 61
// extern void OnClock_LDv_w_FD2_OF();

// LD IYh, D   -  LDIYh_D_FD2  -  FD, 62
// extern void OnClock_LDv_w_FD2_OF();

// LD IYh, E   -  LDIYh_E_FD2  -  FD, 63
// extern void OnClock_LDv_w_FD2_OF();

// LD IYh, IYh   -  LDIYh_IYh_FD2  -  FD, 64
// extern void OnClock_LDv_w_FD2_OF();

// LD IYh, IYl   -  LDIYh_IYl_FD2  -  FD, 65
// extern void OnClock_LDv_w_FD2_OF();

// LD IYl, A   -  LDIYl_A_FD2  -  FD, 6F
// extern void OnClock_LDv_w_FD2_OF();

// LD IYl, B   -  LDIYl_B_FD2  -  FD, 68
// extern void OnClock_LDv_w_FD2_OF();

// LD IYl, C   -  LDIYl_C_FD2  -  FD, 69
// extern void OnClock_LDv_w_FD2_OF();

// LD IYl, D   -  LDIYl_D_FD2  -  FD, 6A
// extern void OnClock_LDv_w_FD2_OF();

// LD IYl, E   -  LDIYl_E_FD2  -  FD, 6B
// extern void OnClock_LDv_w_FD2_OF();

// LD IYl, IYh   -  LDIYl_IYh_FD2  -  FD, 6C
// extern void OnClock_LDv_w_FD2_OF();

// LD IYl, IYl   -  LDIYl_IYl_FD2  -  FD, 6D
// extern void OnClock_LDv_w_FD2_OF();

// LD A, n   -  LDA_n_2  -  3E, n
extern void OnClock_LDr_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD B, n   -  LDB_n_2  -  06, n
// extern void OnClock_LDr_n_2_OF();
// extern void OnClock_LDr_n_2_OD();

// LD C, n   -  LDC_n_2  -  0E, n
// extern void OnClock_LDr_n_2_OF();
// extern void OnClock_LDr_n_2_OD();

// LD D, n   -  LDD_n_2  -  16, n
// extern void OnClock_LDr_n_2_OF();
// extern void OnClock_LDr_n_2_OD();

// LD E, n   -  LDE_n_2  -  1E, n
// extern void OnClock_LDr_n_2_OF();
// extern void OnClock_LDr_n_2_OD();

// LD H, n   -  LDH_n_2  -  26, n
// extern void OnClock_LDr_n_2_OF();
// extern void OnClock_LDr_n_2_OD();

// LD L, n   -  LDL_n_2  -  2E, n
// extern void OnClock_LDr_n_2_OF();
// extern void OnClock_LDr_n_2_OD();

// LD A, n   -  LDA_n_DD3  -  DD, 3E, n
extern void OnClock_LDt_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD B, n   -  LDB_n_DD3  -  DD, 06, n
// extern void OnClock_LDt_n_DD3_OF();
// extern void OnClock_LDt_n_DD3_OD();

// LD C, n   -  LDC_n_DD3  -  DD, 0E, n
// extern void OnClock_LDt_n_DD3_OF();
// extern void OnClock_LDt_n_DD3_OD();

// LD D, n   -  LDD_n_DD3  -  DD, 16, n
// extern void OnClock_LDt_n_DD3_OF();
// extern void OnClock_LDt_n_DD3_OD();

// LD E, n   -  LDE_n_DD3  -  DD, 1E, n
// extern void OnClock_LDt_n_DD3_OF();
// extern void OnClock_LDt_n_DD3_OD();

// LD IXh, n   -  LDIXh_n_DD3  -  DD, 26, n
// extern void OnClock_LDt_n_DD3_OF();
// extern void OnClock_LDt_n_DD3_OD();

// LD IXl, n   -  LDIXl_n_DD3  -  DD, 2E, n
// extern void OnClock_LDt_n_DD3_OF();
// extern void OnClock_LDt_n_DD3_OD();

// LD A, n   -  LDA_n_FD3  -  FD, 3E, n
extern void OnClock_LDv_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD B, n   -  LDB_n_FD3  -  FD, 06, n
// extern void OnClock_LDv_n_FD3_OF();
// extern void OnClock_LDv_n_FD3_OD();

// LD C, n   -  LDC_n_FD3  -  FD, 0E, n
// extern void OnClock_LDv_n_FD3_OF();
// extern void OnClock_LDv_n_FD3_OD();

// LD D, n   -  LDD_n_FD3  -  FD, 16, n
// extern void OnClock_LDv_n_FD3_OF();
// extern void OnClock_LDv_n_FD3_OD();

// LD E, n   -  LDE_n_FD3  -  FD, 1E, n
// extern void OnClock_LDv_n_FD3_OF();
// extern void OnClock_LDv_n_FD3_OD();

// LD IYh, n   -  LDIYh_n_FD3  -  FD, 26, n
// extern void OnClock_LDv_n_FD3_OF();
// extern void OnClock_LDv_n_FD3_OD();

// LD IYl, n   -  LDIYl_n_FD3  -  FD, 2E, n
// extern void OnClock_LDv_n_FD3_OF();
// extern void OnClock_LDv_n_FD3_OD();

// LD A, (HL)   -  LDA__HL__1  -  7E
extern void OnClock_LDr__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD B, (HL)   -  LDB__HL__1  -  46
// extern void OnClock_LDr__HL__1_OF();
// extern void OnClock_LDr__HL__1_MR();

// LD C, (HL)   -  LDC__HL__1  -  4E
// extern void OnClock_LDr__HL__1_OF();
// extern void OnClock_LDr__HL__1_MR();

// LD D, (HL)   -  LDD__HL__1  -  56
// extern void OnClock_LDr__HL__1_OF();
// extern void OnClock_LDr__HL__1_MR();

// LD E, (HL)   -  LDE__HL__1  -  5E
// extern void OnClock_LDr__HL__1_OF();
// extern void OnClock_LDr__HL__1_MR();

// LD H, (HL)   -  LDH__HL__1  -  66
// extern void OnClock_LDr__HL__1_OF();
// extern void OnClock_LDr__HL__1_MR();

// LD L, (HL)   -  LDL__HL__1  -  6E
// extern void OnClock_LDr__HL__1_OF();
// extern void OnClock_LDr__HL__1_MR();

// LD A, (IX+d)   -  LDA__IX_d__DD3  -  DD, 7E, d
extern void OnClock_LDr__ex_d__ex3_OF();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD A, (IY+d)   -  LDA__IY_d__FD3  -  FD, 7E, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD B, (IX+d)   -  LDB__IX_d__DD3  -  DD, 46, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD B, (IY+d)   -  LDB__IY_d__FD3  -  FD, 46, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD C, (IX+d)   -  LDC__IX_d__DD3  -  DD, 4E, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD C, (IY+d)   -  LDC__IY_d__FD3  -  FD, 4E, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD D, (IX+d)   -  LDD__IX_d__DD3  -  DD, 56, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD D, (IY+d)   -  LDD__IY_d__FD3  -  FD, 56, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD E, (IX+d)   -  LDE__IX_d__DD3  -  DD, 5E, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD E, (IY+d)   -  LDE__IY_d__FD3  -  FD, 5E, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD H, (IX+d)   -  LDH__IX_d__DD3  -  DD, 66, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD H, (IY+d)   -  LDH__IY_d__FD3  -  FD, 66, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD L, (IX+d)   -  LDL__IX_d__DD3  -  DD, 6E, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD L, (IY+d)   -  LDL__IY_d__FD3  -  FD, 6E, d
// extern void OnClock_LDr__ex_d__ex3_OF();
// extern void OnClock_LDr__ex_d__ex3_AD();
// extern void OnClock_LDr__ex_d__ex3_MR();

// LD (HL), A   -  LD_HL__A_1  -  77
extern void OnClock_LD_HL__r_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (HL), B   -  LD_HL__B_1  -  70
// extern void OnClock_LD_HL__r_1_OF();
// extern void OnClock_LD_HL__r_1_MW();

// LD (HL), C   -  LD_HL__C_1  -  71
// extern void OnClock_LD_HL__r_1_OF();
// extern void OnClock_LD_HL__r_1_MW();

// LD (HL), D   -  LD_HL__D_1  -  72
// extern void OnClock_LD_HL__r_1_OF();
// extern void OnClock_LD_HL__r_1_MW();

// LD (HL), E   -  LD_HL__E_1  -  73
// extern void OnClock_LD_HL__r_1_OF();
// extern void OnClock_LD_HL__r_1_MW();

// LD (HL), H   -  LD_HL__H_1  -  74
// extern void OnClock_LD_HL__r_1_OF();
// extern void OnClock_LD_HL__r_1_MW();

// LD (HL), L   -  LD_HL__L_1  -  75
// extern void OnClock_LD_HL__r_1_OF();
// extern void OnClock_LD_HL__r_1_MW();

// LD (IX+d), A   -  LD_IX_d__A_DD3  -  DD, 77, d
extern void OnClock_LD_ex_d__r_ex3_OF();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), A   -  LD_IY_d__A_FD3  -  FD, 77, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), B   -  LD_IX_d__B_DD3  -  DD, 70, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), B   -  LD_IY_d__B_FD3  -  FD, 70, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), C   -  LD_IX_d__C_DD3  -  DD, 71, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), C   -  LD_IY_d__C_FD3  -  FD, 71, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), D   -  LD_IX_d__D_DD3  -  DD, 72, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), D   -  LD_IY_d__D_FD3  -  FD, 72, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), E   -  LD_IX_d__E_DD3  -  DD, 73, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), E   -  LD_IY_d__E_FD3  -  FD, 73, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), H   -  LD_IX_d__H_DD3  -  DD, 74, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), H   -  LD_IY_d__H_FD3  -  FD, 74, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), L   -  LD_IX_d__L_DD3  -  DD, 75, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), L   -  LD_IY_d__L_FD3  -  FD, 75, d
// extern void OnClock_LD_ex_d__r_ex3_OF();
// extern void OnClock_LD_ex_d__r_ex3_AD();
// extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (HL), n   -  LD_HL__n_2  -  36, n
extern void OnClock_LD_HL__n_2_OF();
extern void OnClock_LD_HL__n_2_OD();
extern void OnClock_LD_HL__n_2_MW();

// LD (IX+d), n   -  LD_IX_d__n_DD4  -  DD, 36, d, n
extern void OnClock_LD_ex_d__n_ex4_OF();
extern void OnClock_LD_ex_d__n_ex4_FD();
extern void OnClock_LD_ex_d__n_ex4_MW();

// LD (IY+d), n   -  LD_IY_d__n_FD4  -  FD, 36, d, n
// extern void OnClock_LD_ex_d__n_ex4_OF();
// extern void OnClock_LD_ex_d__n_ex4_FD();
// extern void OnClock_LD_ex_d__n_ex4_MW();

// LD A, (BC)   -  LDA__BC__1  -  0A
extern void OnClock_LDA__BC__1_OF();

// LD A, (DE)   -  LDA__DE__1  -  1A
extern void OnClock_LDA__DE__1_OF();

// LD A, (nn)   -  LDA__nn__3  -  3A, n, n
extern void OnClock_LDA__nn__3_OF();
extern void OnClock_LDA__nn__3_ODl();
extern void OnClock_LDA__nn__3_ODh();
extern void OnClock_LDA__nn__3_MR();

// LD (BC), A   -  LD_BC__A_1  -  02
extern void OnClock_LD_BC__A_1_OF();

// LD (DE), A   -  LD_DE__A_1  -  12
extern void OnClock_LD_DE__A_1_OF();

// LD (nn), A   -  LD_nn__A_3  -  32, n, n
extern void OnClock_LD_nn__A_3_OF();
extern void OnClock_LD_nn__A_3_ODl();
extern void OnClock_LD_nn__A_3_ODh();
extern void OnClock_LD_nn__A_3_MW();

// LD A, I   -  LDA_I_ED2  -  ED, 57
extern void OnClock_LDA_I_ED2_OF();

// LD A, R   -  LDA_R_ED2  -  ED, 5F
extern void OnClock_LDA_R_ED2_OF();

// LD I, A   -  LDI_A_ED2  -  ED, 47
extern void OnClock_LDI_A_ED2_OF();

// LD R, A   -  LDR_A_ED2  -  ED, 4F
extern void OnClock_LDR_A_ED2_OF();

// LD BC, nn   -  LDBC_nn_3  -  01, n, n
extern void OnClock_LDp_nn_3_OF();
extern void OnClock_LDp_nn_3_ODl();
extern void OnClock_LDp_nn_3_ODh();

// LD DE, nn   -  LDDE_nn_3  -  11, n, n
// extern void OnClock_LDp_nn_3_OF();
// extern void OnClock_LDp_nn_3_ODl();
// extern void OnClock_LDp_nn_3_ODh();

// LD HL, nn   -  LDHL_nn_3  -  21, n, n
// extern void OnClock_LDp_nn_3_OF();
// extern void OnClock_LDp_nn_3_ODl();
// extern void OnClock_LDp_nn_3_ODh();

// LD SP, nn   -  LDSP_nn_3  -  31, n, n
// extern void OnClock_LDp_nn_3_OF();
// extern void OnClock_LDp_nn_3_ODl();
// extern void OnClock_LDp_nn_3_ODh();

// LD IX, nn   -  LDIX_nn_DD4  -  DD, 21, n, n
extern void OnClock_LDex_nn_ex4_OF();
extern void OnClock_LDex_nn_ex4_ODl();
extern void OnClock_LDex_nn_ex4_ODh();

// LD IY, nn   -  LDIY_nn_FD4  -  FD, 21, n, n
// extern void OnClock_LDex_nn_ex4_OF();
// extern void OnClock_LDex_nn_ex4_ODl();
// extern void OnClock_LDex_nn_ex4_ODh();

// LD HL, (nn)   -  LDHL__nn__3  -  2A, n, n
extern void OnClock_LDHL__nn__3_OF();
extern void OnClock_LDHL__nn__3_ODl();
extern void OnClock_LDHL__nn__3_ODh();
extern void OnClock_LDHL__nn__3_MRl();
extern void OnClock_LDHL__nn__3_MRh();

// LD BC, (nn)   -  LDBC__nn__ED4  -  ED, 4B, n, n
extern void OnClock_LDp__nn__ED4_OF();
extern void OnClock_LDp__nn__ED4_ODl();
extern void OnClock_LDp__nn__ED4_ODh();
extern void OnClock_LDp__nn__ED4_MWl();
extern void OnClock_LDp__nn__ED4_MRh();

// LD DE, (nn)   -  LDDE__nn__ED4  -  ED, 5B, n, n
// extern void OnClock_LDp__nn__ED4_OF();
// extern void OnClock_LDp__nn__ED4_ODl();
// extern void OnClock_LDp__nn__ED4_ODh();
// extern void OnClock_LDp__nn__ED4_MWl();
// extern void OnClock_LDp__nn__ED4_MRh();

// LD HL, (nn)   -  LDHL__nn__ED4  -  ED, 6B, n, n
// extern void OnClock_LDp__nn__ED4_OF();
// extern void OnClock_LDp__nn__ED4_ODl();
// extern void OnClock_LDp__nn__ED4_ODh();
// extern void OnClock_LDp__nn__ED4_MWl();
// extern void OnClock_LDp__nn__ED4_MRh();

// LD SP, (nn)   -  LDSP__nn__ED4  -  ED, 7B, n, n
// extern void OnClock_LDp__nn__ED4_OF();
// extern void OnClock_LDp__nn__ED4_ODl();
// extern void OnClock_LDp__nn__ED4_ODh();
// extern void OnClock_LDp__nn__ED4_MWl();
// extern void OnClock_LDp__nn__ED4_MRh();

// LD IX, (nn)   -  LDIX__nn__DD4  -  DD, 2A, n, n
extern void OnClock_LDex__nn__ex4_OF();
extern void OnClock_LDex__nn__ex4_ODl();
extern void OnClock_LDex__nn__ex4_ODh();
extern void OnClock_LDex__nn__ex4_MRl();
extern void OnClock_LDex__nn__ex4_MRh();

// LD IY, (nn)   -  LDIY__nn__FD4  -  FD, 2A, n, n
// extern void OnClock_LDex__nn__ex4_OF();
// extern void OnClock_LDex__nn__ex4_ODl();
// extern void OnClock_LDex__nn__ex4_ODh();
// extern void OnClock_LDex__nn__ex4_MRl();
// extern void OnClock_LDex__nn__ex4_MRh();

// LD (nn), HL   -  LD_nn__HL_3  -  22, n, n
extern void OnClock_LD_nn__HL_3_OF();
extern void OnClock_LD_nn__HL_3_ODl();
extern void OnClock_LD_nn__HL_3_ODh();
extern void OnClock_LD_nn__HL_3_MWl();
extern void OnClock_LD_nn__HL_3_MWh();

// LD (nn), BC   -  LD_nn__BC_ED4  -  ED, 43, n, n
extern void OnClock_LD_nn__p_ED4_OF();
extern void OnClock_LD_nn__p_ED4_ODl();
extern void OnClock_LD_nn__p_ED4_ODh();
extern void OnClock_LD_nn__p_ED4_MWl();
extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), DE   -  LD_nn__DE_ED4  -  ED, 53, n, n
// extern void OnClock_LD_nn__p_ED4_OF();
// extern void OnClock_LD_nn__p_ED4_ODl();
// extern void OnClock_LD_nn__p_ED4_ODh();
// extern void OnClock_LD_nn__p_ED4_MWl();
// extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), HL   -  LD_nn__HL_ED4  -  ED, 63, n, n
// extern void OnClock_LD_nn__p_ED4_OF();
// extern void OnClock_LD_nn__p_ED4_ODl();
// extern void OnClock_LD_nn__p_ED4_ODh();
// extern void OnClock_LD_nn__p_ED4_MWl();
// extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), SP   -  LD_nn__SP_ED4  -  ED, 73, n, n
// extern void OnClock_LD_nn__p_ED4_OF();
// extern void OnClock_LD_nn__p_ED4_ODl();
// extern void OnClock_LD_nn__p_ED4_ODh();
// extern void OnClock_LD_nn__p_ED4_MWl();
// extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), IX   -  LD_nn__IX_DD4  -  DD, 22, n, n
extern void OnClock_LD_nn__ex_ex4_OF();
extern void OnClock_LD_nn__ex_ex4_ODl();
extern void OnClock_LD_nn__ex_ex4_ODh();
extern void OnClock_LD_nn__ex_ex4_MWl();
extern void OnClock_LD_nn__ex_ex4_MWh();

// LD (nn), IY   -  LD_nn__IY_FD4  -  FD, 22, n, n
// extern void OnClock_LD_nn__ex_ex4_OF();
// extern void OnClock_LD_nn__ex_ex4_ODl();
// extern void OnClock_LD_nn__ex_ex4_ODh();
// extern void OnClock_LD_nn__ex_ex4_MWl();
// extern void OnClock_LD_nn__ex_ex4_MWh();

// LD SP, HL   -  LDSP_HL_1  -  F9
extern void OnClock_LDSP_HL_1_OF();

// LD SP, IX   -  LDSP_IX_DD2  -  DD, F9
extern void OnClock_LDSP_ex_ex2_OF();

// LD SP, IY   -  LDSP_IY_FD2  -  FD, F9
// extern void OnClock_LDSP_ex_ex2_OF();

// PUSH BC   -  PUSHBC_1  -  C5
extern void OnClock_PUSHq_1_OF();
extern void OnClock_PUSHq_1_SWh();
extern void OnClock_PUSHq_1_SWl();

// PUSH DE   -  PUSHDE_1  -  D5
// extern void OnClock_PUSHq_1_OF();
// extern void OnClock_PUSHq_1_SWh();
// extern void OnClock_PUSHq_1_SWl();

// PUSH HL   -  PUSHHL_1  -  E5
// extern void OnClock_PUSHq_1_OF();
// extern void OnClock_PUSHq_1_SWh();
// extern void OnClock_PUSHq_1_SWl();

// PUSH AF   -  PUSHAF_1  -  F5
// extern void OnClock_PUSHq_1_OF();
// extern void OnClock_PUSHq_1_SWh();
// extern void OnClock_PUSHq_1_SWl();

// PUSH IX   -  PUSHIX_DD2  -  DD, E5
extern void OnClock_PUSHex_ex2_OF();
extern void OnClock_PUSHex_ex2_SWh();
extern void OnClock_PUSHex_ex2_SWl();

// PUSH IY   -  PUSHIY_FD2  -  FD, E5
// extern void OnClock_PUSHex_ex2_OF();
// extern void OnClock_PUSHex_ex2_SWh();
// extern void OnClock_PUSHex_ex2_SWl();

// POP BC   -  POPBC_1  -  C1
extern void OnClock_POPq_1_OF();
extern void OnClock_POPq_1_SRh();
extern void OnClock_POPq_1_SRl();

// POP DE   -  POPDE_1  -  D1
// extern void OnClock_POPq_1_OF();
// extern void OnClock_POPq_1_SRh();
// extern void OnClock_POPq_1_SRl();

// POP HL   -  POPHL_1  -  E1
// extern void OnClock_POPq_1_OF();
// extern void OnClock_POPq_1_SRh();
// extern void OnClock_POPq_1_SRl();

// POP AF   -  POPAF_1  -  F1
// extern void OnClock_POPq_1_OF();
// extern void OnClock_POPq_1_SRh();
// extern void OnClock_POPq_1_SRl();

// POP IX   -  POPIX_DD2  -  DD, E1
extern void OnClock_POPex_ex2_OF();
extern void OnClock_POPex_ex2_SRh();
extern void OnClock_POPex_ex2_SRl();

// POP IY   -  POPIY_FD2  -  FD, E1
// extern void OnClock_POPex_ex2_OF();
// extern void OnClock_POPex_ex2_SRh();
// extern void OnClock_POPex_ex2_SRl();

// EX DE, HL   -  EXDE_HL_1  -  EB
extern void OnClock_EXDE_HL_1_OF();

// EX AF, AF'   -  EXAF_AF2_1  -  08
extern void OnClock_EXAF_AF2_1_OF();

// EXX   -  EXX_1  -  D9
extern void OnClock_EXX_1_OF();

// EX (SP), HL   -  EX_SP__HL_1  -  E3
extern void OnClock_EX_SP__HL_1_OF();
extern void OnClock_EX_SP__HL_1_SRl();
extern void OnClock_EX_SP__HL_1_SWl();

// EX (SP), IX   -  EX_SP__IX_DD2  -  DD, E3
extern void OnClock_EX_SP__ex_ex2_OF();
extern void OnClock_EX_SP__ex_ex2_SRh();
extern void OnClock_EX_SP__ex_ex2_SRl();
extern void OnClock_EX_SP__ex_ex2_SWh();
extern void OnClock_EX_SP__ex_ex2_SWl();

// EX (SP), IY   -  EX_SP__IY_FD2  -  FD, E3
// extern void OnClock_EX_SP__ex_ex2_OF();
// extern void OnClock_EX_SP__ex_ex2_SRh();
// extern void OnClock_EX_SP__ex_ex2_SRl();
// extern void OnClock_EX_SP__ex_ex2_SWh();
// extern void OnClock_EX_SP__ex_ex2_SWl();

// LDI   -  LDI_ED2  -  ED, A0
extern void OnClock_LDI_ED2_OF();
extern void OnClock_LDI_ED2_MW();

// LDIR   -  LDIR_ED2  -  ED, B0
extern void OnClock_LDIR_ED2_OF();
extern void OnClock_LDIR_ED2_MW();

// LDD   -  LDD_ED2  -  ED, A8
extern void OnClock_LDD_ED2_OF();
extern void OnClock_LDD_ED2_MW();

// LDDR   -  LDDR_ED2  -  ED, B8
extern void OnClock_LDDR_ED2_OF();
extern void OnClock_LDDR_ED2_MW();

// CPI   -  CPI_ED2  -  ED, A1
extern void OnClock_CPI_ED2_OF();
extern void OnClock_CPI_ED2_OP();

// CPIR   -  CPIR_ED2  -  ED, B1
extern void OnClock_CPIR_ED2_OF();
extern void OnClock_CPIR_ED2_OP();

// CPD   -  CPD_ED2  -  ED, A9
extern void OnClock_CPD_ED2_OF();
extern void OnClock_CPD_ED2_OP();

// CPDR   -  CPDR_ED2  -  ED, B9
extern void OnClock_CPDR_ED2_OF();
extern void OnClock_CPDR_ED2_OP();

// ADD A, A   -  ADDA_A_1  -  87
extern void OnClock_ADDA_r_1_OF();

// ADD A, B   -  ADDA_B_1  -  80
// extern void OnClock_ADDA_r_1_OF();

// ADD A, C   -  ADDA_C_1  -  81
// extern void OnClock_ADDA_r_1_OF();

// ADD A, D   -  ADDA_D_1  -  82
// extern void OnClock_ADDA_r_1_OF();

// ADD A, E   -  ADDA_E_1  -  83
// extern void OnClock_ADDA_r_1_OF();

// ADD A, H   -  ADDA_H_1  -  84
// extern void OnClock_ADDA_r_1_OF();

// ADD A, L   -  ADDA_L_1  -  85
// extern void OnClock_ADDA_r_1_OF();

// ADD A, A   -  ADDA_A_DD2  -  DD, 87
extern void OnClock_ADDA_t_DD2_OF();

// ADD A, B   -  ADDA_B_DD2  -  DD, 80
// extern void OnClock_ADDA_t_DD2_OF();

// ADD A, C   -  ADDA_C_DD2  -  DD, 81
// extern void OnClock_ADDA_t_DD2_OF();

// ADD A, D   -  ADDA_D_DD2  -  DD, 82
// extern void OnClock_ADDA_t_DD2_OF();

// ADD A, E   -  ADDA_E_DD2  -  DD, 83
// extern void OnClock_ADDA_t_DD2_OF();

// ADD A, IXh   -  ADDA_IXh_DD2  -  DD, 84
// extern void OnClock_ADDA_t_DD2_OF();

// ADD A, IXl   -  ADDA_IXl_DD2  -  DD, 85
// extern void OnClock_ADDA_t_DD2_OF();

// ADD A, A   -  ADDA_A_FD2  -  FD, 87
extern void OnClock_ADDA_v_FD2_OF();

// ADD A, B   -  ADDA_B_FD2  -  FD, 80
// extern void OnClock_ADDA_v_FD2_OF();

// ADD A, C   -  ADDA_C_FD2  -  FD, 81
// extern void OnClock_ADDA_v_FD2_OF();

// ADD A, D   -  ADDA_D_FD2  -  FD, 82
// extern void OnClock_ADDA_v_FD2_OF();

// ADD A, E   -  ADDA_E_FD2  -  FD, 83
// extern void OnClock_ADDA_v_FD2_OF();

// ADD A, IYh   -  ADDA_IYh_FD2  -  FD, 84
// extern void OnClock_ADDA_v_FD2_OF();

// ADD A, IYl   -  ADDA_IYl_FD2  -  FD, 85
// extern void OnClock_ADDA_v_FD2_OF();

// ADD A, n   -  ADDA_n_2  -  C6, n
extern void OnClock_ADDA_n_2_OF();
extern void OnClock_ADDA_n_2_OD();

// ADD A, (HL)   -  ADDA__HL__1  -  86
extern void OnClock_ADDA__HL__1_OF();

// ADD A, (IX+d)   -  ADDA__IX_d__DD3  -  DD, 86, d
extern void OnClock_ADDA__ex_d__ex3_OF();
extern void OnClock_ADDA__ex_d__ex3_AD();
extern void OnClock_ADDA__ex_d__ex3_MR();

// ADD A, (IY+d)   -  ADDA__IY_d__FD3  -  FD, 86, d
// extern void OnClock_ADDA__ex_d__ex3_OF();
// extern void OnClock_ADDA__ex_d__ex3_AD();
// extern void OnClock_ADDA__ex_d__ex3_MR();

// ADC A, A   -  ADCA_A_1  -  8F
extern void OnClock_ADCA_r_1_OF();

// ADC A, B   -  ADCA_B_1  -  88
// extern void OnClock_ADCA_r_1_OF();

// ADC A, C   -  ADCA_C_1  -  89
// extern void OnClock_ADCA_r_1_OF();

// ADC A, D   -  ADCA_D_1  -  8A
// extern void OnClock_ADCA_r_1_OF();

// ADC A, E   -  ADCA_E_1  -  8B
// extern void OnClock_ADCA_r_1_OF();

// ADC A, H   -  ADCA_H_1  -  8C
// extern void OnClock_ADCA_r_1_OF();

// ADC A, L   -  ADCA_L_1  -  8D
// extern void OnClock_ADCA_r_1_OF();

// ADC A, A   -  ADCA_A_DD2  -  DD, 8F
extern void OnClock_ADCA_t_DD2_OF();

// ADC A, B   -  ADCA_B_DD2  -  DD, 88
// extern void OnClock_ADCA_t_DD2_OF();

// ADC A, C   -  ADCA_C_DD2  -  DD, 89
// extern void OnClock_ADCA_t_DD2_OF();

// ADC A, D   -  ADCA_D_DD2  -  DD, 8A
// extern void OnClock_ADCA_t_DD2_OF();

// ADC A, E   -  ADCA_E_DD2  -  DD, 8B
// extern void OnClock_ADCA_t_DD2_OF();

// ADC A, IXh   -  ADCA_IXh_DD2  -  DD, 8C
// extern void OnClock_ADCA_t_DD2_OF();

// ADC A, IXl   -  ADCA_IXl_DD2  -  DD, 8D
// extern void OnClock_ADCA_t_DD2_OF();

// ADC A, A   -  ADCA_A_FD2  -  FD, 8F
extern void OnClock_ADCA_v_FD2_OF();

// ADC A, B   -  ADCA_B_FD2  -  FD, 88
// extern void OnClock_ADCA_v_FD2_OF();

// ADC A, C   -  ADCA_C_FD2  -  FD, 89
// extern void OnClock_ADCA_v_FD2_OF();

// ADC A, D   -  ADCA_D_FD2  -  FD, 8A
// extern void OnClock_ADCA_v_FD2_OF();

// ADC A, E   -  ADCA_E_FD2  -  FD, 8B
// extern void OnClock_ADCA_v_FD2_OF();

// ADC A, IYh   -  ADCA_IYh_FD2  -  FD, 8C
// extern void OnClock_ADCA_v_FD2_OF();

// ADC A, IYl   -  ADCA_IYl_FD2  -  FD, 8D
// extern void OnClock_ADCA_v_FD2_OF();

// ADC A, n   -  ADCA_n_2  -  CE, n
extern void OnClock_ADCA_n_2_OF();
extern void OnClock_ADCA_n_2_OD();

// ADC A, (HL)   -  ADCA__HL__1  -  8E
extern void OnClock_ADCA__HL__1_OF();

// ADC A, (IX+d)   -  ADCA__IX_d__DD3  -  DD, 8E, d
extern void OnClock_ADCA__ex_d__ex3_OF();
extern void OnClock_ADCA__ex_d__ex3_AD();
extern void OnClock_ADCA__ex_d__ex3_MR();

// ADC A, (IY+d)   -  ADCA__IY_d__FD3  -  FD, 8E, d
// extern void OnClock_ADCA__ex_d__ex3_OF();
// extern void OnClock_ADCA__ex_d__ex3_AD();
// extern void OnClock_ADCA__ex_d__ex3_MR();

// SUB A, A   -  SUBA_A_1  -  97
extern void OnClock_SUBA_r_1_OF();

// SUB A, B   -  SUBA_B_1  -  90
// extern void OnClock_SUBA_r_1_OF();

// SUB A, C   -  SUBA_C_1  -  91
// extern void OnClock_SUBA_r_1_OF();

// SUB A, D   -  SUBA_D_1  -  92
// extern void OnClock_SUBA_r_1_OF();

// SUB A, E   -  SUBA_E_1  -  93
// extern void OnClock_SUBA_r_1_OF();

// SUB A, H   -  SUBA_H_1  -  94
// extern void OnClock_SUBA_r_1_OF();

// SUB A, L   -  SUBA_L_1  -  95
// extern void OnClock_SUBA_r_1_OF();

// SUB A, A   -  SUBA_A_DD2  -  DD, 97
extern void OnClock_SUBA_t_DD2_OF();

// SUB A, B   -  SUBA_B_DD2  -  DD, 90
// extern void OnClock_SUBA_t_DD2_OF();

// SUB A, C   -  SUBA_C_DD2  -  DD, 91
// extern void OnClock_SUBA_t_DD2_OF();

// SUB A, D   -  SUBA_D_DD2  -  DD, 92
// extern void OnClock_SUBA_t_DD2_OF();

// SUB A, E   -  SUBA_E_DD2  -  DD, 93
// extern void OnClock_SUBA_t_DD2_OF();

// SUB A, IXh   -  SUBA_IXh_DD2  -  DD, 94
// extern void OnClock_SUBA_t_DD2_OF();

// SUB A, IXl   -  SUBA_IXl_DD2  -  DD, 95
// extern void OnClock_SUBA_t_DD2_OF();

// SUB A, A   -  SUBA_A_FD2  -  FD, 97
extern void OnClock_SUBA_v_FD2_OF();

// SUB A, B   -  SUBA_B_FD2  -  FD, 90
// extern void OnClock_SUBA_v_FD2_OF();

// SUB A, C   -  SUBA_C_FD2  -  FD, 91
// extern void OnClock_SUBA_v_FD2_OF();

// SUB A, D   -  SUBA_D_FD2  -  FD, 92
// extern void OnClock_SUBA_v_FD2_OF();

// SUB A, E   -  SUBA_E_FD2  -  FD, 93
// extern void OnClock_SUBA_v_FD2_OF();

// SUB A, IYh   -  SUBA_IYh_FD2  -  FD, 94
// extern void OnClock_SUBA_v_FD2_OF();

// SUB A, IYl   -  SUBA_IYl_FD2  -  FD, 95
// extern void OnClock_SUBA_v_FD2_OF();

// SUB A, n   -  SUBA_n_2  -  8E, n
extern void OnClock_SUBA_n_2_OF();
extern void OnClock_SUBA_n_2_OD();

// SUB A, (HL)   -  SUBA__HL__1  -  96
extern void OnClock_SUBA__HL__1_OF();

// SUB A, (IX+d)   -  SUBA__IX_d__DD3  -  DD, 96, d
extern void OnClock_SUBA__ex_d__ex3_OF();
extern void OnClock_SUBA__ex_d__ex3_AD();
extern void OnClock_SUBA__ex_d__ex3_MR();

// SUB A, (IY+d)   -  SUBA__IY_d__FD3  -  FD, 96, d
// extern void OnClock_SUBA__ex_d__ex3_OF();
// extern void OnClock_SUBA__ex_d__ex3_AD();
// extern void OnClock_SUBA__ex_d__ex3_MR();

// SBC A, A   -  SBCA_A_1  -  9F
extern void OnClock_SBCA_r_1_OF();

// SBC A, B   -  SBCA_B_1  -  98
// extern void OnClock_SBCA_r_1_OF();

// SBC A, C   -  SBCA_C_1  -  99
// extern void OnClock_SBCA_r_1_OF();

// SBC A, D   -  SBCA_D_1  -  9A
// extern void OnClock_SBCA_r_1_OF();

// SBC A, E   -  SBCA_E_1  -  9B
// extern void OnClock_SBCA_r_1_OF();

// SBC A, H   -  SBCA_H_1  -  9C
// extern void OnClock_SBCA_r_1_OF();

// SBC A, L   -  SBCA_L_1  -  9D
// extern void OnClock_SBCA_r_1_OF();

// SBC A, A   -  SBCA_A_DD2  -  DD, 9F
extern void OnClock_SBCA_t_DD2_OF();

// SBC A, B   -  SBCA_B_DD2  -  DD, 98
// extern void OnClock_SBCA_t_DD2_OF();

// SBC A, C   -  SBCA_C_DD2  -  DD, 99
// extern void OnClock_SBCA_t_DD2_OF();

// SBC A, D   -  SBCA_D_DD2  -  DD, 9A
// extern void OnClock_SBCA_t_DD2_OF();

// SBC A, E   -  SBCA_E_DD2  -  DD, 9B
// extern void OnClock_SBCA_t_DD2_OF();

// SBC A, IXh   -  SBCA_IXh_DD2  -  DD, 9C
// extern void OnClock_SBCA_t_DD2_OF();

// SBC A, IXl   -  SBCA_IXl_DD2  -  DD, 9D
// extern void OnClock_SBCA_t_DD2_OF();

// SBC A, A   -  SBCA_A_FD2  -  FD, 9F
extern void OnClock_SBCA_v_FD2_OF();

// SBC A, B   -  SBCA_B_FD2  -  FD, 98
// extern void OnClock_SBCA_v_FD2_OF();

// SBC A, C   -  SBCA_C_FD2  -  FD, 99
// extern void OnClock_SBCA_v_FD2_OF();

// SBC A, D   -  SBCA_D_FD2  -  FD, 9A
// extern void OnClock_SBCA_v_FD2_OF();

// SBC A, E   -  SBCA_E_FD2  -  FD, 9B
// extern void OnClock_SBCA_v_FD2_OF();

// SBC A, IYh   -  SBCA_IYh_FD2  -  FD, 9C
// extern void OnClock_SBCA_v_FD2_OF();

// SBC A, IYl   -  SBCA_IYl_FD2  -  FD, 9D
// extern void OnClock_SBCA_v_FD2_OF();

// SBC A, n   -  SBCA_n_2  -  DE, n
extern void OnClock_SBCA_n_2_OF();
extern void OnClock_SBCA_n_2_OD();

// SBC A, (HL)   -  SBCA__HL__1  -  9E
extern void OnClock_SBCA__HL__1_OF();

// SBC A, (IX+d)   -  SBCA__IX_d__DD3  -  DD, 9E, d
extern void OnClock_SBCA__ex_d__ex3_OF();
extern void OnClock_SBCA__ex_d__ex3_AD();
extern void OnClock_SBCA__ex_d__ex3_MR();

// SBC A, (IY+d)   -  SBCA__IY_d__FD3  -  FD, 9E, d
// extern void OnClock_SBCA__ex_d__ex3_OF();
// extern void OnClock_SBCA__ex_d__ex3_AD();
// extern void OnClock_SBCA__ex_d__ex3_MR();

// AND A, A   -  ANDA_A_1  -  A7
extern void OnClock_ANDA_r_1_OF();

// AND A, B   -  ANDA_B_1  -  A0
// extern void OnClock_ANDA_r_1_OF();

// AND A, C   -  ANDA_C_1  -  A1
// extern void OnClock_ANDA_r_1_OF();

// AND A, D   -  ANDA_D_1  -  A2
// extern void OnClock_ANDA_r_1_OF();

// AND A, E   -  ANDA_E_1  -  A3
// extern void OnClock_ANDA_r_1_OF();

// AND A, H   -  ANDA_H_1  -  A4
// extern void OnClock_ANDA_r_1_OF();

// AND A, L   -  ANDA_L_1  -  A5
// extern void OnClock_ANDA_r_1_OF();

// AND A, A   -  ANDA_A_DD2  -  DD, A7
extern void OnClock_ANDA_t_DD2_OF();

// AND A, B   -  ANDA_B_DD2  -  DD, A0
// extern void OnClock_ANDA_t_DD2_OF();

// AND A, C   -  ANDA_C_DD2  -  DD, A1
// extern void OnClock_ANDA_t_DD2_OF();

// AND A, D   -  ANDA_D_DD2  -  DD, A2
// extern void OnClock_ANDA_t_DD2_OF();

// AND A, E   -  ANDA_E_DD2  -  DD, A3
// extern void OnClock_ANDA_t_DD2_OF();

// AND A, IXh   -  ANDA_IXh_DD2  -  DD, A4
// extern void OnClock_ANDA_t_DD2_OF();

// AND A, IXl   -  ANDA_IXl_DD2  -  DD, A5
// extern void OnClock_ANDA_t_DD2_OF();

// AND A, A   -  ANDA_A_FD2  -  FD, A7
extern void OnClock_ANDA_v_FD2_OF();

// AND A, B   -  ANDA_B_FD2  -  FD, A0
// extern void OnClock_ANDA_v_FD2_OF();

// AND A, C   -  ANDA_C_FD2  -  FD, A1
// extern void OnClock_ANDA_v_FD2_OF();

// AND A, D   -  ANDA_D_FD2  -  FD, A2
// extern void OnClock_ANDA_v_FD2_OF();

// AND A, E   -  ANDA_E_FD2  -  FD, A3
// extern void OnClock_ANDA_v_FD2_OF();

// AND A, IYh   -  ANDA_IYh_FD2  -  FD, A4
// extern void OnClock_ANDA_v_FD2_OF();

// AND A, IYl   -  ANDA_IYl_FD2  -  FD, A5
// extern void OnClock_ANDA_v_FD2_OF();

// AND A, n   -  ANDA_n_2  -  E6, n
extern void OnClock_ANDA_n_2_OF();
extern void OnClock_ANDA_n_2_OD();

// AND A, (HL)   -  ANDA__HL__1  -  A6
extern void OnClock_ANDA__HL__1_OF();

// AND A, (IX+d)   -  ANDA__IX_d__DD3  -  DD, A6, d
extern void OnClock_ANDA__ex_d__ex3_OF();
extern void OnClock_ANDA__ex_d__ex3_AD();
extern void OnClock_ANDA__ex_d__ex3_MR();

// AND A, (IY+d)   -  ANDA__IY_d__FD3  -  FD, A6, d
// extern void OnClock_ANDA__ex_d__ex3_OF();
// extern void OnClock_ANDA__ex_d__ex3_AD();
// extern void OnClock_ANDA__ex_d__ex3_MR();

// OR A, A   -  ORA_A_1  -  B7
extern void OnClock_ORA_r_1_OF();

// OR A, B   -  ORA_B_1  -  B0
// extern void OnClock_ORA_r_1_OF();

// OR A, C   -  ORA_C_1  -  B1
// extern void OnClock_ORA_r_1_OF();

// OR A, D   -  ORA_D_1  -  B2
// extern void OnClock_ORA_r_1_OF();

// OR A, E   -  ORA_E_1  -  B3
// extern void OnClock_ORA_r_1_OF();

// OR A, H   -  ORA_H_1  -  B4
// extern void OnClock_ORA_r_1_OF();

// OR A, L   -  ORA_L_1  -  B5
// extern void OnClock_ORA_r_1_OF();

// OR A, A   -  ORA_A_DD2  -  DD, B7
extern void OnClock_ORA_t_DD2_OF();

// OR A, B   -  ORA_B_DD2  -  DD, B0
// extern void OnClock_ORA_t_DD2_OF();

// OR A, C   -  ORA_C_DD2  -  DD, B1
// extern void OnClock_ORA_t_DD2_OF();

// OR A, D   -  ORA_D_DD2  -  DD, B2
// extern void OnClock_ORA_t_DD2_OF();

// OR A, E   -  ORA_E_DD2  -  DD, B3
// extern void OnClock_ORA_t_DD2_OF();

// OR A, IXh   -  ORA_IXh_DD2  -  DD, B4
// extern void OnClock_ORA_t_DD2_OF();

// OR A, IXl   -  ORA_IXl_DD2  -  DD, B5
// extern void OnClock_ORA_t_DD2_OF();

// OR A, A   -  ORA_A_FD2  -  FD, B7
extern void OnClock_ORA_v_FD2_OF();

// OR A, B   -  ORA_B_FD2  -  FD, B0
// extern void OnClock_ORA_v_FD2_OF();

// OR A, C   -  ORA_C_FD2  -  FD, B1
// extern void OnClock_ORA_v_FD2_OF();

// OR A, D   -  ORA_D_FD2  -  FD, B2
// extern void OnClock_ORA_v_FD2_OF();

// OR A, E   -  ORA_E_FD2  -  FD, B3
// extern void OnClock_ORA_v_FD2_OF();

// OR A, IYh   -  ORA_IYh_FD2  -  FD, B4
// extern void OnClock_ORA_v_FD2_OF();

// OR A, IYl   -  ORA_IYl_FD2  -  FD, B5
// extern void OnClock_ORA_v_FD2_OF();

// OR A, n   -  ORA_n_2  -  F6, n
extern void OnClock_ORA_n_2_OF();
extern void OnClock_ORA_n_2_OD();

// OR A, (HL)   -  ORA__HL__1  -  B6
extern void OnClock_ORA__HL__1_OF();

// OR A, (IX+d)   -  ORA__IX_d__DD3  -  DD, B6, d
extern void OnClock_ORA__ex_d__ex3_OF();
extern void OnClock_ORA__ex_d__ex3_AD();
extern void OnClock_ORA__ex_d__ex3_MR();

// OR A, (IY+d)   -  ORA__IY_d__FD3  -  FD, B6, d
// extern void OnClock_ORA__ex_d__ex3_OF();
// extern void OnClock_ORA__ex_d__ex3_AD();
// extern void OnClock_ORA__ex_d__ex3_MR();

// XOR A, A   -  XORA_A_1  -  AF
extern void OnClock_XORA_r_1_OF();

// XOR A, B   -  XORA_B_1  -  A8
// extern void OnClock_XORA_r_1_OF();

// XOR A, C   -  XORA_C_1  -  A9
// extern void OnClock_XORA_r_1_OF();

// XOR A, D   -  XORA_D_1  -  AA
// extern void OnClock_XORA_r_1_OF();

// XOR A, E   -  XORA_E_1  -  AB
// extern void OnClock_XORA_r_1_OF();

// XOR A, H   -  XORA_H_1  -  AC
// extern void OnClock_XORA_r_1_OF();

// XOR A, L   -  XORA_L_1  -  AD
// extern void OnClock_XORA_r_1_OF();

// XOR A, A   -  XORA_A_DD2  -  DD, AF
extern void OnClock_XORA_t_DD2_OF();

// XOR A, B   -  XORA_B_DD2  -  DD, A8
// extern void OnClock_XORA_t_DD2_OF();

// XOR A, C   -  XORA_C_DD2  -  DD, A9
// extern void OnClock_XORA_t_DD2_OF();

// XOR A, D   -  XORA_D_DD2  -  DD, AA
// extern void OnClock_XORA_t_DD2_OF();

// XOR A, E   -  XORA_E_DD2  -  DD, AB
// extern void OnClock_XORA_t_DD2_OF();

// XOR A, IXh   -  XORA_IXh_DD2  -  DD, AC
// extern void OnClock_XORA_t_DD2_OF();

// XOR A, IXl   -  XORA_IXl_DD2  -  DD, AD
// extern void OnClock_XORA_t_DD2_OF();

// XOR A, A   -  XORA_A_FD2  -  FD, AF
extern void OnClock_XORA_v_FD2_OF();

// XOR A, B   -  XORA_B_FD2  -  FD, A8
// extern void OnClock_XORA_v_FD2_OF();

// XOR A, C   -  XORA_C_FD2  -  FD, A9
// extern void OnClock_XORA_v_FD2_OF();

// XOR A, D   -  XORA_D_FD2  -  FD, AA
// extern void OnClock_XORA_v_FD2_OF();

// XOR A, E   -  XORA_E_FD2  -  FD, AB
// extern void OnClock_XORA_v_FD2_OF();

// XOR A, IYh   -  XORA_IYh_FD2  -  FD, AC
// extern void OnClock_XORA_v_FD2_OF();

// XOR A, IYl   -  XORA_IYl_FD2  -  FD, AD
// extern void OnClock_XORA_v_FD2_OF();

// XOR A, n   -  XORA_n_2  -  EE, n
extern void OnClock_XORA_n_2_OF();
extern void OnClock_XORA_n_2_OD();

// XOR A, (HL)   -  XORA__HL__1  -  AE
extern void OnClock_XORA__HL__1_OF();

// XOR A, (IX+d)   -  XORA__IX_d__DD3  -  DD, AE, d
extern void OnClock_XORA__ex_d__ex3_OF();
extern void OnClock_XORA__ex_d__ex3_AD();
extern void OnClock_XORA__ex_d__ex3_MR();

// XOR A, (IY+d)   -  XORA__IY_d__FD3  -  FD, AE, d
// extern void OnClock_XORA__ex_d__ex3_OF();
// extern void OnClock_XORA__ex_d__ex3_AD();
// extern void OnClock_XORA__ex_d__ex3_MR();

// CP A, A   -  CPA_A_1  -  BF
extern void OnClock_CPA_r_1_OF();

// CP A, B   -  CPA_B_1  -  B8
// extern void OnClock_CPA_r_1_OF();

// CP A, C   -  CPA_C_1  -  B9
// extern void OnClock_CPA_r_1_OF();

// CP A, D   -  CPA_D_1  -  BA
// extern void OnClock_CPA_r_1_OF();

// CP A, E   -  CPA_E_1  -  BB
// extern void OnClock_CPA_r_1_OF();

// CP A, H   -  CPA_H_1  -  BC
// extern void OnClock_CPA_r_1_OF();

// CP A, L   -  CPA_L_1  -  BD
// extern void OnClock_CPA_r_1_OF();

// CP A, A   -  CPA_A_DD2  -  DD, BF
extern void OnClock_CPA_t_DD2_OF();

// CP A, B   -  CPA_B_DD2  -  DD, B8
// extern void OnClock_CPA_t_DD2_OF();

// CP A, C   -  CPA_C_DD2  -  DD, B9
// extern void OnClock_CPA_t_DD2_OF();

// CP A, D   -  CPA_D_DD2  -  DD, BA
// extern void OnClock_CPA_t_DD2_OF();

// CP A, E   -  CPA_E_DD2  -  DD, BB
// extern void OnClock_CPA_t_DD2_OF();

// CP A, IXh   -  CPA_IXh_DD2  -  DD, BC
// extern void OnClock_CPA_t_DD2_OF();

// CP A, IXl   -  CPA_IXl_DD2  -  DD, BD
// extern void OnClock_CPA_t_DD2_OF();

// CP A, A   -  CPA_A_FD2  -  FD, BF
extern void OnClock_CPA_v_FD2_OF();

// CP A, B   -  CPA_B_FD2  -  FD, B8
// extern void OnClock_CPA_v_FD2_OF();

// CP A, C   -  CPA_C_FD2  -  FD, B9
// extern void OnClock_CPA_v_FD2_OF();

// CP A, D   -  CPA_D_FD2  -  FD, BA
// extern void OnClock_CPA_v_FD2_OF();

// CP A, E   -  CPA_E_FD2  -  FD, BB
// extern void OnClock_CPA_v_FD2_OF();

// CP A, IYh   -  CPA_IYh_FD2  -  FD, BC
// extern void OnClock_CPA_v_FD2_OF();

// CP A, IYl   -  CPA_IYl_FD2  -  FD, BD
// extern void OnClock_CPA_v_FD2_OF();

// CP A, n   -  CPA_n_2  -  FE, n
extern void OnClock_CPA_n_2_OF();
extern void OnClock_CPA_n_2_OD();

// CP A, (HL)   -  CPA__HL__1  -  BE
extern void OnClock_CPA__HL__1_OF();

// CP A, (IX+d)   -  CPA__IX_d__DD3  -  DD, BE, d
extern void OnClock_CPA__ex_d__ex3_OF();
extern void OnClock_CPA__ex_d__ex3_AD();
extern void OnClock_CPA__ex_d__ex3_MR();

// CP A, (IY+d)   -  CPA__IY_d__FD3  -  FD, BE, d
// extern void OnClock_CPA__ex_d__ex3_OF();
// extern void OnClock_CPA__ex_d__ex3_AD();
// extern void OnClock_CPA__ex_d__ex3_MR();

// INC A   -  INCA_1  -  3C
extern void OnClock_INCr_1_OF();

// INC B   -  INCB_1  -  04
// extern void OnClock_INCr_1_OF();

// INC C   -  INCC_1  -  0C
// extern void OnClock_INCr_1_OF();

// INC D   -  INCD_1  -  14
// extern void OnClock_INCr_1_OF();

// INC E   -  INCE_1  -  1C
// extern void OnClock_INCr_1_OF();

// INC H   -  INCH_1  -  24
// extern void OnClock_INCr_1_OF();

// INC L   -  INCL_1  -  2C
// extern void OnClock_INCr_1_OF();

// INC A   -  INCA_DD2  -  DD, 3C
extern void OnClock_INCt_DD2_OF();

// INC B   -  INCB_DD2  -  DD, 04
// extern void OnClock_INCt_DD2_OF();

// INC C   -  INCC_DD2  -  DD, 0C
// extern void OnClock_INCt_DD2_OF();

// INC D   -  INCD_DD2  -  DD, 14
// extern void OnClock_INCt_DD2_OF();

// INC E   -  INCE_DD2  -  DD, 1C
// extern void OnClock_INCt_DD2_OF();

// INC IXh   -  INCIXh_DD2  -  DD, 24
// extern void OnClock_INCt_DD2_OF();

// INC IXl   -  INCIXl_DD2  -  DD, 2C
// extern void OnClock_INCt_DD2_OF();

// INC A   -  INCA_FD2  -  FD, 3C
extern void OnClock_INCv_FD2_OF();

// INC B   -  INCB_FD2  -  FD, 04
// extern void OnClock_INCv_FD2_OF();

// INC C   -  INCC_FD2  -  FD, 0C
// extern void OnClock_INCv_FD2_OF();

// INC D   -  INCD_FD2  -  FD, 14
// extern void OnClock_INCv_FD2_OF();

// INC E   -  INCE_FD2  -  FD, 1C
// extern void OnClock_INCv_FD2_OF();

// INC IYh   -  INCIYh_FD2  -  FD, 24
// extern void OnClock_INCv_FD2_OF();

// INC IYl   -  INCIYl_FD2  -  FD, 2C
// extern void OnClock_INCv_FD2_OF();

// INC (HL)   -  INC_HL__1  -  34
extern void OnClock_INC_HL__1_OF();
extern void OnClock_INC_HL__1_MR();

// INC (IX+d)   -  INC_IX_d__DD3  -  DD, 34, d
extern void OnClock_INC_ex_d__ex3_OF();
extern void OnClock_INC_ex_d__ex3_AD();
extern void OnClock_INC_ex_d__ex3_MR();
extern void OnClock_INC_ex_d__ex3_MW();

// INC (IY+d)   -  INC_IY_d__FD3  -  FD, 34, d
// extern void OnClock_INC_ex_d__ex3_OF();
// extern void OnClock_INC_ex_d__ex3_AD();
// extern void OnClock_INC_ex_d__ex3_MR();
// extern void OnClock_INC_ex_d__ex3_MW();

// DEC A   -  DECA_1  -  3D
extern void OnClock_DECr_1_OF();

// DEC B   -  DECB_1  -  05
// extern void OnClock_DECr_1_OF();

// DEC C   -  DECC_1  -  0D
// extern void OnClock_DECr_1_OF();

// DEC D   -  DECD_1  -  15
// extern void OnClock_DECr_1_OF();

// DEC E   -  DECE_1  -  1D
// extern void OnClock_DECr_1_OF();

// DEC H   -  DECH_1  -  25
// extern void OnClock_DECr_1_OF();

// DEC L   -  DECL_1  -  2D
// extern void OnClock_DECr_1_OF();

// DEC A   -  DECA_DD2  -  DD, 3D
extern void OnClock_DECt_DD2_OF();

// DEC B   -  DECB_DD2  -  DD, 05
// extern void OnClock_DECt_DD2_OF();

// DEC C   -  DECC_DD2  -  DD, 0D
// extern void OnClock_DECt_DD2_OF();

// DEC D   -  DECD_DD2  -  DD, 15
// extern void OnClock_DECt_DD2_OF();

// DEC E   -  DECE_DD2  -  DD, 1D
// extern void OnClock_DECt_DD2_OF();

// DEC IXh   -  DECIXh_DD2  -  DD, 25
// extern void OnClock_DECt_DD2_OF();

// DEC IXl   -  DECIXl_DD2  -  DD, 2D
// extern void OnClock_DECt_DD2_OF();

// DEC A   -  DECA_FD2  -  FD, 3D
extern void OnClock_DECv_FD2_OF();

// DEC B   -  DECB_FD2  -  FD, 05
// extern void OnClock_DECv_FD2_OF();

// DEC C   -  DECC_FD2  -  FD, 0D
// extern void OnClock_DECv_FD2_OF();

// DEC D   -  DECD_FD2  -  FD, 15
// extern void OnClock_DECv_FD2_OF();

// DEC E   -  DECE_FD2  -  FD, 1D
// extern void OnClock_DECv_FD2_OF();

// DEC IYh   -  DECIYh_FD2  -  FD, 25
// extern void OnClock_DECv_FD2_OF();

// DEC IYl   -  DECIYl_FD2  -  FD, 2D
// extern void OnClock_DECv_FD2_OF();

// DEC (HL)   -  DEC_HL__1  -  35
extern void OnClock_DEC_HL__1_OF();
extern void OnClock_DEC_HL__1_MR();

// DEC (IX+d)   -  DEC_IX_d__DD3  -  DD, 35, d
extern void OnClock_DEC_ex_d__ex3_OF();
extern void OnClock_DEC_ex_d__ex3_AD();
extern void OnClock_DEC_ex_d__ex3_MR();
extern void OnClock_DEC_ex_d__ex3_MW();

// DEC (IY+d)   -  DEC_IY_d__FD3  -  FD, 35, d
// extern void OnClock_DEC_ex_d__ex3_OF();
// extern void OnClock_DEC_ex_d__ex3_AD();
// extern void OnClock_DEC_ex_d__ex3_MR();
// extern void OnClock_DEC_ex_d__ex3_MW();

// DAA   -  DAA_1  -  27
extern void OnClock_DAA_1_OF();

// CPL A   -  CPLA_1  -  2F
extern void OnClock_CPLA_1_OF();

// NEG   -  NEG_ED2  -  ED, 44
extern void OnClock_NEG_ED2_OF();

// NEG *   -  NEG_ED2  -  ED, 4C
// extern void OnClock_NEG_ED2_OF();

// NEG *   -  NEG_ED2  -  ED, 54
// extern void OnClock_NEG_ED2_OF();

// NEG *   -  NEG_ED2  -  ED, 5C
// extern void OnClock_NEG_ED2_OF();

// NEG *   -  NEG_ED2  -  ED, 64
// extern void OnClock_NEG_ED2_OF();

// NEG *   -  NEG_ED2  -  ED, 6C
// extern void OnClock_NEG_ED2_OF();

// NEG *   -  NEG_ED2  -  ED, 74
// extern void OnClock_NEG_ED2_OF();

// NEG *   -  NEG_ED2  -  ED, 7C
// extern void OnClock_NEG_ED2_OF();

// CCF   -  CCF_1  -  3F
extern void OnClock_CCF_1_OF();

// SCF   -  SCF_1  -  37
extern void OnClock_SCF_1_OF();

// NOP   -  NOP_1  -  00
extern void OnClock_NOP_1_OF();

// HALT   -  HALT_1  -  76
extern void OnClock_HALT_1_OF();

// DI   -  DI_1  -  F3
extern void OnClock_DI_1_OF();

// EI   -  EI_1  -  FB
extern void OnClock_EI_1_OF();

// IM0   -  IM0_ED2  -  ED, 46
extern void OnClock_IM0_ED2_OF();

// IM0*   -  IM0_ED2  -  ED, 4E
// extern void OnClock_IM0_ED2_OF();

// IM0*   -  IM0_ED2  -  ED, 66
// extern void OnClock_IM0_ED2_OF();

// IM0*   -  IM0_ED2  -  ED, 6E
// extern void OnClock_IM0_ED2_OF();

// IM1   -  IM1_ED2  -  ED, 56
extern void OnClock_IM1_ED2_OF();

// IM1*   -  IM1_ED2  -  ED, 76
// extern void OnClock_IM1_ED2_OF();

// IM2   -  IM2_ED2  -  ED, 5E
extern void OnClock_IM2_ED2_OF();

// IM2*   -  IM2_ED2  -  ED, 7E
// extern void OnClock_IM2_ED2_OF();

// ADD HL, BC   -  ADDHL_BC_1  -  09
extern void OnClock_ADDHL_p_1_OF();
extern void OnClock_ADDHL_p_1_OP();
// extern void OnClock_ADDHL_p_1_OP();

// ADD HL, DE   -  ADDHL_DE_1  -  19
// extern void OnClock_ADDHL_p_1_OF();
// extern void OnClock_ADDHL_p_1_OP();
// extern void OnClock_ADDHL_p_1_OP();

// ADD HL, HL   -  ADDHL_HL_1  -  29
// extern void OnClock_ADDHL_p_1_OF();
// extern void OnClock_ADDHL_p_1_OP();
// extern void OnClock_ADDHL_p_1_OP();

// ADD HL, SP   -  ADDHL_SP_1  -  39
// extern void OnClock_ADDHL_p_1_OF();
// extern void OnClock_ADDHL_p_1_OP();
// extern void OnClock_ADDHL_p_1_OP();

// ADD IX, BC   -  ADDIX_BC_DD2  -  DD, 08
extern void OnClock_ADDIX_m_DD2_OF();
extern void OnClock_ADDIX_m_DD2_OP();
// extern void OnClock_ADDIX_m_DD2_OP();

// ADD IX, DE   -  ADDIX_DE_DD2  -  DD, 18
// extern void OnClock_ADDIX_m_DD2_OF();
// extern void OnClock_ADDIX_m_DD2_OP();
// extern void OnClock_ADDIX_m_DD2_OP();

// ADD IX, IX   -  ADDIX_IX_DD2  -  DD, 28
// extern void OnClock_ADDIX_m_DD2_OF();
// extern void OnClock_ADDIX_m_DD2_OP();
// extern void OnClock_ADDIX_m_DD2_OP();

// ADD IX, SP   -  ADDIX_SP_DD2  -  DD, 38
// extern void OnClock_ADDIX_m_DD2_OF();
// extern void OnClock_ADDIX_m_DD2_OP();
// extern void OnClock_ADDIX_m_DD2_OP();

// ADD IY, BC   -  ADDIY_BC_FD2  -  FD, 08
extern void OnClock_ADDIY_o_FD2_OF();
extern void OnClock_ADDIY_o_FD2_OP();
// extern void OnClock_ADDIY_o_FD2_OP();

// ADD IY, DE   -  ADDIY_DE_FD2  -  FD, 18
// extern void OnClock_ADDIY_o_FD2_OF();
// extern void OnClock_ADDIY_o_FD2_OP();
// extern void OnClock_ADDIY_o_FD2_OP();

// ADD IY, IY   -  ADDIY_IY_FD2  -  FD, 28
// extern void OnClock_ADDIY_o_FD2_OF();
// extern void OnClock_ADDIY_o_FD2_OP();
// extern void OnClock_ADDIY_o_FD2_OP();

// ADD IY, SP   -  ADDIY_SP_FD2  -  FD, 38
// extern void OnClock_ADDIY_o_FD2_OF();
// extern void OnClock_ADDIY_o_FD2_OP();
// extern void OnClock_ADDIY_o_FD2_OP();

// ADC HL, BC   -  ADCHL_BC_ED2  -  ED, 4A
extern void OnClock_ADCHL_p_ED2_OF();
extern void OnClock_ADCHL_p_ED2_OP();
// extern void OnClock_ADCHL_p_ED2_OP();

// ADC HL, DE   -  ADCHL_DE_ED2  -  ED, 5A
// extern void OnClock_ADCHL_p_ED2_OF();
// extern void OnClock_ADCHL_p_ED2_OP();
// extern void OnClock_ADCHL_p_ED2_OP();

// ADC HL, HL   -  ADCHL_HL_ED2  -  ED, 6A
// extern void OnClock_ADCHL_p_ED2_OF();
// extern void OnClock_ADCHL_p_ED2_OP();
// extern void OnClock_ADCHL_p_ED2_OP();

// ADC HL, SP   -  ADCHL_SP_ED2  -  ED, 7A
// extern void OnClock_ADCHL_p_ED2_OF();
// extern void OnClock_ADCHL_p_ED2_OP();
// extern void OnClock_ADCHL_p_ED2_OP();

// SBC HL, BC   -  SBCHL_BC_ED2  -  ED, 42
extern void OnClock_SBCHL_p_ED2_OF();
extern void OnClock_SBCHL_p_ED2_OP();
// extern void OnClock_SBCHL_p_ED2_OP();

// SBC HL, DE   -  SBCHL_DE_ED2  -  ED, 52
// extern void OnClock_SBCHL_p_ED2_OF();
// extern void OnClock_SBCHL_p_ED2_OP();
// extern void OnClock_SBCHL_p_ED2_OP();

// SBC HL, HL   -  SBCHL_HL_ED2  -  ED, 62
// extern void OnClock_SBCHL_p_ED2_OF();
// extern void OnClock_SBCHL_p_ED2_OP();
// extern void OnClock_SBCHL_p_ED2_OP();

// SBC HL, SP   -  SBCHL_SP_ED2  -  ED, 72
// extern void OnClock_SBCHL_p_ED2_OF();
// extern void OnClock_SBCHL_p_ED2_OP();
// extern void OnClock_SBCHL_p_ED2_OP();

// INC BC   -  INCBC_1  -  03
extern void OnClock_INCp_1_OF();

// INC DE   -  INCDE_1  -  13
// extern void OnClock_INCp_1_OF();

// INC HL   -  INCHL_1  -  23
// extern void OnClock_INCp_1_OF();

// INC SP   -  INCSP_1  -  33
// extern void OnClock_INCp_1_OF();

// INC IX   -  INCIX_DD2  -  DD, 23
extern void OnClock_INCex_ex2_OF();

// INC IY   -  INCIY_FD2  -  FD, 23
// extern void OnClock_INCex_ex2_OF();

// DEC BC   -  DECBC_1  -  0B
extern void OnClock_DECp_1_OF();

// DEC DE   -  DECDE_1  -  1B
// extern void OnClock_DECp_1_OF();

// DEC HL   -  DECHL_1  -  2B
// extern void OnClock_DECp_1_OF();

// DEC SP   -  DECSP_1  -  3B
// extern void OnClock_DECp_1_OF();

// DEC IX   -  DECIX_DD2  -  DD, 2B
extern void OnClock_DECex_ex2_OF();

// DEC IY   -  DECIY_FD2  -  FD, 2B
// extern void OnClock_DECex_ex2_OF();

// RLCA   -  RLCA_1  -  07
extern void OnClock_RLCA_1_OF();

// RLA   -  RLA_1  -  17
extern void OnClock_RLA_1_OF();

// RRCA   -  RRCA_1  -  0F
extern void OnClock_RRCA_1_OF();

// RRA   -  RRA_1  -  1F
extern void OnClock_RRA_1_OF();

// RLC A   -  RLCA_CB2  -  CB, 07
extern void OnClock_RLCr_CB2_OF();

// RLC B   -  RLCB_CB2  -  CB, 00
// extern void OnClock_RLCr_CB2_OF();

// RLC C   -  RLCC_CB2  -  CB, 01
// extern void OnClock_RLCr_CB2_OF();

// RLC D   -  RLCD_CB2  -  CB, 02
// extern void OnClock_RLCr_CB2_OF();

// RLC E   -  RLCE_CB2  -  CB, 03
// extern void OnClock_RLCr_CB2_OF();

// RLC H   -  RLCH_CB2  -  CB, 04
// extern void OnClock_RLCr_CB2_OF();

// RLC L   -  RLCL_CB2  -  CB, 05
// extern void OnClock_RLCr_CB2_OF();

// RLC (HL)   -  RLC_HL__CB2  -  CB, 06
extern void OnClock_RLC_HL__CB2_OF();
extern void OnClock_RLC_HL__CB2_MR();

// RLC (IX+d)   -  RLC_IX_d__DD4  -  DD, CB, d, 06
extern void OnClock_RLC_ex_d__ex4_FD();
extern void OnClock_RLC_ex_d__ex4_MR();
extern void OnClock_RLC_ex_d__ex4_MW();

// RLC (IY+d)   -  RLC_IY_d__FD4  -  FD, CB, d, 06
// extern void OnClock_RLC_ex_d__ex4_FD();
// extern void OnClock_RLC_ex_d__ex4_MR();
// extern void OnClock_RLC_ex_d__ex4_MW();

// RLC (IX+d), A   -  RLC_IX_d__A_DD4  -  DD, CB, d, 07
extern void OnClock_RLC_ex_d__r_ex4_FD();
extern void OnClock_RLC_ex_d__r_ex4_MR();
extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IY+d), A   -  RLC_IY_d__A_FD4  -  FD, CB, d, 07
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IX+d), B   -  RLC_IX_d__B_DD4  -  DD, CB, d, 00
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IY+d), B   -  RLC_IY_d__B_FD4  -  FD, CB, d, 00
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IX+d), C   -  RLC_IX_d__C_DD4  -  DD, CB, d, 01
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IY+d), C   -  RLC_IY_d__C_FD4  -  FD, CB, d, 01
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IX+d), D   -  RLC_IX_d__D_DD4  -  DD, CB, d, 02
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IY+d), D   -  RLC_IY_d__D_FD4  -  FD, CB, d, 02
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IX+d), E   -  RLC_IX_d__E_DD4  -  DD, CB, d, 03
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IY+d), E   -  RLC_IY_d__E_FD4  -  FD, CB, d, 03
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IX+d), H   -  RLC_IX_d__H_DD4  -  DD, CB, d, 04
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IY+d), H   -  RLC_IY_d__H_FD4  -  FD, CB, d, 04
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IX+d), L   -  RLC_IX_d__L_DD4  -  DD, CB, d, 05
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RLC (IY+d), L   -  RLC_IY_d__L_FD4  -  FD, CB, d, 05
// extern void OnClock_RLC_ex_d__r_ex4_FD();
// extern void OnClock_RLC_ex_d__r_ex4_MR();
// extern void OnClock_RLC_ex_d__r_ex4_MW();

// RL A   -  RLA_CB2  -  CB, 17
extern void OnClock_RLr_CB2_OF();

// RL B   -  RLB_CB2  -  CB, 10
// extern void OnClock_RLr_CB2_OF();

// RL C   -  RLC_CB2  -  CB, 11
// extern void OnClock_RLr_CB2_OF();

// RL D   -  RLD_CB2  -  CB, 12
// extern void OnClock_RLr_CB2_OF();

// RL E   -  RLE_CB2  -  CB, 13
// extern void OnClock_RLr_CB2_OF();

// RL H   -  RLH_CB2  -  CB, 14
// extern void OnClock_RLr_CB2_OF();

// RL L   -  RLL_CB2  -  CB, 15
// extern void OnClock_RLr_CB2_OF();

// RL (HL)   -  RL_HL__CB2  -  CB, 16
extern void OnClock_RL_HL__CB2_OF();
extern void OnClock_RL_HL__CB2_MR();

// RL (IX+d)   -  RL_IX_d__DD4  -  DD, CB, d, 16
extern void OnClock_RL_ex_d__ex4_FD();
extern void OnClock_RL_ex_d__ex4_MR();
extern void OnClock_RL_ex_d__ex4_MW();

// RL (IY+d)   -  RL_IY_d__FD4  -  FD, CB, d, 16
// extern void OnClock_RL_ex_d__ex4_FD();
// extern void OnClock_RL_ex_d__ex4_MR();
// extern void OnClock_RL_ex_d__ex4_MW();

// RL (IX+d), A   -  RL_IX_d__A_DD4  -  DD, CB, d, 17
extern void OnClock_RL_ex_d__r_ex4_FD();
extern void OnClock_RL_ex_d__r_ex4_MR();
extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IY+d), A   -  RL_IY_d__A_FD4  -  FD, CB, d, 17
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IX+d), B   -  RL_IX_d__B_DD4  -  DD, CB, d, 10
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IY+d), B   -  RL_IY_d__B_FD4  -  FD, CB, d, 10
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IX+d), C   -  RL_IX_d__C_DD4  -  DD, CB, d, 11
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IY+d), C   -  RL_IY_d__C_FD4  -  FD, CB, d, 11
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IX+d), D   -  RL_IX_d__D_DD4  -  DD, CB, d, 12
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IY+d), D   -  RL_IY_d__D_FD4  -  FD, CB, d, 12
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IX+d), E   -  RL_IX_d__E_DD4  -  DD, CB, d, 13
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IY+d), E   -  RL_IY_d__E_FD4  -  FD, CB, d, 13
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IX+d), H   -  RL_IX_d__H_DD4  -  DD, CB, d, 14
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IY+d), H   -  RL_IY_d__H_FD4  -  FD, CB, d, 14
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IX+d), L   -  RL_IX_d__L_DD4  -  DD, CB, d, 15
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RL (IY+d), L   -  RL_IY_d__L_FD4  -  FD, CB, d, 15
// extern void OnClock_RL_ex_d__r_ex4_FD();
// extern void OnClock_RL_ex_d__r_ex4_MR();
// extern void OnClock_RL_ex_d__r_ex4_MW();

// RRC A   -  RRCA_CB2  -  CB, 0F
extern void OnClock_RRCr_CB2_OF();

// RRC B   -  RRCB_CB2  -  CB, 08
// extern void OnClock_RRCr_CB2_OF();

// RRC C   -  RRCC_CB2  -  CB, 09
// extern void OnClock_RRCr_CB2_OF();

// RRC D   -  RRCD_CB2  -  CB, 0A
// extern void OnClock_RRCr_CB2_OF();

// RRC E   -  RRCE_CB2  -  CB, 0B
// extern void OnClock_RRCr_CB2_OF();

// RRC H   -  RRCH_CB2  -  CB, 0C
// extern void OnClock_RRCr_CB2_OF();

// RRC L   -  RRCL_CB2  -  CB, 0D
// extern void OnClock_RRCr_CB2_OF();

// RRC (HL)   -  RRC_HL__CB2  -  CB, 0E
extern void OnClock_RRC_HL__CB2_OF();
extern void OnClock_RRC_HL__CB2_MR();

// RRC (IX+d)   -  RRC_IX_d__DD4  -  DD, CB, d, 0E
extern void OnClock_RRC_ex_d__ex4_FD();
extern void OnClock_RRC_ex_d__ex4_MR();
extern void OnClock_RRC_ex_d__ex4_MW();

// RRC (IY+d)   -  RRC_IY_d__FD4  -  FD, CB, d, 0E
// extern void OnClock_RRC_ex_d__ex4_FD();
// extern void OnClock_RRC_ex_d__ex4_MR();
// extern void OnClock_RRC_ex_d__ex4_MW();

// RRC (IX+d), A   -  RRC_IX_d__A_DD4  -  DD, CB, d, 0F
extern void OnClock_RRC_ex_d__r_ex4_FD();
extern void OnClock_RRC_ex_d__r_ex4_MR();
extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IY+d), A   -  RRC_IY_d__A_FD4  -  FD, CB, d, 0F
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IX+d), B   -  RRC_IX_d__B_DD4  -  DD, CB, d, 08
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IY+d), B   -  RRC_IY_d__B_FD4  -  FD, CB, d, 08
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IX+d), C   -  RRC_IX_d__C_DD4  -  DD, CB, d, 09
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IY+d), C   -  RRC_IY_d__C_FD4  -  FD, CB, d, 09
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IX+d), D   -  RRC_IX_d__D_DD4  -  DD, CB, d, 0A
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IY+d), D   -  RRC_IY_d__D_FD4  -  FD, CB, d, 0A
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IX+d), E   -  RRC_IX_d__E_DD4  -  DD, CB, d, 0B
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IY+d), E   -  RRC_IY_d__E_FD4  -  FD, CB, d, 0B
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IX+d), H   -  RRC_IX_d__H_DD4  -  DD, CB, d, 0C
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IY+d), H   -  RRC_IY_d__H_FD4  -  FD, CB, d, 0C
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IX+d), L   -  RRC_IX_d__L_DD4  -  DD, CB, d, 0D
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RRC (IY+d), L   -  RRC_IY_d__L_FD4  -  FD, CB, d, 0D
// extern void OnClock_RRC_ex_d__r_ex4_FD();
// extern void OnClock_RRC_ex_d__r_ex4_MR();
// extern void OnClock_RRC_ex_d__r_ex4_MW();

// RR A   -  RRA_CB2  -  CB, 1F
extern void OnClock_RRr_CB2_OF();

// RR B   -  RRB_CB2  -  CB, 18
// extern void OnClock_RRr_CB2_OF();

// RR C   -  RRC_CB2  -  CB, 19
// extern void OnClock_RRr_CB2_OF();

// RR D   -  RRD_CB2  -  CB, 1A
// extern void OnClock_RRr_CB2_OF();

// RR E   -  RRE_CB2  -  CB, 1B
// extern void OnClock_RRr_CB2_OF();

// RR H   -  RRH_CB2  -  CB, 1C
// extern void OnClock_RRr_CB2_OF();

// RR L   -  RRL_CB2  -  CB, 1D
// extern void OnClock_RRr_CB2_OF();

// RR (HL)   -  RR_HL__CB2  -  CB, 1E
extern void OnClock_RR_HL__CB2_OF();
extern void OnClock_RR_HL__CB2_MR();

// RR (IX+d)   -  RR_IX_d__DD4  -  DD, CB, d, 1E
extern void OnClock_RR_ex_d__ex4_FD();
extern void OnClock_RR_ex_d__ex4_MR();
extern void OnClock_RR_ex_d__ex4_MW();

// RR (IY+d)   -  RR_IY_d__FD4  -  FD, CB, d, 1E
// extern void OnClock_RR_ex_d__ex4_FD();
// extern void OnClock_RR_ex_d__ex4_MR();
// extern void OnClock_RR_ex_d__ex4_MW();

// RR (IX+d), A   -  RR_IX_d__A_DD4  -  DD, CB, d, 1F
extern void OnClock_RR_ex_d__r_ex4_FD();
extern void OnClock_RR_ex_d__r_ex4_MR();
extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IY+d), A   -  RR_IY_d__A_FD4  -  FD, CB, d, 1F
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IX+d), B   -  RR_IX_d__B_DD4  -  DD, CB, d, 18
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IY+d), B   -  RR_IY_d__B_FD4  -  FD, CB, d, 18
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IX+d), C   -  RR_IX_d__C_DD4  -  DD, CB, d, 19
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IY+d), C   -  RR_IY_d__C_FD4  -  FD, CB, d, 19
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IX+d), D   -  RR_IX_d__D_DD4  -  DD, CB, d, 1A
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IY+d), D   -  RR_IY_d__D_FD4  -  FD, CB, d, 1A
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IX+d), E   -  RR_IX_d__E_DD4  -  DD, CB, d, 1B
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IY+d), E   -  RR_IY_d__E_FD4  -  FD, CB, d, 1B
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IX+d), H   -  RR_IX_d__H_DD4  -  DD, CB, d, 1C
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IY+d), H   -  RR_IY_d__H_FD4  -  FD, CB, d, 1C
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IX+d), L   -  RR_IX_d__L_DD4  -  DD, CB, d, 1D
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// RR (IY+d), L   -  RR_IY_d__L_FD4  -  FD, CB, d, 1D
// extern void OnClock_RR_ex_d__r_ex4_FD();
// extern void OnClock_RR_ex_d__r_ex4_MR();
// extern void OnClock_RR_ex_d__r_ex4_MW();

// SLA A   -  SLAA_CB2  -  CB, 27
extern void OnClock_SLAr_CB2_OF();

// SLA B   -  SLAB_CB2  -  CB, 20
// extern void OnClock_SLAr_CB2_OF();

// SLA C   -  SLAC_CB2  -  CB, 21
// extern void OnClock_SLAr_CB2_OF();

// SLA D   -  SLAD_CB2  -  CB, 22
// extern void OnClock_SLAr_CB2_OF();

// SLA E   -  SLAE_CB2  -  CB, 23
// extern void OnClock_SLAr_CB2_OF();

// SLA H   -  SLAH_CB2  -  CB, 24
// extern void OnClock_SLAr_CB2_OF();

// SLA L   -  SLAL_CB2  -  CB, 25
// extern void OnClock_SLAr_CB2_OF();

// SLA (HL)   -  SLA_HL__CB2  -  CB, 26
extern void OnClock_SLA_HL__CB2_OF();
extern void OnClock_SLA_HL__CB2_MR();

// SLA (IX+d)   -  SLA_IX_d__DD4  -  DD, CB, d, 26
extern void OnClock_SLA_ex_d__ex4_FD();
extern void OnClock_SLA_ex_d__ex4_MR();
extern void OnClock_SLA_ex_d__ex4_MW();

// SLA (IY+d)   -  SLA_IY_d__FD4  -  FD, CB, d, 26
// extern void OnClock_SLA_ex_d__ex4_FD();
// extern void OnClock_SLA_ex_d__ex4_MR();
// extern void OnClock_SLA_ex_d__ex4_MW();

// SLA (IX+d), A   -  SLA_IX_d__A_DD4  -  DD, CB, d, 27
extern void OnClock_SLA_ex_d__r_ex4_FD();
extern void OnClock_SLA_ex_d__r_ex4_MR();
extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IY+d), A   -  SLA_IY_d__A_FD4  -  FD, CB, d, 27
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IX+d), B   -  SLA_IX_d__B_DD4  -  DD, CB, d, 20
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IY+d), B   -  SLA_IY_d__B_FD4  -  FD, CB, d, 20
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IX+d), C   -  SLA_IX_d__C_DD4  -  DD, CB, d, 21
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IY+d), C   -  SLA_IY_d__C_FD4  -  FD, CB, d, 21
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IX+d), D   -  SLA_IX_d__D_DD4  -  DD, CB, d, 22
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IY+d), D   -  SLA_IY_d__D_FD4  -  FD, CB, d, 22
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IX+d), E   -  SLA_IX_d__E_DD4  -  DD, CB, d, 23
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IY+d), E   -  SLA_IY_d__E_FD4  -  FD, CB, d, 23
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IX+d), H   -  SLA_IX_d__H_DD4  -  DD, CB, d, 24
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IY+d), H   -  SLA_IY_d__H_FD4  -  FD, CB, d, 24
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IX+d), L   -  SLA_IX_d__L_DD4  -  DD, CB, d, 25
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLA (IY+d), L   -  SLA_IY_d__L_FD4  -  FD, CB, d, 25
// extern void OnClock_SLA_ex_d__r_ex4_FD();
// extern void OnClock_SLA_ex_d__r_ex4_MR();
// extern void OnClock_SLA_ex_d__r_ex4_MW();

// SLL A   -  SLLA_CB2  -  CB, 37
extern void OnClock_SLLr_CB2_OF();

// SLL B   -  SLLB_CB2  -  CB, 30
// extern void OnClock_SLLr_CB2_OF();

// SLL C   -  SLLC_CB2  -  CB, 31
// extern void OnClock_SLLr_CB2_OF();

// SLL D   -  SLLD_CB2  -  CB, 32
// extern void OnClock_SLLr_CB2_OF();

// SLL E   -  SLLE_CB2  -  CB, 33
// extern void OnClock_SLLr_CB2_OF();

// SLL H   -  SLLH_CB2  -  CB, 34
// extern void OnClock_SLLr_CB2_OF();

// SLL L   -  SLLL_CB2  -  CB, 35
// extern void OnClock_SLLr_CB2_OF();

// SLL (HL)   -  SLL_HL__CB2  -  CB, 36
extern void OnClock_SLL_HL__CB2_OF();
extern void OnClock_SLL_HL__CB2_MR();

// SLL (IX+d)   -  SLL_IX_d__DD4  -  DD, CB, d, 36
extern void OnClock_SLL_ex_d__ex4_FD();
extern void OnClock_SLL_ex_d__ex4_MR();
extern void OnClock_SLL_ex_d__ex4_MW();

// SLL (IY+d)   -  SLL_IY_d__FD4  -  FD, CB, d, 36
// extern void OnClock_SLL_ex_d__ex4_FD();
// extern void OnClock_SLL_ex_d__ex4_MR();
// extern void OnClock_SLL_ex_d__ex4_MW();

// SLL (IX+d), A   -  SLL_IX_d__A_DD4  -  DD, CB, d, 37
extern void OnClock_SLL_ex_d__r_ex4_FD();
extern void OnClock_SLL_ex_d__r_ex4_MR();
extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IY+d), A   -  SLL_IY_d__A_FD4  -  FD, CB, d, 37
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IX+d), B   -  SLL_IX_d__B_DD4  -  DD, CB, d, 30
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IY+d), B   -  SLL_IY_d__B_FD4  -  FD, CB, d, 30
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IX+d), C   -  SLL_IX_d__C_DD4  -  DD, CB, d, 31
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IY+d), C   -  SLL_IY_d__C_FD4  -  FD, CB, d, 31
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IX+d), D   -  SLL_IX_d__D_DD4  -  DD, CB, d, 32
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IY+d), D   -  SLL_IY_d__D_FD4  -  FD, CB, d, 32
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IX+d), E   -  SLL_IX_d__E_DD4  -  DD, CB, d, 33
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IY+d), E   -  SLL_IY_d__E_FD4  -  FD, CB, d, 33
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IX+d), H   -  SLL_IX_d__H_DD4  -  DD, CB, d, 34
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IY+d), H   -  SLL_IY_d__H_FD4  -  FD, CB, d, 34
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IX+d), L   -  SLL_IX_d__L_DD4  -  DD, CB, d, 35
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SLL (IY+d), L   -  SLL_IY_d__L_FD4  -  FD, CB, d, 35
// extern void OnClock_SLL_ex_d__r_ex4_FD();
// extern void OnClock_SLL_ex_d__r_ex4_MR();
// extern void OnClock_SLL_ex_d__r_ex4_MW();

// SRA A   -  SRAA_CB2  -  CB, 2F
extern void OnClock_SRAr_CB2_OF();

// SRA B   -  SRAB_CB2  -  CB, 28
// extern void OnClock_SRAr_CB2_OF();

// SRA C   -  SRAC_CB2  -  CB, 29
// extern void OnClock_SRAr_CB2_OF();

// SRA D   -  SRAD_CB2  -  CB, 2A
// extern void OnClock_SRAr_CB2_OF();

// SRA E   -  SRAE_CB2  -  CB, 2B
// extern void OnClock_SRAr_CB2_OF();

// SRA H   -  SRAH_CB2  -  CB, 2C
// extern void OnClock_SRAr_CB2_OF();

// SRA L   -  SRAL_CB2  -  CB, 2D
// extern void OnClock_SRAr_CB2_OF();

// SRA (HL)   -  SRA_HL__CB2  -  CB, 2E
extern void OnClock_SRA_HL__CB2_OF();
extern void OnClock_SRA_HL__CB2_MR();

// SRA (IX+d)   -  SRA_IX_d__DD4  -  DD, CB, d, 2E
extern void OnClock_SRA_ex_d__ex4_FD();
extern void OnClock_SRA_ex_d__ex4_MR();
extern void OnClock_SRA_ex_d__ex4_MW();

// SRA (IY+d)   -  SRA_IY_d__FD4  -  FD, CB, d, 2E
// extern void OnClock_SRA_ex_d__ex4_FD();
// extern void OnClock_SRA_ex_d__ex4_MR();
// extern void OnClock_SRA_ex_d__ex4_MW();

// SRA (IX+d), A   -  SRA_IX_d__A_DD4  -  DD, CB, d, 2F
extern void OnClock_SRA_ex_d__r_ex4_FD();
extern void OnClock_SRA_ex_d__r_ex4_MR();
extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IY+d), A   -  SRA_IY_d__A_FD4  -  FD, CB, d, 2F
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IX+d), B   -  SRA_IX_d__B_DD4  -  DD, CB, d, 28
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IY+d), B   -  SRA_IY_d__B_FD4  -  FD, CB, d, 28
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IX+d), C   -  SRA_IX_d__C_DD4  -  DD, CB, d, 29
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IY+d), C   -  SRA_IY_d__C_FD4  -  FD, CB, d, 29
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IX+d), D   -  SRA_IX_d__D_DD4  -  DD, CB, d, 2A
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IY+d), D   -  SRA_IY_d__D_FD4  -  FD, CB, d, 2A
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IX+d), E   -  SRA_IX_d__E_DD4  -  DD, CB, d, 2B
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IY+d), E   -  SRA_IY_d__E_FD4  -  FD, CB, d, 2B
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IX+d), H   -  SRA_IX_d__H_DD4  -  DD, CB, d, 2C
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IY+d), H   -  SRA_IY_d__H_FD4  -  FD, CB, d, 2C
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IX+d), L   -  SRA_IX_d__L_DD4  -  DD, CB, d, 2D
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRA (IY+d), L   -  SRA_IY_d__L_FD4  -  FD, CB, d, 2D
// extern void OnClock_SRA_ex_d__r_ex4_FD();
// extern void OnClock_SRA_ex_d__r_ex4_MR();
// extern void OnClock_SRA_ex_d__r_ex4_MW();

// SRL A   -  SRLA_CB2  -  CB, 3F
extern void OnClock_SRLr_CB2_OF();

// SRL B   -  SRLB_CB2  -  CB, 38
// extern void OnClock_SRLr_CB2_OF();

// SRL C   -  SRLC_CB2  -  CB, 39
// extern void OnClock_SRLr_CB2_OF();

// SRL D   -  SRLD_CB2  -  CB, 3A
// extern void OnClock_SRLr_CB2_OF();

// SRL E   -  SRLE_CB2  -  CB, 3B
// extern void OnClock_SRLr_CB2_OF();

// SRL H   -  SRLH_CB2  -  CB, 3C
// extern void OnClock_SRLr_CB2_OF();

// SRL L   -  SRLL_CB2  -  CB, 3D
// extern void OnClock_SRLr_CB2_OF();

// SRL (HL)   -  SRL_HL__CB2  -  CB, 3E
extern void OnClock_SRL_HL__CB2_OF();
extern void OnClock_SRL_HL__CB2_MR();

// SRL (IX+d)   -  SRL_IX_d__DD4  -  DD, CB, d, 3E
extern void OnClock_SRL_ex_d__ex4_FD();
extern void OnClock_SRL_ex_d__ex4_MR();
extern void OnClock_SRL_ex_d__ex4_MW();

// SRL (IY+d)   -  SRL_IY_d__FD4  -  FD, CB, d, 3E
// extern void OnClock_SRL_ex_d__ex4_FD();
// extern void OnClock_SRL_ex_d__ex4_MR();
// extern void OnClock_SRL_ex_d__ex4_MW();

// SRL (IX+d), A   -  SRL_IX_d__A_DD4  -  DD, CB, d, 3F
extern void OnClock_SRL_ex_d__r_ex4_FD();
extern void OnClock_SRL_ex_d__r_ex4_MR();
extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IY+d), A   -  SRL_IY_d__A_FD4  -  FD, CB, d, 3F
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IX+d), B   -  SRL_IX_d__B_DD4  -  DD, CB, d, 38
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IY+d), B   -  SRL_IY_d__B_FD4  -  FD, CB, d, 38
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IX+d), C   -  SRL_IX_d__C_DD4  -  DD, CB, d, 39
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IY+d), C   -  SRL_IY_d__C_FD4  -  FD, CB, d, 39
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IX+d), D   -  SRL_IX_d__D_DD4  -  DD, CB, d, 3A
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IY+d), D   -  SRL_IY_d__D_FD4  -  FD, CB, d, 3A
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IX+d), E   -  SRL_IX_d__E_DD4  -  DD, CB, d, 3B
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IY+d), E   -  SRL_IY_d__E_FD4  -  FD, CB, d, 3B
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IX+d), H   -  SRL_IX_d__H_DD4  -  DD, CB, d, 3C
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IY+d), H   -  SRL_IY_d__H_FD4  -  FD, CB, d, 3C
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IX+d), L   -  SRL_IX_d__L_DD4  -  DD, CB, d, 3D
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// SRL (IY+d), L   -  SRL_IY_d__L_FD4  -  FD, CB, d, 3D
// extern void OnClock_SRL_ex_d__r_ex4_FD();
// extern void OnClock_SRL_ex_d__r_ex4_MR();
// extern void OnClock_SRL_ex_d__r_ex4_MW();

// RLD A   -  RLDA_ED2  -  ED, 6F
extern void OnClock_RLDA_ED2_OF();
extern void OnClock_RLDA_ED2_OP();
// extern void OnClock_RLDA_ED2_OP();
// extern void OnClock_RLDA_ED2_OP();

// RRD A   -  RRDA_ED2  -  ED, 67
extern void OnClock_RRDA_ED2_OF();
extern void OnClock_RRDA_ED2_OP();
// extern void OnClock_RRDA_ED2_OP();
// extern void OnClock_RRDA_ED2_OP();

// BIT 0, A   -  BIT0_A_CB2  -  CB, 47
extern void OnClock_BITb_r_CB2_OF();

// BIT 1, A   -  BIT1_A_CB2  -  CB, 4F
// extern void OnClock_BITb_r_CB2_OF();

// BIT 2, A   -  BIT2_A_CB2  -  CB, 57
// extern void OnClock_BITb_r_CB2_OF();

// BIT 3, A   -  BIT3_A_CB2  -  CB, 5F
// extern void OnClock_BITb_r_CB2_OF();

// BIT 4, A   -  BIT4_A_CB2  -  CB, 67
// extern void OnClock_BITb_r_CB2_OF();

// BIT 5, A   -  BIT5_A_CB2  -  CB, 6F
// extern void OnClock_BITb_r_CB2_OF();

// BIT 6, A   -  BIT6_A_CB2  -  CB, 77
// extern void OnClock_BITb_r_CB2_OF();

// BIT 7, A   -  BIT7_A_CB2  -  CB, 7F
// extern void OnClock_BITb_r_CB2_OF();

// BIT 0, B   -  BIT0_B_CB2  -  CB, 40
// extern void OnClock_BITb_r_CB2_OF();

// BIT 1, B   -  BIT1_B_CB2  -  CB, 48
// extern void OnClock_BITb_r_CB2_OF();

// BIT 2, B   -  BIT2_B_CB2  -  CB, 50
// extern void OnClock_BITb_r_CB2_OF();

// BIT 3, B   -  BIT3_B_CB2  -  CB, 58
// extern void OnClock_BITb_r_CB2_OF();

// BIT 4, B   -  BIT4_B_CB2  -  CB, 60
// extern void OnClock_BITb_r_CB2_OF();

// BIT 5, B   -  BIT5_B_CB2  -  CB, 68
// extern void OnClock_BITb_r_CB2_OF();

// BIT 6, B   -  BIT6_B_CB2  -  CB, 70
// extern void OnClock_BITb_r_CB2_OF();

// BIT 7, B   -  BIT7_B_CB2  -  CB, 78
// extern void OnClock_BITb_r_CB2_OF();

// BIT 0, C   -  BIT0_C_CB2  -  CB, 41
// extern void OnClock_BITb_r_CB2_OF();

// BIT 1, C   -  BIT1_C_CB2  -  CB, 49
// extern void OnClock_BITb_r_CB2_OF();

// BIT 2, C   -  BIT2_C_CB2  -  CB, 51
// extern void OnClock_BITb_r_CB2_OF();

// BIT 3, C   -  BIT3_C_CB2  -  CB, 59
// extern void OnClock_BITb_r_CB2_OF();

// BIT 4, C   -  BIT4_C_CB2  -  CB, 61
// extern void OnClock_BITb_r_CB2_OF();

// BIT 5, C   -  BIT5_C_CB2  -  CB, 69
// extern void OnClock_BITb_r_CB2_OF();

// BIT 6, C   -  BIT6_C_CB2  -  CB, 71
// extern void OnClock_BITb_r_CB2_OF();

// BIT 7, C   -  BIT7_C_CB2  -  CB, 79
// extern void OnClock_BITb_r_CB2_OF();

// BIT 0, D   -  BIT0_D_CB2  -  CB, 42
// extern void OnClock_BITb_r_CB2_OF();

// BIT 1, D   -  BIT1_D_CB2  -  CB, 4A
// extern void OnClock_BITb_r_CB2_OF();

// BIT 2, D   -  BIT2_D_CB2  -  CB, 52
// extern void OnClock_BITb_r_CB2_OF();

// BIT 3, D   -  BIT3_D_CB2  -  CB, 5A
// extern void OnClock_BITb_r_CB2_OF();

// BIT 4, D   -  BIT4_D_CB2  -  CB, 62
// extern void OnClock_BITb_r_CB2_OF();

// BIT 5, D   -  BIT5_D_CB2  -  CB, 6A
// extern void OnClock_BITb_r_CB2_OF();

// BIT 6, D   -  BIT6_D_CB2  -  CB, 72
// extern void OnClock_BITb_r_CB2_OF();

// BIT 7, D   -  BIT7_D_CB2  -  CB, 7A
// extern void OnClock_BITb_r_CB2_OF();

// BIT 0, E   -  BIT0_E_CB2  -  CB, 43
// extern void OnClock_BITb_r_CB2_OF();

// BIT 1, E   -  BIT1_E_CB2  -  CB, 4B
// extern void OnClock_BITb_r_CB2_OF();

// BIT 2, E   -  BIT2_E_CB2  -  CB, 53
// extern void OnClock_BITb_r_CB2_OF();

// BIT 3, E   -  BIT3_E_CB2  -  CB, 5B
// extern void OnClock_BITb_r_CB2_OF();

// BIT 4, E   -  BIT4_E_CB2  -  CB, 63
// extern void OnClock_BITb_r_CB2_OF();

// BIT 5, E   -  BIT5_E_CB2  -  CB, 6B
// extern void OnClock_BITb_r_CB2_OF();

// BIT 6, E   -  BIT6_E_CB2  -  CB, 73
// extern void OnClock_BITb_r_CB2_OF();

// BIT 7, E   -  BIT7_E_CB2  -  CB, 7B
// extern void OnClock_BITb_r_CB2_OF();

// BIT 0, H   -  BIT0_H_CB2  -  CB, 44
// extern void OnClock_BITb_r_CB2_OF();

// BIT 1, H   -  BIT1_H_CB2  -  CB, 4C
// extern void OnClock_BITb_r_CB2_OF();

// BIT 2, H   -  BIT2_H_CB2  -  CB, 54
// extern void OnClock_BITb_r_CB2_OF();

// BIT 3, H   -  BIT3_H_CB2  -  CB, 5C
// extern void OnClock_BITb_r_CB2_OF();

// BIT 4, H   -  BIT4_H_CB2  -  CB, 64
// extern void OnClock_BITb_r_CB2_OF();

// BIT 5, H   -  BIT5_H_CB2  -  CB, 6C
// extern void OnClock_BITb_r_CB2_OF();

// BIT 6, H   -  BIT6_H_CB2  -  CB, 74
// extern void OnClock_BITb_r_CB2_OF();

// BIT 7, H   -  BIT7_H_CB2  -  CB, 7C
// extern void OnClock_BITb_r_CB2_OF();

// BIT 0, L   -  BIT0_L_CB2  -  CB, 45
// extern void OnClock_BITb_r_CB2_OF();

// BIT 1, L   -  BIT1_L_CB2  -  CB, 4D
// extern void OnClock_BITb_r_CB2_OF();

// BIT 2, L   -  BIT2_L_CB2  -  CB, 55
// extern void OnClock_BITb_r_CB2_OF();

// BIT 3, L   -  BIT3_L_CB2  -  CB, 5D
// extern void OnClock_BITb_r_CB2_OF();

// BIT 4, L   -  BIT4_L_CB2  -  CB, 65
// extern void OnClock_BITb_r_CB2_OF();

// BIT 5, L   -  BIT5_L_CB2  -  CB, 6D
// extern void OnClock_BITb_r_CB2_OF();

// BIT 6, L   -  BIT6_L_CB2  -  CB, 75
// extern void OnClock_BITb_r_CB2_OF();

// BIT 7, L   -  BIT7_L_CB2  -  CB, 7D
// extern void OnClock_BITb_r_CB2_OF();

// BIT 0, (HL)   -  BIT0__HL__CB2  -  CB, 46
extern void OnClock_BITb__HL__CB2_OF();
extern void OnClock_BITb__HL__CB2_MR();

// BIT 1, (HL)   -  BIT1__HL__CB2  -  CB, 4E
// extern void OnClock_BITb__HL__CB2_OF();
// extern void OnClock_BITb__HL__CB2_MR();

// BIT 2, (HL)   -  BIT2__HL__CB2  -  CB, 56
// extern void OnClock_BITb__HL__CB2_OF();
// extern void OnClock_BITb__HL__CB2_MR();

// BIT 3, (HL)   -  BIT3__HL__CB2  -  CB, 5E
// extern void OnClock_BITb__HL__CB2_OF();
// extern void OnClock_BITb__HL__CB2_MR();

// BIT 4, (HL)   -  BIT4__HL__CB2  -  CB, 66
// extern void OnClock_BITb__HL__CB2_OF();
// extern void OnClock_BITb__HL__CB2_MR();

// BIT 5, (HL)   -  BIT5__HL__CB2  -  CB, 6E
// extern void OnClock_BITb__HL__CB2_OF();
// extern void OnClock_BITb__HL__CB2_MR();

// BIT 6, (HL)   -  BIT6__HL__CB2  -  CB, 76
// extern void OnClock_BITb__HL__CB2_OF();
// extern void OnClock_BITb__HL__CB2_MR();

// BIT 7, (HL)   -  BIT7__HL__CB2  -  CB, 7E
// extern void OnClock_BITb__HL__CB2_OF();
// extern void OnClock_BITb__HL__CB2_MR();

// BIT 0, (IX+d)   -  BIT0__IX_d__DD4  -  DD, CB, d, 46
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d)   -  BIT0__IY_d__FD4  -  FD, CB, d, 46
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d)   -  BIT1__IX_d__DD4  -  DD, CB, d, 4E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d)   -  BIT1__IY_d__FD4  -  FD, CB, d, 4E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d)   -  BIT2__IX_d__DD4  -  DD, CB, d, 56
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d)   -  BIT2__IY_d__FD4  -  FD, CB, d, 56
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d)   -  BIT3__IX_d__DD4  -  DD, CB, d, 5E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d)   -  BIT3__IY_d__FD4  -  FD, CB, d, 5E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d)   -  BIT4__IX_d__DD4  -  DD, CB, d, 66
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d)   -  BIT4__IY_d__FD4  -  FD, CB, d, 66
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d)   -  BIT5__IX_d__DD4  -  DD, CB, d, 6E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d)   -  BIT5__IY_d__FD4  -  FD, CB, d, 6E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d)   -  BIT6__IX_d__DD4  -  DD, CB, d, 76
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d)   -  BIT6__IY_d__FD4  -  FD, CB, d, 76
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d)   -  BIT7__IX_d__DD4  -  DD, CB, d, 7E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d)   -  BIT7__IY_d__FD4  -  FD, CB, d, 7E
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IX+d) *   -  BIT0__IX_d__DD4  -  DD, CB, d, 40
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d) *   -  BIT0__IY_d__FD4  -  FD, CB, d, 40
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IX+d) *   -  BIT0__IX_d__DD4  -  DD, CB, d, 41
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d) *   -  BIT0__IY_d__FD4  -  FD, CB, d, 41
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IX+d) *   -  BIT0__IX_d__DD4  -  DD, CB, d, 42
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d) *   -  BIT0__IY_d__FD4  -  FD, CB, d, 42
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IX+d) *   -  BIT0__IX_d__DD4  -  DD, CB, d, 43
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d) *   -  BIT0__IY_d__FD4  -  FD, CB, d, 43
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IX+d) *   -  BIT0__IX_d__DD4  -  DD, CB, d, 44
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d) *   -  BIT0__IY_d__FD4  -  FD, CB, d, 44
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IX+d) *   -  BIT0__IX_d__DD4  -  DD, CB, d, 45
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d) *   -  BIT0__IY_d__FD4  -  FD, CB, d, 45
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IX+d) *   -  BIT0__IX_d__DD4  -  DD, CB, d, 47
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 0, (IY+d) *   -  BIT0__IY_d__FD4  -  FD, CB, d, 47
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d) *   -  BIT1__IX_d__DD4  -  DD, CB, d, 48
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d) *   -  BIT1__IY_d__FD4  -  FD, CB, d, 48
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d) *   -  BIT1__IX_d__DD4  -  DD, CB, d, 49
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d) *   -  BIT1__IY_d__FD4  -  FD, CB, d, 49
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d) *   -  BIT1__IX_d__DD4  -  DD, CB, d, 4A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d) *   -  BIT1__IY_d__FD4  -  FD, CB, d, 4A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d) *   -  BIT1__IX_d__DD4  -  DD, CB, d, 4B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d) *   -  BIT1__IY_d__FD4  -  FD, CB, d, 4B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d) *   -  BIT1__IX_d__DD4  -  DD, CB, d, 4C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d) *   -  BIT1__IY_d__FD4  -  FD, CB, d, 4C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d) *   -  BIT1__IX_d__DD4  -  DD, CB, d, 4D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d) *   -  BIT1__IY_d__FD4  -  FD, CB, d, 4D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IX+d) *   -  BIT1__IX_d__DD4  -  DD, CB, d, 4F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 1, (IY+d) *   -  BIT1__IY_d__FD4  -  FD, CB, d, 4F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d) *   -  BIT2__IX_d__DD4  -  DD, CB, d, 50
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d) *   -  BIT2__IY_d__FD4  -  FD, CB, d, 50
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d) *   -  BIT2__IX_d__DD4  -  DD, CB, d, 51
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d) *   -  BIT2__IY_d__FD4  -  FD, CB, d, 51
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d) *   -  BIT2__IX_d__DD4  -  DD, CB, d, 52
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d) *   -  BIT2__IY_d__FD4  -  FD, CB, d, 52
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d) *   -  BIT2__IX_d__DD4  -  DD, CB, d, 53
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d) *   -  BIT2__IY_d__FD4  -  FD, CB, d, 53
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d) *   -  BIT2__IX_d__DD4  -  DD, CB, d, 54
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d) *   -  BIT2__IY_d__FD4  -  FD, CB, d, 54
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d) *   -  BIT2__IX_d__DD4  -  DD, CB, d, 55
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d) *   -  BIT2__IY_d__FD4  -  FD, CB, d, 55
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IX+d) *   -  BIT2__IX_d__DD4  -  DD, CB, d, 57
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 2, (IY+d) *   -  BIT2__IY_d__FD4  -  FD, CB, d, 57
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d) *   -  BIT3__IX_d__DD4  -  DD, CB, d, 58
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d) *   -  BIT3__IY_d__FD4  -  FD, CB, d, 58
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d) *   -  BIT3__IX_d__DD4  -  DD, CB, d, 59
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d) *   -  BIT3__IY_d__FD4  -  FD, CB, d, 59
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d) *   -  BIT3__IX_d__DD4  -  DD, CB, d, 5A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d) *   -  BIT3__IY_d__FD4  -  FD, CB, d, 5A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d) *   -  BIT3__IX_d__DD4  -  DD, CB, d, 5B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d) *   -  BIT3__IY_d__FD4  -  FD, CB, d, 5B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d) *   -  BIT3__IX_d__DD4  -  DD, CB, d, 5C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d) *   -  BIT3__IY_d__FD4  -  FD, CB, d, 5C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d) *   -  BIT3__IX_d__DD4  -  DD, CB, d, 5D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d) *   -  BIT3__IY_d__FD4  -  FD, CB, d, 5D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IX+d) *   -  BIT3__IX_d__DD4  -  DD, CB, d, 5F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 3, (IY+d) *   -  BIT3__IY_d__FD4  -  FD, CB, d, 5F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d) *   -  BIT4__IX_d__DD4  -  DD, CB, d, 60
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d) *   -  BIT4__IY_d__FD4  -  FD, CB, d, 60
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d) *   -  BIT4__IX_d__DD4  -  DD, CB, d, 61
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d) *   -  BIT4__IY_d__FD4  -  FD, CB, d, 61
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d) *   -  BIT4__IX_d__DD4  -  DD, CB, d, 62
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d) *   -  BIT4__IY_d__FD4  -  FD, CB, d, 62
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d) *   -  BIT4__IX_d__DD4  -  DD, CB, d, 63
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d) *   -  BIT4__IY_d__FD4  -  FD, CB, d, 63
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d) *   -  BIT4__IX_d__DD4  -  DD, CB, d, 64
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d) *   -  BIT4__IY_d__FD4  -  FD, CB, d, 64
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d) *   -  BIT4__IX_d__DD4  -  DD, CB, d, 65
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d) *   -  BIT4__IY_d__FD4  -  FD, CB, d, 65
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IX+d) *   -  BIT4__IX_d__DD4  -  DD, CB, d, 67
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 4, (IY+d) *   -  BIT4__IY_d__FD4  -  FD, CB, d, 67
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d) *   -  BIT5__IX_d__DD4  -  DD, CB, d, 68
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d) *   -  BIT5__IY_d__FD4  -  FD, CB, d, 68
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d) *   -  BIT5__IX_d__DD4  -  DD, CB, d, 69
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d) *   -  BIT5__IY_d__FD4  -  FD, CB, d, 69
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d) *   -  BIT5__IX_d__DD4  -  DD, CB, d, 6A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d) *   -  BIT5__IY_d__FD4  -  FD, CB, d, 6A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d) *   -  BIT5__IX_d__DD4  -  DD, CB, d, 6B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d) *   -  BIT5__IY_d__FD4  -  FD, CB, d, 6B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d) *   -  BIT5__IX_d__DD4  -  DD, CB, d, 6C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d) *   -  BIT5__IY_d__FD4  -  FD, CB, d, 6C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d) *   -  BIT5__IX_d__DD4  -  DD, CB, d, 6D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d) *   -  BIT5__IY_d__FD4  -  FD, CB, d, 6D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IX+d) *   -  BIT5__IX_d__DD4  -  DD, CB, d, 6F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 5, (IY+d) *   -  BIT5__IY_d__FD4  -  FD, CB, d, 6F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d) *   -  BIT6__IX_d__DD4  -  DD, CB, d, 70
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d) *   -  BIT6__IY_d__FD4  -  FD, CB, d, 70
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d) *   -  BIT6__IX_d__DD4  -  DD, CB, d, 71
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d) *   -  BIT6__IY_d__FD4  -  FD, CB, d, 71
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d) *   -  BIT6__IX_d__DD4  -  DD, CB, d, 72
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d) *   -  BIT6__IY_d__FD4  -  FD, CB, d, 72
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d) *   -  BIT6__IX_d__DD4  -  DD, CB, d, 73
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d) *   -  BIT6__IY_d__FD4  -  FD, CB, d, 73
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d) *   -  BIT6__IX_d__DD4  -  DD, CB, d, 74
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d) *   -  BIT6__IY_d__FD4  -  FD, CB, d, 74
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d) *   -  BIT6__IX_d__DD4  -  DD, CB, d, 75
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d) *   -  BIT6__IY_d__FD4  -  FD, CB, d, 75
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IX+d) *   -  BIT6__IX_d__DD4  -  DD, CB, d, 77
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 6, (IY+d) *   -  BIT6__IY_d__FD4  -  FD, CB, d, 77
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d) *   -  BIT7__IX_d__DD4  -  DD, CB, d, 78
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d) *   -  BIT7__IY_d__FD4  -  FD, CB, d, 78
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d) *   -  BIT7__IX_d__DD4  -  DD, CB, d, 79
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d) *   -  BIT7__IY_d__FD4  -  FD, CB, d, 79
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d) *   -  BIT7__IX_d__DD4  -  DD, CB, d, 7A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d) *   -  BIT7__IY_d__FD4  -  FD, CB, d, 7A
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d) *   -  BIT7__IX_d__DD4  -  DD, CB, d, 7B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d) *   -  BIT7__IY_d__FD4  -  FD, CB, d, 7B
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d) *   -  BIT7__IX_d__DD4  -  DD, CB, d, 7C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d) *   -  BIT7__IY_d__FD4  -  FD, CB, d, 7C
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d) *   -  BIT7__IX_d__DD4  -  DD, CB, d, 7D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d) *   -  BIT7__IY_d__FD4  -  FD, CB, d, 7D
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IX+d) *   -  BIT7__IX_d__DD4  -  DD, CB, d, 7F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// BIT 7, (IY+d) *   -  BIT7__IY_d__FD4  -  FD, CB, d, 7F
// extern void OnClock_BITb__ex_d__ex4_FD();
// extern void OnClock_BITb__ex_d__ex4_MR();

// SET 0, A   -  SET0_A_CB2  -  CB, C7
extern void OnClock_SETb_r_CB2_OF();

// SET 1, A   -  SET1_A_CB2  -  CB, CF
// extern void OnClock_SETb_r_CB2_OF();

// SET 2, A   -  SET2_A_CB2  -  CB, D7
// extern void OnClock_SETb_r_CB2_OF();

// SET 3, A   -  SET3_A_CB2  -  CB, DF
// extern void OnClock_SETb_r_CB2_OF();

// SET 4, A   -  SET4_A_CB2  -  CB, E7
// extern void OnClock_SETb_r_CB2_OF();

// SET 5, A   -  SET5_A_CB2  -  CB, EF
// extern void OnClock_SETb_r_CB2_OF();

// SET 6, A   -  SET6_A_CB2  -  CB, F7
// extern void OnClock_SETb_r_CB2_OF();

// SET 7, A   -  SET7_A_CB2  -  CB, FF
// extern void OnClock_SETb_r_CB2_OF();

// SET 0, B   -  SET0_B_CB2  -  CB, C0
// extern void OnClock_SETb_r_CB2_OF();

// SET 1, B   -  SET1_B_CB2  -  CB, C8
// extern void OnClock_SETb_r_CB2_OF();

// SET 2, B   -  SET2_B_CB2  -  CB, D0
// extern void OnClock_SETb_r_CB2_OF();

// SET 3, B   -  SET3_B_CB2  -  CB, D8
// extern void OnClock_SETb_r_CB2_OF();

// SET 4, B   -  SET4_B_CB2  -  CB, E0
// extern void OnClock_SETb_r_CB2_OF();

// SET 5, B   -  SET5_B_CB2  -  CB, E8
// extern void OnClock_SETb_r_CB2_OF();

// SET 6, B   -  SET6_B_CB2  -  CB, F0
// extern void OnClock_SETb_r_CB2_OF();

// SET 7, B   -  SET7_B_CB2  -  CB, F8
// extern void OnClock_SETb_r_CB2_OF();

// SET 0, C   -  SET0_C_CB2  -  CB, C1
// extern void OnClock_SETb_r_CB2_OF();

// SET 1, C   -  SET1_C_CB2  -  CB, C9
// extern void OnClock_SETb_r_CB2_OF();

// SET 2, C   -  SET2_C_CB2  -  CB, D1
// extern void OnClock_SETb_r_CB2_OF();

// SET 3, C   -  SET3_C_CB2  -  CB, D9
// extern void OnClock_SETb_r_CB2_OF();

// SET 4, C   -  SET4_C_CB2  -  CB, E1
// extern void OnClock_SETb_r_CB2_OF();

// SET 5, C   -  SET5_C_CB2  -  CB, E9
// extern void OnClock_SETb_r_CB2_OF();

// SET 6, C   -  SET6_C_CB2  -  CB, F1
// extern void OnClock_SETb_r_CB2_OF();

// SET 7, C   -  SET7_C_CB2  -  CB, F9
// extern void OnClock_SETb_r_CB2_OF();

// SET 0, D   -  SET0_D_CB2  -  CB, C2
// extern void OnClock_SETb_r_CB2_OF();

// SET 1, D   -  SET1_D_CB2  -  CB, CA
// extern void OnClock_SETb_r_CB2_OF();

// SET 2, D   -  SET2_D_CB2  -  CB, D2
// extern void OnClock_SETb_r_CB2_OF();

// SET 3, D   -  SET3_D_CB2  -  CB, DA
// extern void OnClock_SETb_r_CB2_OF();

// SET 4, D   -  SET4_D_CB2  -  CB, E2
// extern void OnClock_SETb_r_CB2_OF();

// SET 5, D   -  SET5_D_CB2  -  CB, EA
// extern void OnClock_SETb_r_CB2_OF();

// SET 6, D   -  SET6_D_CB2  -  CB, F2
// extern void OnClock_SETb_r_CB2_OF();

// SET 7, D   -  SET7_D_CB2  -  CB, FA
// extern void OnClock_SETb_r_CB2_OF();

// SET 0, E   -  SET0_E_CB2  -  CB, C3
// extern void OnClock_SETb_r_CB2_OF();

// SET 1, E   -  SET1_E_CB2  -  CB, CB
// extern void OnClock_SETb_r_CB2_OF();

// SET 2, E   -  SET2_E_CB2  -  CB, D3
// extern void OnClock_SETb_r_CB2_OF();

// SET 3, E   -  SET3_E_CB2  -  CB, DB
// extern void OnClock_SETb_r_CB2_OF();

// SET 4, E   -  SET4_E_CB2  -  CB, E3
// extern void OnClock_SETb_r_CB2_OF();

// SET 5, E   -  SET5_E_CB2  -  CB, EB
// extern void OnClock_SETb_r_CB2_OF();

// SET 6, E   -  SET6_E_CB2  -  CB, F3
// extern void OnClock_SETb_r_CB2_OF();

// SET 7, E   -  SET7_E_CB2  -  CB, FB
// extern void OnClock_SETb_r_CB2_OF();

// SET 0, H   -  SET0_H_CB2  -  CB, C4
// extern void OnClock_SETb_r_CB2_OF();

// SET 1, H   -  SET1_H_CB2  -  CB, CC
// extern void OnClock_SETb_r_CB2_OF();

// SET 2, H   -  SET2_H_CB2  -  CB, D4
// extern void OnClock_SETb_r_CB2_OF();

// SET 3, H   -  SET3_H_CB2  -  CB, DC
// extern void OnClock_SETb_r_CB2_OF();

// SET 4, H   -  SET4_H_CB2  -  CB, E4
// extern void OnClock_SETb_r_CB2_OF();

// SET 5, H   -  SET5_H_CB2  -  CB, EC
// extern void OnClock_SETb_r_CB2_OF();

// SET 6, H   -  SET6_H_CB2  -  CB, F4
// extern void OnClock_SETb_r_CB2_OF();

// SET 7, H   -  SET7_H_CB2  -  CB, FC
// extern void OnClock_SETb_r_CB2_OF();

// SET 0, L   -  SET0_L_CB2  -  CB, C5
// extern void OnClock_SETb_r_CB2_OF();

// SET 1, L   -  SET1_L_CB2  -  CB, CD
// extern void OnClock_SETb_r_CB2_OF();

// SET 2, L   -  SET2_L_CB2  -  CB, D5
// extern void OnClock_SETb_r_CB2_OF();

// SET 3, L   -  SET3_L_CB2  -  CB, DD
// extern void OnClock_SETb_r_CB2_OF();

// SET 4, L   -  SET4_L_CB2  -  CB, E5
// extern void OnClock_SETb_r_CB2_OF();

// SET 5, L   -  SET5_L_CB2  -  CB, ED
// extern void OnClock_SETb_r_CB2_OF();

// SET 6, L   -  SET6_L_CB2  -  CB, F5
// extern void OnClock_SETb_r_CB2_OF();

// SET 7, L   -  SET7_L_CB2  -  CB, FD
// extern void OnClock_SETb_r_CB2_OF();

// SET 0, (HL)   -  SET0__HL__CB2  -  CB, C6
extern void OnClock_SETb__HL__CB2_OF();
extern void OnClock_SETb__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 1, (HL)   -  SET1__HL__CB2  -  CB, CE
// extern void OnClock_SETb__HL__CB2_OF();
// extern void OnClock_SETb__HL__CB2_MR();
// extern void OnClock_SETb__HL__CB2_MW();

// SET 2, (HL)   -  SET2__HL__CB2  -  CB, D6
// extern void OnClock_SETb__HL__CB2_OF();
// extern void OnClock_SETb__HL__CB2_MR();
// extern void OnClock_SETb__HL__CB2_MW();

// SET 3, (HL)   -  SET3__HL__CB2  -  CB, DE
// extern void OnClock_SETb__HL__CB2_OF();
// extern void OnClock_SETb__HL__CB2_MR();
// extern void OnClock_SETb__HL__CB2_MW();

// SET 4, (HL)   -  SET4__HL__CB2  -  CB, E6
// extern void OnClock_SETb__HL__CB2_OF();
// extern void OnClock_SETb__HL__CB2_MR();
// extern void OnClock_SETb__HL__CB2_MW();

// SET 5, (HL)   -  SET5__HL__CB2  -  CB, EE
// extern void OnClock_SETb__HL__CB2_OF();
// extern void OnClock_SETb__HL__CB2_MR();
// extern void OnClock_SETb__HL__CB2_MW();

// SET 6, (HL)   -  SET6__HL__CB2  -  CB, F6
// extern void OnClock_SETb__HL__CB2_OF();
// extern void OnClock_SETb__HL__CB2_MR();
// extern void OnClock_SETb__HL__CB2_MW();

// SET 7, (HL)   -  SET7__HL__CB2  -  CB, FE
// extern void OnClock_SETb__HL__CB2_OF();
// extern void OnClock_SETb__HL__CB2_MR();
// extern void OnClock_SETb__HL__CB2_MW();

// SET 0, (IX+d)   -  SET0__IX_d__DD4  -  DD, CB, d, C6
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SETb__ex_d__ex4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 0, (IY+d)   -  SET0__IY_d__FD4  -  FD, CB, d, C6
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 1, (IX+d)   -  SET1__IX_d__DD4  -  DD, CB, d, CE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 1, (IY+d)   -  SET1__IY_d__FD4  -  FD, CB, d, CE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 2, (IX+d)   -  SET2__IX_d__DD4  -  DD, CB, d, D6
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 2, (IY+d)   -  SET2__IY_d__FD4  -  FD, CB, d, D6
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 3, (IX+d)   -  SET3__IX_d__DD4  -  DD, CB, d, DE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 3, (IY+d)   -  SET3__IY_d__FD4  -  FD, CB, d, DE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 4, (IX+d)   -  SET4__IX_d__DD4  -  DD, CB, d, E6
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 4, (IY+d)   -  SET4__IY_d__FD4  -  FD, CB, d, E6
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 5, (IX+d)   -  SET5__IX_d__DD4  -  DD, CB, d, EE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 5, (IY+d)   -  SET5__IY_d__FD4  -  FD, CB, d, EE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 6, (IX+d)   -  SET6__IX_d__DD4  -  DD, CB, d, F6
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 6, (IY+d)   -  SET6__IY_d__FD4  -  FD, CB, d, F6
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 7, (IX+d)   -  SET7__IX_d__DD4  -  DD, CB, d, FE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 7, (IY+d)   -  SET7__IY_d__FD4  -  FD, CB, d, FE
// extern void OnClock_SETb__ex_d__ex4_FD();
// extern void OnClock_SETb__ex_d__ex4_MR();
// extern void OnClock_SETb__ex_d__ex4_MW();

// SET 0, (IX+d), A   -  SET0__IX_d__A_DD4  -  DD, CB, d, C7
extern void OnClock_SETb__ex_d__r_ex4_FD();
extern void OnClock_SETb__ex_d__r_ex4_MR();
extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IY+d), A   -  SET0__IY_d__A_FD4  -  FD, CB, d, C7
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IX+d), A   -  SET1__IX_d__A_DD4  -  DD, CB, d, CF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IY+d), A   -  SET1__IY_d__A_FD4  -  FD, CB, d, CF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IX+d), A   -  SET2__IX_d__A_DD4  -  DD, CB, d, D7
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IY+d), A   -  SET2__IY_d__A_FD4  -  FD, CB, d, D7
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IX+d), A   -  SET3__IX_d__A_DD4  -  DD, CB, d, DF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IY+d), A   -  SET3__IY_d__A_FD4  -  FD, CB, d, DF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IX+d), A   -  SET4__IX_d__A_DD4  -  DD, CB, d, E7
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IY+d), A   -  SET4__IY_d__A_FD4  -  FD, CB, d, E7
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IX+d), A   -  SET5__IX_d__A_DD4  -  DD, CB, d, EF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IY+d), A   -  SET5__IY_d__A_FD4  -  FD, CB, d, EF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IX+d), A   -  SET6__IX_d__A_DD4  -  DD, CB, d, F7
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IY+d), A   -  SET6__IY_d__A_FD4  -  FD, CB, d, F7
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IX+d), A   -  SET7__IX_d__A_DD4  -  DD, CB, d, FF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IY+d), A   -  SET7__IY_d__A_FD4  -  FD, CB, d, FF
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IX+d), B   -  SET0__IX_d__B_DD4  -  DD, CB, d, C0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IY+d), B   -  SET0__IY_d__B_FD4  -  FD, CB, d, C0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IX+d), B   -  SET1__IX_d__B_DD4  -  DD, CB, d, C8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IY+d), B   -  SET1__IY_d__B_FD4  -  FD, CB, d, C8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IX+d), B   -  SET2__IX_d__B_DD4  -  DD, CB, d, D0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IY+d), B   -  SET2__IY_d__B_FD4  -  FD, CB, d, D0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IX+d), B   -  SET3__IX_d__B_DD4  -  DD, CB, d, D8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IY+d), B   -  SET3__IY_d__B_FD4  -  FD, CB, d, D8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IX+d), B   -  SET4__IX_d__B_DD4  -  DD, CB, d, E0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IY+d), B   -  SET4__IY_d__B_FD4  -  FD, CB, d, E0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IX+d), B   -  SET5__IX_d__B_DD4  -  DD, CB, d, E8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IY+d), B   -  SET5__IY_d__B_FD4  -  FD, CB, d, E8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IX+d), B   -  SET6__IX_d__B_DD4  -  DD, CB, d, F0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IY+d), B   -  SET6__IY_d__B_FD4  -  FD, CB, d, F0
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IX+d), B   -  SET7__IX_d__B_DD4  -  DD, CB, d, F8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IY+d), B   -  SET7__IY_d__B_FD4  -  FD, CB, d, F8
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IX+d), C   -  SET0__IX_d__C_DD4  -  DD, CB, d, C1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IY+d), C   -  SET0__IY_d__C_FD4  -  FD, CB, d, C1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IX+d), C   -  SET1__IX_d__C_DD4  -  DD, CB, d, C9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IY+d), C   -  SET1__IY_d__C_FD4  -  FD, CB, d, C9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IX+d), C   -  SET2__IX_d__C_DD4  -  DD, CB, d, D1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IY+d), C   -  SET2__IY_d__C_FD4  -  FD, CB, d, D1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IX+d), C   -  SET3__IX_d__C_DD4  -  DD, CB, d, D9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IY+d), C   -  SET3__IY_d__C_FD4  -  FD, CB, d, D9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IX+d), C   -  SET4__IX_d__C_DD4  -  DD, CB, d, E1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IY+d), C   -  SET4__IY_d__C_FD4  -  FD, CB, d, E1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IX+d), C   -  SET5__IX_d__C_DD4  -  DD, CB, d, E9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IY+d), C   -  SET5__IY_d__C_FD4  -  FD, CB, d, E9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IX+d), C   -  SET6__IX_d__C_DD4  -  DD, CB, d, F1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IY+d), C   -  SET6__IY_d__C_FD4  -  FD, CB, d, F1
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IX+d), C   -  SET7__IX_d__C_DD4  -  DD, CB, d, F9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IY+d), C   -  SET7__IY_d__C_FD4  -  FD, CB, d, F9
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IX+d), D   -  SET0__IX_d__D_DD4  -  DD, CB, d, C2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IY+d), D   -  SET0__IY_d__D_FD4  -  FD, CB, d, C2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IX+d), D   -  SET1__IX_d__D_DD4  -  DD, CB, d, CA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IY+d), D   -  SET1__IY_d__D_FD4  -  FD, CB, d, CA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IX+d), D   -  SET2__IX_d__D_DD4  -  DD, CB, d, D2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IY+d), D   -  SET2__IY_d__D_FD4  -  FD, CB, d, D2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IX+d), D   -  SET3__IX_d__D_DD4  -  DD, CB, d, DA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IY+d), D   -  SET3__IY_d__D_FD4  -  FD, CB, d, DA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IX+d), D   -  SET4__IX_d__D_DD4  -  DD, CB, d, E2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IY+d), D   -  SET4__IY_d__D_FD4  -  FD, CB, d, E2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IX+d), D   -  SET5__IX_d__D_DD4  -  DD, CB, d, EA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IY+d), D   -  SET5__IY_d__D_FD4  -  FD, CB, d, EA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IX+d), D   -  SET6__IX_d__D_DD4  -  DD, CB, d, F2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IY+d), D   -  SET6__IY_d__D_FD4  -  FD, CB, d, F2
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IX+d), D   -  SET7__IX_d__D_DD4  -  DD, CB, d, FA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IY+d), D   -  SET7__IY_d__D_FD4  -  FD, CB, d, FA
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IX+d), E   -  SET0__IX_d__E_DD4  -  DD, CB, d, C3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IY+d), E   -  SET0__IY_d__E_FD4  -  FD, CB, d, C3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IX+d), E   -  SET1__IX_d__E_DD4  -  DD, CB, d, CB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IY+d), E   -  SET1__IY_d__E_FD4  -  FD, CB, d, CB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IX+d), E   -  SET2__IX_d__E_DD4  -  DD, CB, d, D3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IY+d), E   -  SET2__IY_d__E_FD4  -  FD, CB, d, D3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IX+d), E   -  SET3__IX_d__E_DD4  -  DD, CB, d, DB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IY+d), E   -  SET3__IY_d__E_FD4  -  FD, CB, d, DB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IX+d), E   -  SET4__IX_d__E_DD4  -  DD, CB, d, E3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IY+d), E   -  SET4__IY_d__E_FD4  -  FD, CB, d, E3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IX+d), E   -  SET5__IX_d__E_DD4  -  DD, CB, d, EB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IY+d), E   -  SET5__IY_d__E_FD4  -  FD, CB, d, EB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IX+d), E   -  SET6__IX_d__E_DD4  -  DD, CB, d, F3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IY+d), E   -  SET6__IY_d__E_FD4  -  FD, CB, d, F3
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IX+d), E   -  SET7__IX_d__E_DD4  -  DD, CB, d, FB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IY+d), E   -  SET7__IY_d__E_FD4  -  FD, CB, d, FB
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IX+d), H   -  SET0__IX_d__H_DD4  -  DD, CB, d, C4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IY+d), H   -  SET0__IY_d__H_FD4  -  FD, CB, d, C4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IX+d), H   -  SET1__IX_d__H_DD4  -  DD, CB, d, CC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IY+d), H   -  SET1__IY_d__H_FD4  -  FD, CB, d, CC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IX+d), H   -  SET2__IX_d__H_DD4  -  DD, CB, d, D4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IY+d), H   -  SET2__IY_d__H_FD4  -  FD, CB, d, D4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IX+d), H   -  SET3__IX_d__H_DD4  -  DD, CB, d, DC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IY+d), H   -  SET3__IY_d__H_FD4  -  FD, CB, d, DC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IX+d), H   -  SET4__IX_d__H_DD4  -  DD, CB, d, E4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IY+d), H   -  SET4__IY_d__H_FD4  -  FD, CB, d, E4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IX+d), H   -  SET5__IX_d__H_DD4  -  DD, CB, d, EC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IY+d), H   -  SET5__IY_d__H_FD4  -  FD, CB, d, EC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IX+d), H   -  SET6__IX_d__H_DD4  -  DD, CB, d, F4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IY+d), H   -  SET6__IY_d__H_FD4  -  FD, CB, d, F4
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IX+d), H   -  SET7__IX_d__H_DD4  -  DD, CB, d, FC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IY+d), H   -  SET7__IY_d__H_FD4  -  FD, CB, d, FC
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IX+d), L   -  SET0__IX_d__L_DD4  -  DD, CB, d, C5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 0, (IY+d), L   -  SET0__IY_d__L_FD4  -  FD, CB, d, C5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IX+d), L   -  SET1__IX_d__L_DD4  -  DD, CB, d, CD
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 1, (IY+d), L   -  SET1__IY_d__L_FD4  -  FD, CB, d, CD
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IX+d), L   -  SET2__IX_d__L_DD4  -  DD, CB, d, D5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 2, (IY+d), L   -  SET2__IY_d__L_FD4  -  FD, CB, d, D5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IX+d), L   -  SET3__IX_d__L_DD4  -  DD, CB, d, DD
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 3, (IY+d), L   -  SET3__IY_d__L_FD4  -  FD, CB, d, DD
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IX+d), L   -  SET4__IX_d__L_DD4  -  DD, CB, d, E5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 4, (IY+d), L   -  SET4__IY_d__L_FD4  -  FD, CB, d, E5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IX+d), L   -  SET5__IX_d__L_DD4  -  DD, CB, d, ED
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 5, (IY+d), L   -  SET5__IY_d__L_FD4  -  FD, CB, d, ED
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IX+d), L   -  SET6__IX_d__L_DD4  -  DD, CB, d, F5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 6, (IY+d), L   -  SET6__IY_d__L_FD4  -  FD, CB, d, F5
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IX+d), L   -  SET7__IX_d__L_DD4  -  DD, CB, d, FD
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// SET 7, (IY+d), L   -  SET7__IY_d__L_FD4  -  FD, CB, d, FD
// extern void OnClock_SETb__ex_d__r_ex4_FD();
// extern void OnClock_SETb__ex_d__r_ex4_MR();
// extern void OnClock_SETb__ex_d__r_ex4_MW();

// RES 0, A   -  RES0_A_CB2  -  CB, 87
extern void OnClock_RESb_r_CB2_OF();

// RES 1, A   -  RES1_A_CB2  -  CB, 8F
// extern void OnClock_RESb_r_CB2_OF();

// RES 2, A   -  RES2_A_CB2  -  CB, 97
// extern void OnClock_RESb_r_CB2_OF();

// RES 3, A   -  RES3_A_CB2  -  CB, 9F
// extern void OnClock_RESb_r_CB2_OF();

// RES 4, A   -  RES4_A_CB2  -  CB, A7
// extern void OnClock_RESb_r_CB2_OF();

// RES 5, A   -  RES5_A_CB2  -  CB, AF
// extern void OnClock_RESb_r_CB2_OF();

// RES 6, A   -  RES6_A_CB2  -  CB, B7
// extern void OnClock_RESb_r_CB2_OF();

// RES 7, A   -  RES7_A_CB2  -  CB, BF
// extern void OnClock_RESb_r_CB2_OF();

// RES 0, B   -  RES0_B_CB2  -  CB, 80
// extern void OnClock_RESb_r_CB2_OF();

// RES 1, B   -  RES1_B_CB2  -  CB, 88
// extern void OnClock_RESb_r_CB2_OF();

// RES 2, B   -  RES2_B_CB2  -  CB, 90
// extern void OnClock_RESb_r_CB2_OF();

// RES 3, B   -  RES3_B_CB2  -  CB, 98
// extern void OnClock_RESb_r_CB2_OF();

// RES 4, B   -  RES4_B_CB2  -  CB, A0
// extern void OnClock_RESb_r_CB2_OF();

// RES 5, B   -  RES5_B_CB2  -  CB, A8
// extern void OnClock_RESb_r_CB2_OF();

// RES 6, B   -  RES6_B_CB2  -  CB, B0
// extern void OnClock_RESb_r_CB2_OF();

// RES 7, B   -  RES7_B_CB2  -  CB, B8
// extern void OnClock_RESb_r_CB2_OF();

// RES 0, C   -  RES0_C_CB2  -  CB, 81
// extern void OnClock_RESb_r_CB2_OF();

// RES 1, C   -  RES1_C_CB2  -  CB, 89
// extern void OnClock_RESb_r_CB2_OF();

// RES 2, C   -  RES2_C_CB2  -  CB, 91
// extern void OnClock_RESb_r_CB2_OF();

// RES 3, C   -  RES3_C_CB2  -  CB, 99
// extern void OnClock_RESb_r_CB2_OF();

// RES 4, C   -  RES4_C_CB2  -  CB, A1
// extern void OnClock_RESb_r_CB2_OF();

// RES 5, C   -  RES5_C_CB2  -  CB, A9
// extern void OnClock_RESb_r_CB2_OF();

// RES 6, C   -  RES6_C_CB2  -  CB, B1
// extern void OnClock_RESb_r_CB2_OF();

// RES 7, C   -  RES7_C_CB2  -  CB, B9
// extern void OnClock_RESb_r_CB2_OF();

// RES 0, D   -  RES0_D_CB2  -  CB, 82
// extern void OnClock_RESb_r_CB2_OF();

// RES 1, D   -  RES1_D_CB2  -  CB, 8A
// extern void OnClock_RESb_r_CB2_OF();

// RES 2, D   -  RES2_D_CB2  -  CB, 92
// extern void OnClock_RESb_r_CB2_OF();

// RES 3, D   -  RES3_D_CB2  -  CB, 9A
// extern void OnClock_RESb_r_CB2_OF();

// RES 4, D   -  RES4_D_CB2  -  CB, A2
// extern void OnClock_RESb_r_CB2_OF();

// RES 5, D   -  RES5_D_CB2  -  CB, AA
// extern void OnClock_RESb_r_CB2_OF();

// RES 6, D   -  RES6_D_CB2  -  CB, B2
// extern void OnClock_RESb_r_CB2_OF();

// RES 7, D   -  RES7_D_CB2  -  CB, BA
// extern void OnClock_RESb_r_CB2_OF();

// RES 0, E   -  RES0_E_CB2  -  CB, 83
// extern void OnClock_RESb_r_CB2_OF();

// RES 1, E   -  RES1_E_CB2  -  CB, 8B
// extern void OnClock_RESb_r_CB2_OF();

// RES 2, E   -  RES2_E_CB2  -  CB, 93
// extern void OnClock_RESb_r_CB2_OF();

// RES 3, E   -  RES3_E_CB2  -  CB, 9B
// extern void OnClock_RESb_r_CB2_OF();

// RES 4, E   -  RES4_E_CB2  -  CB, A3
// extern void OnClock_RESb_r_CB2_OF();

// RES 5, E   -  RES5_E_CB2  -  CB, AB
// extern void OnClock_RESb_r_CB2_OF();

// RES 6, E   -  RES6_E_CB2  -  CB, B3
// extern void OnClock_RESb_r_CB2_OF();

// RES 7, E   -  RES7_E_CB2  -  CB, BB
// extern void OnClock_RESb_r_CB2_OF();

// RES 0, H   -  RES0_H_CB2  -  CB, 84
// extern void OnClock_RESb_r_CB2_OF();

// RES 1, H   -  RES1_H_CB2  -  CB, 8C
// extern void OnClock_RESb_r_CB2_OF();

// RES 2, H   -  RES2_H_CB2  -  CB, 94
// extern void OnClock_RESb_r_CB2_OF();

// RES 3, H   -  RES3_H_CB2  -  CB, 9C
// extern void OnClock_RESb_r_CB2_OF();

// RES 4, H   -  RES4_H_CB2  -  CB, A4
// extern void OnClock_RESb_r_CB2_OF();

// RES 5, H   -  RES5_H_CB2  -  CB, AC
// extern void OnClock_RESb_r_CB2_OF();

// RES 6, H   -  RES6_H_CB2  -  CB, B4
// extern void OnClock_RESb_r_CB2_OF();

// RES 7, H   -  RES7_H_CB2  -  CB, BC
// extern void OnClock_RESb_r_CB2_OF();

// RES 0, L   -  RES0_L_CB2  -  CB, 85
// extern void OnClock_RESb_r_CB2_OF();

// RES 1, L   -  RES1_L_CB2  -  CB, 8D
// extern void OnClock_RESb_r_CB2_OF();

// RES 2, L   -  RES2_L_CB2  -  CB, 95
// extern void OnClock_RESb_r_CB2_OF();

// RES 3, L   -  RES3_L_CB2  -  CB, 9D
// extern void OnClock_RESb_r_CB2_OF();

// RES 4, L   -  RES4_L_CB2  -  CB, A5
// extern void OnClock_RESb_r_CB2_OF();

// RES 5, L   -  RES5_L_CB2  -  CB, AD
// extern void OnClock_RESb_r_CB2_OF();

// RES 6, L   -  RES6_L_CB2  -  CB, B5
// extern void OnClock_RESb_r_CB2_OF();

// RES 7, L   -  RES7_L_CB2  -  CB, BD
// extern void OnClock_RESb_r_CB2_OF();

// RES 0, (HL)   -  RES0__HL__CB2  -  CB, 86
extern void OnClock_RESb__HL__CB2_OF();
extern void OnClock_RESb__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 1, (HL)   -  RES1__HL__CB2  -  CB, 8E
// extern void OnClock_RESb__HL__CB2_OF();
// extern void OnClock_RESb__HL__CB2_MR();
// extern void OnClock_RESb__HL__CB2_MW();

// RES 2, (HL)   -  RES2__HL__CB2  -  CB, 96
// extern void OnClock_RESb__HL__CB2_OF();
// extern void OnClock_RESb__HL__CB2_MR();
// extern void OnClock_RESb__HL__CB2_MW();

// RES 3, (HL)   -  RES3__HL__CB2  -  CB, 9E
// extern void OnClock_RESb__HL__CB2_OF();
// extern void OnClock_RESb__HL__CB2_MR();
// extern void OnClock_RESb__HL__CB2_MW();

// RES 4, (HL)   -  RES4__HL__CB2  -  CB, A6
// extern void OnClock_RESb__HL__CB2_OF();
// extern void OnClock_RESb__HL__CB2_MR();
// extern void OnClock_RESb__HL__CB2_MW();

// RES 5, (HL)   -  RES5__HL__CB2  -  CB, AE
// extern void OnClock_RESb__HL__CB2_OF();
// extern void OnClock_RESb__HL__CB2_MR();
// extern void OnClock_RESb__HL__CB2_MW();

// RES 6, (HL)   -  RES6__HL__CB2  -  CB, B6
// extern void OnClock_RESb__HL__CB2_OF();
// extern void OnClock_RESb__HL__CB2_MR();
// extern void OnClock_RESb__HL__CB2_MW();

// RES 7, (HL)   -  RES7__HL__CB2  -  CB, BE
// extern void OnClock_RESb__HL__CB2_OF();
// extern void OnClock_RESb__HL__CB2_MR();
// extern void OnClock_RESb__HL__CB2_MW();

// RES 0, (IX+d)   -  RES0__IX_d__DD4  -  DD, CB, d, 86
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RESb__ex_d__ex4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 0, (IY+d)   -  RES0__IY_d__FD4  -  FD, CB, d, 86
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 1, (IX+d)   -  RES1__IX_d__DD4  -  DD, CB, d, 8E
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 1, (IY+d)   -  RES1__IY_d__FD4  -  FD, CB, d, 8E
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 2, (IX+d)   -  RES2__IX_d__DD4  -  DD, CB, d, 96
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 2, (IY+d)   -  RES2__IY_d__FD4  -  FD, CB, d, 96
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 3, (IX+d)   -  RES3__IX_d__DD4  -  DD, CB, d, 9E
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 3, (IY+d)   -  RES3__IY_d__FD4  -  FD, CB, d, 9E
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 4, (IX+d)   -  RES4__IX_d__DD4  -  DD, CB, d, A6
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 4, (IY+d)   -  RES4__IY_d__FD4  -  FD, CB, d, A6
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 5, (IX+d)   -  RES5__IX_d__DD4  -  DD, CB, d, AE
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 5, (IY+d)   -  RES5__IY_d__FD4  -  FD, CB, d, AE
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 6, (IX+d)   -  RES6__IX_d__DD4  -  DD, CB, d, B6
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 6, (IY+d)   -  RES6__IY_d__FD4  -  FD, CB, d, B6
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 7, (IX+d)   -  RES7__IX_d__DD4  -  DD, CB, d, BE
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 7, (IY+d)   -  RES7__IY_d__FD4  -  FD, CB, d, BE
// extern void OnClock_RESb__ex_d__ex4_FD();
// extern void OnClock_RESb__ex_d__ex4_MR();
// extern void OnClock_RESb__ex_d__ex4_MW();

// RES 0, (IX+d), A   -  RES0__IX_d__A_DD4  -  DD, CB, d, 87
extern void OnClock_RESb__ex_d__r_ex4_FD();
extern void OnClock_RESb__ex_d__r_ex4_MR();
extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IY+d), A   -  RES0__IY_d__A_FD4  -  FD, CB, d, 87
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IX+d), A   -  RES1__IX_d__A_DD4  -  DD, CB, d, 8F
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IY+d), A   -  RES1__IY_d__A_FD4  -  FD, CB, d, 8F
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IX+d), A   -  RES2__IX_d__A_DD4  -  DD, CB, d, 97
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IY+d), A   -  RES2__IY_d__A_FD4  -  FD, CB, d, 97
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IX+d), A   -  RES3__IX_d__A_DD4  -  DD, CB, d, 9F
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IY+d), A   -  RES3__IY_d__A_FD4  -  FD, CB, d, 9F
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IX+d), A   -  RES4__IX_d__A_DD4  -  DD, CB, d, A7
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IY+d), A   -  RES4__IY_d__A_FD4  -  FD, CB, d, A7
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IX+d), A   -  RES5__IX_d__A_DD4  -  DD, CB, d, AF
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IY+d), A   -  RES5__IY_d__A_FD4  -  FD, CB, d, AF
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IX+d), A   -  RES6__IX_d__A_DD4  -  DD, CB, d, B7
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IY+d), A   -  RES6__IY_d__A_FD4  -  FD, CB, d, B7
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IX+d), A   -  RES7__IX_d__A_DD4  -  DD, CB, d, BF
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IY+d), A   -  RES7__IY_d__A_FD4  -  FD, CB, d, BF
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IX+d), B   -  RES0__IX_d__B_DD4  -  DD, CB, d, 80
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IY+d), B   -  RES0__IY_d__B_FD4  -  FD, CB, d, 80
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IX+d), B   -  RES1__IX_d__B_DD4  -  DD, CB, d, 88
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IY+d), B   -  RES1__IY_d__B_FD4  -  FD, CB, d, 88
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IX+d), B   -  RES2__IX_d__B_DD4  -  DD, CB, d, 90
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IY+d), B   -  RES2__IY_d__B_FD4  -  FD, CB, d, 90
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IX+d), B   -  RES3__IX_d__B_DD4  -  DD, CB, d, 98
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IY+d), B   -  RES3__IY_d__B_FD4  -  FD, CB, d, 98
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IX+d), B   -  RES4__IX_d__B_DD4  -  DD, CB, d, A0
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IY+d), B   -  RES4__IY_d__B_FD4  -  FD, CB, d, A0
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IX+d), B   -  RES5__IX_d__B_DD4  -  DD, CB, d, A8
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IY+d), B   -  RES5__IY_d__B_FD4  -  FD, CB, d, A8
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IX+d), B   -  RES6__IX_d__B_DD4  -  DD, CB, d, B0
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IY+d), B   -  RES6__IY_d__B_FD4  -  FD, CB, d, B0
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IX+d), B   -  RES7__IX_d__B_DD4  -  DD, CB, d, B8
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IY+d), B   -  RES7__IY_d__B_FD4  -  FD, CB, d, B8
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IX+d), C   -  RES0__IX_d__C_DD4  -  DD, CB, d, 81
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IY+d), C   -  RES0__IY_d__C_FD4  -  FD, CB, d, 81
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IX+d), C   -  RES1__IX_d__C_DD4  -  DD, CB, d, 89
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IY+d), C   -  RES1__IY_d__C_FD4  -  FD, CB, d, 89
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IX+d), C   -  RES2__IX_d__C_DD4  -  DD, CB, d, 91
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IY+d), C   -  RES2__IY_d__C_FD4  -  FD, CB, d, 91
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IX+d), C   -  RES3__IX_d__C_DD4  -  DD, CB, d, 99
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IY+d), C   -  RES3__IY_d__C_FD4  -  FD, CB, d, 99
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IX+d), C   -  RES4__IX_d__C_DD4  -  DD, CB, d, A1
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IY+d), C   -  RES4__IY_d__C_FD4  -  FD, CB, d, A1
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IX+d), C   -  RES5__IX_d__C_DD4  -  DD, CB, d, A9
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IY+d), C   -  RES5__IY_d__C_FD4  -  FD, CB, d, A9
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IX+d), C   -  RES6__IX_d__C_DD4  -  DD, CB, d, B1
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IY+d), C   -  RES6__IY_d__C_FD4  -  FD, CB, d, B1
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IX+d), C   -  RES7__IX_d__C_DD4  -  DD, CB, d, B9
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IY+d), C   -  RES7__IY_d__C_FD4  -  FD, CB, d, B9
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IX+d), D   -  RES0__IX_d__D_DD4  -  DD, CB, d, 82
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IY+d), D   -  RES0__IY_d__D_FD4  -  FD, CB, d, 82
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IX+d), D   -  RES1__IX_d__D_DD4  -  DD, CB, d, 8A
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IY+d), D   -  RES1__IY_d__D_FD4  -  FD, CB, d, 8A
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IX+d), D   -  RES2__IX_d__D_DD4  -  DD, CB, d, 92
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IY+d), D   -  RES2__IY_d__D_FD4  -  FD, CB, d, 92
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IX+d), D   -  RES3__IX_d__D_DD4  -  DD, CB, d, 9A
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IY+d), D   -  RES3__IY_d__D_FD4  -  FD, CB, d, 9A
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IX+d), D   -  RES4__IX_d__D_DD4  -  DD, CB, d, A2
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IY+d), D   -  RES4__IY_d__D_FD4  -  FD, CB, d, A2
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IX+d), D   -  RES5__IX_d__D_DD4  -  DD, CB, d, AA
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IY+d), D   -  RES5__IY_d__D_FD4  -  FD, CB, d, AA
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IX+d), D   -  RES6__IX_d__D_DD4  -  DD, CB, d, B2
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IY+d), D   -  RES6__IY_d__D_FD4  -  FD, CB, d, B2
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IX+d), D   -  RES7__IX_d__D_DD4  -  DD, CB, d, BA
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IY+d), D   -  RES7__IY_d__D_FD4  -  FD, CB, d, BA
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IX+d), E   -  RES0__IX_d__E_DD4  -  DD, CB, d, 83
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IY+d), E   -  RES0__IY_d__E_FD4  -  FD, CB, d, 83
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IX+d), E   -  RES1__IX_d__E_DD4  -  DD, CB, d, 8B
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IY+d), E   -  RES1__IY_d__E_FD4  -  FD, CB, d, 8B
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IX+d), E   -  RES2__IX_d__E_DD4  -  DD, CB, d, 93
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IY+d), E   -  RES2__IY_d__E_FD4  -  FD, CB, d, 93
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IX+d), E   -  RES3__IX_d__E_DD4  -  DD, CB, d, 9B
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IY+d), E   -  RES3__IY_d__E_FD4  -  FD, CB, d, 9B
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IX+d), E   -  RES4__IX_d__E_DD4  -  DD, CB, d, A3
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IY+d), E   -  RES4__IY_d__E_FD4  -  FD, CB, d, A3
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IX+d), E   -  RES5__IX_d__E_DD4  -  DD, CB, d, AB
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IY+d), E   -  RES5__IY_d__E_FD4  -  FD, CB, d, AB
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IX+d), E   -  RES6__IX_d__E_DD4  -  DD, CB, d, B3
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IY+d), E   -  RES6__IY_d__E_FD4  -  FD, CB, d, B3
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IX+d), E   -  RES7__IX_d__E_DD4  -  DD, CB, d, BB
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IY+d), E   -  RES7__IY_d__E_FD4  -  FD, CB, d, BB
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IX+d), H   -  RES0__IX_d__H_DD4  -  DD, CB, d, 84
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IY+d), H   -  RES0__IY_d__H_FD4  -  FD, CB, d, 84
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IX+d), H   -  RES1__IX_d__H_DD4  -  DD, CB, d, 8C
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IY+d), H   -  RES1__IY_d__H_FD4  -  FD, CB, d, 8C
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IX+d), H   -  RES2__IX_d__H_DD4  -  DD, CB, d, 94
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IY+d), H   -  RES2__IY_d__H_FD4  -  FD, CB, d, 94
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IX+d), H   -  RES3__IX_d__H_DD4  -  DD, CB, d, 9C
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IY+d), H   -  RES3__IY_d__H_FD4  -  FD, CB, d, 9C
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IX+d), H   -  RES4__IX_d__H_DD4  -  DD, CB, d, A4
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IY+d), H   -  RES4__IY_d__H_FD4  -  FD, CB, d, A4
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IX+d), H   -  RES5__IX_d__H_DD4  -  DD, CB, d, AC
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IY+d), H   -  RES5__IY_d__H_FD4  -  FD, CB, d, AC
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IX+d), H   -  RES6__IX_d__H_DD4  -  DD, CB, d, B4
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IY+d), H   -  RES6__IY_d__H_FD4  -  FD, CB, d, B4
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IX+d), H   -  RES7__IX_d__H_DD4  -  DD, CB, d, BC
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IY+d), H   -  RES7__IY_d__H_FD4  -  FD, CB, d, BC
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IX+d), L   -  RES0__IX_d__L_DD4  -  DD, CB, d, 85
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 0, (IY+d), L   -  RES0__IY_d__L_FD4  -  FD, CB, d, 85
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IX+d), L   -  RES1__IX_d__L_DD4  -  DD, CB, d, 8D
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 1, (IY+d), L   -  RES1__IY_d__L_FD4  -  FD, CB, d, 8D
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IX+d), L   -  RES2__IX_d__L_DD4  -  DD, CB, d, 95
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 2, (IY+d), L   -  RES2__IY_d__L_FD4  -  FD, CB, d, 95
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IX+d), L   -  RES3__IX_d__L_DD4  -  DD, CB, d, 9D
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 3, (IY+d), L   -  RES3__IY_d__L_FD4  -  FD, CB, d, 9D
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IX+d), L   -  RES4__IX_d__L_DD4  -  DD, CB, d, A5
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 4, (IY+d), L   -  RES4__IY_d__L_FD4  -  FD, CB, d, A5
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IX+d), L   -  RES5__IX_d__L_DD4  -  DD, CB, d, AD
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 5, (IY+d), L   -  RES5__IY_d__L_FD4  -  FD, CB, d, AD
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IX+d), L   -  RES6__IX_d__L_DD4  -  DD, CB, d, B5
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 6, (IY+d), L   -  RES6__IY_d__L_FD4  -  FD, CB, d, B5
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IX+d), L   -  RES7__IX_d__L_DD4  -  DD, CB, d, BD
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// RES 7, (IY+d), L   -  RES7__IY_d__L_FD4  -  FD, CB, d, BD
// extern void OnClock_RESb__ex_d__r_ex4_FD();
// extern void OnClock_RESb__ex_d__r_ex4_MR();
// extern void OnClock_RESb__ex_d__r_ex4_MW();

// JP nn   -  JPnn_3  -  C3, n, n
extern void OnClock_JPnn_3_OF();
extern void OnClock_JPnn_3_ODl();
extern void OnClock_JPnn_3_ODh();

// JP NZ, nn   -  JPNZ_nn_3  -  C2, n, n
extern void OnClock_JPc_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP Z, nn   -  JPZ_nn_3  -  CA, n, n
// extern void OnClock_JPc_nn_3_OF();
// extern void OnClock_JPc_nn_3_ODl();
// extern void OnClock_JPc_nn_3_ODh();

// JP NC, nn   -  JPNC_nn_3  -  D2, n, n
// extern void OnClock_JPc_nn_3_OF();
// extern void OnClock_JPc_nn_3_ODl();
// extern void OnClock_JPc_nn_3_ODh();

// JP C, nn   -  JPC_nn_3  -  DA, n, n
// extern void OnClock_JPc_nn_3_OF();
// extern void OnClock_JPc_nn_3_ODl();
// extern void OnClock_JPc_nn_3_ODh();

// JP PO, nn   -  JPPO_nn_3  -  E2, n, n
// extern void OnClock_JPc_nn_3_OF();
// extern void OnClock_JPc_nn_3_ODl();
// extern void OnClock_JPc_nn_3_ODh();

// JP PE, nn   -  JPPE_nn_3  -  EA, n, n
// extern void OnClock_JPc_nn_3_OF();
// extern void OnClock_JPc_nn_3_ODl();
// extern void OnClock_JPc_nn_3_ODh();

// JP P, nn   -  JPP_nn_3  -  F2, n, n
// extern void OnClock_JPc_nn_3_OF();
// extern void OnClock_JPc_nn_3_ODl();
// extern void OnClock_JPc_nn_3_ODh();

// JP M, nn   -  JPM_nn_3  -  FA, n, n
// extern void OnClock_JPc_nn_3_OF();
// extern void OnClock_JPc_nn_3_ODl();
// extern void OnClock_JPc_nn_3_ODh();

// JR e   -  JRe_2  -  18, e
extern void OnClock_JRe_2_OF();
extern void OnClock_JRe_2_OD();
extern void OnClock_JRe_2_OP();

// JR NZ, e   -  JRNZ_e_2  -  20, e
extern void OnClock_JRj_e_2_OF();
extern void OnClock_JRj_e_2_OD();
extern void OnClock_JRj_e_2_OP();

// JR Z, e   -  JRZ_e_2  -  28, e
// extern void OnClock_JRj_e_2_OF();
// extern void OnClock_JRj_e_2_OD();
// extern void OnClock_JRj_e_2_OP();

// JR NC, e   -  JRNC_e_2  -  30, e
// extern void OnClock_JRj_e_2_OF();
// extern void OnClock_JRj_e_2_OD();
// extern void OnClock_JRj_e_2_OP();

// JR C, e   -  JRC_e_2  -  38, e
// extern void OnClock_JRj_e_2_OF();
// extern void OnClock_JRj_e_2_OD();
// extern void OnClock_JRj_e_2_OP();

// JP HL   -  JPHL_1  -  E9
extern void OnClock_JPHL_1_OF();

// JP IX   -  JPIX_DD2  -  DD, E9
extern void OnClock_JPex_ex2_OF();

// JP IY   -  JPIY_FD2  -  FD, E9
// extern void OnClock_JPex_ex2_OF();

// DJNZ e   -  DJNZe_2  -  10, e
extern void OnClock_DJNZe_2_OF();
extern void OnClock_DJNZe_2_OD();
extern void OnClock_DJNZe_2_OP();

// CALL nn   -  CALLnn_3  -  CD, n, n
extern void OnClock_CALLnn_3_OF();
extern void OnClock_CALLnn_3_ODl();
extern void OnClock_CALLnn_3_ODh();
extern void OnClock_CALLnn_3_SWh();
extern void OnClock_CALLnn_3_SWl();

// CALL NZ, nn   -  CALLNZ_nn_3  -  C4, n, n
extern void OnClock_CALLc_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLc_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL Z, nn   -  CALLZ_nn_3  -  CC, n, n
// extern void OnClock_CALLc_nn_3_OF();
// extern void OnClock_CALLc_nn_3_ODl();
// extern void OnClock_CALLc_nn_3_ODh();
// extern void OnClock_CALLc_nn_3_SWh();
// extern void OnClock_CALLc_nn_3_SWl();

// CALL NC, nn   -  CALLNC_nn_3  -  D4, n, n
// extern void OnClock_CALLc_nn_3_OF();
// extern void OnClock_CALLc_nn_3_ODl();
// extern void OnClock_CALLc_nn_3_ODh();
// extern void OnClock_CALLc_nn_3_SWh();
// extern void OnClock_CALLc_nn_3_SWl();

// CALL C, nn   -  CALLC_nn_3  -  DC, n, n
// extern void OnClock_CALLc_nn_3_OF();
// extern void OnClock_CALLc_nn_3_ODl();
// extern void OnClock_CALLc_nn_3_ODh();
// extern void OnClock_CALLc_nn_3_SWh();
// extern void OnClock_CALLc_nn_3_SWl();

// CALL PO, nn   -  CALLPO_nn_3  -  E4, n, n
// extern void OnClock_CALLc_nn_3_OF();
// extern void OnClock_CALLc_nn_3_ODl();
// extern void OnClock_CALLc_nn_3_ODh();
// extern void OnClock_CALLc_nn_3_SWh();
// extern void OnClock_CALLc_nn_3_SWl();

// CALL PE, nn   -  CALLPE_nn_3  -  EC, n, n
// extern void OnClock_CALLc_nn_3_OF();
// extern void OnClock_CALLc_nn_3_ODl();
// extern void OnClock_CALLc_nn_3_ODh();
// extern void OnClock_CALLc_nn_3_SWh();
// extern void OnClock_CALLc_nn_3_SWl();

// CALL P, nn   -  CALLP_nn_3  -  F4, n, n
// extern void OnClock_CALLc_nn_3_OF();
// extern void OnClock_CALLc_nn_3_ODl();
// extern void OnClock_CALLc_nn_3_ODh();
// extern void OnClock_CALLc_nn_3_SWh();
// extern void OnClock_CALLc_nn_3_SWl();

// CALL M, nn   -  CALLM_nn_3  -  FC, n, n
// extern void OnClock_CALLc_nn_3_OF();
// extern void OnClock_CALLc_nn_3_ODl();
// extern void OnClock_CALLc_nn_3_ODh();
// extern void OnClock_CALLc_nn_3_SWh();
// extern void OnClock_CALLc_nn_3_SWl();

// RET   -  RET_1  -  C9
extern void OnClock_RET_1_OF();

// RET NZ   -  RETNZ_1  -  C0
extern void OnClock_RETc_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET Z   -  RETZ_1  -  C8
// extern void OnClock_RETc_1_OF();
// extern void OnClock_RETc_1_SRh();
// extern void OnClock_RETc_1_SRl();

// RET NC   -  RETNC_1  -  D0
// extern void OnClock_RETc_1_OF();
// extern void OnClock_RETc_1_SRh();
// extern void OnClock_RETc_1_SRl();

// RET C   -  RETC_1  -  D8
// extern void OnClock_RETc_1_OF();
// extern void OnClock_RETc_1_SRh();
// extern void OnClock_RETc_1_SRl();

// RET PO   -  RETPO_1  -  E0
// extern void OnClock_RETc_1_OF();
// extern void OnClock_RETc_1_SRh();
// extern void OnClock_RETc_1_SRl();

// RET PE   -  RETPE_1  -  E8
// extern void OnClock_RETc_1_OF();
// extern void OnClock_RETc_1_SRh();
// extern void OnClock_RETc_1_SRl();

// RET P   -  RETP_1  -  F0
// extern void OnClock_RETc_1_OF();
// extern void OnClock_RETc_1_SRh();
// extern void OnClock_RETc_1_SRl();

// RET M   -  RETM_1  -  F8
// extern void OnClock_RETc_1_OF();
// extern void OnClock_RETc_1_SRh();
// extern void OnClock_RETc_1_SRl();

// RETI   -  RETI_ED2  -  ED, 4D
extern void OnClock_RETI_ED2_OF();

// RETN   -  RETN_ED2  -  ED, 45
extern void OnClock_RETN_ED2_OF();

// RETN *   -  RETN_ED2  -  ED, 55
// extern void OnClock_RETN_ED2_OF();
extern void OnClock_RETN_ED2_SRh();
extern void OnClock_RETN_ED2_SRl();

// RETN *   -  RETN_ED2  -  ED, 5D
// extern void OnClock_RETN_ED2_OF();
// extern void OnClock_RETN_ED2_SRh();
// extern void OnClock_RETN_ED2_SRl();

// RETN *   -  RETN_ED2  -  ED, 65
// extern void OnClock_RETN_ED2_OF();
// extern void OnClock_RETN_ED2_SRh();
// extern void OnClock_RETN_ED2_SRl();

// RETN *   -  RETN_ED2  -  ED, 6D
// extern void OnClock_RETN_ED2_OF();
// extern void OnClock_RETN_ED2_SRh();
// extern void OnClock_RETN_ED2_SRl();

// RETN *   -  RETN_ED2  -  ED, 75
// extern void OnClock_RETN_ED2_OF();
// extern void OnClock_RETN_ED2_SRh();
// extern void OnClock_RETN_ED2_SRl();

// RETN *   -  RETN_ED2  -  ED, 7D
// extern void OnClock_RETN_ED2_OF();
// extern void OnClock_RETN_ED2_SRh();
// extern void OnClock_RETN_ED2_SRl();

// RST 00   -  RST00_1  -  C7
extern void OnClock_RSTi_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 08   -  RST08_1  -  CF
// extern void OnClock_RSTi_1_OF();
// extern void OnClock_RSTi_1_SWh();
// extern void OnClock_RSTi_1_SWl();

// RST 10   -  RST10_1  -  D7
// extern void OnClock_RSTi_1_OF();
// extern void OnClock_RSTi_1_SWh();
// extern void OnClock_RSTi_1_SWl();

// RST 18   -  RST18_1  -  DF
// extern void OnClock_RSTi_1_OF();
// extern void OnClock_RSTi_1_SWh();
// extern void OnClock_RSTi_1_SWl();

// RST 20   -  RST20_1  -  E7
// extern void OnClock_RSTi_1_OF();
// extern void OnClock_RSTi_1_SWh();
// extern void OnClock_RSTi_1_SWl();

// RST 28   -  RST28_1  -  EF
// extern void OnClock_RSTi_1_OF();
// extern void OnClock_RSTi_1_SWh();
// extern void OnClock_RSTi_1_SWl();

// RST 30   -  RST30_1  -  F7
// extern void OnClock_RSTi_1_OF();
// extern void OnClock_RSTi_1_SWh();
// extern void OnClock_RSTi_1_SWl();

// RST 38   -  RST38_1  -  FF
// extern void OnClock_RSTi_1_OF();
// extern void OnClock_RSTi_1_SWh();
// extern void OnClock_RSTi_1_SWl();

// IN A, (n)   -  INA__n__2  -  DB, n
extern void OnClock_INA__n__2_OF();
extern void OnClock_INA__n__2_OD();
extern void OnClock_INA__n__2_PR();

// IN A, (C)   -  INA__C__ED2  -  ED, 78
extern void OnClock_INr__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

// IN B, (C)   -  INB__C__ED2  -  ED, 40
// extern void OnClock_INr__C__ED2_OF();
// extern void OnClock_INr__C__ED2_PR();

// IN C, (C)   -  INC__C__ED2  -  ED, 48
// extern void OnClock_INr__C__ED2_OF();
// extern void OnClock_INr__C__ED2_PR();

// IN D, (C)   -  IND__C__ED2  -  ED, 50
// extern void OnClock_INr__C__ED2_OF();
// extern void OnClock_INr__C__ED2_PR();

// IN E, (C)   -  INE__C__ED2  -  ED, 58
// extern void OnClock_INr__C__ED2_OF();
// extern void OnClock_INr__C__ED2_PR();

// IN H, (C)   -  INH__C__ED2  -  ED, 60
// extern void OnClock_INr__C__ED2_OF();
// extern void OnClock_INr__C__ED2_PR();

// IN L, (C)   -  INL__C__ED2  -  ED, 68
// extern void OnClock_INr__C__ED2_OF();
// extern void OnClock_INr__C__ED2_PR();

// IN (C)   -  IN_C__ED2  -  ED, 70
extern void OnClock_IN_C__ED2_OF();

// INI   -  INI_ED2  -  ED, A2
extern void OnClock_INI_ED2_OF();
extern void OnClock_INI_ED2_MW();

// INIR   -  INIR_ED2  -  ED, B2
extern void OnClock_INIR_ED2_OF();
extern void OnClock_INIR_ED2_MW();

// IND   -  IND_ED2  -  ED, AA
extern void OnClock_IND_ED2_OF();
extern void OnClock_IND_ED2_MW();

// INDR   -  INDR_ED2  -  ED, BA
extern void OnClock_INDR_ED2_OF();
extern void OnClock_INDR_ED2_MW();

// OUT (n), A   -  OUT_n__A_2  -  D3, n
extern void OnClock_OUT_n__A_2_OF();
extern void OnClock_OUT_n__A_2_OD();
extern void OnClock_OUT_n__A_2_PW();

// OUT (C), A   -  OUT_C__A_ED2  -  ED, 79
extern void OnClock_OUT_C__r_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), B   -  OUT_C__B_ED2  -  ED, 41
// extern void OnClock_OUT_C__r_ED2_OF();
// extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), C   -  OUT_C__C_ED2  -  ED, 49
// extern void OnClock_OUT_C__r_ED2_OF();
// extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), D   -  OUT_C__D_ED2  -  ED, 51
// extern void OnClock_OUT_C__r_ED2_OF();
// extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), E   -  OUT_C__E_ED2  -  ED, 59
// extern void OnClock_OUT_C__r_ED2_OF();
// extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), H   -  OUT_C__H_ED2  -  ED, 61
// extern void OnClock_OUT_C__r_ED2_OF();
// extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), L   -  OUT_C__L_ED2  -  ED, 69
// extern void OnClock_OUT_C__r_ED2_OF();
// extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), 0   -  OUT_C__0_ED2  -  ED, 71
extern void OnClock_OUT_C__0_ED2_OF();

// OUTI   -  OUTI_ED2  -  ED, A3
extern void OnClock_OUTI_ED2_OF();

// OTIR   -  OTIR_ED2  -  ED, B3
extern void OnClock_OTIR_ED2_OF();

// OUTD   -  OUTD_ED2  -  ED, A3
extern void OnClock_OUTD_ED2_OF();

// OTDR   -  OTDR_ED2  -  ED, BB
extern void OnClock_OTDR_ED2_OF();

#ifdef __cplusplus
}
#endif

