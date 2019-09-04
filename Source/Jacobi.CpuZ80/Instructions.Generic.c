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
    case 1:
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
    case 1:
        setRefresh(Inactive);
        setAddressPC();
        break;
    case 6:
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
    case 1:
        setRefresh(Inactive);
        setAddressBus(_state.Instruction.Address);
        break;
    case 2:
        setMemReq(Active);
        setRd(Active);
        break;
    case 3:
    case 4:
    case 5:
        break;
    case 6:
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
    case 1:
        setRefresh(Inactive);
        setAddressBus(_state.Instruction.Address);
        break;
    case 2:
        setMemReq(Active);
        setWr(Active);
        setDataBus(_state.Instruction.DataOutl);
        break;
    case 3:
    case 4:
    case 5:
        break;
    case 6:
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
