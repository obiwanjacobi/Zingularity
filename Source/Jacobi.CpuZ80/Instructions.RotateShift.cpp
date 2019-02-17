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

// RLC (HL)   -  RLC_HL__CB2  -  CB, 06
void OnClock_RLC_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RLC_HL__CB2_MR(AsyncThis* async) {}
void OnClock_RLC_HL__CB2_MW(AsyncThis* async) {}

// RLC (IX+d)   -  RLC_IX_d__DD4  -  DD, CB, d, 06
void OnClock_RLC_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RLC_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RLC_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RLC_ex_d__ex4_MW(AsyncThis* async) {}

// RLC (IX+d), A   -  RLC_IX_d__A_DD4  -  DD, CB, d, 07
void OnClock_RLC_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RLC_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RLC_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RLC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RL A   -  RLA_CB2  -  CB, 17
void OnClock_RLr_CB2_OF(AsyncThis* async) {}

// RL (HL)   -  RL_HL__CB2  -  CB, 16
void OnClock_RL_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RL_HL__CB2_MR(AsyncThis* async) {}
void OnClock_RL_HL__CB2_MW(AsyncThis* async) {}

// RL (IX+d)   -  RL_IX_d__DD4  -  DD, CB, d, 16
void OnClock_RL_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RL_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RL_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RL_ex_d__ex4_MW(AsyncThis* async) {}

// RL (IX+d), A   -  RL_IX_d__A_DD4  -  DD, CB, d, 17
void OnClock_RL_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RL_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RL_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RRC A   -  RRCA_CB2  -  CB, 0F
void OnClock_RRCr_CB2_OF(AsyncThis* async) {}

// RRC (HL)   -  RRC_HL__CB2  -  CB, 0E
void OnClock_RRC_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RRC_HL__CB2_MR(AsyncThis* async) {}
void OnClock_RRC_HL__CB2_MW(AsyncThis* async) {}

// RRC (IX+d)   -  RRC_IX_d__DD4  -  DD, CB, d, 0E
void OnClock_RRC_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RRC_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RRC_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RRC_ex_d__ex4_MW(AsyncThis* async) {}

// RRC (IX+d), A   -  RRC_IX_d__A_DD4  -  DD, CB, d, 0F
void OnClock_RRC_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RRC_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RRC_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RRC_ex_d__r_ex4_MW(AsyncThis* async) {}

// RR A   -  RRA_CB2  -  CB, 1F
void OnClock_RRr_CB2_OF(AsyncThis* async) {}

// RR (HL)   -  RR_HL__CB2  -  CB, 1E
void OnClock_RR_HL__CB2_OF(AsyncThis* async) {}
void OnClock_RR_HL__CB2_MR(AsyncThis* async) {}
void OnClock_RR_HL__CB2_MW(AsyncThis* async) {}

// RR (IX+d)   -  RR_IX_d__DD4  -  DD, CB, d, 1E
void OnClock_RR_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RR_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RR_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RR_ex_d__ex4_MW(AsyncThis* async) {}

// RR (IX+d), A   -  RR_IX_d__A_DD4  -  DD, CB, d, 1F
void OnClock_RR_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RR_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RR_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RR_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLA A   -  SLAA_CB2  -  CB, 27
void OnClock_SLAr_CB2_OF(AsyncThis* async) {}

// SLA (HL)   -  SLA_HL__CB2  -  CB, 26
void OnClock_SLA_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SLA_HL__CB2_MR(AsyncThis* async) {}
void OnClock_SLA_HL__CB2_MW(AsyncThis* async) {}

// SLA (IX+d)   -  SLA_IX_d__DD4  -  DD, CB, d, 26
void OnClock_SLA_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SLA_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SLA_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SLA_ex_d__ex4_MW(AsyncThis* async) {}

// SLA (IX+d), A   -  SLA_IX_d__A_DD4  -  DD, CB, d, 27
void OnClock_SLA_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SLA_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SLA_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SLA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SLL A   -  SLLA_CB2  -  CB, 37
void OnClock_SLLr_CB2_OF(AsyncThis* async) {}

// SLL (HL)   -  SLL_HL__CB2  -  CB, 36
void OnClock_SLL_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SLL_HL__CB2_MR(AsyncThis* async) {}
void OnClock_SLL_HL__CB2_MW(AsyncThis* async) {}

// SLL (IX+d)   -  SLL_IX_d__DD4  -  DD, CB, d, 36
void OnClock_SLL_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SLL_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SLL_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SLL_ex_d__ex4_MW(AsyncThis* async) {}

// SLL (IX+d), A   -  SLL_IX_d__A_DD4  -  DD, CB, d, 37
void OnClock_SLL_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SLL_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SLL_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SLL_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRA A   -  SRAA_CB2  -  CB, 2F
void OnClock_SRAr_CB2_OF(AsyncThis* async) {}

// SRA (HL)   -  SRA_HL__CB2  -  CB, 2E
void OnClock_SRA_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SRA_HL__CB2_MR(AsyncThis* async) {}
void OnClock_SRA_HL__CB2_MW(AsyncThis* async) {}

// SRA (IX+d)   -  SRA_IX_d__DD4  -  DD, CB, d, 2E
void OnClock_SRA_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SRA_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SRA_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SRA_ex_d__ex4_MW(AsyncThis* async) {}

// SRA (IX+d), A   -  SRA_IX_d__A_DD4  -  DD, CB, d, 2F
void OnClock_SRA_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SRA_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SRA_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SRA_ex_d__r_ex4_MW(AsyncThis* async) {}

// SRL A   -  SRLA_CB2  -  CB, 3F
void OnClock_SRLr_CB2_OF(AsyncThis* async) {}

// SRL (HL)   -  SRL_HL__CB2  -  CB, 3E
void OnClock_SRL_HL__CB2_OF(AsyncThis* async) {}
void OnClock_SRL_HL__CB2_MR(AsyncThis* async) {}
void OnClock_SRL_HL__CB2_MW(AsyncThis* async) {}

// SRL (IX+d)   -  SRL_IX_d__DD4  -  DD, CB, d, 3E
void OnClock_SRL_ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SRL_ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SRL_ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SRL_ex_d__ex4_MW(AsyncThis* async) {}

// SRL (IX+d), A   -  SRL_IX_d__A_DD4  -  DD, CB, d, 3F
void OnClock_SRL_ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SRL_ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SRL_ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SRL_ex_d__r_ex4_MW(AsyncThis* async) {}

// RLD A   -  RLDA_ED2  -  ED, 6F
void OnClock_RLDA_ED2_OF(AsyncThis* async) {}
void OnClock_RLDA_ED2_OP(AsyncThis* async) {}

// RRD A   -  RRDA_ED2  -  ED, 67
void OnClock_RRDA_ED2_OF(AsyncThis* async) {}
void OnClock_RRDA_ED2_OP(AsyncThis* async) {}
