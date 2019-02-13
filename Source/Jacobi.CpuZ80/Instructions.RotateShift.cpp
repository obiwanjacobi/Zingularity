#include "stdafx.h"
#include "FunctionsZ80.hpp"

// RLCA   -  RLCA_1  -  07
void OnClock_RLCA_1_OF(AsyncThis* async) {}

// RLA   -  RLA_1  -  17
void OnClock_RLA_1_OF(AsyncThis* async) {}

// RRCA   -  RRCA_1  -  0F
void OnClock_RRCA_1_OF(AsyncThis* async) {}

// RRA   -  RRA_1  -  1F
void OnClock_RRA_1_OF(AsyncThis* async) {}

// RLC A   -  RLCA_CB2  -  CB, 07
void OnClock_RLCr_CB2_OF(AsyncThis* async) {}

// RLC B   -  RLCB_CB2  -  CB, 00
// void OnClock_RLCr_CB2_OF(AsyncThis* async) {}

// RLC C   -  RLCC_CB2  -  CB, 01
// void OnClock_RLCr_CB2_OF(AsyncThis* async) {}

// RLC D   -  RLCD_CB2  -  CB, 02
// void OnClock_RLCr_CB2_OF(AsyncThis* async) {}

// RLC E   -  RLCE_CB2  -  CB, 03
// void OnClock_RLCr_CB2_OF(AsyncThis* async) {}

// RLC H   -  RLCH_CB2  -  CB, 04
// void OnClock_RLCr_CB2_OF(AsyncThis* async) {}

// RLC L   -  RLCL_CB2  -  CB, 05
// void OnClock_RLCr_CB2_OF(AsyncThis* async) {}

// RLC (HL)   -  RLC_HL__CB2  -  CB, 06
void OnClock_RLC_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RLC_HL__CB2_MR(AsyncThis* async) {}

// RLC (IX+d)   -  RLC_IX_d__DD4  -  DD, CB, d, 06
void OnClock_RLC_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RLC_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RLC_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RLC_ex_d__ex4_MW(AsyncThis* async) {}

// RLC (IY+d)   -  RLC_IY_d__FD4  -  FD, CB, d, 06
// void OnClock_RLC_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__ex4_MW(AsyncThis* async) {}

// RLC (IX+d), A   -  RLC_IX_d__A_DD4  -  DD, CB, d, 07
void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IY+d), A   -  RLC_IY_d__A_FD4  -  FD, CB, d, 07
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IX+d), B   -  RLC_IX_d__B_DD4  -  DD, CB, d, 00
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IY+d), B   -  RLC_IY_d__B_FD4  -  FD, CB, d, 00
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IX+d), C   -  RLC_IX_d__C_DD4  -  DD, CB, d, 01
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IY+d), C   -  RLC_IY_d__C_FD4  -  FD, CB, d, 01
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IX+d), D   -  RLC_IX_d__D_DD4  -  DD, CB, d, 02
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IY+d), D   -  RLC_IY_d__D_FD4  -  FD, CB, d, 02
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IX+d), E   -  RLC_IX_d__E_DD4  -  DD, CB, d, 03
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IY+d), E   -  RLC_IY_d__E_FD4  -  FD, CB, d, 03
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IX+d), H   -  RLC_IX_d__H_DD4  -  DD, CB, d, 04
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IY+d), H   -  RLC_IY_d__H_FD4  -  FD, CB, d, 04
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IX+d), L   -  RLC_IX_d__L_DD4  -  DD, CB, d, 05
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLC (IY+d), L   -  RLC_IY_d__L_FD4  -  FD, CB, d, 05
// void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL A   -  RLA_CB2  -  CB, 17
void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL B   -  RLB_CB2  -  CB, 10
// void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL C   -  RLC_CB2  -  CB, 11
// void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL D   -  RLD_CB2  -  CB, 12
// void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL E   -  RLE_CB2  -  CB, 13
// void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL H   -  RLH_CB2  -  CB, 14
// void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL L   -  RLL_CB2  -  CB, 15
// void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL (HL)   -  RL_HL__CB2  -  CB, 16
void OnClock_RL_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RL_HL__CB2_MR(AsyncThis* async) {}

