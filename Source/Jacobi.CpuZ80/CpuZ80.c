#include "CpuZ80.h"
#include "CpuState.h"
#include "CpuZ80Host.h"

extern CpuState _state;

void SetRegisters8(Registers8 reg, uint8_t value)
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

uint8_t GetRegisters8(Registers8 reg)
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

void SetRegisters16(Registers16 reg, uint16_t value)
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

void SetRegistersSP16(RegistersSP16 reg, uint16_t value)
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
uint16_t GetRegistersSP16(RegistersSP16 reg)
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