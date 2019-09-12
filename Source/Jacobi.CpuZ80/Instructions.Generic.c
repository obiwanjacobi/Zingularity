#include "FunctionsZ80.h"
#include "CpuState.h"
#include "CpuZ80Host.h"

extern CpuState _state;

void OnClock_OF()
{
    // do nothing
}

// like OD but with assing Data to d
void OnClock_ODd()
{
    OnClock_OD();
    if (_state.Clock.TL == T3_NegEdge)
    {
        _state.Instruction.d = _state.Instruction.DataInl;
    }
}

// like MR but with PC address
void OnClock_OD()
{
    if (_state.Clock.TL == T1_PosEdge)
    {
        setRefresh(Inactive);
        setAddressPC();
    }
    else
    {
        OnClock_MR();
    }
}

void OnClock_MR()
{
    switch (_state.Clock.TL)
    {
    case T1_PosEdge:
        setRefresh(Inactive);
        setAddressBus(_state.Registers.WS);
        break;
    case T1_NegEdge:
        setMemReq(Active);
        setRd(Active);
        break;
    case T2_PosEdge:
        break;
    case T2_NegEdge:
        _state.Interrupt.Wait = getWait();
        break;
    case T3_PosEdge:
        break;
    case T3_NegEdge:
        _state.Instruction.DataIn = getDataBus();
        setRd(Inactive);
        setMemReq(Inactive);
        break;
    default:
        Assert(false);
        return;
    }
}

void OnClock_MW()
{
    switch (_state.Clock.TL)
    {
    case T1_PosEdge:
        setRefresh(Inactive);
        setAddressBus(_state.Registers.WS);
        break;
    case T1_NegEdge:
        setMemReq(Active);
        setWr(Active);
        setDataBus(_state.Instruction.DataOutl);
        break;
    case T2_PosEdge:
        break;
    case T2_NegEdge:
        _state.Interrupt.Wait = getWait();
        break;
    case T3_PosEdge:
        break;
    case T3_NegEdge:
        setWr(Inactive);
        setMemReq(Inactive);
        break;
    default:
        Assert(false);
        return;
    }
}

void OnClock_PCd()
{

}

void OnClock_SRh()
{

}

void OnClock_SRl()
{

}

void OnClock_SWh()
{

}

void OnClock_SWl()
{

}

void OnClock_PR()
{

}

void OnClock_PW()
{

}
