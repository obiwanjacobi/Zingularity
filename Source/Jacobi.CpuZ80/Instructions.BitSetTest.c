#include "CpuState.h"
#include "ClockTick.h"
#include "CpuZ80.h"
#include "FunctionsZ80.h"

extern CpuState _state;

void SetBit(Bits8 bit, Registers8 reg, bool_t setOrClear)
{
    uint8_t mask = 1 << bit;
    uint8_t data = GetRegister8(reg);

    if (setOrClear)
    {
        data |= mask;
    }
    else
    {
        data &= ~mask;
    }

    SetRegister8(reg, data);
}



// BIT 0, A   -  BIT0_A_CB2  -  CB, 47
void OnClock_BITb_r_CB2_OF() {}

// BIT 0, (HL)   -  BIT0__HL__CB2  -  CB, 46
void OnClock_BITb__HL__CB2_OF() {}
void OnClock_BITb__HL__CB2_MR() {}

// BIT 0, (IX+d)   -  BIT0__IX_d__DD4  -  DD, CB, d, 46
void OnClock_BITb__ex_d__ex4_OD() {}
void OnClock_BITb__ex_d__ex4_FD() {}
void OnClock_BITb__ex_d__ex4_MR() {}

// SET 0, A   -  SET0_A_CB2  -  CB, C7
void OnClock_SETb_r_CB2_OF() {}

// SET 0, (HL)   -  SET0__HL__CB2  -  CB, C6
void OnClock_SETb__HL__CB2_OF() {}
void OnClock_SETb__HL__CB2_MR() {}
void OnClock_SETb__HL__CB2_MW() {}

// SET 0, (IX+d)   -  SET0__IX_d__DD4  -  DD, CB, d, C6
void OnClock_SETb__ex_d__ex4_OD() {}
void OnClock_SETb__ex_d__ex4_FD() {}
void OnClock_SETb__ex_d__ex4_MR() {}
void OnClock_SETb__ex_d__ex4_MW() {}

// SET 0, (IX+d), A   -  SET0__IX_d__A_DD4  -  DD, CB, d, C7
void OnClock_SETb__ex_d__r_ex4_OD() { Assert(false); }
void OnClock_SETb__ex_d__r_ex4_FD()
{
    switch (_state.Clock.TL)
    {
        case T5_NegEdge:
            // Not M4 due to double extension opcodes; both read as M1
            AssertClockM(M3);
            _state.Registers.WS = GetRegisterEx16() + _state.Instruction.d;
            break;
    }
}
void OnClock_SETb__ex_d__r_ex4_MR() 
{
    switch (_state.Clock.TL)
    {
    case T4_PosEdge:
        SetRegister8(_state.Instruction.Info->Decode.Variable2.Register8, _state.Instruction.DataInl);
        SetBit(_state.Instruction.Info->Decode.Variable1.Bits8, 
            _state.Instruction.Info->Decode.Variable2.Register8,
            true);
        break;
    case T4_NegEdge:
        // prepare write back
        _state.Instruction.DataOut = GetRegister8(_state.Instruction.Info->Decode.Variable2.Register8);
        break;
    default:
        OnClock_MR();
        break;
    }
}
void OnClock_SETb__ex_d__r_ex4_MW() 
{
    OnClock_MW();
}

// RES 0, A   -  RES0_A_CB2  -  CB, 87
void OnClock_RESb_r_CB2_OF() {}

// RES 0, (HL)   -  RES0__HL__CB2  -  CB, 86
void OnClock_RESb__HL__CB2_OF() {}
void OnClock_RESb__HL__CB2_MR() {}
void OnClock_RESb__HL__CB2_MW() {}

// RES 0, (IX+d)   -  RES0__IX_d__DD4  -  DD, CB, d, 86
void OnClock_RESb__ex_d__ex4_OD() {}
void OnClock_RESb__ex_d__ex4_FD() {}
void OnClock_RESb__ex_d__ex4_MR() {}
void OnClock_RESb__ex_d__ex4_MW() {}

// RES 0, (IX+d), A   -  RES0__IX_d__A_DD4  -  DD, CB, d, 87
void OnClock_RESb__ex_d__r_ex4_OD() {}
void OnClock_RESb__ex_d__r_ex4_FD() {}
void OnClock_RESb__ex_d__r_ex4_MR() {}
void OnClock_RESb__ex_d__r_ex4_MW() {}
