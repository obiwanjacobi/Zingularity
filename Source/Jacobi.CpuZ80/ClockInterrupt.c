#include "ClockInterrupt.h"
#include "CpuState.h"
#include "CpuZ80Host.h"

extern CpuState _state;

void OnClock_NMI_ACK()
{}

void OnClock_NMI_OP1()
{}

void OnClock_NMI_OP2()
{}

void OnClock_INT_ACK()
{}

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


void CheckForInterrupt()
{
    _state.Interrupt.BusRequest = getBusReq();

    if (getNmi())
    {
        _state.Interrupt.NMI = true;
        _state.Interrupt.Halt = false;
    }

    if (_state.Interrupt.IFF1 &&
        _state.Interrupt.EnableIntPendingCount == 0 &&
        getInt())
    {
        _state.Interrupt.INT = true;
        _state.Interrupt.Halt = false;
    }
}
