#include "ClockTick.h"
#include "CpuState.h"
#include "CpuZ80.h"
#include "CpuZ80Host.h"
#include "InstructionsZ80.h"
#include "FunctionsZ80.h"
#include <assert.h>
#include <string.h>

extern CpuState _state;

AsyncThis fetchAsync;
AsyncThis instructionAsync;
AsyncThis executeAsync;
AsyncThis interruptAsync;

void InitClock()
{
    _state.Clock.M = 1;
    _state.Clock.T = 1;
    _state.Clock.Level = Level_PosEdge;
    _state.Clock.TL = 1;
}

void NextMCycle()
{
    _state.Instruction.MCycleIndex++;
    _state.Clock.M++;
    _state.Clock.T = 1;
    _state.Clock.TL = 1;

    // incremented past instruction m-cycles.
    assert(_state.Instruction.Instruction->Count < _state.Instruction.MCycleIndex);
}

void AdvanceClock()
{
    if (_state.Clock.Level == Level_PosEdge)
    {
        _state.Clock.Level = Level_NegEdge;
        _state.Clock.TL++;
    }
    else
    {
        _state.Clock.Level = Level_PosEdge;

        if (_state.Instruction.Instruction != nullptr)
        {
            assert(_state.Instruction.Instruction->Count < _state.Instruction.MCycleIndex);
            if (_state.Clock.T == _state.Instruction.Instruction->Cycles[_state.Instruction.MCycleIndex].clocks)
            {
                NextMCycle();
            }
            else
            {
                _state.Clock.T++;
                _state.Clock.TL++;
            }
        }
        else
        {
            if (_state.Clock.T == 4)
            {
                NextMCycle();
            }
            else
            {
                _state.Clock.T++;
                _state.Clock.TL++;
            }
        }
    }
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
        if (_state.Instruction.ExtIndex == 1 && _state.Instruction.Ext[0] == 0xED)
            _state.Instruction.ExtIndex = 0;
        _state.Instruction.Ext[_state.Instruction.ExtIndex] = 0xCB;
        _state.Instruction.ExtIndex++;
        break;
    default:
        _state.Instruction.Instruction = LookupInstruction();
        break;
    }
}

Async_Function(FetchDecode)
{
    AssertClock(M1, T1, Level_PosEdge);
    setRefresh(Inactive);
    setAddressPC();
    setM1(Active);
    Async_Yield(1);

    AssertClock(M1, T1, Level_NegEdge);
    setMemReq(Active);
    setRd(Active);
    Async_Yield(2);

    AssertClock(M1, T2, Level_PosEdge);
    // time for some book keeping
    if (_state.Instruction.InstructionAddress == 0)
        _state.Instruction.InstructionAddress = _state.Registers.PC - 1;
    Async_Yield(3);

    AssertClock(M1, T2, Level_NegEdge);
    Async_Yield(4);

    AssertClock(M1, T3, Level_PosEdge);
    _state.Instruction.Data = getDataBus();
    setRd(Inactive);
    setMemReq(Inactive);
    setM1(Inactive);
    setAddressIR();
    setRefresh(Active);
    Async_Yield(5);

    AssertClock(M1, T3, Level_NegEdge);
    setMemReq(Active);
    Decode();
    Async_Yield(6);
}
Async_End

void OnClock_InstructionLoad(AsyncThis* async)
{
    switch (_state.Clock.TL)
    {
    case 6:
        OnClock_OD(async);
        _state.Instruction.Instruction = LookupInstruction();
        assert(_state.Instruction.Instruction != nullptr);
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
    Async_Reset(&_state.Instruction.Async);

    assert(_state.Instruction.Instruction->Count < _state.Instruction.MCycleIndex);
    while (_state.Clock.T <= _state.Instruction.Instruction->Cycles[_state.Instruction.MCycleIndex].clocks)
    {
        assert(_state.Instruction.Instruction->Count < _state.Instruction.MCycleIndex);
        _state.Instruction.Instruction->Cycles[_state.Instruction.MCycleIndex].OnClock(&_state.Instruction.Async);
        Async_Yield(1);
    }
}
Async_End

Async_Function(Execute)
{
    Async_Reset(&_state.Instruction.Async);

    AssertClock(M1, T4, Level_PosEdge);
    if (_state.Instruction.Instruction != nullptr)
    {
        _state.Instruction.Instruction->Cycles[1].OnClock(&_state.Instruction.Async);
    }
    else
    {
        assert(_state.Instruction.ExtIndex > 0);
    }
    Async_Yield(1);

    AssertClock(M1, T4, Level_NegEdge);
    if (_state.Instruction.Instruction != nullptr)
    {
        _state.Instruction.Instruction->Cycles[1].OnClock(&_state.Instruction.Async);
    }
    else if (_state.Instruction.ExtIndex == 2)
    {
        // assign a temp instruction to read the reversed d - opcode
        _state.Instruction.Instruction = &ExtendedReverseOpcodeFetch;
    }
    setMemReq(Inactive);
    Async_Yield(2);

    if (_state.Instruction.Instruction != nullptr)
    {
        while (_state.Instruction.MCycleIndex < 6 &&
            _state.Instruction.Instruction->Cycles[_state.Instruction.MCycleIndex].clocks != 0)
        {
            Async_WaitUntil(3, ExecuteInstructionPart(&instructionAsync));
        }
    }
    else
    {
        // more M1 cycles
        InitClock();
    }
}
Async_End

Async_Function(Interrupt)
{

}
Async_End

Async_Function(ClockTick)
{
    Async_WaitUntil(1, FetchDecode(&fetchAsync));
    Async_WaitUntil(2, Execute(&executeAsync));
    Async_WaitUntil(3, Interrupt(&interruptAsync));
}
Async_End
