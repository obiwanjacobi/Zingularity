#include "CpuState.h"
#include "ClockTick.h"
#include "CpuZ80.h"
#include "CpuAlu.h"
#include "FlagsZ80.h"
#include "FunctionsZ80.h"

extern CpuState _state;

// ADD HL, BC   -  ADDHL_BC_1  -  09
void OnClock_ADDHL_p_1_OF() {}
void OnClock_ADDHL_p_1_OP() {}

// ADD IX, BC   -  ADDIX_BC_DD2  -  DD, 09
void OnClock_ADDIX_m_DD2_OF() {}
void OnClock_ADDIX_m_DD2_OP() {}

// ADD IY, BC   -  ADDIY_BC_FD2  -  FD, 09
void OnClock_ADDIY_o_FD2_OF() {}
void OnClock_ADDIY_o_FD2_OP() {}

// ADC HL, BC   -  ADCHL_BC_ED2  -  ED, 4A
void OnClock_ADCHL_p_ED2_OF() {}
void OnClock_ADCHL_p_ED2_OP() {}

// SBC HL, BC   -  SBCHL_BC_ED2  -  ED, 42
void OnClock_SBCHL_p_ED2_OF() {}
void OnClock_SBCHL_p_ED2_OP_M2()
{
    switch (_state.Clock.TL)
    {
    case T2_PosEdge:
        _state.Instruction.DataIn = _state.Registers.HL;
        break;
    case T3_PosEdge:
        _state.Registers.L =
            Sub8(_state.Registers.L,
                GetRegisterSP16Lsb(_state.Instruction.Info->Decode.Variable1.RegisterSP16),
                Alu_WithCarry);
        break;
    default:
        // no-op
        break;
    }
}
void OnClock_SBCHL_p_ED2_OP_M3()
{
    switch (_state.Clock.TL)
    {
    case T2_PosEdge:
        _state.Registers.H =
            Sub8(_state.Registers.H,
                GetRegisterSP16Msb(_state.Instruction.Info->Decode.Variable1.RegisterSP16),
                Alu_WithCarry);
        break;
    case T3_PosEdge:
        SetFlag(Flag_Z, _state.Registers.HL == 0);
        break;
    default:
        // no-op
        break;
    }
}
void OnClock_SBCHL_p_ED2_OP() 
{
    switch (_state.Clock.M)
    {
    case M2:
        OnClock_SBCHL_p_ED2_OP_M2();
        break;
    case M3:
        OnClock_SBCHL_p_ED2_OP_M3();
        break;
    default:
        Assert(false);
        break;
    }
}

// INC BC   -  INCBC_1  -  03
void OnClock_INCp_1_OF() {}

// INC IX   -  INCIX_DD2  -  DD, 23
void OnClock_INCex_ex2_OF() {}

// DEC BC   -  DECBC_1  -  0B
void OnClock_DECp_1_OF() {}

// DEC IX   -  DECIX_DD2  -  DD, 2B
void OnClock_DECex_ex2_OF() {}
