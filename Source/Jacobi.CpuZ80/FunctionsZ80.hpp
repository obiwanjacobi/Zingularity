/**
 *  Generated Source Code
 *  Any changes you make will be lost when the code is regenerated.
 */

// generic cpu operations
extern void OnClock_OF();
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
extern void OnClock_LDA_A_1_OF();

// LD A, B   -  LDA_B_1  -  78
extern void OnClock_LDA_B_1_OF();

// LD A, C   -  LDA_C_1  -  79
extern void OnClock_LDA_C_1_OF();

// LD A, D   -  LDA_D_1  -  7A
extern void OnClock_LDA_D_1_OF();

// LD A, E   -  LDA_E_1  -  7B
extern void OnClock_LDA_E_1_OF();

// LD A, H   -  LDA_H_1  -  7C
extern void OnClock_LDA_H_1_OF();

// LD A, L   -  LDA_L_1  -  7D
extern void OnClock_LDA_L_1_OF();

// LD B, A   -  LDB_A_1  -  47
extern void OnClock_LDB_A_1_OF();

// LD B, B   -  LDB_B_1  -  40
extern void OnClock_LDB_B_1_OF();

// LD B, C   -  LDB_C_1  -  41
extern void OnClock_LDB_C_1_OF();

// LD B, D   -  LDB_D_1  -  42
extern void OnClock_LDB_D_1_OF();

// LD B, E   -  LDB_E_1  -  43
extern void OnClock_LDB_E_1_OF();

// LD B, H   -  LDB_H_1  -  44
extern void OnClock_LDB_H_1_OF();

// LD B, L   -  LDB_L_1  -  45
extern void OnClock_LDB_L_1_OF();

// LD C, A   -  LDC_A_1  -  4F
extern void OnClock_LDC_A_1_OF();

// LD C, B   -  LDC_B_1  -  48
extern void OnClock_LDC_B_1_OF();

// LD C, C   -  LDC_C_1  -  49
extern void OnClock_LDC_C_1_OF();

// LD C, D   -  LDC_D_1  -  4A
extern void OnClock_LDC_D_1_OF();

// LD C, E   -  LDC_E_1  -  4B
extern void OnClock_LDC_E_1_OF();

// LD C, H   -  LDC_H_1  -  4C
extern void OnClock_LDC_H_1_OF();

// LD C, L   -  LDC_L_1  -  4D
extern void OnClock_LDC_L_1_OF();

// LD D, A   -  LDD_A_1  -  57
extern void OnClock_LDD_A_1_OF();

// LD D, B   -  LDD_B_1  -  50
extern void OnClock_LDD_B_1_OF();

// LD D, C   -  LDD_C_1  -  51
extern void OnClock_LDD_C_1_OF();

// LD D, D   -  LDD_D_1  -  52
extern void OnClock_LDD_D_1_OF();

// LD D, E   -  LDD_E_1  -  53
extern void OnClock_LDD_E_1_OF();

// LD D, H   -  LDD_H_1  -  54
extern void OnClock_LDD_H_1_OF();

// LD D, L   -  LDD_L_1  -  55
extern void OnClock_LDD_L_1_OF();

// LD E, A   -  LDE_A_1  -  5F
extern void OnClock_LDE_A_1_OF();

// LD E, B   -  LDE_B_1  -  58
extern void OnClock_LDE_B_1_OF();

// LD E, C   -  LDE_C_1  -  59
extern void OnClock_LDE_C_1_OF();

// LD E, D   -  LDE_D_1  -  5A
extern void OnClock_LDE_D_1_OF();

// LD E, E   -  LDE_E_1  -  5B
extern void OnClock_LDE_E_1_OF();

// LD E, H   -  LDE_H_1  -  5C
extern void OnClock_LDE_H_1_OF();

// LD E, L   -  LDE_L_1  -  5D
extern void OnClock_LDE_L_1_OF();

// LD H, A   -  LDH_A_1  -  67
extern void OnClock_LDH_A_1_OF();

// LD H, B   -  LDH_B_1  -  60
extern void OnClock_LDH_B_1_OF();

// LD H, C   -  LDH_C_1  -  61
extern void OnClock_LDH_C_1_OF();

// LD H, D   -  LDH_D_1  -  62
extern void OnClock_LDH_D_1_OF();

// LD H, E   -  LDH_E_1  -  63
extern void OnClock_LDH_E_1_OF();

// LD H, H   -  LDH_H_1  -  64
extern void OnClock_LDH_H_1_OF();

// LD H, L   -  LDH_L_1  -  65
extern void OnClock_LDH_L_1_OF();

// LD L, A   -  LDL_A_1  -  6F
extern void OnClock_LDL_A_1_OF();

// LD L, B   -  LDL_B_1  -  68
extern void OnClock_LDL_B_1_OF();

// LD L, C   -  LDL_C_1  -  69
extern void OnClock_LDL_C_1_OF();

// LD L, D   -  LDL_D_1  -  6A
extern void OnClock_LDL_D_1_OF();

// LD L, E   -  LDL_E_1  -  6B
extern void OnClock_LDL_E_1_OF();

// LD L, H   -  LDL_H_1  -  6C
extern void OnClock_LDL_H_1_OF();

// LD L, L   -  LDL_L_1  -  6D
extern void OnClock_LDL_L_1_OF();

// LD A, A   -  LDA_A_DD2  -  DD, 7F
extern void OnClock_LDA_A_DD2_OF();

// LD A, B   -  LDA_B_DD2  -  DD, 78
extern void OnClock_LDA_B_DD2_OF();

// LD A, C   -  LDA_C_DD2  -  DD, 79
extern void OnClock_LDA_C_DD2_OF();

// LD A, D   -  LDA_D_DD2  -  DD, 7A
extern void OnClock_LDA_D_DD2_OF();

// LD A, E   -  LDA_E_DD2  -  DD, 7B
extern void OnClock_LDA_E_DD2_OF();

// LD A, IXh   -  LDA_IXh_DD2  -  DD, 7C
extern void OnClock_LDA_IXh_DD2_OF();

// LD A, IXl   -  LDA_IXl_DD2  -  DD, 7D
extern void OnClock_LDA_IXl_DD2_OF();

// LD B, A   -  LDB_A_DD2  -  DD, 47
extern void OnClock_LDB_A_DD2_OF();

// LD B, B   -  LDB_B_DD2  -  DD, 40
extern void OnClock_LDB_B_DD2_OF();

// LD B, C   -  LDB_C_DD2  -  DD, 41
extern void OnClock_LDB_C_DD2_OF();

// LD B, D   -  LDB_D_DD2  -  DD, 42
extern void OnClock_LDB_D_DD2_OF();

// LD B, E   -  LDB_E_DD2  -  DD, 43
extern void OnClock_LDB_E_DD2_OF();

// LD B, IXh   -  LDB_IXh_DD2  -  DD, 44
extern void OnClock_LDB_IXh_DD2_OF();

// LD B, IXl   -  LDB_IXl_DD2  -  DD, 45
extern void OnClock_LDB_IXl_DD2_OF();

// LD C, A   -  LDC_A_DD2  -  DD, 4F
extern void OnClock_LDC_A_DD2_OF();

// LD C, B   -  LDC_B_DD2  -  DD, 48
extern void OnClock_LDC_B_DD2_OF();

// LD C, C   -  LDC_C_DD2  -  DD, 49
extern void OnClock_LDC_C_DD2_OF();

// LD C, D   -  LDC_D_DD2  -  DD, 4A
extern void OnClock_LDC_D_DD2_OF();

// LD C, E   -  LDC_E_DD2  -  DD, 4B
extern void OnClock_LDC_E_DD2_OF();

// LD C, IXh   -  LDC_IXh_DD2  -  DD, 4C
extern void OnClock_LDC_IXh_DD2_OF();

// LD C, IXl   -  LDC_IXl_DD2  -  DD, 4D
extern void OnClock_LDC_IXl_DD2_OF();

// LD D, A   -  LDD_A_DD2  -  DD, 57
extern void OnClock_LDD_A_DD2_OF();

// LD D, B   -  LDD_B_DD2  -  DD, 50
extern void OnClock_LDD_B_DD2_OF();

// LD D, C   -  LDD_C_DD2  -  DD, 51
extern void OnClock_LDD_C_DD2_OF();

// LD D, D   -  LDD_D_DD2  -  DD, 52
extern void OnClock_LDD_D_DD2_OF();

// LD D, E   -  LDD_E_DD2  -  DD, 53
extern void OnClock_LDD_E_DD2_OF();

// LD D, IXh   -  LDD_IXh_DD2  -  DD, 54
extern void OnClock_LDD_IXh_DD2_OF();

// LD D, IXl   -  LDD_IXl_DD2  -  DD, 55
extern void OnClock_LDD_IXl_DD2_OF();

// LD E, A   -  LDE_A_DD2  -  DD, 5F
extern void OnClock_LDE_A_DD2_OF();

// LD E, B   -  LDE_B_DD2  -  DD, 58
extern void OnClock_LDE_B_DD2_OF();

// LD E, C   -  LDE_C_DD2  -  DD, 59
extern void OnClock_LDE_C_DD2_OF();

// LD E, D   -  LDE_D_DD2  -  DD, 5A
extern void OnClock_LDE_D_DD2_OF();

// LD E, E   -  LDE_E_DD2  -  DD, 5B
extern void OnClock_LDE_E_DD2_OF();

// LD E, IXh   -  LDE_IXh_DD2  -  DD, 5C
extern void OnClock_LDE_IXh_DD2_OF();

// LD E, IXl   -  LDE_IXl_DD2  -  DD, 5D
extern void OnClock_LDE_IXl_DD2_OF();

// LD IXh, A   -  LDIXh_A_DD2  -  DD, 67
extern void OnClock_LDIXh_A_DD2_OF();

// LD IXh, B   -  LDIXh_B_DD2  -  DD, 60
extern void OnClock_LDIXh_B_DD2_OF();

// LD IXh, C   -  LDIXh_C_DD2  -  DD, 61
extern void OnClock_LDIXh_C_DD2_OF();

// LD IXh, D   -  LDIXh_D_DD2  -  DD, 62
extern void OnClock_LDIXh_D_DD2_OF();

// LD IXh, E   -  LDIXh_E_DD2  -  DD, 63
extern void OnClock_LDIXh_E_DD2_OF();

// LD IXh, IXh   -  LDIXh_IXh_DD2  -  DD, 64
extern void OnClock_LDIXh_IXh_DD2_OF();

// LD IXh, IXl   -  LDIXh_IXl_DD2  -  DD, 65
extern void OnClock_LDIXh_IXl_DD2_OF();

// LD IXl, A   -  LDIXl_A_DD2  -  DD, 6F
extern void OnClock_LDIXl_A_DD2_OF();

// LD IXl, B   -  LDIXl_B_DD2  -  DD, 68
extern void OnClock_LDIXl_B_DD2_OF();

// LD IXl, C   -  LDIXl_C_DD2  -  DD, 69
extern void OnClock_LDIXl_C_DD2_OF();

// LD IXl, D   -  LDIXl_D_DD2  -  DD, 6A
extern void OnClock_LDIXl_D_DD2_OF();

// LD IXl, E   -  LDIXl_E_DD2  -  DD, 6B
extern void OnClock_LDIXl_E_DD2_OF();

// LD IXl, IXh   -  LDIXl_IXh_DD2  -  DD, 6C
extern void OnClock_LDIXl_IXh_DD2_OF();

// LD IXl, IXl   -  LDIXl_IXl_DD2  -  DD, 6D
extern void OnClock_LDIXl_IXl_DD2_OF();

// LD A, A   -  LDA_A_FD2  -  FD, 7F
extern void OnClock_LDA_A_FD2_OF();

// LD A, B   -  LDA_B_FD2  -  FD, 78
extern void OnClock_LDA_B_FD2_OF();

// LD A, C   -  LDA_C_FD2  -  FD, 79
extern void OnClock_LDA_C_FD2_OF();

// LD A, D   -  LDA_D_FD2  -  FD, 7A
extern void OnClock_LDA_D_FD2_OF();

// LD A, E   -  LDA_E_FD2  -  FD, 7B
extern void OnClock_LDA_E_FD2_OF();

// LD A, IYh   -  LDA_IYh_FD2  -  FD, 7C
extern void OnClock_LDA_IYh_FD2_OF();

// LD A, IYl   -  LDA_IYl_FD2  -  FD, 7D
extern void OnClock_LDA_IYl_FD2_OF();

// LD B, A   -  LDB_A_FD2  -  FD, 47
extern void OnClock_LDB_A_FD2_OF();

// LD B, B   -  LDB_B_FD2  -  FD, 40
extern void OnClock_LDB_B_FD2_OF();

// LD B, C   -  LDB_C_FD2  -  FD, 41
extern void OnClock_LDB_C_FD2_OF();

// LD B, D   -  LDB_D_FD2  -  FD, 42
extern void OnClock_LDB_D_FD2_OF();

// LD B, E   -  LDB_E_FD2  -  FD, 43
extern void OnClock_LDB_E_FD2_OF();

// LD B, IYh   -  LDB_IYh_FD2  -  FD, 44
extern void OnClock_LDB_IYh_FD2_OF();

// LD B, IYl   -  LDB_IYl_FD2  -  FD, 45
extern void OnClock_LDB_IYl_FD2_OF();

// LD C, A   -  LDC_A_FD2  -  FD, 4F
extern void OnClock_LDC_A_FD2_OF();

// LD C, B   -  LDC_B_FD2  -  FD, 48
extern void OnClock_LDC_B_FD2_OF();

// LD C, C   -  LDC_C_FD2  -  FD, 49
extern void OnClock_LDC_C_FD2_OF();

// LD C, D   -  LDC_D_FD2  -  FD, 4A
extern void OnClock_LDC_D_FD2_OF();

// LD C, E   -  LDC_E_FD2  -  FD, 4B
extern void OnClock_LDC_E_FD2_OF();

// LD C, IYh   -  LDC_IYh_FD2  -  FD, 4C
extern void OnClock_LDC_IYh_FD2_OF();

