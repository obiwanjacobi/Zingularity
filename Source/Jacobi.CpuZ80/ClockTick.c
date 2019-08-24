#include "ClockTick.h"
#include "CpuState.h"
#include "CpuZ80.h"
#include "CpuZ80Host.h"
#include "InstructionsZ80.h"
#include "FunctionsZ80.h"
#include <assert.h>
#include <string.h>

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

const InstructionInfo* LookupInstruction()
{
    const InstructionTableEntry* table = nullptr;
    uint16_t tableLength = 0;

    if (_state.Instruction.ExtIndex == 0)
    {
        table = InstructionTable;
        tableLength = InstructionTable_length;
    }
    else
    {
        switch (_state.Instruction.Ext[0])
        {
        case 0xCB:
            table = InstructionTableCB;
            tableLength = InstructionTableCB_length;
            break;
        case 0xDD:
            if (_state.Instruction.ExtIndex == 2 &&
                _state.Instruction.Ext[1] == 0xCB)
            {
                table = InstructionTableDDCB;
                tableLength = InstructionTableDDCB_length;
            }
            else
            {
                table = InstructionTableDD;
                tableLength = InstructionTableDD_length;
            }
            break;
        case 0xFD:
            if (_state.Instruction.ExtIndex == 2 &&
                _state.Instruction.Ext[1] == 0xCB)
            {
                table = InstructionTableFDCB;
                tableLength = InstructionTableFDCB_length;
            }
            else
            {
                table = InstructionTableFD;
                tableLength = InstructionTableFD_length;
            }
            break;
        case 0xED:
            table = InstructionTableED;
            tableLength = InstructionTableED_length;
            break;
        default:
            return nullptr;
        }
    }

    // easy optimization
    if (tableLength == 256)
    {
        return table[_state.Instruction.Data].Instruction;
    }
    else
    {
        // We could switch algorithms based on the value because tables are pretty full.
        // We could also switch algortihms based on the table -not all tables have the same length.
        // We could optimize the binary search by calculating the position
        //  to start searching and the step size based on the data value
        //  assuming an almost full table:
        //      start: data-(256-tableLength)
        //      first step: 256-tableLength / 2
        //  continue searching in a binary fashion.
        for (uint8_t i = 0; i < tableLength; i++)
        {
            if (table[i].OpCode == _state.Instruction.Data)
                return table[i].Instruction;
        }
    }
    return nullptr;
}

void Decode()
{
    switch (_state.Instruction.Data)
    {
    case 0xDD:
    case 0xED:
    case 0xFD:
        _state.Instruction.Ext[0] = _state.Instruction.Data;
        _state.Instruction.ExtIndex = 1;
        break;
    case 0xCB:
        // CB replaces ED
        if (_state.Instruction.ExtIndex == 1 && _state.Instruction.Ext[0] == 0xED)
        {
            _state.Instruction.ExtIndex = 0;
        }
        
        _state.Instruction.Ext[_state.Instruction.ExtIndex] = 0xCB;
        _state.Instruction.ExtIndex++;
        break;
    default:
        assert(_state.Instruction.Info == nullptr);
        _state.Instruction.Info = LookupInstruction();
        if (_state.Instruction.ExtIndex > 0)
        {
            _state.Instruction.MCycleIndex = _state.Instruction.ExtIndex - 1;
        }
        break;
    }
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

void OnClock_InstructionLoad(AsyncThis* async)
{
    switch (_state.Clock.TL)
    {
    case 6:
        OnClock_OD(async);
        _state.Instruction.Info = LookupInstruction();
        assert(_state.Instruction.Info != nullptr);
        break;
    default:
        OnClock_OD(async);
        break;
    }
}

const InstructionInfo ExtendedReverseOpcodeFetch =
{
    4, 0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 4, OnClock_InstructionLoad },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} }
    }
};

void ClearInstruction()
{
    memset(&_state.Instruction, 0, sizeof(InstructionState));
}


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
        Async_Yield();

        NextTCycle();
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

        // detect end of instruction
        if (_state.Clock.M == _state.Instruction.Info->Count)
        {
            ClearInstruction();
            ResetClock();
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
        Async_Return(true);
    }
    Async_Yield();

    if (_state.Instruction.Info != nullptr)
    {
        NextMCycle();
        while (_state.Instruction.MCycleIndex <= MaxMCycleIndex &&
            _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].clocks != 0)
        {
            Async_WaitUntil(ExecuteInstructionPart(&_state.Instruction.Async));
            NextMCycle();
        }
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
