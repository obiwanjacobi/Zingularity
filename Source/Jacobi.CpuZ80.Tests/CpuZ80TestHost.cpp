#include "stdafx.h"
#include "../Jacobi.CpuZ80/CpuZ80Host.h"
#include "CpuZ80TestHost.h"
#include <assert.h>

static CpuZ80TestHost* _host;

void SetCpuZ80Host(CpuZ80TestHost* host)
{
    _host = host;
}

void setAddressBus(uint16_t address)
{
    assert(_host != nullptr);
    _host->setAddressBus(address);
}

void floatBus(Signal active)
{
    assert(_host != nullptr);
    _host->floatBus(active);
}

void setDataBus(uint8_t data)
{
    assert(_host != nullptr);
    _host->setDataBus(data);
}

void setBusAck(Signal level) // host also floats buses
{
    assert(_host != nullptr);
    _host->setBusAck(level == Active);
}

void setHalt(Signal level)
{
    assert(_host != nullptr);
    _host->setHalt(level == Active);
}

void setRd(Signal level)
{
    assert(_host != nullptr);
    _host->setRd(level == Active);
}

void setWr(Signal level)
{
    assert(_host != nullptr);
    _host->setWr(level == Active);
}

void setMemReq(Signal level)
{
    assert(_host != nullptr);
    _host->setMemReq(level == Active);
}

void setIOReq(Signal level)
{
    assert(_host != nullptr);
    _host->setIOReq(level == Active);
}

void setRefresh(Signal level)
{
    assert(_host != nullptr);
    _host->setRefresh(level == Active);
}

void setM1(Signal level)
{
    assert(_host != nullptr);
    _host->setM1(level == Active);
}

// inputs

uint8_t getDataBus()
{
    assert(_host != nullptr);
    return _host->getDataBus();
}

Signal getReset()
{
    assert(_host != nullptr);
    return _host->getReset() ? Active : Inactive;
}

Signal getBusReq()
{
    assert(_host != nullptr);
    return _host->getBusReq() ? Active : Inactive;
}

Signal getNmi()
{
    assert(_host != nullptr);
    return _host->getNmi() ? Active : Inactive;
}

Signal getInt()
{
    assert(_host != nullptr);
    return _host->getInt() ? Active : Inactive;
}

Signal getWait()
{
    assert(_host != nullptr);
    return _host->getWait() ? Active : Inactive;
}
