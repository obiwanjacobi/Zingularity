#include "stdafx.h"
#include "ClockTick.h"
#include "CpuState.h"
#include "CpuZ80.h"
#include "CpuZ80Host.h"
#include <assert.h>
#include <string.h>

extern CpuState _state;

#define AssertClock(m, t, l) \
    assert(_state.Clock.M == (uint8_t)m); \
    assert(_state.Clock.T == (uint8_t)t); \
    assert(_state.Clock.Level == l);

void setAddressPC()
{
    setAddressBus(_state.Registers.PC);
    _state.Registers.PC++;
}

void setAddressIR()
{
    setAddressBus(_state.Registers.IR);
    if (_state.Registers._IR.R < 127)
        _state.Registers._IR.R++;
    else 
        _state.Registers._IR.R &= 0x7F;
}


void Clear()
{
    memset(&_state.Instruction, sizeof(InstructionState), 0);
}

Async_Function(FetchDecode)
{
    AssertClock(MCycle::M1, TCycle::T1, Level::PosEdge);
    setRefresh(false);
    setAddressPC();
    setM1(true);
    Async_Yield(1);

    AssertClock(MCycle::M1, TCycle::T1, Level::NegEdge);
    setMemReq(true);
    setRd(true);
    Async_Yield(2);

    AssertClock(MCycle::M1, TCycle::T2, Level::PosEdge);
    Async_Yield(3);

    AssertClock(MCycle::M1, TCycle::T2, Level::NegEdge);
    Async_Yield(4);

    AssertClock(MCycle::M1, TCycle::T3, Level::PosEdge);
    _state.Instruction.Data = getDataBus();
    setRd(false);
    setMemReq(false);
    setM1(false);
    setAddressIR();
    setRefresh(true);
    Async_Yield(5);

    AssertClock(MCycle::M1, TCycle::T3, Level::NegEdge);
    setMemReq(true);
    Async_Yield(6);

    AssertClock(MCycle::M1, TCycle::T4, Level::PosEdge);
    Async_Yield(7);

    AssertClock(MCycle::M1, TCycle::T4, Level::NegEdge);
    setMemReq(false);
    Async_Yield(8);
}
Async_End

Async_Function(Execute)
{

}
Async_End

Async_Function(Interrupt)
{

}
Async_End

AsyncThis fetchAsync;
AsyncThis executeAsync;
AsyncThis interruptAsync;

Async_Function(ClockTick)
{
    Clear();
    
    Async_WaitUntil(1, FetchDecode(&fetchAsync));
    Async_WaitUntil(2, Execute(&executeAsync));
    Async_WaitUntil(3, Interrupt(&interruptAsync));
}
Async_End

void InitClock()
{
    _state.Clock.M = 1;
    _state.Clock.T = 1;
    _state.Clock.Level = Level::PosEdge;
}

void AdvanceClock()
{
    if (_state.Clock.Level == Level::PosEdge)
    {
        _state.Clock.Level = Level::NegEdge;
    }
    else
    {
        _state.Clock.Level = Level::PosEdge;

        if (_state.Clock.T == 6)
        {
            _state.Clock.M++;
            _state.Clock.T = 1;
        }
        else
            _state.Clock.T++;
    }
}