// LD C, IYl   -  LDC_IYl_FD2  -  FD, 4D
extern void OnClock_LDC_IYl_FD2_OF();

// LD D, A   -  LDD_A_FD2  -  FD, 57
extern void OnClock_LDD_A_FD2_OF();

// LD D, B   -  LDD_B_FD2  -  FD, 50
extern void OnClock_LDD_B_FD2_OF();

// LD D, C   -  LDD_C_FD2  -  FD, 51
extern void OnClock_LDD_C_FD2_OF();

// LD D, D   -  LDD_D_FD2  -  FD, 52
extern void OnClock_LDD_D_FD2_OF();

// LD D, E   -  LDD_E_FD2  -  FD, 53
extern void OnClock_LDD_E_FD2_OF();

// LD D, IYh   -  LDD_IYh_FD2  -  FD, 54
extern void OnClock_LDD_IYh_FD2_OF();

// LD D, IYl   -  LDD_IYl_FD2  -  FD, 55
extern void OnClock_LDD_IYl_FD2_OF();

// LD E, A   -  LDE_A_FD2  -  FD, 5F
extern void OnClock_LDE_A_FD2_OF();

// LD E, B   -  LDE_B_FD2  -  FD, 58
extern void OnClock_LDE_B_FD2_OF();

// LD E, C   -  LDE_C_FD2  -  FD, 59
extern void OnClock_LDE_C_FD2_OF();

// LD E, D   -  LDE_D_FD2  -  FD, 5A
extern void OnClock_LDE_D_FD2_OF();

// LD E, E   -  LDE_E_FD2  -  FD, 5B
extern void OnClock_LDE_E_FD2_OF();

// LD E, IYh   -  LDE_IYh_FD2  -  FD, 5C
extern void OnClock_LDE_IYh_FD2_OF();

// LD E, IYl   -  LDE_IYl_FD2  -  FD, 5D
extern void OnClock_LDE_IYl_FD2_OF();

// LD IYh, A   -  LDIYh_A_FD2  -  FD, 67
extern void OnClock_LDIYh_A_FD2_OF();

// LD IYh, B   -  LDIYh_B_FD2  -  FD, 60
extern void OnClock_LDIYh_B_FD2_OF();

// LD IYh, C   -  LDIYh_C_FD2  -  FD, 61
extern void OnClock_LDIYh_C_FD2_OF();

// LD IYh, D   -  LDIYh_D_FD2  -  FD, 62
extern void OnClock_LDIYh_D_FD2_OF();

// LD IYh, E   -  LDIYh_E_FD2  -  FD, 63
extern void OnClock_LDIYh_E_FD2_OF();

// LD IYh, IYh   -  LDIYh_IYh_FD2  -  FD, 64
extern void OnClock_LDIYh_IYh_FD2_OF();

// LD IYh, IYl   -  LDIYh_IYl_FD2  -  FD, 65
extern void OnClock_LDIYh_IYl_FD2_OF();

// LD IYl, A   -  LDIYl_A_FD2  -  FD, 6F
extern void OnClock_LDIYl_A_FD2_OF();

// LD IYl, B   -  LDIYl_B_FD2  -  FD, 68
extern void OnClock_LDIYl_B_FD2_OF();

// LD IYl, C   -  LDIYl_C_FD2  -  FD, 69
extern void OnClock_LDIYl_C_FD2_OF();

// LD IYl, D   -  LDIYl_D_FD2  -  FD, 6A
extern void OnClock_LDIYl_D_FD2_OF();

// LD IYl, E   -  LDIYl_E_FD2  -  FD, 6B
extern void OnClock_LDIYl_E_FD2_OF();

// LD IYl, IYh   -  LDIYl_IYh_FD2  -  FD, 6C
extern void OnClock_LDIYl_IYh_FD2_OF();

// LD IYl, IYl   -  LDIYl_IYl_FD2  -  FD, 6D
extern void OnClock_LDIYl_IYl_FD2_OF();

// LD A, n   -  LDA_n_2  -  3E, n
extern void OnClock_LDA_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD B, n   -  LDB_n_2  -  06, n
extern void OnClock_LDB_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD C, n   -  LDC_n_2  -  0E, n
extern void OnClock_LDC_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD D, n   -  LDD_n_2  -  16, n
extern void OnClock_LDD_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD E, n   -  LDE_n_2  -  1E, n
extern void OnClock_LDE_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD H, n   -  LDH_n_2  -  26, n
extern void OnClock_LDH_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD L, n   -  LDL_n_2  -  2E, n
extern void OnClock_LDL_n_2_OF();
extern void OnClock_LDr_n_2_OD();

// LD A, n   -  LDA_n_DD3  -  DD, 3E, n
extern void OnClock_LDA_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD B, n   -  LDB_n_DD3  -  DD, 06, n
extern void OnClock_LDB_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD C, n   -  LDC_n_DD3  -  DD, 0E, n
extern void OnClock_LDC_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD D, n   -  LDD_n_DD3  -  DD, 16, n
extern void OnClock_LDD_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD E, n   -  LDE_n_DD3  -  DD, 1E, n
extern void OnClock_LDE_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD IXh, n   -  LDIXh_n_DD3  -  DD, 26, n
extern void OnClock_LDIXh_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD IXl, n   -  LDIXl_n_DD3  -  DD, 2E, n
extern void OnClock_LDIXl_n_DD3_OF();
extern void OnClock_LDt_n_DD3_OD();

// LD A, n   -  LDA_n_FD3  -  FD, 3E, n
extern void OnClock_LDA_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD B, n   -  LDB_n_FD3  -  FD, 06, n
extern void OnClock_LDB_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD C, n   -  LDC_n_FD3  -  FD, 0E, n
extern void OnClock_LDC_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD D, n   -  LDD_n_FD3  -  FD, 16, n
extern void OnClock_LDD_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD E, n   -  LDE_n_FD3  -  FD, 1E, n
extern void OnClock_LDE_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD IYh, n   -  LDIYh_n_FD3  -  FD, 26, n
extern void OnClock_LDIYh_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD IYl, n   -  LDIYl_n_FD3  -  FD, 2E, n
extern void OnClock_LDIYl_n_FD3_OF();
extern void OnClock_LDv_n_FD3_OD();

// LD A, (HL)   -  LDA__HL__1  -  7E
extern void OnClock_LDA__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD B, (HL)   -  LDB__HL__1  -  46
extern void OnClock_LDB__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD C, (HL)   -  LDC__HL__1  -  4E
extern void OnClock_LDC__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD D, (HL)   -  LDD__HL__1  -  56
extern void OnClock_LDD__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD E, (HL)   -  LDE__HL__1  -  5E
extern void OnClock_LDE__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD H, (HL)   -  LDH__HL__1  -  66
extern void OnClock_LDH__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD L, (HL)   -  LDL__HL__1  -  6E
extern void OnClock_LDL__HL__1_OF();
extern void OnClock_LDr__HL__1_MR();

// LD A, (IX+d)   -  LDA__IX_d__DD3  -  DD, BE, d
extern void OnClock_LDA__IX_d__DD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD A, (IY+d)   -  LDA__IY_d__FD3  -  FD, BE, d
extern void OnClock_LDA__IY_d__FD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD B, (IX+d)   -  LDB__IX_d__DD3  -  DD, 86, d
extern void OnClock_LDB__IX_d__DD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD B, (IY+d)   -  LDB__IY_d__FD3  -  FD, 86, d
extern void OnClock_LDB__IY_d__FD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD C, (IX+d)   -  LDC__IX_d__DD3  -  DD, 8E, d
extern void OnClock_LDC__IX_d__DD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD C, (IY+d)   -  LDC__IY_d__FD3  -  FD, 8E, d
extern void OnClock_LDC__IY_d__FD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD D, (IX+d)   -  LDD__IX_d__DD3  -  DD, 96, d
extern void OnClock_LDD__IX_d__DD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD D, (IY+d)   -  LDD__IY_d__FD3  -  FD, 96, d
extern void OnClock_LDD__IY_d__FD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD E, (IX+d)   -  LDE__IX_d__DD3  -  DD, 9E, d
extern void OnClock_LDE__IX_d__DD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD E, (IY+d)   -  LDE__IY_d__FD3  -  FD, 9E, d
extern void OnClock_LDE__IY_d__FD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD H, (IX+d)   -  LDH__IX_d__DD3  -  DD, A6, d
extern void OnClock_LDH__IX_d__DD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD H, (IY+d)   -  LDH__IY_d__FD3  -  FD, A6, d
extern void OnClock_LDH__IY_d__FD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD L, (IX+d)   -  LDL__IX_d__DD3  -  DD, AE, d
extern void OnClock_LDL__IX_d__DD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD L, (IY+d)   -  LDL__IY_d__FD3  -  FD, AE, d
extern void OnClock_LDL__IY_d__FD3_OF();
extern void OnClock_LDr__ex_d__ex3_OD();
extern void OnClock_LDr__ex_d__ex3_AD();
extern void OnClock_LDr__ex_d__ex3_MR();

// LD (HL), A   -  LD_HL__A_1  -  77
extern void OnClock_LD_HL__A_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (HL), B   -  LD_HL__B_1  -  70
extern void OnClock_LD_HL__B_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (HL), C   -  LD_HL__C_1  -  71
extern void OnClock_LD_HL__C_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (HL), D   -  LD_HL__D_1  -  72
extern void OnClock_LD_HL__D_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (HL), E   -  LD_HL__E_1  -  73
extern void OnClock_LD_HL__E_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (HL), H   -  LD_HL__H_1  -  74
extern void OnClock_LD_HL__H_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (HL), L   -  LD_HL__L_1  -  75
extern void OnClock_LD_HL__L_1_OF();
extern void OnClock_LD_HL__r_1_MW();

// LD (IX+d), A   -  LD_IX_d__A_DD3  -  DD, 77, d
extern void OnClock_LD_IX_d__A_DD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), A   -  LD_IY_d__A_FD3  -  FD, 77, d
extern void OnClock_LD_IY_d__A_FD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), B   -  LD_IX_d__B_DD3  -  DD, 70, d
extern void OnClock_LD_IX_d__B_DD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), B   -  LD_IY_d__B_FD3  -  FD, 70, d
extern void OnClock_LD_IY_d__B_FD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), C   -  LD_IX_d__C_DD3  -  DD, 71, d
extern void OnClock_LD_IX_d__C_DD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), C   -  LD_IY_d__C_FD3  -  FD, 71, d
extern void OnClock_LD_IY_d__C_FD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), D   -  LD_IX_d__D_DD3  -  DD, 72, d
extern void OnClock_LD_IX_d__D_DD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), D   -  LD_IY_d__D_FD3  -  FD, 72, d
extern void OnClock_LD_IY_d__D_FD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), E   -  LD_IX_d__E_DD3  -  DD, 73, d
extern void OnClock_LD_IX_d__E_DD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), E   -  LD_IY_d__E_FD3  -  FD, 73, d
extern void OnClock_LD_IY_d__E_FD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), H   -  LD_IX_d__H_DD3  -  DD, 74, d
extern void OnClock_LD_IX_d__H_DD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), H   -  LD_IY_d__H_FD3  -  FD, 74, d
extern void OnClock_LD_IY_d__H_FD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IX+d), L   -  LD_IX_d__L_DD3  -  DD, 75, d
extern void OnClock_LD_IX_d__L_DD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (IY+d), L   -  LD_IY_d__L_FD3  -  FD, 75, d
extern void OnClock_LD_IY_d__L_FD3_OF();
extern void OnClock_LD_ex_d__r_ex3_OD();
extern void OnClock_LD_ex_d__r_ex3_AD();
extern void OnClock_LD_ex_d__r_ex3_MW();

// LD (HL), n   -  LD_HL__n_2  -  36, n
extern void OnClock_LD_HL__n_2_OF();
extern void OnClock_LD_HL__n_2_OD();
extern void OnClock_LD_HL__n_2_MW();

// LD (IX+d), n   -  LD_IX_d__n_DD4  -  DD, 36, d, n
extern void OnClock_LD_IX_d__n_DD4_OF();
extern void OnClock_LD_ex_d__n_ex4_OD();
extern void OnClock_LD_ex_d__n_ex4_FD();
extern void OnClock_LD_ex_d__n_ex4_MW();

// LD (IY+d), n   -  LD_IY_d__n_FD4  -  FD, 36, d, n
extern void OnClock_LD_IY_d__n_FD4_OF();
extern void OnClock_LD_ex_d__n_ex4_OD();
extern void OnClock_LD_ex_d__n_ex4_FD();
extern void OnClock_LD_ex_d__n_ex4_MW();

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
extern void OnClock_LDBC_nn_3_OF();
extern void OnClock_LDp_nn_3_ODl();
extern void OnClock_LDp_nn_3_ODh();

// LD DE, nn   -  LDDE_nn_3  -  11, n, n
extern void OnClock_LDDE_nn_3_OF();
extern void OnClock_LDp_nn_3_ODl();
extern void OnClock_LDp_nn_3_ODh();

// LD HL, nn   -  LDHL_nn_3  -  21, n, n
extern void OnClock_LDHL_nn_3_OF();
extern void OnClock_LDp_nn_3_ODl();
extern void OnClock_LDp_nn_3_ODh();

// LD SP, nn   -  LDSP_nn_3  -  31, n, n
extern void OnClock_LDSP_nn_3_OF();
extern void OnClock_LDp_nn_3_ODl();
extern void OnClock_LDp_nn_3_ODh();

// LD IX, nn   -  LDIX_nn_DD4  -  DD, 21, n, n
extern void OnClock_LDIX_nn_DD4_OF();
extern void OnClock_LDex_nn_ex4_ODl();
extern void OnClock_LDex_nn_ex4_ODh();

// LD IY, nn   -  LDIY_nn_FD4  -  FD, 21, n, n
extern void OnClock_LDIY_nn_FD4_OF();
extern void OnClock_LDex_nn_ex4_ODl();
extern void OnClock_LDex_nn_ex4_ODh();

