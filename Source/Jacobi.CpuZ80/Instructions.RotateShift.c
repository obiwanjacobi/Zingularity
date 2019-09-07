#include "FunctionsZ80.h"

// RLCA   -  RLCA_1  -  07
void OnClock_RLCA_1_OF() {}

// RLA   -  RLA_1  -  17
void OnClock_RLA_1_OF() {}

// RRCA   -  RRCA_1  -  0F
void OnClock_RRCA_1_OF() {}

// RRA   -  RRA_1  -  1F
void OnClock_RRA_1_OF() {}

// RLC A   -  RLCA_CB2  -  CB, 07
void OnClock_RLCr_CB2_OF() {}

// RLC (HL)   -  RLC_HL__CB2  -  CB, 06
void OnClock_RLC_HL__CB2_OF() {}
void OnClock_RLC_HL__CB2_MR() {}
void OnClock_RLC_HL__CB2_MW() {}

// RLC (IX+d)   -  RLC_IX_d__DD4  -  DD, CB, d, 06
void OnClock_RLC_ex_d__ex4_OD() {}
void OnClock_RLC_ex_d__ex4_FD() {}
void OnClock_RLC_ex_d__ex4_MR() {}
void OnClock_RLC_ex_d__ex4_MW() {}

// RLC (IX+d), A   -  RLC_IX_d__A_DD4  -  DD, CB, d, 07
void OnClock_RLC_ex_d__r_ex4_OD() {}
void OnClock_RLC_ex_d__r_ex4_FD() {}
void OnClock_RLC_ex_d__r_ex4_MR() {}
void OnClock_RLC_ex_d__r_ex4_MW() {}

// RL A   -  RLA_CB2  -  CB, 17
void OnClock_RLr_CB2_OF() {}

// RL (HL)   -  RL_HL__CB2  -  CB, 16
void OnClock_RL_HL__CB2_OF() {}
void OnClock_RL_HL__CB2_MR() {}
void OnClock_RL_HL__CB2_MW() {}

// RL (IX+d)   -  RL_IX_d__DD4  -  DD, CB, d, 16
void OnClock_RL_ex_d__ex4_OD() {}
void OnClock_RL_ex_d__ex4_FD() {}
void OnClock_RL_ex_d__ex4_MR() {}
void OnClock_RL_ex_d__ex4_MW() {}

// RL (IX+d), A   -  RL_IX_d__A_DD4  -  DD, CB, d, 17
void OnClock_RL_ex_d__r_ex4_OD() {}
void OnClock_RL_ex_d__r_ex4_FD() {}
void OnClock_RL_ex_d__r_ex4_MR() {}
void OnClock_RL_ex_d__r_ex4_MW() {}

// RRC A   -  RRCA_CB2  -  CB, 0F
void OnClock_RRCr_CB2_OF() {}

// RRC (HL)   -  RRC_HL__CB2  -  CB, 0E
void OnClock_RRC_HL__CB2_OF() {}
void OnClock_RRC_HL__CB2_MR() {}
void OnClock_RRC_HL__CB2_MW() {}

// RRC (IX+d)   -  RRC_IX_d__DD4  -  DD, CB, d, 0E
void OnClock_RRC_ex_d__ex4_OD() {}
void OnClock_RRC_ex_d__ex4_FD() {}
void OnClock_RRC_ex_d__ex4_MR() {}
void OnClock_RRC_ex_d__ex4_MW() {}

// RRC (IX+d), A   -  RRC_IX_d__A_DD4  -  DD, CB, d, 0F
void OnClock_RRC_ex_d__r_ex4_OD() {}
void OnClock_RRC_ex_d__r_ex4_FD() {}
void OnClock_RRC_ex_d__r_ex4_MR() {}
void OnClock_RRC_ex_d__r_ex4_MW() {}

// RR A   -  RRA_CB2  -  CB, 1F
void OnClock_RRr_CB2_OF() {}

// RR (HL)   -  RR_HL__CB2  -  CB, 1E
void OnClock_RR_HL__CB2_OF() {}
void OnClock_RR_HL__CB2_MR() {}
void OnClock_RR_HL__CB2_MW() {}

// RR (IX+d)   -  RR_IX_d__DD4  -  DD, CB, d, 1E
void OnClock_RR_ex_d__ex4_OD() {}
void OnClock_RR_ex_d__ex4_FD() {}
void OnClock_RR_ex_d__ex4_MR() {}
void OnClock_RR_ex_d__ex4_MW() {}

// RR (IX+d), A   -  RR_IX_d__A_DD4  -  DD, CB, d, 1F
void OnClock_RR_ex_d__r_ex4_OD() {}
void OnClock_RR_ex_d__r_ex4_FD() {}
void OnClock_RR_ex_d__r_ex4_MR() {}
void OnClock_RR_ex_d__r_ex4_MW() {}

