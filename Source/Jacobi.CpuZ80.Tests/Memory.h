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

    bool ClockTick();

    uint8_t operator[](int16_t index) { return _bytes[index]; }

private:
    CpuZ80TestHost* _host;
    uint8_t* _bytes;
    uint16_t _length;
};

