#include "stdafx.h"
#include "Memory.h"
#include "CpuState.h"

extern CpuState _state;

Memory::Memory(CpuZ80TestHost* host)
    : _host(host), _length(0), _bytes(nullptr)
{ }

void Memory::ClockTick()
{
    if (_state.Clock.Level == Level::PosEdge)
    {
        if (_host->Rd && _host->MemReq)
        {
            if (_host->Address < _length)
            {
                _host->Data =_bytes[_host->Address];
            }
        }
    }
}