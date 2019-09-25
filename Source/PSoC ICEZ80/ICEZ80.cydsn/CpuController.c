#ifdef Z80TEST

#include "project.h"
#include "CpuController.h"
#include "TestCpuZ80Host.h"
#include "Common.h"
#include "DebugConsole.h"
    
#include "Async.h"
#include "CpuState.h"
#include "ClockTick.h"

CpuPinState _cpuPinState;
CpuPinState _emuPinState;

CpuState _state;
AsyncThis asyncClockTick;


void ctrl_clock(bool_t high)
{
    if (high) CyPins_SetPin(CLK_0);
    else CyPins_ClearPin(CLK_0);
    
    ClockTick(&asyncClockTick, high ? Level_PosEdge : Level_NegEdge);
}

void ctrl_setReset(Signal active)
{
    if (active) CyPins_ClearPin(RESET_0);
    else CyPins_SetPin(RESET_0);
    
    _cpuPinState.RST = FromSignal(active);
    _emuPinState.RST = FromSignal(active);
}

void ctrl_setNmi(Signal active)
{
    if (active) CyPins_ClearPin(NMI_0);
    else CyPins_SetPin(NMI_0);
    
    _cpuPinState.NMI = FromSignal(active);
    _emuPinState.NMI = FromSignal(active);
}

void ctrl_setInt(Signal active)
{
    if (active) CyPins_ClearPin(INT_RQ_0);
    else CyPins_SetPin(INT_RQ_0);
    
    _cpuPinState.INT = FromSignal(active);
    _emuPinState.INT = FromSignal(active);
}

void ctrl_setWait(Signal active)
{
    if (active) CyPins_ClearPin(WAIT_RQ_0);
    else CyPins_SetPin(WAIT_RQ_0);
    
    _cpuPinState.WAIT = FromSignal(active);
    _emuPinState.WAIT = FromSignal(active);
}

void ctrl_setData(uint8_t data)
{
    Data_Write(data);
    
    _cpuPinState.DataIn = data;
    _emuPinState.DataIn = data;
}

void ctrl_readCpuPins()
{
    _cpuPinState.Address = AddressHi_Read() << 8 | AddressLo_Read();
    _cpuPinState.DataOut = Data_Read();
    _cpuPinState.BUSACK = BUSACK_Read();
    _cpuPinState.HALT = HALT_Read();
    _cpuPinState.IOREQ = IORQ_Read();
    _cpuPinState.M1 = M1_Read();
    _cpuPinState.MEMRQ = MEMRQ_Read();
    _cpuPinState.RD = RD_Read();
    _cpuPinState.RFSH = RFSH_Read();
    _cpuPinState.WR = WR_Read();
}

bool_t ctrl_MemoryIO(Memory* memory)
{
    bool_t outOfMemoryBounds = false;
    
    if (_cpuPinState.MEMRQ)
    {
        if (_cpuPinState.RD)
        {
            uint8_t data = 0;
            outOfMemoryBounds = Memory_Read(memory, _cpuPinState.Address, &data);
            if (!outOfMemoryBounds)
            {
                BusCtrl_Write(true);
                ctrl_setData(data);
                BusCtrl_Write(false);
            }
        }
        
        if (_cpuPinState.WR)
        {
            outOfMemoryBounds = Memory_Write(memory, _cpuPinState.Address, _cpuPinState.DataOut);
        }
    }
    
    return outOfMemoryBounds;
}

bool_t ctrl_IO(Memory* memory)
{
    ctrl_readCpuPins();
    
    bool_t outOfMemoryBounds = ctrl_MemoryIO(memory);
    return outOfMemoryBounds;
}

bool_t ctrl_PrintDiff()
{
    bool_t diff = false;
    
    if (_cpuPinState.Address != _emuPinState.Address)
    {
        DebugConsole_Log("Address differs.");
        diff = true;
    }
    
    if (_cpuPinState.BUSACK != _emuPinState.BUSACK)
    {
        DebugConsole_Log("BUSACK differs.");
        diff = true;
    }
    
    if (_cpuPinState.DataOut != _emuPinState.DataOut)
    {
        DebugConsole_Log("Data differs.");
        diff = true;
    }
    
    if (_cpuPinState.HALT != _emuPinState.HALT)
    {
        DebugConsole_Log("HALT differs.");
        diff = true;
    }
    
    if (_cpuPinState.IOREQ != _emuPinState.IOREQ)
    {
        DebugConsole_Log("IOREQ differs.");
        diff = true;
    }
    
    if (_cpuPinState.M1 != _emuPinState.M1)
    {
        DebugConsole_Log("M1 differs.");
        diff = true;
    }
    
    if (_cpuPinState.MEMRQ != _emuPinState.MEMRQ)
    {
        DebugConsole_Log("MEMRQ differs.");
        diff = true;
    }
    
    if (_cpuPinState.RD != _emuPinState.RD)
    {
        DebugConsole_Log("RD differs.");
        diff = true;
    }
    
    if (_cpuPinState.RFSH != _emuPinState.RFSH)
    {
        DebugConsole_Log("RFSH differs.");
        diff = true;
    }
    
    if (_cpuPinState.WR != _emuPinState.WR)
    {
        DebugConsole_Log("WR differs.");
        diff = true;
    }
}

void ctrl_InitPins()
{
    CyPins_ClearPin(CLK_0);
    
    ctrl_setData(0);
    ctrl_setInt(Inactive);
    ctrl_setNmi(Inactive);
    ctrl_setReset(Inactive);
    ctrl_setWait(Inactive);

    ctrl_readCpuPins();
}

#endif

/* [] END OF FILE */
