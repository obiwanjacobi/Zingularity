#include "ClockInterrupt.h"
#include "CpuZ80Host.h"

extern CpuState _state;

void OnClock_NMI_ACK()
{}

void OnClock_NMI_OP1()
{}

void OnClock_NMI_OP2()
{}

void OnClock_INT_ACK()
{
    switch (_state.Clock.TL)
    {
    case T1_PosEdge:
        floatBus(Inactive);
        setRefresh(Inactive);
        // no increment!
        setAddressBus(_state.Registers.PC);
        setM1(Active);
        break;
    case T1_NegEdge:
        _state.Interrupt.WaitCount = 2;
        _state.Interrupt.Wait = true;
        break;

    // no-op / wait
    case T2_PosEdge:
        break;
    case T2_NegEdge:
        if (_state.Interrupt.WaitCount == 2)
            setIOReq(Active);

        if (!_state.Interrupt.Wait)
            _state.Interrupt.DataIn = getDataBus();
        break;

    case T3_PosEdge:
        setM1(Inactive);
        setIOReq(Inactive);

        setAddressIR();
        setRefresh(Active);
        break;
    case T3_NegEdge:
        setMemReq(Active);
        break;

    case T4_PosEdge:
        break;
    case T4_NegEdge:
        setMemReq(Inactive);
        break;

    // not sure what to do here - have to test with real Z80
    case T5_PosEdge:
        break;
    case T5_NegEdge:
        break;

    default:
        Assert(false);
        break;
    }
}

void OnClock_INT_M0_OP1()
{}

void OnClock_INT_M0_OP2()
{}

void OnClock_INT_M1_OP1()
{}

void OnClock_INT_M1_OP2()
{}

void OnClock_INT_M2_OP1()
{}

void OnClock_INT_M2_OP2()
{}

void OnClock_INT_M2_OP3()
{}

void OnClock_INT_M2_OP4()
{}

const InstructionInfo NMI = 
{
    {
        { 5, OnClock_NMI_ACK },
        { 3, OnClock_NMI_OP1 },
        { 3, OnClock_NMI_OP2 },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    },
    nullptr
};

const InstructionInfo INT_M0 =
{
    {
        { 7, OnClock_INT_ACK },
        { 3, OnClock_INT_M0_OP1 },
        { 3, OnClock_INT_M0_OP2 },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    },
    nullptr
};

const InstructionInfo INT_M1 =
{
    {
        { 7, OnClock_INT_ACK },
        { 3, OnClock_INT_M1_OP1 },
        { 3, OnClock_INT_M1_OP2 },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    },
    nullptr
};

const InstructionInfo INT_M2 =
{
    {
        { 7, OnClock_INT_ACK },
        { 3, OnClock_INT_M2_OP1 },
        { 3, OnClock_INT_M2_OP2 },
        { 3, OnClock_INT_M2_OP3 },
        { 3, OnClock_INT_M2_OP4 },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    },
    nullptr
};

bool_t IsLastInterruptTCycle(Level level)
{
    if (_state.Interrupt.Info != nullptr)
    {
        return (_state.Interrupt.MCycleIndex == MaxMCycleIndex ||
            _state.Interrupt.Info->Cycles[_state.Interrupt.MCycleIndex + 1].clocks == 0) &&
            _state.Clock.T >= _state.Interrupt.Info->Cycles[_state.Interrupt.MCycleIndex].clocks &&
            _state.Clock.Level == level;
    }
    return false;
}

void CheckForInterrupt()
{
    _state.Interrupt.BusRequest = getBusReq();

    if (getNmi())
    {
        _state.Interrupt.NMI = true;
        _state.Interrupt.Halt = false;
    }

    if (!_state.Interrupt.BusRequest &&
        _state.Interrupt.IFF1 &&
        _state.Interrupt.EnableIntPendingCount == 0 &&
        getInt())
    {
        _state.Interrupt.INT = true;
        _state.Interrupt.Halt = false;
    }
}
