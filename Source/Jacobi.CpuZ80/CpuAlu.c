#include "CpuAlu.h"


void SetBit8(uint8_t* storage, uint8_t bit, bool_t value)
{
    if (value)
    {
        *storage |= (1 << bit);
    }
    else
    {
        *storage &= ~(1 << bit);
    }
}

bool_t GetBit8(uint8_t storage, uint8_t bit)
{
    return storage & (1 << bit);
}