// LD HL, (nn)   -  LDHL__nn__3  -  2A, n, n
extern void OnClock_LDHL__nn__3_OF();
extern void OnClock_LDHL__nn__3_ODl();
extern void OnClock_LDHL__nn__3_ODh();
extern void OnClock_LDHL__nn__3_MRl();
extern void OnClock_LDHL__nn__3_MRh();

// LD BC, (nn)   -  LDBC__nn__ED4  -  ED, 4B, n, n
extern void OnClock_LDBC__nn__ED4_OF();
extern void OnClock_LDp__nn__ED4_ODl();
extern void OnClock_LDp__nn__ED4_ODh();
extern void OnClock_LDp__nn__ED4_MWl();
extern void OnClock_LDp__nn__ED4_MRh();

// LD DE, (nn)   -  LDDE__nn__ED4  -  ED, 5B, n, n
extern void OnClock_LDDE__nn__ED4_OF();
extern void OnClock_LDp__nn__ED4_ODl();
extern void OnClock_LDp__nn__ED4_ODh();
extern void OnClock_LDp__nn__ED4_MWl();
extern void OnClock_LDp__nn__ED4_MRh();

// LD HL, (nn)   -  LDHL__nn__ED4  -  ED, 6B, n, n
extern void OnClock_LDHL__nn__ED4_OF();
extern void OnClock_LDp__nn__ED4_ODl();
extern void OnClock_LDp__nn__ED4_ODh();
extern void OnClock_LDp__nn__ED4_MWl();
extern void OnClock_LDp__nn__ED4_MRh();

// LD SP, (nn)   -  LDSP__nn__ED4  -  ED, 7B, n, n
extern void OnClock_LDSP__nn__ED4_OF();
extern void OnClock_LDp__nn__ED4_ODl();
extern void OnClock_LDp__nn__ED4_ODh();
extern void OnClock_LDp__nn__ED4_MWl();
extern void OnClock_LDp__nn__ED4_MRh();

// LD IX, (nn)   -  LDIX__nn__DD4  -  DD, 2A, n, n
extern void OnClock_LDIX__nn__DD4_OF();
extern void OnClock_LDex__nn__ex4_ODl();
extern void OnClock_LDex__nn__ex4_ODh();
extern void OnClock_LDex__nn__ex4_MRl();
extern void OnClock_LDex__nn__ex4_MRh();

// LD IY, (nn)   -  LDIY__nn__FD4  -  FD, 2A, n, n
extern void OnClock_LDIY__nn__FD4_OF();
extern void OnClock_LDex__nn__ex4_ODl();
extern void OnClock_LDex__nn__ex4_ODh();
extern void OnClock_LDex__nn__ex4_MRl();
extern void OnClock_LDex__nn__ex4_MRh();

// LD (nn), HL   -  LD_nn__HL_3  -  22, n, n
extern void OnClock_LD_nn__HL_3_OF();
extern void OnClock_LD_nn__HL_3_ODl();
extern void OnClock_LD_nn__HL_3_ODh();
extern void OnClock_LD_nn__HL_3_MWl();
extern void OnClock_LD_nn__HL_3_MWh();

// LD (nn), BC   -  LD_nn__BC_ED4  -  ED, 43, n, n
extern void OnClock_LD_nn__BC_ED4_OF();
extern void OnClock_LD_nn__p_ED4_ODl();
extern void OnClock_LD_nn__p_ED4_ODh();
extern void OnClock_LD_nn__p_ED4_MWl();
extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), DE   -  LD_nn__DE_ED4  -  ED, 53, n, n
extern void OnClock_LD_nn__DE_ED4_OF();
extern void OnClock_LD_nn__p_ED4_ODl();
extern void OnClock_LD_nn__p_ED4_ODh();
extern void OnClock_LD_nn__p_ED4_MWl();
extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), HL   -  LD_nn__HL_ED4  -  ED, 63, n, n
extern void OnClock_LD_nn__HL_ED4_OF();
extern void OnClock_LD_nn__p_ED4_ODl();
extern void OnClock_LD_nn__p_ED4_ODh();
extern void OnClock_LD_nn__p_ED4_MWl();
extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), SP   -  LD_nn__SP_ED4  -  ED, 73, n, n
extern void OnClock_LD_nn__SP_ED4_OF();
extern void OnClock_LD_nn__p_ED4_ODl();
extern void OnClock_LD_nn__p_ED4_ODh();
extern void OnClock_LD_nn__p_ED4_MWl();
extern void OnClock_LD_nn__p_ED4_MWh();

// LD (nn), IX   -  LD_nn__IX_DD4  -  DD, 22, n, n
extern void OnClock_LD_nn__IX_DD4_OF();
extern void OnClock_LD_nn__ex_ex4_ODl();
extern void OnClock_LD_nn__ex_ex4_ODh();
extern void OnClock_LD_nn__ex_ex4_MWl();
extern void OnClock_LD_nn__ex_ex4_MWh();

// LD (nn), IY   -  LD_nn__IY_FD4  -  FD, 22, n, n
extern void OnClock_LD_nn__IY_FD4_OF();
extern void OnClock_LD_nn__ex_ex4_ODl();
extern void OnClock_LD_nn__ex_ex4_ODh();
extern void OnClock_LD_nn__ex_ex4_MWl();
extern void OnClock_LD_nn__ex_ex4_MWh();

// LD SP, HL   -  LDSP_HL_1  -  F9
extern void OnClock_LDSP_HL_1_OF();

// LD SP, IX   -  LDSP_IX_DD2  -  DD, F9
extern void OnClock_LDSP_IX_DD2_OF();

// LD SP, IY   -  LDSP_IY_FD2  -  FD, F9
extern void OnClock_LDSP_IY_FD2_OF();

// PUSH BC   -  PUSHBC_1  -  C5
extern void OnClock_PUSHBC_1_OF();
extern void OnClock_PUSHq_1_SWh();
extern void OnClock_PUSHq_1_SWl();

// PUSH DE   -  PUSHDE_1  -  D5
extern void OnClock_PUSHDE_1_OF();
extern void OnClock_PUSHq_1_SWh();
extern void OnClock_PUSHq_1_SWl();

// PUSH HL   -  PUSHHL_1  -  E5
extern void OnClock_PUSHHL_1_OF();
extern void OnClock_PUSHq_1_SWh();
extern void OnClock_PUSHq_1_SWl();

// PUSH AF   -  PUSHAF_1  -  F5
extern void OnClock_PUSHAF_1_OF();
extern void OnClock_PUSHq_1_SWh();
extern void OnClock_PUSHq_1_SWl();

// PUSH IX   -  PUSHIX_DD2  -  DD, E5
extern void OnClock_PUSHIX_DD2_OF();
extern void OnClock_PUSHex_ex2_SWh();
extern void OnClock_PUSHex_ex2_SWl();

// PUSH IY   -  PUSHIY_FD2  -  FD, E5
extern void OnClock_PUSHIY_FD2_OF();
extern void OnClock_PUSHex_ex2_SWh();
extern void OnClock_PUSHex_ex2_SWl();

// POP BC   -  POPBC_1  -  C1
extern void OnClock_POPBC_1_OF();
extern void OnClock_POPq_1_SRh();
extern void OnClock_POPq_1_SRl();

// POP DE   -  POPDE_1  -  D1
extern void OnClock_POPDE_1_OF();
extern void OnClock_POPq_1_SRh();
extern void OnClock_POPq_1_SRl();

// POP HL   -  POPHL_1  -  E1
extern void OnClock_POPHL_1_OF();
extern void OnClock_POPq_1_SRh();
extern void OnClock_POPq_1_SRl();

// POP AF   -  POPAF_1  -  F1
extern void OnClock_POPAF_1_OF();
extern void OnClock_POPq_1_SRh();
extern void OnClock_POPq_1_SRl();

// POP IX   -  POPIX_DD2  -  DD, E1
extern void OnClock_POPIX_DD2_OF();
extern void OnClock_POPex_ex2_SRh();
extern void OnClock_POPex_ex2_SRl();

// POP IY   -  POPIY_FD2  -  FD, E1
extern void OnClock_POPIY_FD2_OF();
extern void OnClock_POPex_ex2_SRh();
extern void OnClock_POPex_ex2_SRl();

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
extern void OnClock_EX_SP__IX_DD2_OF();
extern void OnClock_EX_SP__ex_ex2_SRh();
extern void OnClock_EX_SP__IX_DD2_SRl();
extern void OnClock_EX_SP__ex_ex2_SWh();
extern void OnClock_EX_SP__IX_DD2_SWl();

// EX (SP), IY   -  EX_SP__IY_FD2  -  FD, E3
extern void OnClock_EX_SP__IY_FD2_OF();
extern void OnClock_EX_SP__ex_ex2_SRh();
extern void OnClock_EX_SP__IY_FD2_SRl();
extern void OnClock_EX_SP__ex_ex2_SWh();
extern void OnClock_EX_SP__IY_FD2_SWl();

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
extern void OnClock_ADDA_A_1_OF();

// ADD A, B   -  ADDA_B_1  -  80
extern void OnClock_ADDA_B_1_OF();

// ADD A, C   -  ADDA_C_1  -  81
extern void OnClock_ADDA_C_1_OF();

// ADD A, D   -  ADDA_D_1  -  82
extern void OnClock_ADDA_D_1_OF();

// ADD A, E   -  ADDA_E_1  -  83
extern void OnClock_ADDA_E_1_OF();

// ADD A, H   -  ADDA_H_1  -  84
extern void OnClock_ADDA_H_1_OF();

// ADD A, L   -  ADDA_L_1  -  85
extern void OnClock_ADDA_L_1_OF();

// ADD A, n   -  ADDA_n_2  -  C6, n
extern void OnClock_ADDA_n_2_OF();
extern void OnClock_ADDA_n_2_OD();

// ADD A, (HL)   -  ADDA__HL__1  -  86
extern void OnClock_ADDA__HL__1_OF();

// ADD A, (IX+d)   -  ADDA__IX_d__DD3  -  DD, 86, d
extern void OnClock_ADDA__IX_d__DD3_OF();
extern void OnClock_ADDA__ex_d__ex3_OD();
extern void OnClock_ADDA__ex_d__ex3_AD();
extern void OnClock_ADDA__ex_d__ex3_MR();

// ADD A, (IY+d)   -  ADDA__IY_d__FD3  -  FD, 86, d
extern void OnClock_ADDA__IY_d__FD3_OF();
extern void OnClock_ADDA__ex_d__ex3_OD();
extern void OnClock_ADDA__ex_d__ex3_AD();
extern void OnClock_ADDA__ex_d__ex3_MR();

// ADC A, A   -  ADCA_A_1  -  8F
extern void OnClock_ADCA_A_1_OF();

// ADC A, B   -  ADCA_B_1  -  88
extern void OnClock_ADCA_B_1_OF();

// ADC A, C   -  ADCA_C_1  -  89
extern void OnClock_ADCA_C_1_OF();

// ADC A, D   -  ADCA_D_1  -  8A
extern void OnClock_ADCA_D_1_OF();

// ADC A, E   -  ADCA_E_1  -  8B
extern void OnClock_ADCA_E_1_OF();

// ADC A, H   -  ADCA_H_1  -  8C
extern void OnClock_ADCA_H_1_OF();

// ADC A, L   -  ADCA_L_1  -  8D
extern void OnClock_ADCA_L_1_OF();

// ADC A, n   -  ADCA_n_2  -  CE, n
extern void OnClock_ADCA_n_2_OF();
extern void OnClock_ADCA_n_2_OD();

// ADC A, (HL)   -  ADCA__HL__1  -  8E
extern void OnClock_ADCA__HL__1_OF();

// ADC A, (IX+d)   -  ADCA__IX_d__DD3  -  DD, 8E, d
extern void OnClock_ADCA__IX_d__DD3_OF();
extern void OnClock_ADCA__ex_d__ex3_OD();
extern void OnClock_ADCA__ex_d__ex3_AD();
extern void OnClock_ADCA__ex_d__ex3_MR();

// ADC A, (IY+d)   -  ADCA__IY_d__FD3  -  FD, 8E, d
extern void OnClock_ADCA__IY_d__FD3_OF();
extern void OnClock_ADCA__ex_d__ex3_OD();
extern void OnClock_ADCA__ex_d__ex3_AD();
extern void OnClock_ADCA__ex_d__ex3_MR();

// SUB A, A   -  SUBA_A_1  -  97
extern void OnClock_SUBA_A_1_OF();

// SUB A, B   -  SUBA_B_1  -  90
extern void OnClock_SUBA_B_1_OF();

// SUB A, C   -  SUBA_C_1  -  91
extern void OnClock_SUBA_C_1_OF();

// SUB A, D   -  SUBA_D_1  -  92
extern void OnClock_SUBA_D_1_OF();

// SUB A, E   -  SUBA_E_1  -  93
extern void OnClock_SUBA_E_1_OF();

// SUB A, H   -  SUBA_H_1  -  94
extern void OnClock_SUBA_H_1_OF();

// SUB A, L   -  SUBA_L_1  -  95
extern void OnClock_SUBA_L_1_OF();

// SUB A, n   -  SUBA_n_2  -  8E, n
extern void OnClock_SUBA_n_2_OF();
extern void OnClock_SUBA_n_2_OD();

// SUB A, (HL)   -  SUBA__HL__1  -  96
extern void OnClock_SUBA__HL__1_OF();

// SUB A, (IX+d)   -  SUBA__IX_d__DD3  -  DD, 96, d
extern void OnClock_SUBA__IX_d__DD3_OF();
extern void OnClock_SUBA__ex_d__ex3_OD();
extern void OnClock_SUBA__ex_d__ex3_AD();
extern void OnClock_SUBA__ex_d__ex3_MR();

// SUB A, (IY+d)   -  SUBA__IY_d__FD3  -  FD, 96, d
extern void OnClock_SUBA__IY_d__FD3_OF();
extern void OnClock_SUBA__ex_d__ex3_OD();
extern void OnClock_SUBA__ex_d__ex3_AD();
extern void OnClock_SUBA__ex_d__ex3_MR();

