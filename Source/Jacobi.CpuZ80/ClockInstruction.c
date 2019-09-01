#include "ClockInstruction.h"
#include "ClockTick.h"
#include "InstructionsZ80.h"
#include "FunctionsZ80.h"
#include <assert.h>
#include <string.h>

extern CpuState _state;

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
        return table[_state.Instruction.DataIn].Instruction;
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
            if (table[i].OpCode == _state.Instruction.DataIn)
                return table[i].Instruction;
        }
    }
    return nullptr;
}


void Decode()
{
    switch (_state.Instruction.DataIn)
    {
    case 0xDD:
    case 0xED:
    case 0xFD:
        _state.Instruction.Ext[0] = _state.Instruction.DataInl;
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

bool_t InstructionIsDone()
{
    return _state.Instruction.IsCompleted;
}

bool_t SetIfInstructionIsDone()
{
    _state.Instruction.IsCompleted = (
        _state.Instruction.Info != nullptr &&
        (_state.Instruction.MCycleIndex == MaxMCycleIndex ||
            _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex + 1].clocks == 0) &&
        _state.Clock.T >= _state.Instruction.Info->Cycles[_state.Instruction.MCycleIndex].clocks &&
        _state.Clock.Level == Level_NegEdge);

    return InstructionIsDone();
}

void ClearInstructionIfDone()
{
    // detect end of instruction
    if (InstructionIsDone())
    {
        ClearInstruction();
        ResetClock();
    }
}
