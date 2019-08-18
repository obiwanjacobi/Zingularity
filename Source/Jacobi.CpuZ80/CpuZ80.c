#include "CpuZ80.h"
#include "CpuState.h"
#include "CpuZ80Host.h"

extern CpuState _state;

void SetRegisters8(Registers8 reg, uint8_t value)
{
    switch (reg)
    {
    case Reg8_B:
        _state.Registers._BC.B = value;
        break;
    case Reg8_C:
        _state.Registers._BC.C = value;
        break;
    case Reg8_D:
        _state.Registers._DE.D = value;
        break;
    case Reg8_E:
        _state.Registers._DE.E = value;
        break;
    case Reg8_H:
        _state.Registers._HL.H = value;
        break;
    case Reg8_L:
        _state.Registers._HL.L = value;
        break;
    case Reg8_A:
        _state.Registers._AF.A = value;
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
        return _state.Registers._BC.B;
    case Reg8_C:
        return _state.Registers._BC.C;
    case Reg8_D:
        return _state.Registers._DE.D;
    case Reg8_E:
        return _state.Registers._DE.E;
    case Reg8_H:
        return _state.Registers._HL.H;
    case Reg8_L:
        return _state.Registers._HL.L;
    case Reg8_A:
        return _state.Registers._AF.A;

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
    if (_state.Registers._IR.R < 127)
        _state.Registers._IR.R++;
    else
        _state.Registers._IR.R &= 0x7F; //??
}