#include "Common.h"
#include "project.h"

// outputs

#ifdef Z80ICE
    
void setAddressBus(uint16_t address)
{
    AddressHi_Write(address >> 8);
    AddressLo_Write(address);
}

void setDataBus(uint8_t data)
{
    Data_Write(data);
}

void floatBus(Signal active)
{
    BusCtrl_Write(FromSignal(active));
}

void setBusAck(Signal active)
{
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

#endif

/* [] END OF FILE */