// SBC A, A   -  SBCA_A_1  -  9F
extern void OnClock_SBCA_A_1_OF();

// SBC A, B   -  SBCA_B_1  -  98
extern void OnClock_SBCA_B_1_OF();

// SBC A, C   -  SBCA_C_1  -  99
extern void OnClock_SBCA_C_1_OF();

// SBC A, D   -  SBCA_D_1  -  9A
extern void OnClock_SBCA_D_1_OF();

// SBC A, E   -  SBCA_E_1  -  9B
extern void OnClock_SBCA_E_1_OF();

// SBC A, H   -  SBCA_H_1  -  9C
extern void OnClock_SBCA_H_1_OF();

// SBC A, L   -  SBCA_L_1  -  9D
extern void OnClock_SBCA_L_1_OF();

// SBC A, n   -  SBCA_n_2  -  DE, n
extern void OnClock_SBCA_n_2_OF();
extern void OnClock_SBCA_n_2_OD();

// SBC A, (HL)   -  SBCA__HL__1  -  9E
extern void OnClock_SBCA__HL__1_OF();

// SBC A, (IX+d)   -  SBCA__IX_d__DD3  -  DD, 9E, d
extern void OnClock_SBCA__IX_d__DD3_OF();
extern void OnClock_SBCA__ex_d__ex3_OD();
extern void OnClock_SBCA__ex_d__ex3_AD();
extern void OnClock_SBCA__ex_d__ex3_MR();

// SBC A, (IY+d)   -  SBCA__IY_d__FD3  -  FD, 9E, d
extern void OnClock_SBCA__IY_d__FD3_OF();
extern void OnClock_SBCA__ex_d__ex3_OD();
extern void OnClock_SBCA__ex_d__ex3_AD();
extern void OnClock_SBCA__ex_d__ex3_MR();

// AND A, A   -  ANDA_A_1  -  A7
extern void OnClock_ANDA_A_1_OF();

// AND A, B   -  ANDA_B_1  -  A0
extern void OnClock_ANDA_B_1_OF();

// AND A, C   -  ANDA_C_1  -  A1
extern void OnClock_ANDA_C_1_OF();

// AND A, D   -  ANDA_D_1  -  A2
extern void OnClock_ANDA_D_1_OF();

// AND A, E   -  ANDA_E_1  -  A3
extern void OnClock_ANDA_E_1_OF();

// AND A, H   -  ANDA_H_1  -  A4
extern void OnClock_ANDA_H_1_OF();

// AND A, L   -  ANDA_L_1  -  A5
extern void OnClock_ANDA_L_1_OF();

// AND A, n   -  ANDA_n_2  -  E6, n
extern void OnClock_ANDA_n_2_OF();
extern void OnClock_ANDA_n_2_OD();

// AND A, (HL)   -  ANDA__HL__1  -  A6
extern void OnClock_ANDA__HL__1_OF();

// AND A, (IX+d)   -  ANDA__IX_d__DD3  -  DD, A6, d
extern void OnClock_ANDA__IX_d__DD3_OF();
extern void OnClock_ANDA__ex_d__ex3_OD();
extern void OnClock_ANDA__ex_d__ex3_AD();
extern void OnClock_ANDA__ex_d__ex3_MR();

// AND A, (IY+d)   -  ANDA__IY_d__FD3  -  FD, A6, d
extern void OnClock_ANDA__IY_d__FD3_OF();
extern void OnClock_ANDA__ex_d__ex3_OD();
extern void OnClock_ANDA__ex_d__ex3_AD();
extern void OnClock_ANDA__ex_d__ex3_MR();

// OR A, A   -  ORA_A_1  -  B7
extern void OnClock_ORA_A_1_OF();

// OR A, B   -  ORA_B_1  -  B0
extern void OnClock_ORA_B_1_OF();

// OR A, C   -  ORA_C_1  -  B1
extern void OnClock_ORA_C_1_OF();

// OR A, D   -  ORA_D_1  -  B2
extern void OnClock_ORA_D_1_OF();

// OR A, E   -  ORA_E_1  -  B3
extern void OnClock_ORA_E_1_OF();

// OR A, H   -  ORA_H_1  -  B4
extern void OnClock_ORA_H_1_OF();

// OR A, L   -  ORA_L_1  -  B5
extern void OnClock_ORA_L_1_OF();

// OR A, n   -  ORA_n_2  -  F6, n
extern void OnClock_ORA_n_2_OF();
extern void OnClock_ORA_n_2_OD();

// OR A, (HL)   -  ORA__HL__1  -  B6
extern void OnClock_ORA__HL__1_OF();

// OR A, (IX+d)   -  ORA__IX_d__DD3  -  DD, B6, d
extern void OnClock_ORA__IX_d__DD3_OF();
extern void OnClock_ORA__ex_d__ex3_OD();
extern void OnClock_ORA__ex_d__ex3_AD();
extern void OnClock_ORA__ex_d__ex3_MR();

// OR A, (IY+d)   -  ORA__IY_d__FD3  -  FD, B6, d
extern void OnClock_ORA__IY_d__FD3_OF();
extern void OnClock_ORA__ex_d__ex3_OD();
extern void OnClock_ORA__ex_d__ex3_AD();
extern void OnClock_ORA__ex_d__ex3_MR();

// XOR A, A   -  XORA_A_1  -  AF
extern void OnClock_XORA_A_1_OF();

// XOR A, B   -  XORA_B_1  -  A8
extern void OnClock_XORA_B_1_OF();

// XOR A, C   -  XORA_C_1  -  A9
extern void OnClock_XORA_C_1_OF();

// XOR A, D   -  XORA_D_1  -  AA
extern void OnClock_XORA_D_1_OF();

// XOR A, E   -  XORA_E_1  -  AB
extern void OnClock_XORA_E_1_OF();

// XOR A, H   -  XORA_H_1  -  AC
extern void OnClock_XORA_H_1_OF();

// XOR A, L   -  XORA_L_1  -  AD
extern void OnClock_XORA_L_1_OF();

// XOR A, n   -  XORA_n_2  -  EE, n
extern void OnClock_XORA_n_2_OF();
extern void OnClock_XORA_n_2_OD();

// XOR A, (HL)   -  XORA__HL__1  -  AE
extern void OnClock_XORA__HL__1_OF();

// XOR A, (IX+d)   -  XORA__IX_d__DD3  -  DD, AE, d
extern void OnClock_XORA__IX_d__DD3_OF();
extern void OnClock_XORA__ex_d__ex3_OD();
extern void OnClock_XORA__ex_d__ex3_AD();
extern void OnClock_XORA__ex_d__ex3_MR();

// XOR A, (IY+d)   -  XORA__IY_d__FD3  -  FD, AE, d
extern void OnClock_XORA__IY_d__FD3_OF();
extern void OnClock_XORA__ex_d__ex3_OD();
extern void OnClock_XORA__ex_d__ex3_AD();
extern void OnClock_XORA__ex_d__ex3_MR();

// CP A, A   -  CPA_A_1  -  BF
extern void OnClock_CPA_A_1_OF();

// CP A, B   -  CPA_B_1  -  B8
extern void OnClock_CPA_B_1_OF();

// CP A, C   -  CPA_C_1  -  B9
extern void OnClock_CPA_C_1_OF();

// CP A, D   -  CPA_D_1  -  BA
extern void OnClock_CPA_D_1_OF();

// CP A, E   -  CPA_E_1  -  BB
extern void OnClock_CPA_E_1_OF();

// CP A, H   -  CPA_H_1  -  BC
extern void OnClock_CPA_H_1_OF();

// CP A, L   -  CPA_L_1  -  BD
extern void OnClock_CPA_L_1_OF();

// CP A, n   -  CPA_n_2  -  FE, n
extern void OnClock_CPA_n_2_OF();
extern void OnClock_CPA_n_2_OD();

// CP A, (HL)   -  CPA__HL__1  -  BE
extern void OnClock_CPA__HL__1_OF();

// CP A, (IX+d)   -  CPA__IX_d__DD3  -  DD, BE, d
extern void OnClock_CPA__IX_d__DD3_OF();
extern void OnClock_CPA__ex_d__ex3_OD();
extern void OnClock_CPA__ex_d__ex3_AD();
extern void OnClock_CPA__ex_d__ex3_MR();

// CP A, (IY+d)   -  CPA__IY_d__FD3  -  FD, BE, d
extern void OnClock_CPA__IY_d__FD3_OF();
extern void OnClock_CPA__ex_d__ex3_OD();
extern void OnClock_CPA__ex_d__ex3_AD();
extern void OnClock_CPA__ex_d__ex3_MR();

// INC A   -  INCA_1  -  3C
extern void OnClock_INCA_1_OF();

// INC B   -  INCB_1  -  04
extern void OnClock_INCB_1_OF();

// INC C   -  INCC_1  -  0C
extern void OnClock_INCC_1_OF();

// INC D   -  INCD_1  -  14
extern void OnClock_INCD_1_OF();

// INC E   -  INCE_1  -  1C
extern void OnClock_INCE_1_OF();

// INC H   -  INCH_1  -  24
extern void OnClock_INCH_1_OF();

// INC L   -  INCL_1  -  2C
extern void OnClock_INCL_1_OF();

// INC (HL)   -  INC_HL__1  -  34
extern void OnClock_INC_HL__1_OF();
extern void OnClock_INC_HL__1_MR();

// INC (IX+d)   -  INC_IX_d__DD3  -  DD, 34, d
extern void OnClock_INC_IX_d__DD3_OF();
extern void OnClock_INC_ex_d__ex3_OD();
extern void OnClock_INC_ex_d__ex3_AD();
extern void OnClock_INC_IX_d__DD3_MR();
extern void OnClock_INC_ex_d__ex3_MW();

// INC (IY+d)   -  INC_IY_d__FD3  -  FD, 34, d
extern void OnClock_INC_IY_d__FD3_OF();
extern void OnClock_INC_ex_d__ex3_OD();
extern void OnClock_INC_ex_d__ex3_AD();
extern void OnClock_INC_IY_d__FD3_MR();
extern void OnClock_INC_ex_d__ex3_MW();

// DEC A   -  DECA_1  -  3D
extern void OnClock_DECA_1_OF();

// DEC B   -  DECB_1  -  05
extern void OnClock_DECB_1_OF();

// DEC C   -  DECC_1  -  0D
extern void OnClock_DECC_1_OF();

// DEC D   -  DECD_1  -  15
extern void OnClock_DECD_1_OF();

// DEC E   -  DECE_1  -  1D
extern void OnClock_DECE_1_OF();

// DEC H   -  DECH_1  -  25
extern void OnClock_DECH_1_OF();

// DEC L   -  DECL_1  -  2D
extern void OnClock_DECL_1_OF();

// DEC (HL)   -  DEC_HL__1  -  35
extern void OnClock_DEC_HL__1_OF();
extern void OnClock_DEC_HL__1_MR();

// DEC (IX+d)   -  DEC_IX_d__DD3  -  DD, 35, d
extern void OnClock_DEC_IX_d__DD3_OF();
extern void OnClock_DEC_ex_d__ex3_OD();
extern void OnClock_DEC_ex_d__ex3_AD();
extern void OnClock_DEC_IX_d__DD3_MR();
extern void OnClock_DEC_ex_d__ex3_MW();

// DEC (IY+d)   -  DEC_IY_d__FD3  -  FD, 35, d
extern void OnClock_DEC_IY_d__FD3_OF();
extern void OnClock_DEC_ex_d__ex3_OD();
extern void OnClock_DEC_ex_d__ex3_AD();
extern void OnClock_DEC_IY_d__FD3_MR();
extern void OnClock_DEC_ex_d__ex3_MW();

// DAA   -  DAA_1  -  27
extern void OnClock_DAA_1_OF();

// CPL A   -  CPLA_1  -  2F
extern void OnClock_CPLA_1_OF();

// NEG   -  NEG_ED2  -  ED, 44
extern void OnClock_NEG_ED2_OF();

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

// IM1   -  IM1_ED2  -  ED, 56
extern void OnClock_IM1_ED2_OF();

// IM2   -  IM2_ED2  -  ED, 5E
extern void OnClock_IM2_ED2_OF();

// ADD HL, BC   -  ADDHL_BC_1  -  09
extern void OnClock_ADDHL_BC_1_OF();
extern void OnClock_ADDHL_BC_1_OP();
extern void OnClock_ADDHL_BC_1_OP();

// ADD HL, DE   -  ADDHL_DE_1  -  19
extern void OnClock_ADDHL_DE_1_OF();
extern void OnClock_ADDHL_DE_1_OP();
extern void OnClock_ADDHL_DE_1_OP();

// ADD HL, HL   -  ADDHL_HL_1  -  29
extern void OnClock_ADDHL_HL_1_OF();
extern void OnClock_ADDHL_HL_1_OP();
extern void OnClock_ADDHL_HL_1_OP();

// ADD HL, SP   -  ADDHL_SP_1  -  39
extern void OnClock_ADDHL_SP_1_OF();
extern void OnClock_ADDHL_SP_1_OP();
extern void OnClock_ADDHL_SP_1_OP();

// ADD IX, BC   -  ADDIX_BC_DD2  -  DD, 09
extern void OnClock_ADDIX_BC_DD2_OF();
extern void OnClock_ADDIX_BC_DD2_OP();
extern void OnClock_ADDIX_BC_DD2_OP();

// ADD IX, DE   -  ADDIX_DE_DD2  -  DD, 19
extern void OnClock_ADDIX_DE_DD2_OF();
extern void OnClock_ADDIX_DE_DD2_OP();
extern void OnClock_ADDIX_DE_DD2_OP();

// ADD IX, IX   -  ADDIX_IX_DD2  -  DD, 29
extern void OnClock_ADDIX_IX_DD2_OF();
extern void OnClock_ADDIX_IX_DD2_OP();
extern void OnClock_ADDIX_IX_DD2_OP();

