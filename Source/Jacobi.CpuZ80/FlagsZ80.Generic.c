#include "FlagsZ80.h"
#include "CpuState.h"
#include "CpuAlu.h"

extern CpuState _state;

bool_t AddressHi_Bit3()
{
    return GetBit8(_state.Instruction.Address >> 8, Bit3);
}

bool_t AddressHi_Bit5()
{
    return GetBit8(_state.Instruction.Address >> 8, Bit5);
}

bool_t BC_IsNotZero()
{
    return (_state.Registers.BC != 0);
}


bool_t Borrow_Bit16()
{
    return false;
}
bool_t Borrow_Bit12()
{
    return false;
}
bool_t Borrow_Bit4()
{
    return false;
}
bool_t Borrow_Bit8()
{
    return false;
}

bool_t Carry_Bit11()
{
    return false;
}
bool_t Carry_Bit15()
{
    return false;
}
bool_t Carry_Bit3()
{
    return false;
}
bool_t Carry_Bit7()
{
    return false;
}

bool_t CarryFlag()
{
    return GetFlag(Flag_C);
}

bool_t Data_Bit7()
{
    return GetBit8(_state.Instruction.Data, Bit7);
}

bool_t Data_IsZero()
{
    return (_state.Instruction.Data == 0);
}

bool_t IFF2_Value()
{
    return _state.Interrupt.IFF2;
}

bool_t Reset()
{
    return false;
}

bool_t Result_Bit15()
{
    return false;
}

bool_t Result_Bit3()
{
    return GetBit8(_state.Instruction.Data, Bit3);
}

bool_t Result_Bit5()
{
    return GetBit8(_state.Instruction.Data, Bit5);
}

bool_t Result_Bit7()
{
    return GetBit8(_state.Instruction.Data, Bit7);
}

bool_t Result_IsValue7F()
{
    return _state.Instruction.Data == 0x7F;
}

bool_t Result_IsValue80()
{
    return _state.Instruction.Data == 0x80;
}

bool_t Result_IsValueFF()
{
    return _state.Instruction.Data == 0xFF;
}

bool_t Result_IsZero()
{
    return _state.Instruction.Data == 0;
}

bool_t Result_Overflows()
{
    return false;
}

bool_t Result_ParityIsEven()
{
    return false;
}

bool_t Set()
{
    return true;
}
