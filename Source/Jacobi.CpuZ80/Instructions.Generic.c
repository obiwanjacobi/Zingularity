#include "Async.h"
#include "FunctionsZ80.h"
#include "CpuState.h"
#include "CpuZ80Host.h"

extern CpuState _state;

void OnClock_OF(AsyncThis* async)
{
    // do nothing
}

// like MR but with PC address
void OnClock_OD(AsyncThis* async)
{
    switch (_state.Clock.TL)
    {
    case T1_PosEdge:
        setRefresh(Inactive);
        setAddressPC();
        break;
    default:
        OnClock_MR(async);
        break;
    }
}

// like OD but with assing Data to d
void OnClock_ODd(AsyncThis* async)
{
    switch (_state.Clock.TL)
    {
    case T1_PosEdge:
        setRefresh(Inactive);
        setAddressPC();
        break;
    case T3_NegEdge:
        OnClock_MR(async);
        _state.Instruction.d = _state.Instruction.DataInl;
        break;
    default:
        OnClock_MR(async);
        break;
    }
}


void OnClock_MR(AsyncThis* async)
{
    switch (_state.Clock.TL)
    {
    case T1_PosEdge:
        setRefresh(Inactive);
        setAddressBus(_state.Instruction.Address);
        break;
    case T1_NegEdge:
        setMemReq(Active);
        setRd(Active);
        break;
    case T2_PosEdge:
    case T2_NegEdge:
    case T3_PosEdge:
        break;
    case T3_NegEdge:
        _state.Instruction.DataIn = getDataBus();
        setRd(Inactive);
        setMemReq(Inactive);
        break;
    default:
        assert(false);
        return;
    }
}

void OnClock_MW(AsyncThis* async)
{
    switch (_state.Clock.TL)
    {
    case T1_PosEdge:
        setRefresh(Inactive);
        setAddressBus(_state.Instruction.Address);
        break;
    case T1_NegEdge:
        setMemReq(Active);
        setWr(Active);
        setDataBus(_state.Instruction.DataOutl);
        break;
    case T2_PosEdge:
    case T2_NegEdge:
    case T3_PosEdge:
        break;
    case T3_NegEdge:
        setWr(Inactive);
        setMemReq(Inactive);
        break;
    default:
        assert(false);
        return;
    }
}

void OnClock_PCd(AsyncThis* async)
{

}

void OnClock_SRh(AsyncThis* async)
{

}

void OnClock_SRl(AsyncThis* async)
{

}

void OnClock_SWh(AsyncThis* async)
{

}

void OnClock_SWl(AsyncThis* async)
{

}

void OnClock_PR(AsyncThis* async)
{

}

void OnClock_PW(AsyncThis* async)
{

}
