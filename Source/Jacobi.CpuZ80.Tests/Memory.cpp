#include "stdafx.h"
#include "Memory.h"
#include "CpuState.h"

extern CpuState _state;

Memory::Memory(CpuZ80TestHost* host)
    : _host(host), _bytes(nullptr), _length(0)
{ }

bool Memory::ClockTick()
{
    if (_host->MemReq)
    {
        if (_host->Address < _length)
        {
            if (_state.Clock.Level == Level_PosEdge)
            {
                if (_host->Rd)
                {
                    _host->Data = _bytes[_host->Address];
                }

                if (_host->Wr)
                {
                    _bytes[_host->Address] = _host->Data;
                }
            }
        }
        else
        {
            return false;
        }
    }
    
    return true;
}