// SLA A   -  SLAA_CB2  -  CB, 27
void OnClock_SLAr_CB2_OF() {}

// SLA (HL)   -  SLA_HL__CB2  -  CB, 26
void OnClock_SLA_HL__CB2_OF() {}
void OnClock_SLA_HL__CB2_MR() {}
void OnClock_SLA_HL__CB2_MW() {}

// SLA (IX+d)   -  SLA_IX_d__DD4  -  DD, CB, d, 26
void OnClock_SLA_ex_d__ex4_OD() {}
void OnClock_SLA_ex_d__ex4_FD() {}
void OnClock_SLA_ex_d__ex4_MR() {}
void OnClock_SLA_ex_d__ex4_MW() {}

// SLA (IX+d), A   -  SLA_IX_d__A_DD4  -  DD, CB, d, 27
void OnClock_SLA_ex_d__r_ex4_OD() {}
void OnClock_SLA_ex_d__r_ex4_FD() {}
void OnClock_SLA_ex_d__r_ex4_MR() {}
void OnClock_SLA_ex_d__r_ex4_MW() {}

// SLL A   -  SLLA_CB2  -  CB, 37
void OnClock_SLLr_CB2_OF() {}

// SLL (HL)   -  SLL_HL__CB2  -  CB, 36
void OnClock_SLL_HL__CB2_OF() {}
void OnClock_SLL_HL__CB2_MR() {}
void OnClock_SLL_HL__CB2_MW() {}

// SLL (IX+d)   -  SLL_IX_d__DD4  -  DD, CB, d, 36
void OnClock_SLL_ex_d__ex4_OD() {}
void OnClock_SLL_ex_d__ex4_FD() {}
void OnClock_SLL_ex_d__ex4_MR() {}
void OnClock_SLL_ex_d__ex4_MW() {}

// SLL (IX+d), A   -  SLL_IX_d__A_DD4  -  DD, CB, d, 37
void OnClock_SLL_ex_d__r_ex4_OD() {}
void OnClock_SLL_ex_d__r_ex4_FD() {}
void OnClock_SLL_ex_d__r_ex4_MR() {}
void OnClock_SLL_ex_d__r_ex4_MW() {}

// SRA A   -  SRAA_CB2  -  CB, 2F
void OnClock_SRAr_CB2_OF() {}

// SRA (HL)   -  SRA_HL__CB2  -  CB, 2E
void OnClock_SRA_HL__CB2_OF() {}
void OnClock_SRA_HL__CB2_MR() {}
void OnClock_SRA_HL__CB2_MW() {}

// SRA (IX+d)   -  SRA_IX_d__DD4  -  DD, CB, d, 2E
void OnClock_SRA_ex_d__ex4_OD() {}
void OnClock_SRA_ex_d__ex4_FD() {}
void OnClock_SRA_ex_d__ex4_MR() {}
void OnClock_SRA_ex_d__ex4_MW() {}

// SRA (IX+d), A   -  SRA_IX_d__A_DD4  -  DD, CB, d, 2F
void OnClock_SRA_ex_d__r_ex4_OD() {}
void OnClock_SRA_ex_d__r_ex4_FD() {}
void OnClock_SRA_ex_d__r_ex4_MR() {}
void OnClock_SRA_ex_d__r_ex4_MW() {}

// SRL A   -  SRLA_CB2  -  CB, 3F
void OnClock_SRLr_CB2_OF() {}

// SRL (HL)   -  SRL_HL__CB2  -  CB, 3E
void OnClock_SRL_HL__CB2_OF() {}
void OnClock_SRL_HL__CB2_MR() {}
void OnClock_SRL_HL__CB2_MW() {}

// SRL (IX+d)   -  SRL_IX_d__DD4  -  DD, CB, d, 3E
void OnClock_SRL_ex_d__ex4_OD() {}
void OnClock_SRL_ex_d__ex4_FD() {}
void OnClock_SRL_ex_d__ex4_MR() {}
void OnClock_SRL_ex_d__ex4_MW() {}

// SRL (IX+d), A   -  SRL_IX_d__A_DD4  -  DD, CB, d, 3F
void OnClock_SRL_ex_d__r_ex4_OD() {}
void OnClock_SRL_ex_d__r_ex4_FD() {}
void OnClock_SRL_ex_d__r_ex4_MR() {}
void OnClock_SRL_ex_d__r_ex4_MW() {}

// RLD A   -  RLDA_ED2  -  ED, 6F
void OnClock_RLDA_ED2_OF() {}
void OnClock_RLDA_ED2_OP() {}

// RRD A   -  RRDA_ED2  -  ED, 67
void OnClock_RRDA_ED2_OF() {}
void OnClock_RRDA_ED2_OP() {}