// ADD IX, SP   -  ADDIX_SP_DD2  -  DD, 39
extern void OnClock_ADDIX_SP_DD2_OF();
extern void OnClock_ADDIX_SP_DD2_OP();
extern void OnClock_ADDIX_SP_DD2_OP();

// ADD IY, BC   -  ADDIY_BC_FD2  -  FD, 09
extern void OnClock_ADDIY_BC_FD2_OF();
extern void OnClock_ADDIY_BC_FD2_OP();
extern void OnClock_ADDIY_BC_FD2_OP();

// ADD IY, DE   -  ADDIY_DE_FD2  -  FD, 19
extern void OnClock_ADDIY_DE_FD2_OF();
extern void OnClock_ADDIY_DE_FD2_OP();
extern void OnClock_ADDIY_DE_FD2_OP();

// ADD IY, IY   -  ADDIY_IY_FD2  -  FD, 29
extern void OnClock_ADDIY_IY_FD2_OF();
extern void OnClock_ADDIY_IY_FD2_OP();
extern void OnClock_ADDIY_IY_FD2_OP();

// ADD IY, SP   -  ADDIY_SP_FD2  -  FD, 39
extern void OnClock_ADDIY_SP_FD2_OF();
extern void OnClock_ADDIY_SP_FD2_OP();
extern void OnClock_ADDIY_SP_FD2_OP();

// ADC HL, BC   -  ADCHL_BC_ED2  -  ED, 4A
extern void OnClock_ADCHL_BC_ED2_OF();
extern void OnClock_ADCHL_BC_ED2_OP();
extern void OnClock_ADCHL_BC_ED2_OP();

// ADC HL, DE   -  ADCHL_DE_ED2  -  ED, 5A
extern void OnClock_ADCHL_DE_ED2_OF();
extern void OnClock_ADCHL_DE_ED2_OP();
extern void OnClock_ADCHL_DE_ED2_OP();

// ADC HL, HL   -  ADCHL_HL_ED2  -  ED, 6A
extern void OnClock_ADCHL_HL_ED2_OF();
extern void OnClock_ADCHL_HL_ED2_OP();
extern void OnClock_ADCHL_HL_ED2_OP();

// ADC HL, SP   -  ADCHL_SP_ED2  -  ED, 7A
extern void OnClock_ADCHL_SP_ED2_OF();
extern void OnClock_ADCHL_SP_ED2_OP();
extern void OnClock_ADCHL_SP_ED2_OP();

// SBC HL, BC   -  SBCHL_BC_ED2  -  ED, 42
extern void OnClock_SBCHL_BC_ED2_OF();
extern void OnClock_SBCHL_BC_ED2_OP();
extern void OnClock_SBCHL_BC_ED2_OP();

// SBC HL, DE   -  SBCHL_DE_ED2  -  ED, 52
extern void OnClock_SBCHL_DE_ED2_OF();
extern void OnClock_SBCHL_DE_ED2_OP();
extern void OnClock_SBCHL_DE_ED2_OP();

// SBC HL, HL   -  SBCHL_HL_ED2  -  ED, 62
extern void OnClock_SBCHL_HL_ED2_OF();
extern void OnClock_SBCHL_HL_ED2_OP();
extern void OnClock_SBCHL_HL_ED2_OP();

// SBC HL, SP   -  SBCHL_SP_ED2  -  ED, 72
extern void OnClock_SBCHL_SP_ED2_OF();
extern void OnClock_SBCHL_SP_ED2_OP();
extern void OnClock_SBCHL_SP_ED2_OP();

// INC BC   -  INCBC_1  -  03
extern void OnClock_INCBC_1_OF();

// INC DE   -  INCDE_1  -  13
extern void OnClock_INCDE_1_OF();

// INC HL   -  INCHL_1  -  23
extern void OnClock_INCHL_1_OF();

// INC SP   -  INCSP_1  -  33
extern void OnClock_INCSP_1_OF();

// INC IX   -  INCIX_DD2  -  DD, 23
extern void OnClock_INCIX_DD2_OF();

// INC IY   -  INCIY_FD2  -  FD, 23
extern void OnClock_INCIY_FD2_OF();

// DEC BC   -  DECBC_1  -  0B
extern void OnClock_DECBC_1_OF();

// DEC DE   -  DECDE_1  -  1B
extern void OnClock_DECDE_1_OF();

// DEC HL   -  DECHL_1  -  2B
extern void OnClock_DECHL_1_OF();

// DEC SP   -  DECSP_1  -  3B
extern void OnClock_DECSP_1_OF();

// DEC IX   -  DECIX_DD2  -  DD, 2B
extern void OnClock_DECIX_DD2_OF();

// DEC IY   -  DECIY_FD2  -  FD, 2B
extern void OnClock_DECIY_FD2_OF();

// RLCA   -  RLCA_1  -  07
extern void OnClock_RLCA_1_OF();

// RLA   -  RLA_1  -  17
extern void OnClock_RLA_1_OF();

// RRCA   -  RRCA_1  -  0F
extern void OnClock_RRCA_1_OF();

// RRA   -  RRA_1  -  1F
extern void OnClock_RRA_1_OF();

// RLC A   -  RLCA_CB2  -  CB, 07
extern void OnClock_RLCA_CB2_OF();

// RLC B   -  RLCB_CB2  -  CB, 00
extern void OnClock_RLCB_CB2_OF();

// RLC C   -  RLCC_CB2  -  CB, 01
extern void OnClock_RLCC_CB2_OF();

// RLC D   -  RLCD_CB2  -  CB, 02
extern void OnClock_RLCD_CB2_OF();

// RLC E   -  RLCE_CB2  -  CB, 03
extern void OnClock_RLCE_CB2_OF();

// RLC H   -  RLCH_CB2  -  CB, 04
extern void OnClock_RLCH_CB2_OF();

// RLC L   -  RLCL_CB2  -  CB, 05
extern void OnClock_RLCL_CB2_OF();

// RLC (HL)   -  RLC_HL__CB2  -  CB, 06
extern void OnClock_RLC_HL__CB2_OF();
extern void OnClock_RLC_HL__CB2_MR();

// RLC (IX+d)   -  RLC_IX_d__DD4  -  DD, CB, d, 06
extern void OnClock_RLC_ex_d__ex4_OD();
extern void OnClock_RLC_ex_d__ex4_FD();
extern void OnClock_RLC_IX_d__DD4_MR();
extern void OnClock_RLC_ex_d__ex4_MW();

// RLC (IY+d)   -  RLC_IY_d__FD4  -  FD, CB, d, 06
extern void OnClock_RLC_ex_d__ex4_OD();
extern void OnClock_RLC_ex_d__ex4_FD();
extern void OnClock_RLC_IY_d__FD4_MR();
extern void OnClock_RLC_ex_d__ex4_MW();

// RL A   -  RLA_CB2  -  CB, 17
extern void OnClock_RLA_CB2_OF();

// RL B   -  RLB_CB2  -  CB, 10
extern void OnClock_RLB_CB2_OF();

// RL C   -  RLC_CB2  -  CB, 11
extern void OnClock_RLC_CB2_OF();

// RL D   -  RLD_CB2  -  CB, 12
extern void OnClock_RLD_CB2_OF();

// RL E   -  RLE_CB2  -  CB, 13
extern void OnClock_RLE_CB2_OF();

// RL H   -  RLH_CB2  -  CB, 14
extern void OnClock_RLH_CB2_OF();

// RL L   -  RLL_CB2  -  CB, 15
extern void OnClock_RLL_CB2_OF();

// RL (HL)   -  RL_HL__CB2  -  CB, 16
extern void OnClock_RL_HL__CB2_OF();
extern void OnClock_RL_HL__CB2_MR();

// RL (IX+d)   -  RL_IX_d__DD4  -  DD, CB, d, 16
extern void OnClock_RL_ex_d__ex4_OD();
extern void OnClock_RL_ex_d__ex4_FD();
extern void OnClock_RL_IX_d__DD4_MR();
extern void OnClock_RL_ex_d__ex4_MW();

// RL (IY+d)   -  RL_IY_d__FD4  -  FD, CB, d, 16
extern void OnClock_RL_ex_d__ex4_OD();
extern void OnClock_RL_ex_d__ex4_FD();
extern void OnClock_RL_IY_d__FD4_MR();
extern void OnClock_RL_ex_d__ex4_MW();

// RRC A   -  RRCA_CB2  -  CB, 0F

// RRC B   -  RRCB_CB2  -  CB, 08

// RRC C   -  RRCC_CB2  -  CB, 09

// RRC D   -  RRCD_CB2  -  CB, 0A

// RRC E   -  RRCE_CB2  -  CB, 0B

// RRC H   -  RRCH_CB2  -  CB, 0C

// RRC L   -  RRCL_CB2  -  CB, 0D

// RRC (HL)   -  RRC_HL__CB2  -  CB, 0E
extern void OnClock_RRC_HL__CB2_OF();
extern void OnClock_RRC_HL__CB2_MR();

// RRC (IX+d)   -  RRC_IX_d__DD4  -  DD, CB, d, 0E
extern void OnClock_RRC_ex_d__ex4_OD();
extern void OnClock_RRC_ex_d__ex4_FD();
extern void OnClock_RRC_IX_d__DD4_MR();
extern void OnClock_RRC_ex_d__ex4_MW();

// RRC (IY+d)   -  RRC_IY_d__FD4  -  FD, CB, d, 0E
extern void OnClock_RRC_ex_d__ex4_OD();
extern void OnClock_RRC_ex_d__ex4_FD();
extern void OnClock_RRC_IY_d__FD4_MR();
extern void OnClock_RRC_ex_d__ex4_MW();

// RR A   -  RRA_CB2  -  CB, 1F
extern void OnClock_RRA_CB2_OF();

// RR B   -  RRB_CB2  -  CB, 18
extern void OnClock_RRB_CB2_OF();

// RR C   -  RRC_CB2  -  CB, 19
extern void OnClock_RRC_CB2_OF();

// RR D   -  RRD_CB2  -  CB, 1A
extern void OnClock_RRD_CB2_OF();

// RR E   -  RRE_CB2  -  CB, 1B
extern void OnClock_RRE_CB2_OF();

// RR H   -  RRH_CB2  -  CB, 1C
extern void OnClock_RRH_CB2_OF();

// RR L   -  RRL_CB2  -  CB, 1D
extern void OnClock_RRL_CB2_OF();

// RR (HL)   -  RR_HL__CB2  -  CB, 1E
extern void OnClock_RR_HL__CB2_OF();
extern void OnClock_RR_HL__CB2_MR();

// RR (IX+d)   -  RR_IX_d__DD4  -  DD, CB, d, 1E
extern void OnClock_RR_ex_d__ex4_OD();
extern void OnClock_RR_ex_d__ex4_FD();
extern void OnClock_RR_IX_d__DD4_MR();
extern void OnClock_RR_ex_d__ex4_MW();

// RR (IY+d)   -  RR_IY_d__FD4  -  FD, CB, d, 1E
extern void OnClock_RR_ex_d__ex4_OD();
extern void OnClock_RR_ex_d__ex4_FD();
extern void OnClock_RR_IY_d__FD4_MR();
extern void OnClock_RR_ex_d__ex4_MW();

// SLA A   -  SLAA_CB2  -  CB, 27
extern void OnClock_SLAA_CB2_OF();

// SLA B   -  SLAB_CB2  -  CB, 20
extern void OnClock_SLAB_CB2_OF();

// SLA C   -  SLAC_CB2  -  CB, 21
extern void OnClock_SLAC_CB2_OF();

// SLA D   -  SLAD_CB2  -  CB, 22
extern void OnClock_SLAD_CB2_OF();

// SLA E   -  SLAE_CB2  -  CB, 23
extern void OnClock_SLAE_CB2_OF();

// SLA H   -  SLAH_CB2  -  CB, 24
extern void OnClock_SLAH_CB2_OF();

// SLA L   -  SLAL_CB2  -  CB, 25
extern void OnClock_SLAL_CB2_OF();

// SLA (HL)   -  SLA_HL__CB2  -  CB, 26
extern void OnClock_SLA_HL__CB2_OF();
extern void OnClock_SLA_HL__CB2_MR();

// SLA (IX+d)   -  SLA_IX_d__DD4  -  DD, CB, d, 26
extern void OnClock_SLA_ex_d__ex4_OD();
extern void OnClock_SLA_ex_d__ex4_FD();
extern void OnClock_SLA_IX_d__DD4_MR();
extern void OnClock_SLA_ex_d__ex4_MW();

// SLA (IY+d)   -  SLA_IY_d__FD4  -  FD, CB, d, 26
extern void OnClock_SLA_ex_d__ex4_OD();
extern void OnClock_SLA_ex_d__ex4_FD();
extern void OnClock_SLA_IY_d__FD4_MR();
extern void OnClock_SLA_ex_d__ex4_MW();

// SRA A   -  SRAA_CB2  -  CB, 2F
extern void OnClock_SRAA_CB2_OF();

// SRA B   -  SRAB_CB2  -  CB, 28
extern void OnClock_SRAB_CB2_OF();

// SRA C   -  SRAC_CB2  -  CB, 29
extern void OnClock_SRAC_CB2_OF();

// SRA D   -  SRAD_CB2  -  CB, 2A
extern void OnClock_SRAD_CB2_OF();

// SRA E   -  SRAE_CB2  -  CB, 2B
extern void OnClock_SRAE_CB2_OF();

// SRA H   -  SRAH_CB2  -  CB, 2C
extern void OnClock_SRAH_CB2_OF();

// SRA L   -  SRAL_CB2  -  CB, 2D
extern void OnClock_SRAL_CB2_OF();

// SRA (HL)   -  SRA_HL__CB2  -  CB, 2E
extern void OnClock_SRA_HL__CB2_OF();
extern void OnClock_SRA_HL__CB2_MR();

