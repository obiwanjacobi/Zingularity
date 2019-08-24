#include "CpuZ80Host.h"
#include "project.h"

// outputs

void setAddressBus(uint16_t address)
{
    AddressHi_Write(address >> 8);
    AddressLo_Write(address);
}

void setDataBus(uint8_t data)
{
    Data_Write(data);
}

#define FromSignal(s) s == Active ? 1 : 0

// host also floats buses
void setBusAck(Signal active)
{
    BusCtrl_Write(FromSignal(active));
    BUSACK_Write(FromSignal(active));
}

void setHalt(Signal active)
{
    HALT_Write(FromSignal(active));
}

void setRd(Signal active)
{
    RD_Write(FromSignal(active));
}

void setWr(Signal active)
{
    WR_Write(FromSignal(active));
}

void setMemReq(Signal active)
{
    MEMRQ_Write(FromSignal(active));
}

void setIOReq(Signal active)
{
    IORQ_Write(FromSignal(active));
}

void setRefresh(Signal active)
{
    RFSH_Write(FromSignal(active));
}

void setM1(Signal active)
{
    M1_Write(FromSignal(active));
}

// inputs

#define ToSignal(d) d ? Active : Inactive

uint8_t getDataBus()
{
    return Data_Read();    
}

Signal getReset()
{
    return ToSignal(RESET_Read());
}

Signal getBusReq()
{
    return ToSignal(BUSRQ_Read());
}

Signal getNmi()
{
    return ToSignal(NMI_Read());
}

Signal getInt()
{
    return ToSignal(INT_RQ_Read());
}

Signal getWait()
{
    return ToSignal(WAIT_RQ_Read());
}

/* [] END OF FILE */