// RL (IX+d)   -  RL_IX_d__DD4  -  DD, CB, d, 16
void OnClock_RL_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RL_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RL_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RL_ex_d__ex4_MW(AsyncThis* async) {}

// RL (IY+d)   -  RL_IY_d__FD4  -  FD, CB, d, 16
// void OnClock_RL_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__ex4_MW(AsyncThis* async) {}

// RL (IX+d), A   -  RL_IX_d__A_DD4  -  DD, CB, d, 17
void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IY+d), A   -  RL_IY_d__A_FD4  -  FD, CB, d, 17
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IX+d), B   -  RL_IX_d__B_DD4  -  DD, CB, d, 10
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IY+d), B   -  RL_IY_d__B_FD4  -  FD, CB, d, 10
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IX+d), C   -  RL_IX_d__C_DD4  -  DD, CB, d, 11
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IY+d), C   -  RL_IY_d__C_FD4  -  FD, CB, d, 11
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IX+d), D   -  RL_IX_d__D_DD4  -  DD, CB, d, 12
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IY+d), D   -  RL_IY_d__D_FD4  -  FD, CB, d, 12
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IX+d), E   -  RL_IX_d__E_DD4  -  DD, CB, d, 13
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IY+d), E   -  RL_IY_d__E_FD4  -  FD, CB, d, 13
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IX+d), H   -  RL_IX_d__H_DD4  -  DD, CB, d, 14
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IY+d), H   -  RL_IY_d__H_FD4  -  FD, CB, d, 14
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IX+d), L   -  RL_IX_d__L_DD4  -  DD, CB, d, 15
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL (IY+d), L   -  RL_IY_d__L_FD4  -  FD, CB, d, 15
// void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC A   -  RRCA_CB2  -  CB, 0F
void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC B   -  RRCB_CB2  -  CB, 08
// void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC C   -  RRCC_CB2  -  CB, 09
// void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC D   -  RRCD_CB2  -  CB, 0A
// void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC E   -  RRCE_CB2  -  CB, 0B
// void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC H   -  RRCH_CB2  -  CB, 0C
// void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC L   -  RRCL_CB2  -  CB, 0D
// void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC (HL)   -  RRC_HL__CB2  -  CB, 0E
void OnClock_RRC_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RRC_HL__CB2_MR(AsyncThis* async) {}

// RRC (IX+d)   -  RRC_IX_d__DD4  -  DD, CB, d, 0E
void OnClock_RRC_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RRC_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RRC_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RRC_ex_d__ex4_MW(AsyncThis* async) {}

// RRC (IY+d)   -  RRC_IY_d__FD4  -  FD, CB, d, 0E
// void OnClock_RRC_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__ex4_MW(AsyncThis* async) {}

// RRC (IX+d), A   -  RRC_IX_d__A_DD4  -  DD, CB, d, 0F
void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IY+d), A   -  RRC_IY_d__A_FD4  -  FD, CB, d, 0F
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IX+d), B   -  RRC_IX_d__B_DD4  -  DD, CB, d, 08
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IY+d), B   -  RRC_IY_d__B_FD4  -  FD, CB, d, 08
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IX+d), C   -  RRC_IX_d__C_DD4  -  DD, CB, d, 09
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IY+d), C   -  RRC_IY_d__C_FD4  -  FD, CB, d, 09
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IX+d), D   -  RRC_IX_d__D_DD4  -  DD, CB, d, 0A
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IY+d), D   -  RRC_IY_d__D_FD4  -  FD, CB, d, 0A
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IX+d), E   -  RRC_IX_d__E_DD4  -  DD, CB, d, 0B
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IY+d), E   -  RRC_IY_d__E_FD4  -  FD, CB, d, 0B
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IX+d), H   -  RRC_IX_d__H_DD4  -  DD, CB, d, 0C
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IY+d), H   -  RRC_IY_d__H_FD4  -  FD, CB, d, 0C
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IX+d), L   -  RRC_IX_d__L_DD4  -  DD, CB, d, 0D
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC (IY+d), L   -  RRC_IY_d__L_FD4  -  FD, CB, d, 0D
// void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR A   -  RRA_CB2  -  CB, 1F
void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR B   -  RRB_CB2  -  CB, 18
// void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR C   -  RRC_CB2  -  CB, 19
// void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR D   -  RRD_CB2  -  CB, 1A
// void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR E   -  RRE_CB2  -  CB, 1B
// void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR H   -  RRH_CB2  -  CB, 1C
// void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR L   -  RRL_CB2  -  CB, 1D
// void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR (HL)   -  RR_HL__CB2  -  CB, 1E
void OnClock_RR_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RR_HL__CB2_MR(AsyncThis* async) {}

