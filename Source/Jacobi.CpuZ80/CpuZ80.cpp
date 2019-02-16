#include "stdafx.h"
#include "CpuZ80.h"
#include "CpuState.h"

extern CpuState _state;

void SetRegisters8(Registers8 reg, uint8_t value)
{
    switch (reg)
    {
    case Registers8::B:
        _state.Registers._BC.B = value;
        break;
    case Registers8::C:
        _state.Registers._BC.C = value;
        break;
    case Registers8::D:
        _state.Registers._DE.D = value;
        break;
    case Registers8::E:
        _state.Registers._DE.E = value;
        break;
    case Registers8::H:
        _state.Registers._HL.H = value;
        break;
    case Registers8::L:
        _state.Registers._HL.L = value;
        break;
    case Registers8::A:
        _state.Registers._AF.A = value;
        break;

    case Registers8::HL:
    default:
        assert(false);
    }
}

uint8_t GetRegisters8(Registers8 reg)
{
    switch (reg)
    {
    case Registers8::B:
        return _state.Registers._BC.B;
    case Registers8::C:
        return _state.Registers._BC.C;
    case Registers8::D:
        return _state.Registers._DE.D;
    case Registers8::E:
        return _state.Registers._DE.E;
    case Registers8::H:
        return _state.Registers._HL.H;
    case Registers8::L:
        return _state.Registers._HL.L;
    case Registers8::A:
        return _state.Registers._AF.A;

    case Registers8::HL:
    default:
        assert(false);
    }
    return 0;
}

void SetRegisters16(Registers16 reg, uint16_t value)
{
    switch (reg)
    {
    case Registers16::BC:
        _state.Registers.BC = value;
        break;
    case Registers16::DE:
        _state.Registers.DE = value;
        break;
    case Registers16::HL:
        _state.Registers.HL = value;
        break;
    case Registers16::AF:
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
    case RegistersSP16::BC:
        _state.Registers.BC = value;
        break;
    case RegistersSP16::DE:
        _state.Registers.DE = value;
        break;
    case RegistersSP16::HL:
        _state.Registers.HL = value;
        break;
    case RegistersSP16::SP:
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
    case RegistersSP16::BC:
        return _state.Registers.BC;
    case RegistersSP16::DE:
        return _state.Registers.DE;
    case RegistersSP16::HL:
        return _state.Registers.HL;
    case RegistersSP16::SP:
        return _state.Registers.SP;

    default:
        assert(false);
    }

    return 0;
}