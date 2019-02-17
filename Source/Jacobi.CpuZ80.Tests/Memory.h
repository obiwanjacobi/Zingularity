#pragma once

#include "CpuZ80TestHost.h"

class Memory
{
public:
    Memory(CpuZ80TestHost* host);

    void Assign(uint8_t* bytes, uint16_t length)
    {
        _bytes = bytes;
        _length = length;
    }

    void ClockTick();

private:
    CpuZ80TestHost* _host;
    uint8_t* _bytes;
    uint16_t _length;
};