// RR (IX+d)   -  RR_IX_d__DD4  -  DD, CB, d, 1E
void OnClock_RR_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RR_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RR_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RR_ex_d__ex4_MW(AsyncThis* async) {}

// RR (IY+d)   -  RR_IY_d__FD4  -  FD, CB, d, 1E
// void OnClock_RR_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__ex4_MW(AsyncThis* async) {}

// RR (IX+d), A   -  RR_IX_d__A_DD4  -  DD, CB, d, 1F
void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IY+d), A   -  RR_IY_d__A_FD4  -  FD, CB, d, 1F
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IX+d), B   -  RR_IX_d__B_DD4  -  DD, CB, d, 18
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IY+d), B   -  RR_IY_d__B_FD4  -  FD, CB, d, 18
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IX+d), C   -  RR_IX_d__C_DD4  -  DD, CB, d, 19
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IY+d), C   -  RR_IY_d__C_FD4  -  FD, CB, d, 19
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IX+d), D   -  RR_IX_d__D_DD4  -  DD, CB, d, 1A
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IY+d), D   -  RR_IY_d__D_FD4  -  FD, CB, d, 1A
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IX+d), E   -  RR_IX_d__E_DD4  -  DD, CB, d, 1B
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IY+d), E   -  RR_IY_d__E_FD4  -  FD, CB, d, 1B
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IX+d), H   -  RR_IX_d__H_DD4  -  DD, CB, d, 1C
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IY+d), H   -  RR_IY_d__H_FD4  -  FD, CB, d, 1C
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IX+d), L   -  RR_IX_d__L_DD4  -  DD, CB, d, 1D
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR (IY+d), L   -  RR_IY_d__L_FD4  -  FD, CB, d, 1D
// void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA A   -  SLAA_CB2  -  CB, 27
void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA B   -  SLAB_CB2  -  CB, 20
// void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA C   -  SLAC_CB2  -  CB, 21
// void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA D   -  SLAD_CB2  -  CB, 22
// void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA E   -  SLAE_CB2  -  CB, 23
// void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA H   -  SLAH_CB2  -  CB, 24
// void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA L   -  SLAL_CB2  -  CB, 25
// void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA (HL)   -  SLA_HL__CB2  -  CB, 26
void OnClock_SLA_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SLA_HL__CB2_MR(AsyncThis* async) {}

// SLA (IX+d)   -  SLA_IX_d__DD4  -  DD, CB, d, 26
void OnClock_SLA_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SLA_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SLA_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SLA_ex_d__ex4_MW(AsyncThis* async) {}

// SLA (IY+d)   -  SLA_IY_d__FD4  -  FD, CB, d, 26
// void OnClock_SLA_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__ex4_MW(AsyncThis* async) {}

