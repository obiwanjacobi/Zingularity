#include "CpuZ80.h"
#include "CpuState.h"
#include "CpuZ80Host.h"
#include "CpuAlu.h"

extern CpuState _state;

void SetRegister8(Registers8 reg, uint8_t value)
{
    switch (reg)
    {
    case Reg8_B:
        _state.Registers.B = value;
        break;
    case Reg8_C:
        _state.Registers.C = value;
        break;
    case Reg8_D:
        _state.Registers.D = value;
        break;
    case Reg8_E:
        _state.Registers.E = value;
        break;
    case Reg8_H:
        _state.Registers.H = value;
        break;
    case Reg8_L:
        _state.Registers.L = value;
        break;
    case Reg8_A:
        _state.Registers.A = value;
        break;

    case Reg8_HL:
    default:
        assert(false);
    }
}

uint8_t GetRegister8(Registers8 reg)
{
    switch (reg)
    {
    case Reg8_B:
        return _state.Registers.B;
    case Reg8_C:
        return _state.Registers.C;
    case Reg8_D:
        return _state.Registers.D;
    case Reg8_E:
        return _state.Registers.E;
    case Reg8_H:
        return _state.Registers.H;
    case Reg8_L:
        return _state.Registers.L;
    case Reg8_A:
        return _state.Registers.A;

    case Reg8_HL:
    default:
        assert(false);
    }
    return 0;
}

void SetRegister16(Registers16 reg, uint16_t value)
{
    switch (reg)
    {
    case Reg16_BC:
        _state.Registers.BC = value;
        break;
    case Reg16_DE:
        _state.Registers.DE = value;
        break;
    case Reg16_HL:
        _state.Registers.HL = value;
        break;
    case Reg16_AF:
        _state.Registers.AF = value;
        break;

    default:
        assert(false);
    }
}

uint16_t GetRegister16(Registers16 reg)
{
    switch (reg)
    {
    case Reg16_BC:
        return _state.Registers.BC;
    case Reg16_DE:
        return _state.Registers.DE;
    case Reg16_HL:
        return _state.Registers.HL;
    case Reg16_AF:
        return _state.Registers.AF;

    default:
        assert(false);
    }

    return 0;
}

uint8_t GetRegisterSP16Lsb(RegistersSP16 reg)
{
    switch (reg)
    {
    case Reg16_BC:
        return _state.Registers.C;
    case Reg16_DE:
        return _state.Registers.E;
    case Reg16_HL:
        return _state.Registers.L;
    case Reg16_AF:
        return _state.Registers.F;

    default:
        assert(false);
        break;
    }
        
    return 0;
}

uint8_t GetRegisterSP16Msb(RegistersSP16 reg)
{
    switch (reg)
    {
    case Reg16_BC:
        return _state.Registers.B;
    case Reg16_DE:
        return _state.Registers.D;
    case Reg16_HL:
        return _state.Registers.H;
    case Reg16_AF:
        return _state.Registers.A;

    default:
        assert(false);
        break;
    }

    return 0;
}

void SetRegisterSP16(RegistersSP16 reg, uint16_t value)
{
    switch (reg)
    {
    case Reg16sp_BC:
        _state.Registers.BC = value;
        break;
    case Reg16sp_DE:
        _state.Registers.DE = value;
        break;
    case Reg16sp_HL:
        _state.Registers.HL = value;
        break;
    case Reg16sp_SP:
        _state.Registers.SP = value;
        break;

    default:
        assert(false);
    }
}

uint16_t GetRegisterSP16(RegistersSP16 reg)
{
    switch (reg)
    {
    case Reg16sp_BC:
        return _state.Registers.BC;
    case Reg16sp_DE:
        return _state.Registers.DE;
    case Reg16sp_HL:
        return _state.Registers.HL;
    case Reg16sp_SP:
        return _state.Registers.SP;

    default:
        assert(false);
    }

    return 0;
}

void SetRegisterEx16(uint16_t reg)
{
    if (_state.Instruction.ExtIndex > 0)
    {
        switch (_state.Instruction.Ext[0])
        {
        case 0xDD:
            _state.Registers.IX = reg;
            return;
        case 0xFD:
            _state.Registers.IY = reg;
            return;
        }
    }

    _state.Registers.HL = reg;
}

uint16_t GetRegisterEx16()
{
    if (_state.Instruction.ExtIndex > 0)
    {
        switch (_state.Instruction.Ext[0])
        {
        case 0xDD:
            return _state.Registers.IX;
        case 0xFD:
            return _state.Registers.IY;
        }
    }

    return _state.Registers.HL;
}

void setAddressPC()
{
    setAddressBus(_state.Registers.PC);
    //if (!_state.Halt)
    _state.Registers.PC++;
}

void setAddressIR()
{
    setAddressBus(_state.Registers.IR);
    if (_state.Registers.R < 127)
        _state.Registers.R++;
    else
        _state.Registers.R &= 0x7F; //??
}

void SetFlag(Flags flags, bool_t value)
{
    _state.Registers.F = SetBit8(_state.Registers.F, flags, value);
}

bool_t GetFlag(Flags flags)
{
    return GetBit8(_state.Registers.F, flags);
}
