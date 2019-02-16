#include "stdafx.h"
#include "ClockTick.h"
#include "CpuState.h"
#include "CpuZ80.h"
#include "CpuZ80Host.h"
#include "InstructionsZ80.hpp"
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
    //if (!_state.Halt)
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
        _state.Instruction.Ext[_state.Instruction.ExtIndex] = _state.Instruction.Data;
        _state.Instruction.ExtIndex++;
        break;
    default:
        _state.Instruction.Instruction = LookupInstruction();
        _state.Instruction.MCycleIndex = _state.Instruction.ExtIndex;
        break;
    }
}

void ClearInstruction()
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
    // time for some book keeping
    if (_state.Instruction.InstructionAddress == 0) 
        _state.Instruction.InstructionAddress = _state.Registers.PC - 1;
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
    Decode();
    Async_Yield(6);
}
Async_End

Async_Function(Execute)
{
    _state.Instruction.Async.State = 0;

    AssertClock(MCycle::M1, TCycle::T4, Level::PosEdge);
    if (_state.Instruction.Instruction != nullptr)
    {
        _state.Instruction.Instruction->Cycles[1].OnClock(&_state.Instruction.Async);
    }
    Async_Yield(1);

    AssertClock(MCycle::M1, TCycle::T4, Level::NegEdge);
    if (_state.Instruction.Instruction != nullptr)
    {
        _state.Instruction.Instruction->Cycles[1].OnClock(&_state.Instruction.Async);
    }
    setMemReq(false);
    Async_Yield(2);
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