// SRA (IX+d)   -  SRA_IX_d__DD4  -  DD, CB, d, 2E
extern void OnClock_SRA_ex_d__ex4_OD();
extern void OnClock_SRA_ex_d__ex4_FD();
extern void OnClock_SRA_IX_d__DD4_MR();
extern void OnClock_SRA_ex_d__ex4_MW();

// SRA (IY+d)   -  SRA_IY_d__FD4  -  FD, CB, d, 2E
extern void OnClock_SRA_ex_d__ex4_OD();
extern void OnClock_SRA_ex_d__ex4_FD();
extern void OnClock_SRA_IY_d__FD4_MR();
extern void OnClock_SRA_ex_d__ex4_MW();

// SRL A   -  SRLA_CB2  -  CB, 3F
extern void OnClock_SRLA_CB2_OF();

// SRL B   -  SRLB_CB2  -  CB, 38
extern void OnClock_SRLB_CB2_OF();

// SRL C   -  SRLC_CB2  -  CB, 39
extern void OnClock_SRLC_CB2_OF();

// SRL D   -  SRLD_CB2  -  CB, 3A
extern void OnClock_SRLD_CB2_OF();

// SRL E   -  SRLE_CB2  -  CB, 3B
extern void OnClock_SRLE_CB2_OF();

// SRL H   -  SRLH_CB2  -  CB, 3C
extern void OnClock_SRLH_CB2_OF();

// SRL L   -  SRLL_CB2  -  CB, 3D
extern void OnClock_SRLL_CB2_OF();

// SRL (HL)   -  SRL_HL__CB2  -  CB, 3E
extern void OnClock_SRL_HL__CB2_OF();
extern void OnClock_SRL_HL__CB2_MR();

// SRL (IX+d)   -  SRL_IX_d__DD4  -  DD, CB, d, 3E
extern void OnClock_SRL_ex_d__ex4_OD();
extern void OnClock_SRL_ex_d__ex4_FD();
extern void OnClock_SRL_IX_d__DD4_MR();
extern void OnClock_SRL_ex_d__ex4_MW();

// SRL (IY+d)   -  SRL_IY_d__FD4  -  FD, CB, d, 3E
extern void OnClock_SRL_ex_d__ex4_OD();
extern void OnClock_SRL_ex_d__ex4_FD();
extern void OnClock_SRL_IY_d__FD4_MR();
extern void OnClock_SRL_ex_d__ex4_MW();

// RLD A   -  RLDA_ED2  -  ED, 6F
extern void OnClock_RLDA_ED2_OF();
extern void OnClock_RLDA_ED2_OP();
extern void OnClock_RLDA_ED2_OP();
extern void OnClock_RLDA_ED2_OP();

// RRD A   -  RRDA_ED2  -  ED, 67
extern void OnClock_RRDA_ED2_OF();
extern void OnClock_RRDA_ED2_OP();
extern void OnClock_RRDA_ED2_OP();
extern void OnClock_RRDA_ED2_OP();

// BIT 0, A   -  BIT0_A_CB2  -  CB, 47
extern void OnClock_BIT0_A_CB2_OF();

// BIT 1, A   -  BIT1_A_CB2  -  CB, 4F
extern void OnClock_BIT1_A_CB2_OF();

// BIT 2, A   -  BIT2_A_CB2  -  CB, 57
extern void OnClock_BIT2_A_CB2_OF();

// BIT 3, A   -  BIT3_A_CB2  -  CB, 5F
extern void OnClock_BIT3_A_CB2_OF();

// BIT 4, A   -  BIT4_A_CB2  -  CB, 67
extern void OnClock_BIT4_A_CB2_OF();

// BIT 5, A   -  BIT5_A_CB2  -  CB, 6F
extern void OnClock_BIT5_A_CB2_OF();

// BIT 6, A   -  BIT6_A_CB2  -  CB, 77
extern void OnClock_BIT6_A_CB2_OF();

// BIT 7, A   -  BIT7_A_CB2  -  CB, 7F
extern void OnClock_BIT7_A_CB2_OF();

// BIT 0, B   -  BIT0_B_CB2  -  CB, 40
extern void OnClock_BIT0_B_CB2_OF();

// BIT 1, B   -  BIT1_B_CB2  -  CB, 48
extern void OnClock_BIT1_B_CB2_OF();

// BIT 2, B   -  BIT2_B_CB2  -  CB, 50
extern void OnClock_BIT2_B_CB2_OF();

// BIT 3, B   -  BIT3_B_CB2  -  CB, 58
extern void OnClock_BIT3_B_CB2_OF();

// BIT 4, B   -  BIT4_B_CB2  -  CB, 60
extern void OnClock_BIT4_B_CB2_OF();

// BIT 5, B   -  BIT5_B_CB2  -  CB, 68
extern void OnClock_BIT5_B_CB2_OF();

// BIT 6, B   -  BIT6_B_CB2  -  CB, 70
extern void OnClock_BIT6_B_CB2_OF();

// BIT 7, B   -  BIT7_B_CB2  -  CB, 78
extern void OnClock_BIT7_B_CB2_OF();

// BIT 0, C   -  BIT0_C_CB2  -  CB, 41
extern void OnClock_BIT0_C_CB2_OF();

// BIT 1, C   -  BIT1_C_CB2  -  CB, 49
extern void OnClock_BIT1_C_CB2_OF();

// BIT 2, C   -  BIT2_C_CB2  -  CB, 51
extern void OnClock_BIT2_C_CB2_OF();

// BIT 3, C   -  BIT3_C_CB2  -  CB, 59
extern void OnClock_BIT3_C_CB2_OF();

// BIT 4, C   -  BIT4_C_CB2  -  CB, 61
extern void OnClock_BIT4_C_CB2_OF();

// BIT 5, C   -  BIT5_C_CB2  -  CB, 69
extern void OnClock_BIT5_C_CB2_OF();

// BIT 6, C   -  BIT6_C_CB2  -  CB, 71
extern void OnClock_BIT6_C_CB2_OF();

// BIT 7, C   -  BIT7_C_CB2  -  CB, 79
extern void OnClock_BIT7_C_CB2_OF();

// BIT 0, D   -  BIT0_D_CB2  -  CB, 42
extern void OnClock_BIT0_D_CB2_OF();

// BIT 1, D   -  BIT1_D_CB2  -  CB, 4A
extern void OnClock_BIT1_D_CB2_OF();

// BIT 2, D   -  BIT2_D_CB2  -  CB, 52
extern void OnClock_BIT2_D_CB2_OF();

// BIT 3, D   -  BIT3_D_CB2  -  CB, 5A
extern void OnClock_BIT3_D_CB2_OF();

// BIT 4, D   -  BIT4_D_CB2  -  CB, 62
extern void OnClock_BIT4_D_CB2_OF();

// BIT 5, D   -  BIT5_D_CB2  -  CB, 6A
extern void OnClock_BIT5_D_CB2_OF();

// BIT 6, D   -  BIT6_D_CB2  -  CB, 72
extern void OnClock_BIT6_D_CB2_OF();

// BIT 7, D   -  BIT7_D_CB2  -  CB, 7A
extern void OnClock_BIT7_D_CB2_OF();

// BIT 0, E   -  BIT0_E_CB2  -  CB, 43
extern void OnClock_BIT0_E_CB2_OF();

// BIT 1, E   -  BIT1_E_CB2  -  CB, 4B
extern void OnClock_BIT1_E_CB2_OF();

// BIT 2, E   -  BIT2_E_CB2  -  CB, 53
extern void OnClock_BIT2_E_CB2_OF();

// BIT 3, E   -  BIT3_E_CB2  -  CB, 5B
extern void OnClock_BIT3_E_CB2_OF();

// BIT 4, E   -  BIT4_E_CB2  -  CB, 63
extern void OnClock_BIT4_E_CB2_OF();

// BIT 5, E   -  BIT5_E_CB2  -  CB, 6B
extern void OnClock_BIT5_E_CB2_OF();

// BIT 6, E   -  BIT6_E_CB2  -  CB, 73
extern void OnClock_BIT6_E_CB2_OF();

// BIT 7, E   -  BIT7_E_CB2  -  CB, 7B
extern void OnClock_BIT7_E_CB2_OF();

// BIT 0, H   -  BIT0_H_CB2  -  CB, 44
extern void OnClock_BIT0_H_CB2_OF();

// BIT 1, H   -  BIT1_H_CB2  -  CB, 4C
extern void OnClock_BIT1_H_CB2_OF();

// BIT 2, H   -  BIT2_H_CB2  -  CB, 54
extern void OnClock_BIT2_H_CB2_OF();

// BIT 3, H   -  BIT3_H_CB2  -  CB, 5C
extern void OnClock_BIT3_H_CB2_OF();

// BIT 4, H   -  BIT4_H_CB2  -  CB, 64
extern void OnClock_BIT4_H_CB2_OF();

// BIT 5, H   -  BIT5_H_CB2  -  CB, 6C
extern void OnClock_BIT5_H_CB2_OF();

// BIT 6, H   -  BIT6_H_CB2  -  CB, 74
extern void OnClock_BIT6_H_CB2_OF();

// BIT 7, H   -  BIT7_H_CB2  -  CB, 7C
extern void OnClock_BIT7_H_CB2_OF();

// BIT 0, L   -  BIT0_L_CB2  -  CB, 45
extern void OnClock_BIT0_L_CB2_OF();

// BIT 1, L   -  BIT1_L_CB2  -  CB, 4D
extern void OnClock_BIT1_L_CB2_OF();

// BIT 2, L   -  BIT2_L_CB2  -  CB, 55
extern void OnClock_BIT2_L_CB2_OF();

// BIT 3, L   -  BIT3_L_CB2  -  CB, 5D
extern void OnClock_BIT3_L_CB2_OF();

// BIT 4, L   -  BIT4_L_CB2  -  CB, 65
extern void OnClock_BIT4_L_CB2_OF();

// BIT 5, L   -  BIT5_L_CB2  -  CB, 6D
extern void OnClock_BIT5_L_CB2_OF();

// BIT 6, L   -  BIT6_L_CB2  -  CB, 75
extern void OnClock_BIT6_L_CB2_OF();

// BIT 7, L   -  BIT7_L_CB2  -  CB, 7D
extern void OnClock_BIT7_L_CB2_OF();

// BIT 0, (HL)   -  BIT0__HL__CB2  -  CB, 46
extern void OnClock_BIT0__HL__CB2_OF();
extern void OnClock_BIT0__HL__CB2_MR();

// BIT 1, (HL)   -  BIT1__HL__CB2  -  CB, 4E
extern void OnClock_BIT1__HL__CB2_OF();
extern void OnClock_BIT1__HL__CB2_MR();

// BIT 2, (HL)   -  BIT2__HL__CB2  -  CB, 56
extern void OnClock_BIT2__HL__CB2_OF();
extern void OnClock_BIT2__HL__CB2_MR();

// BIT 3, (HL)   -  BIT3__HL__CB2  -  CB, 5E
extern void OnClock_BIT3__HL__CB2_OF();
extern void OnClock_BIT3__HL__CB2_MR();

// BIT 4, (HL)   -  BIT4__HL__CB2  -  CB, 66
extern void OnClock_BIT4__HL__CB2_OF();
extern void OnClock_BIT4__HL__CB2_MR();

// BIT 5, (HL)   -  BIT5__HL__CB2  -  CB, 6E
extern void OnClock_BIT5__HL__CB2_OF();
extern void OnClock_BIT5__HL__CB2_MR();

// BIT 6, (HL)   -  BIT6__HL__CB2  -  CB, 76
extern void OnClock_BIT6__HL__CB2_OF();
extern void OnClock_BIT6__HL__CB2_MR();

// BIT 7, (HL)   -  BIT7__HL__CB2  -  CB, 7E
extern void OnClock_BIT7__HL__CB2_OF();
extern void OnClock_BIT7__HL__CB2_MR();

// BIT 0, (IX+d)   -  BIT0__IX_d__DD4  -  DD, CB, d, 46
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT0__IX_d__DD4_MR();

// BIT 0, (IY+d)   -  BIT0__IY_d__FD4  -  FD, CB, d, 46
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT0__IY_d__FD4_MR();

// BIT 1, (IX+d)   -  BIT1__IX_d__DD4  -  DD, CB, d, 4E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT1__IX_d__DD4_MR();

// BIT 1, (IY+d)   -  BIT1__IY_d__FD4  -  FD, CB, d, 4E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT1__IY_d__FD4_MR();

// BIT 2, (IX+d)   -  BIT2__IX_d__DD4  -  DD, CB, d, 56
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT2__IX_d__DD4_MR();

// BIT 2, (IY+d)   -  BIT2__IY_d__FD4  -  FD, CB, d, 56
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT2__IY_d__FD4_MR();

// BIT 3, (IX+d)   -  BIT3__IX_d__DD4  -  DD, CB, d, 5E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT3__IX_d__DD4_MR();

// BIT 3, (IY+d)   -  BIT3__IY_d__FD4  -  FD, CB, d, 5E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT3__IY_d__FD4_MR();

// BIT 4, (IX+d)   -  BIT4__IX_d__DD4  -  DD, CB, d, 66
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT4__IX_d__DD4_MR();

// BIT 4, (IY+d)   -  BIT4__IY_d__FD4  -  FD, CB, d, 66
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT4__IY_d__FD4_MR();

// BIT 5, (IX+d)   -  BIT5__IX_d__DD4  -  DD, CB, d, 6E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT5__IX_d__DD4_MR();

// BIT 5, (IY+d)   -  BIT5__IY_d__FD4  -  FD, CB, d, 6E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT5__IY_d__FD4_MR();

// BIT 6, (IX+d)   -  BIT6__IX_d__DD4  -  DD, CB, d, 76
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT6__IX_d__DD4_MR();

// BIT 6, (IY+d)   -  BIT6__IY_d__FD4  -  FD, CB, d, 76
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT6__IY_d__FD4_MR();

// BIT 7, (IX+d)   -  BIT7__IX_d__DD4  -  DD, CB, d, 7E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT7__IX_d__DD4_MR();

