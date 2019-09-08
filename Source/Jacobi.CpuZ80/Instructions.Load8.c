#include "FunctionsZ80.h"
#include "CpuState.h"

extern CpuState _state;

// LD A, A   -  LDA_A_1  -  7F
void OnClock_LDr_s_1_OF()
{
    if (_state.Clock.TL == T4_NegEdge)
    {
        SetRegister8(_state.Instruction.Info->Decode.Variable1.Register8,
            GetRegister8(_state.Instruction.Info->Decode.Variable2.Register8));
    }
}

// LD A, A   -  LDA_A_DD2  -  DD, 7F
void OnClock_LDt_u_DD2_OF() { OnClock_LDr_s_1_OF(); }

// LD A, A   -  LDA_A_FD2  -  FD, 7F
void OnClock_LDv_w_FD2_OF() { OnClock_LDr_s_1_OF(); }

// LD A, n   -  LDA_n_2  -  3E, n
void OnClock_LDr_n_2_OF() { /* no-op */ }
void OnClock_LDr_n_2_OD()
{
    OnClock_OD();

    if (_state.Clock.TL == T3_NegEdge)
    {
        SetRegister8(_state.Instruction.Info->Decode.Variable1.Register8,
            _state.Instruction.DataInl);
    }
}

// LD A, n   -  LDA_n_DD3  -  DD, 3E, n
void OnClock_LDt_n_DD3_OF() {}
void OnClock_LDt_n_DD3_OD() {}

// LD A, n   -  LDA_n_FD3  -  FD, 3E, n
void OnClock_LDv_n_FD3_OF() {}
void OnClock_LDv_n_FD3_OD() {}

// LD A, (HL)   -  LDA__HL__1  -  7E
void OnClock_LDr__HL__1_OF() {}
void OnClock_LDr__HL__1_MR() {}

// LD A, (IX+d)   -  LDA__IX_d__DD3  -  DD, BE, d
void OnClock_LDr__ex_d__ex3_OF() {}
void OnClock_LDr__ex_d__ex3_OD() {}
void OnClock_LDr__ex_d__ex3_AD() {}
void OnClock_LDr__ex_d__ex3_MR() {}

// LD (HL), A   -  LD_HL__A_1  -  77
void OnClock_LD_HL__r_1_OF() {}
void OnClock_LD_HL__r_1_MW() {}

// LD (IX+d), A   -  LD_IX_d__A_DD3  -  DD, 77, d
void OnClock_LD_ex_d__r_ex3_OF() {}
void OnClock_LD_ex_d__r_ex3_OD() {}
void OnClock_LD_ex_d__r_ex3_AD() {}
void OnClock_LD_ex_d__r_ex3_MW() {}

// LD (HL), n   -  LD_HL__n_2  -  36, n
void OnClock_LD_HL__n_2_OF() {}
void OnClock_LD_HL__n_2_OD() {}
void OnClock_LD_HL__n_2_MW() {}

// LD (IX+d), n   -  LD_IX_d__n_DD4  -  DD, 36, d, n
void OnClock_LD_ex_d__n_ex4_OF() {}
void OnClock_LD_ex_d__n_ex4_OD() {}
void OnClock_LD_ex_d__n_ex4_FD() {}
void OnClock_LD_ex_d__n_ex4_MW() {}

// LD A, (BC)   -  LDA__BC__1  -  0A
void OnClock_LDA__BC__1_OF() {}
void OnClock_LDA__BC__1_MR() {}

// LD A, (DE)   -  LDA__DE__1  -  1A
void OnClock_LDA__DE__1_OF() {}
void OnClock_LDA__DE__1_MR() {}

// LD A, (nn)   -  LDA__nn__3  -  3A, n, n
void OnClock_LDA__nn__3_OF() {}
void OnClock_LDA__nn__3_ODl() {}
void OnClock_LDA__nn__3_ODh() {}
void OnClock_LDA__nn__3_MR() {}

// LD (BC), A   -  LD_BC__A_1  -  02
void OnClock_LD_BC__A_1_OF() {}
void OnClock_LD_BC__A_1_MW() {}

// LD (DE), A   -  LD_DE__A_1  -  12
void OnClock_LD_DE__A_1_OF() {}
void OnClock_LD_DE__A_1_MW() {}

// LD (nn), A   -  LD_nn__A_3  -  32, n, n
void OnClock_LD_nn__A_3_OF() {}
void OnClock_LD_nn__A_3_ODl() {}
void OnClock_LD_nn__A_3_ODh() {}
void OnClock_LD_nn__A_3_MW() {}

// LD A, I   -  LDA_I_ED2  -  ED, 57
void OnClock_LDA_I_ED2_OF() {}

// LD A, R   -  LDA_R_ED2  -  ED, 5F
void OnClock_LDA_R_ED2_OF() {}

// LD I, A   -  LDI_A_ED2  -  ED, 47
void OnClock_LDI_A_ED2_OF() {}

// LD R, A   -  LDR_A_ED2  -  ED, 4F
void OnClock_LDR_A_ED2_OF() {}
