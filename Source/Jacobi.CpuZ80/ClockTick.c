#include "ClockTick.h"
#include "ClockInstruction.h"
#include "ClockInterrupt.h"
#include "CpuState.h"
#include "CpuZ80.h"
#include "CpuZ80Host.h"


extern CpuState _state;


void ResetClock()
{
    _state.Clock.M = M1;
    _state.Clock.T = T1;
    _state.Clock.TL = T1_PosEdge;
}

void NextTCycle()
{
    _state.Clock.T++;
    _state.Clock.TL++;
}

void NextTCycleLevel()
{
    _state.Clock.TL++;
}

void NextMCycle()
{
    if (!_state.Interrupt.Wait)
    {
        _state.Instruction.MCycleIndex++;
        _state.Clock.M++;
    }
    _state.Clock.T = T1;
    _state.Clock.TL = T1_PosEdge;
}


Async_Function(FetchDecode)
{
    AssertClock(M1, T1_PosEdge);
    floatBus(Inactive);
    if (getReset())
    {
        _state.Interrupt.Reset = true;
    }
    setRefresh(Inactive);
    setAddressPC();
    setM1(Active);
    Async_Yield();

    NextTCycleLevel();

    AssertClock(M1, T1_NegEdge);
    setMemReq(Active);
    setRd(Active);

    // time for some book keeping
    if (_state.Instruction.InstructionAddress == 0)
        _state.Instruction.InstructionAddress = _state.Registers.PC - 1;
    Async_Yield();

    NextTCycle();

    do
    {
        AssertClock(M1, T2_PosEdge);
        // if no previous reset was detected, this could be a special one.
        if (getReset() && !_state.Interrupt.Reset)
        {
            _state.Interrupt.SpecialReset = true;
        }
        Async_Yield();

        NextTCycleLevel();

        AssertClock(M1, T2_NegEdge);
        _state.Interrupt.Wait = getWait();
        Async_Yield();

        if (_state.Interrupt.Wait)
        {
            // prepare clock for next wait state
            _state.Clock.TL = T2_PosEdge;
        }

    } while (_state.Interrupt.Wait);

    NextTCycle();

    AssertClock(M1, T3_PosEdge);
    if (getReset())
    {
        _state.Interrupt.SpecialReset = false;
        _state.Interrupt.Reset = true;
    }

    _state.Instruction.DataIn = getDataBus();
    setRd(Inactive);
    setMemReq(Inactive);
    setM1(Inactive);
    setAddressIR();
    setRefresh(Active);
    Async_Yield();

    NextTCycleLevel();

    AssertClock(M1, T3_NegEdge);
    setMemReq(Active);
    Decode();
    Async_Yield();
}
Async_End

Async_Function(ExecuteInstructionPart)
{
    AssertMCycle();
    while (!InstructionIsDone() &&
        _state.Clock.T <= _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].clocks)
    {
        do
        {
            AssertMCycle();
            if (IsLastInstructionTCycle(Level_PosEdge))
            {
                CheckForInterrupt();
            }
            _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock();
            Async_Yield();

            NextTCycleLevel();

            _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock();

            if (_state.Interrupt.Wait)
            {
                // prepare clock for wait cycle
                _state.Clock.TL--;
                Async_Yield();
            }

        } while (_state.Interrupt.Wait);

        if (!SetIfInstructionIsDone())
        {
            NextTCycle();
            Async_Yield();
        }
        // Unsure about this flag implementation
        /*else if (_state.Instruction.Info->AssignFlags != nullptr)
        {
            _state.Instruction.Info->AssignFlags();
        }*/
    }
}
Async_End

Async_Function(Execute)
{
    Assert(_state.Instruction.Async.State == 0);

    NextTCycle();

    AssertClock(M1, T4_PosEdge);
    if (getReset())
    {
        _state.Interrupt.Reset = true;
    }

    if (_state.Instruction.Info != nullptr)
    {
        AssertMCycle();
        CheckForInterrupt();
        _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock();
    }
    else
    {
        Assert(_state.Instruction.ExtIndex > 0);
    }
    Async_Yield();

    NextTCycleLevel();

    AssertClock(M1, T4_NegEdge);
    setMemReq(Inactive);
    if (_state.Instruction.Info != nullptr)
    {
        AssertMCycle();
        _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].OnClock();

        if (SetIfInstructionIsDone())
        {
            ClearInstructionIfDone();
            Async_Return();
        }
    }
    else if (_state.Instruction.ExtIndex == 2)
    {
        Assert(_state.Instruction.Info == nullptr);

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
        while (!InstructionIsDone() && 
            _state.Instruction.MCycleIndex <= MaxMCycleIndex &&
            _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].clocks != 0)
        {
            Async_WaitUntil(ExecuteInstructionPart(&_state.Instruction.Async));
            NextMCycle();
        }

        ClearInstructionIfDone();
    }
}
Async_End

// http://z80.info/zip/z80-interrupts_rewritten.pdf
Async_Function(Interrupt)
{
    if (_state.Interrupt.SpecialReset)
    {

    }

    if (_state.Interrupt.Reset)
    {

    }

    if (_state.Interrupt.BusRequest)
    {
        // wait for the next clock cycle
        Async_Yield();

        AssertClock(M1, T1_PosEdge);
        setRefresh(Inactive);
        setBusAck(Active);
        floatBus(Active);

        while (true)
        {
            Async_Yield();
            // cannot use AssertClock because its not being incremented
            Assert(_state.Clock.Level == Level_NegEdge);
            if (!_state.Interrupt.BusRequest)
            {
                setBusAck(Inactive);
                // floatBus(Inactive) done at start of FetchDecode
                Async_Return();
            }

            Async_Yield();
            AssertClock(M1, T1_PosEdge);
            _state.Interrupt.BusRequest = getBusReq();
        }
    }

    if (_state.Interrupt.NMI)
    {

    }

    if (_state.Interrupt.INT)
    {
        // DI
        _state.Interrupt.IFF1 = false;
        _state.Interrupt.IFF2 = false;

        switch (_state.Interrupt.InterruptMode)
        {
        case IM0:
            break;

        case IM1:
            break;

        case IM2:
            break;

        
        default:
            Assert(false);
            break;
        }
    }
}
Async_End

AsyncThis fetchDecodeAsync;
AsyncThis executeAsync;
AsyncThis interruptAsync;

Async_Function(ClockTickAsync)
{
    Async_Reset(&fetchDecodeAsync);
    Async_WaitUntil(FetchDecode(&fetchDecodeAsync));

    Async_Reset(&executeAsync);
    Async_WaitUntil(Execute(&executeAsync));

    Async_Reset(&interruptAsync);
    Async_WaitUntil(Interrupt(&interruptAsync));
}
Async_End

void ClockTick(AsyncThis *async, Level clockLevel)
{
    _state.Clock.Level = clockLevel;
    ClockTickAsync(async);
}