// SLA (IX+d), A   -  SLA_IX_d__A_DD4  -  DD, CB, d, 27
void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IY+d), A   -  SLA_IY_d__A_FD4  -  FD, CB, d, 27
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IX+d), B   -  SLA_IX_d__B_DD4  -  DD, CB, d, 20
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IY+d), B   -  SLA_IY_d__B_FD4  -  FD, CB, d, 20
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IX+d), C   -  SLA_IX_d__C_DD4  -  DD, CB, d, 21
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IY+d), C   -  SLA_IY_d__C_FD4  -  FD, CB, d, 21
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IX+d), D   -  SLA_IX_d__D_DD4  -  DD, CB, d, 22
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IY+d), D   -  SLA_IY_d__D_FD4  -  FD, CB, d, 22
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IX+d), E   -  SLA_IX_d__E_DD4  -  DD, CB, d, 23
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IY+d), E   -  SLA_IY_d__E_FD4  -  FD, CB, d, 23
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IX+d), H   -  SLA_IX_d__H_DD4  -  DD, CB, d, 24
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IY+d), H   -  SLA_IY_d__H_FD4  -  FD, CB, d, 24
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IX+d), L   -  SLA_IX_d__L_DD4  -  DD, CB, d, 25
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA (IY+d), L   -  SLA_IY_d__L_FD4  -  FD, CB, d, 25
// void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL A   -  SLLA_CB2  -  CB, 37
void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL B   -  SLLB_CB2  -  CB, 30
// void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL C   -  SLLC_CB2  -  CB, 31
// void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL D   -  SLLD_CB2  -  CB, 32
// void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL E   -  SLLE_CB2  -  CB, 33
// void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL H   -  SLLH_CB2  -  CB, 34
// void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL L   -  SLLL_CB2  -  CB, 35
// void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL (HL)   -  SLL_HL__CB2  -  CB, 36
void OnClock_SLL_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SLL_HL__CB2_MR(AsyncThis* async) {}

// SLL (IX+d)   -  SLL_IX_d__DD4  -  DD, CB, d, 36
void OnClock_SLL_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SLL_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SLL_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SLL_ex_d__ex4_MW(AsyncThis* async) {}

// SLL (IY+d)   -  SLL_IY_d__FD4  -  FD, CB, d, 36
// void OnClock_SLL_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__ex4_MW(AsyncThis* async) {}

// SLL (IX+d), A   -  SLL_IX_d__A_DD4  -  DD, CB, d, 37
void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IY+d), A   -  SLL_IY_d__A_FD4  -  FD, CB, d, 37
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IX+d), B   -  SLL_IX_d__B_DD4  -  DD, CB, d, 30
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IY+d), B   -  SLL_IY_d__B_FD4  -  FD, CB, d, 30
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IX+d), C   -  SLL_IX_d__C_DD4  -  DD, CB, d, 31
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IY+d), C   -  SLL_IY_d__C_FD4  -  FD, CB, d, 31
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IX+d), D   -  SLL_IX_d__D_DD4  -  DD, CB, d, 32
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IY+d), D   -  SLL_IY_d__D_FD4  -  FD, CB, d, 32
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IX+d), E   -  SLL_IX_d__E_DD4  -  DD, CB, d, 33
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IY+d), E   -  SLL_IY_d__E_FD4  -  FD, CB, d, 33
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IX+d), H   -  SLL_IX_d__H_DD4  -  DD, CB, d, 34
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IY+d), H   -  SLL_IY_d__H_FD4  -  FD, CB, d, 34
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IX+d), L   -  SLL_IX_d__L_DD4  -  DD, CB, d, 35
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL (IY+d), L   -  SLL_IY_d__L_FD4  -  FD, CB, d, 35
// void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA A   -  SRAA_CB2  -  CB, 2F
void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA B   -  SRAB_CB2  -  CB, 28
// void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA C   -  SRAC_CB2  -  CB, 29
// void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA D   -  SRAD_CB2  -  CB, 2A
// void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA E   -  SRAE_CB2  -  CB, 2B
// void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA H   -  SRAH_CB2  -  CB, 2C
// void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA L   -  SRAL_CB2  -  CB, 2D
// void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA (HL)   -  SRA_HL__CB2  -  CB, 2E
void OnClock_SRA_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SRA_HL__CB2_MR(AsyncThis* async) {}

// SRA (IX+d)   -  SRA_IX_d__DD4  -  DD, CB, d, 2E
void OnClock_SRA_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SRA_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SRA_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SRA_ex_d__ex4_MW(AsyncThis* async) {}

// SRA (IY+d)   -  SRA_IY_d__FD4  -  FD, CB, d, 2E
// void OnClock_SRA_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__ex4_MW(AsyncThis* async) {}