// BIT 7, (IY+d)   -  BIT7__IY_d__FD4  -  FD, CB, d, 7E
extern void OnClock_BITb__ex_d__ex4_OD();
extern void OnClock_BITb__ex_d__ex4_FD();
extern void OnClock_BIT7__IY_d__FD4_MR();

// SET 0, A   -  SET0_A_CB2  -  CB, C7
extern void OnClock_SET0_A_CB2_OF();

// SET 1, A   -  SET1_A_CB2  -  CB, CF
extern void OnClock_SET1_A_CB2_OF();

// SET 2, A   -  SET2_A_CB2  -  CB, D7
extern void OnClock_SET2_A_CB2_OF();

// SET 3, A   -  SET3_A_CB2  -  CB, DF
extern void OnClock_SET3_A_CB2_OF();

// SET 4, A   -  SET4_A_CB2  -  CB, E7
extern void OnClock_SET4_A_CB2_OF();

// SET 5, A   -  SET5_A_CB2  -  CB, EF
extern void OnClock_SET5_A_CB2_OF();

// SET 6, A   -  SET6_A_CB2  -  CB, F7
extern void OnClock_SET6_A_CB2_OF();

// SET 7, A   -  SET7_A_CB2  -  CB, FF
extern void OnClock_SET7_A_CB2_OF();

// SET 0, B   -  SET0_B_CB2  -  CB, C0
extern void OnClock_SET0_B_CB2_OF();

// SET 1, B   -  SET1_B_CB2  -  CB, C8
extern void OnClock_SET1_B_CB2_OF();

// SET 2, B   -  SET2_B_CB2  -  CB, D0
extern void OnClock_SET2_B_CB2_OF();

// SET 3, B   -  SET3_B_CB2  -  CB, D8
extern void OnClock_SET3_B_CB2_OF();

// SET 4, B   -  SET4_B_CB2  -  CB, E0
extern void OnClock_SET4_B_CB2_OF();

// SET 5, B   -  SET5_B_CB2  -  CB, E8
extern void OnClock_SET5_B_CB2_OF();

// SET 6, B   -  SET6_B_CB2  -  CB, F0
extern void OnClock_SET6_B_CB2_OF();

// SET 7, B   -  SET7_B_CB2  -  CB, F8
extern void OnClock_SET7_B_CB2_OF();

// SET 0, C   -  SET0_C_CB2  -  CB, C1
extern void OnClock_SET0_C_CB2_OF();

// SET 1, C   -  SET1_C_CB2  -  CB, C9
extern void OnClock_SET1_C_CB2_OF();

// SET 2, C   -  SET2_C_CB2  -  CB, D1
extern void OnClock_SET2_C_CB2_OF();

// SET 3, C   -  SET3_C_CB2  -  CB, D9
extern void OnClock_SET3_C_CB2_OF();

// SET 4, C   -  SET4_C_CB2  -  CB, E1
extern void OnClock_SET4_C_CB2_OF();

// SET 5, C   -  SET5_C_CB2  -  CB, E9
extern void OnClock_SET5_C_CB2_OF();

// SET 6, C   -  SET6_C_CB2  -  CB, F1
extern void OnClock_SET6_C_CB2_OF();

// SET 7, C   -  SET7_C_CB2  -  CB, F9
extern void OnClock_SET7_C_CB2_OF();

// SET 0, D   -  SET0_D_CB2  -  CB, C2
extern void OnClock_SET0_D_CB2_OF();

// SET 1, D   -  SET1_D_CB2  -  CB, CA
extern void OnClock_SET1_D_CB2_OF();

// SET 2, D   -  SET2_D_CB2  -  CB, D2
extern void OnClock_SET2_D_CB2_OF();

// SET 3, D   -  SET3_D_CB2  -  CB, DA
extern void OnClock_SET3_D_CB2_OF();

// SET 4, D   -  SET4_D_CB2  -  CB, E2
extern void OnClock_SET4_D_CB2_OF();

// SET 5, D   -  SET5_D_CB2  -  CB, EA
extern void OnClock_SET5_D_CB2_OF();

// SET 6, D   -  SET6_D_CB2  -  CB, F2
extern void OnClock_SET6_D_CB2_OF();

// SET 7, D   -  SET7_D_CB2  -  CB, FA
extern void OnClock_SET7_D_CB2_OF();

// SET 0, E   -  SET0_E_CB2  -  CB, C3
extern void OnClock_SET0_E_CB2_OF();

// SET 1, E   -  SET1_E_CB2  -  CB, CB

// SET 2, E   -  SET2_E_CB2  -  CB, D3
extern void OnClock_SET2_E_CB2_OF();

// SET 3, E   -  SET3_E_CB2  -  CB, DB
extern void OnClock_SET3_E_CB2_OF();

// SET 4, E   -  SET4_E_CB2  -  CB, E3
extern void OnClock_SET4_E_CB2_OF();

// SET 5, E   -  SET5_E_CB2  -  CB, EB
extern void OnClock_SET5_E_CB2_OF();

// SET 6, E   -  SET6_E_CB2  -  CB, F3
extern void OnClock_SET6_E_CB2_OF();

// SET 7, E   -  SET7_E_CB2  -  CB, FB
extern void OnClock_SET7_E_CB2_OF();

// SET 0, H   -  SET0_H_CB2  -  CB, C4
extern void OnClock_SET0_H_CB2_OF();

// SET 1, H   -  SET1_H_CB2  -  CB, CC
extern void OnClock_SET1_H_CB2_OF();

// SET 2, H   -  SET2_H_CB2  -  CB, D4
extern void OnClock_SET2_H_CB2_OF();

// SET 3, H   -  SET3_H_CB2  -  CB, DC
extern void OnClock_SET3_H_CB2_OF();

// SET 4, H   -  SET4_H_CB2  -  CB, E4
extern void OnClock_SET4_H_CB2_OF();

// SET 5, H   -  SET5_H_CB2  -  CB, EC
extern void OnClock_SET5_H_CB2_OF();

// SET 6, H   -  SET6_H_CB2  -  CB, F4
extern void OnClock_SET6_H_CB2_OF();

// SET 7, H   -  SET7_H_CB2  -  CB, FC
extern void OnClock_SET7_H_CB2_OF();

// SET 0, L   -  SET0_L_CB2  -  CB, C5
extern void OnClock_SET0_L_CB2_OF();

// SET 1, L   -  SET1_L_CB2  -  CB, CD
extern void OnClock_SET1_L_CB2_OF();

// SET 2, L   -  SET2_L_CB2  -  CB, D5
extern void OnClock_SET2_L_CB2_OF();

// SET 3, L   -  SET3_L_CB2  -  CB, DD

// SET 4, L   -  SET4_L_CB2  -  CB, E5
extern void OnClock_SET4_L_CB2_OF();

// SET 5, L   -  SET5_L_CB2  -  CB, ED

// SET 6, L   -  SET6_L_CB2  -  CB, F5
extern void OnClock_SET6_L_CB2_OF();

// SET 7, L   -  SET7_L_CB2  -  CB, FD

// SET 0, (HL)   -  SET0__HL__CB2  -  CB, C6
extern void OnClock_SET0__HL__CB2_OF();
extern void OnClock_SET0__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 1, (HL)   -  SET1__HL__CB2  -  CB, CE
extern void OnClock_SET1__HL__CB2_OF();
extern void OnClock_SET1__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 2, (HL)   -  SET2__HL__CB2  -  CB, D6
extern void OnClock_SET2__HL__CB2_OF();
extern void OnClock_SET2__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 3, (HL)   -  SET3__HL__CB2  -  CB, DE
extern void OnClock_SET3__HL__CB2_OF();
extern void OnClock_SET3__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 4, (HL)   -  SET4__HL__CB2  -  CB, E6
extern void OnClock_SET4__HL__CB2_OF();
extern void OnClock_SET4__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 5, (HL)   -  SET5__HL__CB2  -  CB, EE
extern void OnClock_SET5__HL__CB2_OF();
extern void OnClock_SET5__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 6, (HL)   -  SET6__HL__CB2  -  CB, F6
extern void OnClock_SET6__HL__CB2_OF();
extern void OnClock_SET6__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 7, (HL)   -  SET7__HL__CB2  -  CB, FE
extern void OnClock_SET7__HL__CB2_OF();
extern void OnClock_SET7__HL__CB2_MR();
extern void OnClock_SETb__HL__CB2_MW();

// SET 0, (IX+d)   -  SET0__IX_d__DD4  -  DD, CB, d, C6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET0__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 0, (IY+d)   -  SET0__IY_d__FD4  -  FD, CB, d, C6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET0__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 1, (IX+d)   -  SET1__IX_d__DD4  -  DD, CB, d, CE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET1__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 1, (IY+d)   -  SET1__IY_d__FD4  -  FD, CB, d, CE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET1__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 2, (IX+d)   -  SET2__IX_d__DD4  -  DD, CB, d, D6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET2__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 2, (IY+d)   -  SET2__IY_d__FD4  -  FD, CB, d, D6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET2__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 3, (IX+d)   -  SET3__IX_d__DD4  -  DD, CB, d, DE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET3__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 3, (IY+d)   -  SET3__IY_d__FD4  -  FD, CB, d, DE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET3__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 4, (IX+d)   -  SET4__IX_d__DD4  -  DD, CB, d, E6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET4__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 4, (IY+d)   -  SET4__IY_d__FD4  -  FD, CB, d, E6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET4__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 5, (IX+d)   -  SET5__IX_d__DD4  -  DD, CB, d, EE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET5__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 5, (IY+d)   -  SET5__IY_d__FD4  -  FD, CB, d, EE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET5__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 6, (IX+d)   -  SET6__IX_d__DD4  -  DD, CB, d, F6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET6__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 6, (IY+d)   -  SET6__IY_d__FD4  -  FD, CB, d, F6
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET6__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 7, (IX+d)   -  SET7__IX_d__DD4  -  DD, CB, d, FE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET7__IX_d__DD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// SET 7, (IY+d)   -  SET7__IY_d__FD4  -  FD, CB, d, FE
extern void OnClock_SETb__ex_d__ex4_OD();
extern void OnClock_SETb__ex_d__ex4_FD();
extern void OnClock_SET7__IY_d__FD4_MR();
extern void OnClock_SETb__ex_d__ex4_MW();

// RES 0, A   -  RES0_A_CB2  -  CB, 87
extern void OnClock_RES0_A_CB2_OF();

// RES 1, A   -  RES1_A_CB2  -  CB, 8F
extern void OnClock_RES1_A_CB2_OF();

// RES 2, A   -  RES2_A_CB2  -  CB, 97
extern void OnClock_RES2_A_CB2_OF();

// RES 3, A   -  RES3_A_CB2  -  CB, 9F
extern void OnClock_RES3_A_CB2_OF();

// RES 4, A   -  RES4_A_CB2  -  CB, A7
extern void OnClock_RES4_A_CB2_OF();

// RES 5, A   -  RES5_A_CB2  -  CB, AF
extern void OnClock_RES5_A_CB2_OF();

// RES 6, A   -  RES6_A_CB2  -  CB, B7
extern void OnClock_RES6_A_CB2_OF();

// RES 7, A   -  RES7_A_CB2  -  CB, BF
extern void OnClock_RES7_A_CB2_OF();

// RES 0, B   -  RES0_B_CB2  -  CB, 80
extern void OnClock_RES0_B_CB2_OF();

// RES 1, B   -  RES1_B_CB2  -  CB, 88
extern void OnClock_RES1_B_CB2_OF();

// RES 2, B   -  RES2_B_CB2  -  CB, 90
extern void OnClock_RES2_B_CB2_OF();

// RES 3, B   -  RES3_B_CB2  -  CB, 98
extern void OnClock_RES3_B_CB2_OF();

// RES 4, B   -  RES4_B_CB2  -  CB, A0
extern void OnClock_RES4_B_CB2_OF();

// RES 5, B   -  RES5_B_CB2  -  CB, A8
extern void OnClock_RES5_B_CB2_OF();

// RES 6, B   -  RES6_B_CB2  -  CB, B0
extern void OnClock_RES6_B_CB2_OF();

// RES 7, B   -  RES7_B_CB2  -  CB, B8
extern void OnClock_RES7_B_CB2_OF();

// RES 0, C   -  RES0_C_CB2  -  CB, 81
extern void OnClock_RES0_C_CB2_OF();

// RES 1, C   -  RES1_C_CB2  -  CB, 89
extern void OnClock_RES1_C_CB2_OF();

// RES 2, C   -  RES2_C_CB2  -  CB, 91
extern void OnClock_RES2_C_CB2_OF();

// RES 3, C   -  RES3_C_CB2  -  CB, 99
extern void OnClock_RES3_C_CB2_OF();

// RES 4, C   -  RES4_C_CB2  -  CB, A1
extern void OnClock_RES4_C_CB2_OF();

// RES 5, C   -  RES5_C_CB2  -  CB, A9
extern void OnClock_RES5_C_CB2_OF();

// RES 6, C   -  RES6_C_CB2  -  CB, B1
extern void OnClock_RES6_C_CB2_OF();

// RES 7, C   -  RES7_C_CB2  -  CB, B9
extern void OnClock_RES7_C_CB2_OF();

// RES 0, D   -  RES0_D_CB2  -  CB, 82
extern void OnClock_RES0_D_CB2_OF();

// RES 1, D   -  RES1_D_CB2  -  CB, 8A
extern void OnClock_RES1_D_CB2_OF();

// RES 2, D   -  RES2_D_CB2  -  CB, 92
extern void OnClock_RES2_D_CB2_OF();

// RES 3, D   -  RES3_D_CB2  -  CB, 9A
extern void OnClock_RES3_D_CB2_OF();

// RES 4, D   -  RES4_D_CB2  -  CB, A2
extern void OnClock_RES4_D_CB2_OF();

// RES 5, D   -  RES5_D_CB2  -  CB, AA
extern void OnClock_RES5_D_CB2_OF();

// RES 6, D   -  RES6_D_CB2  -  CB, B2
extern void OnClock_RES6_D_CB2_OF();

