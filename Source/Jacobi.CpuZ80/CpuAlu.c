#include "CpuAlu.h"
#include "CpuState.h"

extern CpuState _state;


uint8_t Sub8(uint8_t minuend, uint8_t subtrahend, AluMode carry)
{
    uint16_t difference = (uint16_t)minuend - subtrahend;
    if (carry == Alu_WithCarry && GetFlag(Flag_C))
        difference--;

    uint8_t result = (uint8_t)difference;

    SetFlag(Flag_S, IsNegative(result));
    SetFlag(Flag_Z, IsZero(result));
    SetFlag(Flag_H, HalfBorrow(minuend, result));
    SetFlag(Flag_N, true);
    SetFlag(Flag_C, Borrow(difference));

    return result;
}

uint8_t SetBit8(uint8_t value8, uint8_t bit, bool_t value1)
{
    if (value1)
    {
        return value8 | (1 << bit);
    }
    else
    {
        return value8 & ~(1 << bit);
    }
}

bool_t GetBit8(uint8_t value, uint8_t bit)
{
    return (value & (1 << bit)) > 0;
}

bool_t IsParityEven(uint8_t value)
{
    bool_t oddParity = false;

    while (value != 0)
    {
        oddParity = oddParity ? false : true;
        value = (uint8_t)(value & (value - 1));
    }

    return oddParity == false;
}

bool_t IsOverflow(uint8_t value1, uint8_t value2, uint16_t result)
{
    if (IsNegative(value1) && IsNegative(value2))
    {
        return !IsNegative((uint8_t)result);
    }

    if (!IsNegative(value1) && !IsNegative(value2))
    {
        return IsNegative((uint8_t)result);
    }

    return false;
}

bool_t IsNegative(uint8_t value)
{
    return (value & 0x80) > 0;
}

bool_t IsZero(uint8_t value)
{
    return value == 0;
}

bool_t HalfCarry(uint8_t beforeValue, uint8_t result)
{ 
    return (beforeValue & 0xF0) > (result & 0xF0); 
}

bool_t HalfBorrow(uint8_t beforeValue, uint8_t result) 
{ 
    return (beforeValue & 0xF0) < (result & 0xF0); 
}

bool_t Carry(uint16_t result) 
{ 
    return (result & 0xFF00) > 0; 
}

bool_t Borrow(uint16_t result) 
{ 
    return (result & 0xFF00) > 0; 
}