// SRA (IX+d), A   -  SRA_IX_d__A_DD4  -  DD, CB, d, 2F
void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IY+d), A   -  SRA_IY_d__A_FD4  -  FD, CB, d, 2F
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IX+d), B   -  SRA_IX_d__B_DD4  -  DD, CB, d, 28
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IY+d), B   -  SRA_IY_d__B_FD4  -  FD, CB, d, 28
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IX+d), C   -  SRA_IX_d__C_DD4  -  DD, CB, d, 29
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IY+d), C   -  SRA_IY_d__C_FD4  -  FD, CB, d, 29
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IX+d), D   -  SRA_IX_d__D_DD4  -  DD, CB, d, 2A
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IY+d), D   -  SRA_IY_d__D_FD4  -  FD, CB, d, 2A
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IX+d), E   -  SRA_IX_d__E_DD4  -  DD, CB, d, 2B
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IY+d), E   -  SRA_IY_d__E_FD4  -  FD, CB, d, 2B
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IX+d), H   -  SRA_IX_d__H_DD4  -  DD, CB, d, 2C
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IY+d), H   -  SRA_IY_d__H_FD4  -  FD, CB, d, 2C
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IX+d), L   -  SRA_IX_d__L_DD4  -  DD, CB, d, 2D
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA (IY+d), L   -  SRA_IY_d__L_FD4  -  FD, CB, d, 2D
// void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL A   -  SRLA_CB2  -  CB, 3F
void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL B   -  SRLB_CB2  -  CB, 38
// void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL C   -  SRLC_CB2  -  CB, 39
// void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL D   -  SRLD_CB2  -  CB, 3A
// void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL E   -  SRLE_CB2  -  CB, 3B
// void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL H   -  SRLH_CB2  -  CB, 3C
// void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL L   -  SRLL_CB2  -  CB, 3D
// void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL (HL)   -  SRL_HL__CB2  -  CB, 3E
void OnClock_SRL_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SRL_HL__CB2_MR(AsyncThis* async) {}

// SRL (IX+d)   -  SRL_IX_d__DD4  -  DD, CB, d, 3E
void OnClock_SRL_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SRL_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SRL_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SRL_ex_d__ex4_MW(AsyncThis* async) {}

// SRL (IY+d)   -  SRL_IY_d__FD4  -  FD, CB, d, 3E
// void OnClock_SRL_ex_d__ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__ex4_MW(AsyncThis* async) {}

// SRL (IX+d), A   -  SRL_IX_d__A_DD4  -  DD, CB, d, 3F
void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IY+d), A   -  SRL_IY_d__A_FD4  -  FD, CB, d, 3F
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IX+d), B   -  SRL_IX_d__B_DD4  -  DD, CB, d, 38
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IY+d), B   -  SRL_IY_d__B_FD4  -  FD, CB, d, 38
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IX+d), C   -  SRL_IX_d__C_DD4  -  DD, CB, d, 39
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IY+d), C   -  SRL_IY_d__C_FD4  -  FD, CB, d, 39
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IX+d), D   -  SRL_IX_d__D_DD4  -  DD, CB, d, 3A
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IY+d), D   -  SRL_IY_d__D_FD4  -  FD, CB, d, 3A
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IX+d), E   -  SRL_IX_d__E_DD4  -  DD, CB, d, 3B
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IY+d), E   -  SRL_IY_d__E_FD4  -  FD, CB, d, 3B
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IX+d), H   -  SRL_IX_d__H_DD4  -  DD, CB, d, 3C
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IY+d), H   -  SRL_IY_d__H_FD4  -  FD, CB, d, 3C
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IX+d), L   -  SRL_IX_d__L_DD4  -  DD, CB, d, 3D
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL (IY+d), L   -  SRL_IY_d__L_FD4  -  FD, CB, d, 3D
// void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
// void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLD A   -  RLDA_ED2  -  ED, 6F
void OnClock_RLDA_ED2_OF(AsyncThis* async) {}
void OnClock_RLDA_ED2_OP(AsyncThis* async) {}
// void OnClock_RLDA_ED2_OP(AsyncThis* async) {}
// void OnClock_RLDA_ED2_OP(AsyncThis* async) {}

// RRD A   -  RRDA_ED2  -  ED, 67
void OnClock_RRDA_ED2_OF(AsyncThis* async) {}
void OnClock_RRDA_ED2_OP(AsyncThis* async) {}
// void OnClock_RRDA_ED2_OP(AsyncThis* async) {}
// void OnClock_RRDA_ED2_OP(AsyncThis* async) {}