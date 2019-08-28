#include "ClockTick.h"
#include "ClockInstruction.h"
#include "CpuState.h"
#include "CpuZ80.h"
#include "CpuZ80Host.h"


extern CpuState _state;


void ResetClock()
{
    assert(_state.Instruction.MCycleIndex == 0);

    _state.Clock.M = 1;
    _state.Clock.T = 1;
    _state.Clock.TL = 1;
}

void NextTCycle()
{
    _state.Clock.T++;
    _state.Clock.TL++;
}

void NextMCycle()
{
    _state.Instruction.MCycleIndex++;
    _state.Clock.M++;
    _state.Clock.T = 1;
    _state.Clock.TL = 1;
}


Async_Function(FetchDecode)
{
    AssertClock(M1, T1, Level_PosEdge, 1);
    setRefresh(Inactive);
    setAddressPC();
    setM1(Active);
    Async_Yield();

    _state.Clock.TL++;

    AssertClock(M1, T1, Level_NegEdge, 2);
    setMemReq(Active);
    setRd(Active);
    Async_Yield();
    
    NextTCycle();

    AssertClock(M1, T2, Level_PosEdge, 3);
    // time for some book keeping
    if (_state.Instruction.InstructionAddress == 0)
        _state.Instruction.InstructionAddress = _state.Registers.PC - 1;
    Async_Yield();

    _state.Clock.TL++;

    AssertClock(M1, T2, Level_NegEdge, 4);
    Async_Yield();

    NextTCycle();

    AssertClock(M1, T3, Level_PosEdge, 5);
    _state.Instruction.Data = getDataBus();
    setRd(Inactive);
    setMemReq(Inactive);
    setM1(Inactive);
    setAddressIR();
    setRefresh(Active);
    Async_Yield();

    _state.Clock.TL++;

    AssertClock(M1, T3, Level_NegEdge, 6);
    setMemReq(Active);
    Decode();
    Async_Yield();
}
Async_End

Async_Function(ExecuteInstructionPart)
{
    AssertMCycle();
    while (_state.Clock.T <= _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].clocks)
    {
        AssertMCycle();
        _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock(&_state.Instruction.Async);
        Async_Yield();

        _state.Clock.TL++;

        _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock(&_state.Instruction.Async);

        SetIfInstructionIsDone();

        NextTCycle();
        
        if (!InstructionIsDone())
        {
            Async_Yield();
        }
    }
}
Async_End

Async_Function(Execute)
{
    assert(_state.Instruction.Async.State == 0);

    NextTCycle();

    AssertClock(M1, T4, Level_PosEdge, 7);
    if (_state.Instruction.Info != nullptr)
    {
        AssertMCycle();
        _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock(&_state.Instruction.Async);
    }
    else
    {
        assert(_state.Instruction.ExtIndex > 0);
    }
    Async_Yield();

    _state.Clock.TL++;

    AssertClock(M1, T4, Level_NegEdge, 8);
    setMemReq(Inactive);
    if (_state.Instruction.Info != nullptr)
    {
        AssertMCycle();
        _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock(&_state.Instruction.Async);

        if (SetIfInstructionIsDone())
        {
            ClearInstructionIfDone();
            Async_Return();
        }
    }
    else if (_state.Instruction.ExtIndex == 2)
    {
        assert(_state.Instruction.Info == nullptr);

        // assign a temp instruction to read the reversed d - opcode
        _state.Instruction.Info = &ExtendedReverseOpcodeFetch;
        _state.Instruction.MCycleIndex = 1;
    }
    else
    {
        // more M1 cycles
        ResetClock();
        Async_Return();
    }
    Async_Yield();

    if (_state.Instruction.Info != nullptr)
    {
        NextMCycle();
        AssertMCycle();
        while (_state.Instruction.MCycleIndex <= MaxMCycleIndex &&
            _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].clocks != 0)
        {
            Async_WaitUntil(ExecuteInstructionPart(&_state.Instruction.Async));
            NextMCycle();
        }

        ClearInstructionIfDone();
    }
}
Async_End


AsyncThis fetchDecodeAsync;
AsyncThis executeAsync;

Async_Function(ClockTickAsync)
{
    Async_Reset(&fetchDecodeAsync);
    Async_WaitUntil(FetchDecode(&fetchDecodeAsync));

    Async_Reset(&executeAsync);
    Async_WaitUntil(Execute(&executeAsync));
}
Async_End

void ClockTick(AsyncThis *async, Level clockLevel)
{
    _state.Clock.Level = clockLevel;
    ClockTickAsync(async);
}
