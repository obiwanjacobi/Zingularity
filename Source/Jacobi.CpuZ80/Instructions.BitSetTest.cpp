#include "stdafx.h"
#include "FunctionsZ80.hpp"

// BIT 0, A   -  BIT0_A_CB2  -  CB, 47
void OnClock_BITb_r_CB2_OF(AsyncThis* async) {}

// BIT 0, (HL)   -  BIT0__HL__CB2  -  CB, 46
void OnClock_BITb__HL__CB2_OF(AsyncThis* async) {}
void OnClock_BITb__HL__CB2_MR(AsyncThis* async) {}

// BIT 0, (IX+d)   -  BIT0__IX_d__DD4  -  DD, CB, d, 46
void OnClock_BITb__ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_BITb__ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_BITb__ex_d__ex4_MR(AsyncThis* async) {}

// SET 0, A   -  SET0_A_CB2  -  CB, C7
void OnClock_SETb_r_CB2_OF(AsyncThis* async) {}

// SET 0, (HL)   -  SET0__HL__CB2  -  CB, C6
void OnClock_SETb__HL__CB2_OF(AsyncThis* async) {}
void OnClock_SETb__HL__CB2_MR(AsyncThis* async) {}
void OnClock_SETb__HL__CB2_MW(AsyncThis* async) {}

// SET 0, (IX+d)   -  SET0__IX_d__DD4  -  DD, CB, d, C6
void OnClock_SETb__ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_SETb__ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_SETb__ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_SETb__ex_d__ex4_MW(AsyncThis* async) {}

// SET 0, (IX+d), A   -  SET0__IX_d__A_DD4  -  DD, CB, d, C7
void OnClock_SETb__ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_SETb__ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_SETb__ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_SETb__ex_d__r_ex4_MW(AsyncThis* async) {}

// RES 0, A   -  RES0_A_CB2  -  CB, 87
void OnClock_RESb_r_CB2_OF(AsyncThis* async) {}

// RES 0, (HL)   -  RES0__HL__CB2  -  CB, 86
void OnClock_RESb__HL__CB2_OF(AsyncThis* async) {}
void OnClock_RESb__HL__CB2_MR(AsyncThis* async) {}
void OnClock_RESb__HL__CB2_MW(AsyncThis* async) {}

// RES 0, (IX+d)   -  RES0__IX_d__DD4  -  DD, CB, d, 86
void OnClock_RESb__ex_d__ex4_OD(AsyncThis* async) {}
void OnClock_RESb__ex_d__ex4_FD(AsyncThis* async) {}
void OnClock_RESb__ex_d__ex4_MR(AsyncThis* async) {}
void OnClock_RESb__ex_d__ex4_MW(AsyncThis* async) {}

// RES 0, (IX+d), A   -  RES0__IX_d__A_DD4  -  DD, CB, d, 87
void OnClock_RESb__ex_d__r_ex4_OD(AsyncThis* async) {}
void OnClock_RESb__ex_d__r_ex4_FD(AsyncThis* async) {}
void OnClock_RESb__ex_d__r_ex4_MR(AsyncThis* async) {}
void OnClock_RESb__ex_d__r_ex4_MW(AsyncThis* async) {}