// RES 7, D   -  RES7_D_CB2  -  CB, BA
extern void OnClock_RES7_D_CB2_OF();

// RES 0, E   -  RES0_E_CB2  -  CB, 83
extern void OnClock_RES0_E_CB2_OF();

// RES 1, E   -  RES1_E_CB2  -  CB, 8B
extern void OnClock_RES1_E_CB2_OF();

// RES 2, E   -  RES2_E_CB2  -  CB, 93
extern void OnClock_RES2_E_CB2_OF();

// RES 3, E   -  RES3_E_CB2  -  CB, 9B
extern void OnClock_RES3_E_CB2_OF();

// RES 4, E   -  RES4_E_CB2  -  CB, A3
extern void OnClock_RES4_E_CB2_OF();

// RES 5, E   -  RES5_E_CB2  -  CB, AB
extern void OnClock_RES5_E_CB2_OF();

// RES 6, E   -  RES6_E_CB2  -  CB, B3
extern void OnClock_RES6_E_CB2_OF();

// RES 7, E   -  RES7_E_CB2  -  CB, BB
extern void OnClock_RES7_E_CB2_OF();

// RES 0, H   -  RES0_H_CB2  -  CB, 84
extern void OnClock_RES0_H_CB2_OF();

// RES 1, H   -  RES1_H_CB2  -  CB, 8C
extern void OnClock_RES1_H_CB2_OF();

// RES 2, H   -  RES2_H_CB2  -  CB, 94
extern void OnClock_RES2_H_CB2_OF();

// RES 3, H   -  RES3_H_CB2  -  CB, 9C
extern void OnClock_RES3_H_CB2_OF();

// RES 4, H   -  RES4_H_CB2  -  CB, A4
extern void OnClock_RES4_H_CB2_OF();

// RES 5, H   -  RES5_H_CB2  -  CB, AC
extern void OnClock_RES5_H_CB2_OF();

// RES 6, H   -  RES6_H_CB2  -  CB, B4
extern void OnClock_RES6_H_CB2_OF();

// RES 7, H   -  RES7_H_CB2  -  CB, BC
extern void OnClock_RES7_H_CB2_OF();

// RES 0, L   -  RES0_L_CB2  -  CB, 85
extern void OnClock_RES0_L_CB2_OF();

// RES 1, L   -  RES1_L_CB2  -  CB, 8D
extern void OnClock_RES1_L_CB2_OF();

// RES 2, L   -  RES2_L_CB2  -  CB, 95
extern void OnClock_RES2_L_CB2_OF();

// RES 3, L   -  RES3_L_CB2  -  CB, 9D
extern void OnClock_RES3_L_CB2_OF();

// RES 4, L   -  RES4_L_CB2  -  CB, A5
extern void OnClock_RES4_L_CB2_OF();

// RES 5, L   -  RES5_L_CB2  -  CB, AD
extern void OnClock_RES5_L_CB2_OF();

// RES 6, L   -  RES6_L_CB2  -  CB, B5
extern void OnClock_RES6_L_CB2_OF();

// RES 7, L   -  RES7_L_CB2  -  CB, BD
extern void OnClock_RES7_L_CB2_OF();

// RES 0, (HL)   -  RES0__HL__CB2  -  CB, 86
extern void OnClock_RES0__HL__CB2_OF();
extern void OnClock_RES0__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 1, (HL)   -  RES1__HL__CB2  -  CB, 8E
extern void OnClock_RES1__HL__CB2_OF();
extern void OnClock_RES1__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 2, (HL)   -  RES2__HL__CB2  -  CB, 96
extern void OnClock_RES2__HL__CB2_OF();
extern void OnClock_RES2__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 3, (HL)   -  RES3__HL__CB2  -  CB, 9E
extern void OnClock_RES3__HL__CB2_OF();
extern void OnClock_RES3__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 4, (HL)   -  RES4__HL__CB2  -  CB, A6
extern void OnClock_RES4__HL__CB2_OF();
extern void OnClock_RES4__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 5, (HL)   -  RES5__HL__CB2  -  CB, AE
extern void OnClock_RES5__HL__CB2_OF();
extern void OnClock_RES5__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 6, (HL)   -  RES6__HL__CB2  -  CB, B6
extern void OnClock_RES6__HL__CB2_OF();
extern void OnClock_RES6__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 7, (HL)   -  RES7__HL__CB2  -  CB, BE
extern void OnClock_RES7__HL__CB2_OF();
extern void OnClock_RES7__HL__CB2_MR();
extern void OnClock_RESb__HL__CB2_MW();

// RES 0, (IX+d)   -  RES0__IX_d__DD4  -  DD, CB, d, 86
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES0__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 0, (IY+d)   -  RES0__IY_d__FD4  -  FD, CB, d, 86
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES0__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 1, (IX+d)   -  RES1__IX_d__DD4  -  DD, CB, d, 8E
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES1__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 1, (IY+d)   -  RES1__IY_d__FD4  -  FD, CB, d, 8E
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES1__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 2, (IX+d)   -  RES2__IX_d__DD4  -  DD, CB, d, 96
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES2__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 2, (IY+d)   -  RES2__IY_d__FD4  -  FD, CB, d, 96
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES2__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 3, (IX+d)   -  RES3__IX_d__DD4  -  DD, CB, d, 9E
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES3__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 3, (IY+d)   -  RES3__IY_d__FD4  -  FD, CB, d, 9E
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES3__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 4, (IX+d)   -  RES4__IX_d__DD4  -  DD, CB, d, A6
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES4__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 4, (IY+d)   -  RES4__IY_d__FD4  -  FD, CB, d, A6
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES4__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 5, (IX+d)   -  RES5__IX_d__DD4  -  DD, CB, d, AE
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES5__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 5, (IY+d)   -  RES5__IY_d__FD4  -  FD, CB, d, AE
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES5__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 6, (IX+d)   -  RES6__IX_d__DD4  -  DD, CB, d, B6
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES6__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 6, (IY+d)   -  RES6__IY_d__FD4  -  FD, CB, d, B6
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES6__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 7, (IX+d)   -  RES7__IX_d__DD4  -  DD, CB, d, BE
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES7__IX_d__DD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// RES 7, (IY+d)   -  RES7__IY_d__FD4  -  FD, CB, d, BE
extern void OnClock_RESb__ex_d__ex4_OD();
extern void OnClock_RESb__ex_d__ex4_FD();
extern void OnClock_RES7__IY_d__FD4_MR();
extern void OnClock_RESb__ex_d__ex4_MW();

// JP nn   -  JPnn_3  -  C3, n, n
extern void OnClock_JPnn_3_OF();
extern void OnClock_JPnn_3_ODl();
extern void OnClock_JPnn_3_ODh();

// JP NZ, nn   -  JPNZ_nn_3  -  C2, n, n
extern void OnClock_JPNZ_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP Z, nn   -  JPZ_nn_3  -  CA, n, n
extern void OnClock_JPZ_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP NC, nn   -  JPNC_nn_3  -  D2, n, n
extern void OnClock_JPNC_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP C, nn   -  JPC_nn_3  -  DA, n, n
extern void OnClock_JPC_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP PO, nn   -  JPPO_nn_3  -  E2, n, n
extern void OnClock_JPPO_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP PE, nn   -  JPPE_nn_3  -  EA, n, n
extern void OnClock_JPPE_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP P, nn   -  JPP_nn_3  -  F2, n, n
extern void OnClock_JPP_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JP M, nn   -  JPM_nn_3  -  FA, n, n
extern void OnClock_JPM_nn_3_OF();
extern void OnClock_JPc_nn_3_ODl();
extern void OnClock_JPc_nn_3_ODh();

// JR e   -  JRe_2  -  18, e
extern void OnClock_JRe_2_OF();
extern void OnClock_JRe_2_OD();
extern void OnClock_JRe_2_OP();

// JR NZ, e   -  JRNZ_e_2  -  20, e
extern void OnClock_JRNZ_e_2_OF();
extern void OnClock_JRj_e_2_OD();
extern void OnClock_JRNZ_e_2_OP();

// JR Z, e   -  JRZ_e_2  -  28, e
extern void OnClock_JRZ_e_2_OF();
extern void OnClock_JRj_e_2_OD();
extern void OnClock_JRZ_e_2_OP();

// JR NC, e   -  JRNC_e_2  -  30, e
extern void OnClock_JRNC_e_2_OF();
extern void OnClock_JRj_e_2_OD();
extern void OnClock_JRNC_e_2_OP();

// JR C, e   -  JRC_e_2  -  38, e
extern void OnClock_JRC_e_2_OF();
extern void OnClock_JRj_e_2_OD();
extern void OnClock_JRC_e_2_OP();

// JP HL   -  JPHL_1  -  E9
extern void OnClock_JPHL_1_OF();

// JP IX   -  JPIX_DD2  -  DD, E9
extern void OnClock_JPIX_DD2_OF();

// JP IY   -  JPIY_FD2  -  FD, E9
extern void OnClock_JPIY_FD2_OF();

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
extern void OnClock_CALLNZ_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLNZ_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL Z, nn   -  CALLZ_nn_3  -  CC, n, n
extern void OnClock_CALLZ_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLZ_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL NC, nn   -  CALLNC_nn_3  -  D4, n, n
extern void OnClock_CALLNC_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLNC_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL C, nn   -  CALLC_nn_3  -  DC, n, n
extern void OnClock_CALLC_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLC_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL PO, nn   -  CALLPO_nn_3  -  E4, n, n
extern void OnClock_CALLPO_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLPO_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL PE, nn   -  CALLPE_nn_3  -  EC, n, n
extern void OnClock_CALLPE_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLPE_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL P, nn   -  CALLP_nn_3  -  F4, n, n
extern void OnClock_CALLP_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLP_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// CALL M, nn   -  CALLM_nn_3  -  FC, n, n
extern void OnClock_CALLM_nn_3_OF();
extern void OnClock_CALLc_nn_3_ODl();
extern void OnClock_CALLM_nn_3_ODh();
extern void OnClock_CALLc_nn_3_SWh();
extern void OnClock_CALLc_nn_3_SWl();

// RET   -  RET_1  -  C9
extern void OnClock_RET_1_OF();

// RET NZ   -  RETNZ_1  -  C0
extern void OnClock_RETNZ_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET Z   -  RETZ_1  -  C8
extern void OnClock_RETZ_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET NC   -  RETNC_1  -  D0
extern void OnClock_RETNC_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET C   -  RETC_1  -  D8
extern void OnClock_RETC_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET PO   -  RETPO_1  -  E0
extern void OnClock_RETPO_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET PE   -  RETPE_1  -  E8
extern void OnClock_RETPE_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET P   -  RETP_1  -  F0
extern void OnClock_RETP_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RET M   -  RETM_1  -  F8
extern void OnClock_RETM_1_OF();
extern void OnClock_RETc_1_SRh();
extern void OnClock_RETc_1_SRl();

// RETI   -  RETI_ED2  -  ED, 4D
extern void OnClock_RETI_ED2_OF();

// RETN   -  RETN_ED2  -  ED, 45
extern void OnClock_RETN_ED2_OF();

// RST 00   -  RST00_1  -  C7
extern void OnClock_RST00_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 08   -  RST08_1  -  CF
extern void OnClock_RST08_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 10   -  RST10_1  -  D7
extern void OnClock_RST10_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 18   -  RST18_1  -  DF
extern void OnClock_RST18_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 20   -  RST20_1  -  E7
extern void OnClock_RST20_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 28   -  RST28_1  -  EF
extern void OnClock_RST28_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 30   -  RST30_1  -  F7
extern void OnClock_RST30_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// RST 38   -  RST38_1  -  FF
extern void OnClock_RST38_1_OF();
extern void OnClock_RSTi_1_SWh();
extern void OnClock_RSTi_1_SWl();

// IN A, (n)   -  INA__n__2  -  DB, n
extern void OnClock_INA__n__2_OF();
extern void OnClock_INA__n__2_OD();
extern void OnClock_INA__n__2_PR();

// IN A, (C)   -  INA__C__ED2  -  ED, 78
extern void OnClock_INA__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

// IN B, (C)   -  INB__C__ED2  -  ED, 40
extern void OnClock_INB__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

// IN C, (C)   -  INC__C__ED2  -  ED, 48
extern void OnClock_INC__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

// IN D, (C)   -  IND__C__ED2  -  ED, 50
extern void OnClock_IND__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

// IN E, (C)   -  INE__C__ED2  -  ED, 58
extern void OnClock_INE__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

// IN H, (C)   -  INH__C__ED2  -  ED, 60
extern void OnClock_INH__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

// IN L, (C)   -  INL__C__ED2  -  ED, 68
extern void OnClock_INL__C__ED2_OF();
extern void OnClock_INr__C__ED2_PR();

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
extern void OnClock_OUT_C__A_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), B   -  OUT_C__B_ED2  -  ED, 41
extern void OnClock_OUT_C__B_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), C   -  OUT_C__C_ED2  -  ED, 49
extern void OnClock_OUT_C__C_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), D   -  OUT_C__D_ED2  -  ED, 51
extern void OnClock_OUT_C__D_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), E   -  OUT_C__E_ED2  -  ED, 59
extern void OnClock_OUT_C__E_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), H   -  OUT_C__H_ED2  -  ED, 61
extern void OnClock_OUT_C__H_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUT (C), L   -  OUT_C__L_ED2  -  ED, 69
extern void OnClock_OUT_C__L_ED2_OF();
extern void OnClock_OUT_C__r_ED2_PW();

// OUTI   -  OUTI_ED2  -  ED, A3
extern void OnClock_OUTI_ED2_OF();

// OTIR   -  OTIR_ED2  -  ED, B3
extern void OnClock_OTIR_ED2_OF();

// OUTD   -  OUTD_ED2  -  ED, A3
extern void OnClock_OUTD_ED2_OF();

// OTDR   -  OTDR_ED2  -  ED, BB
extern void OnClock_OTDR_ED2_OF();
