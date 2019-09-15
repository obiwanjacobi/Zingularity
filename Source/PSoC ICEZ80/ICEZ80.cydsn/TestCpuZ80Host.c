#ifdef Z80TEST
    
#include "Common.h"
#include "project.h"
#include "TestCpuZ80Host.h"

// outputs

void setAddressBus(uint16_t address)
{
    _emuPinState.Address = address;
}

void setDataBus(uint8_t data)
{
    _emuPinState.DataOut = data;
}

void floatBus(Signal active)
{
    //_emuPinState.floatBus = FromSignal(active);
}

void setBusAck(Signal active)
{
    _emuPinState.BUSACK = FromSignal(active);
}

void setHalt(Signal active)
{
    _emuPinState.HALT = FromSignal(active);
}

void setRd(Signal active)
{
    _emuPinState.RD = FromSignal(active);
}

void setWr(Signal active)
{
    _emuPinState.WR = FromSignal(active);
}

void setMemReq(Signal active)
{
    _emuPinState.MEMRQ = FromSignal(active);
}

void setIOReq(Signal active)
{
    _emuPinState.IOREQ = FromSignal(active);
}

void setRefresh(Signal active)
{
    _emuPinState.RFSH = FromSignal(active);
}

void setM1(Signal active)
{
    _emuPinState.M1 = FromSignal(active);
}

// inputs

uint8_t getDataBus()
{
    return ToSignal(_emuPinState.DataIn);
}

Signal getReset()
{
    return ToSignal(_emuPinState.RST);
}

Signal getBusReq()
{
    return ToSignal(_emuPinState.BUSREQ);
}

Signal getNmi()
{
    return ToSignal(_emuPinState.NMI);
}

Signal getInt()
{
    return ToSignal(_emuPinState.INT);
}

Signal getWait()
{
    return ToSignal(_emuPinState.WAIT);
}

#endif

/* [] END OF FILE */
