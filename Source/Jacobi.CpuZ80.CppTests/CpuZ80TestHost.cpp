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

void setDataBus(uint8_t data)
{
    assert(_host != nullptr);
    _host->setDataBus(data);
}

void setBusAck(bool level) // host also floats buses
{
    assert(_host != nullptr);
    _host->setBusAck(level);
}

void setHalt(bool level)
{
    assert(_host != nullptr);
    _host->setHalt(level);
}

void setRd(bool level)
{
    assert(_host != nullptr);
    _host->setRd(level);
}

void setWr(bool level)
{
    assert(_host != nullptr);
    _host->setWr(level);
}

void setMemReq(bool level)
{
    assert(_host != nullptr);
    _host->setMemReq(level);
}

void setIOReq(bool level)
{
    assert(_host != nullptr);
    _host->setIOReq(level);
}

void setRefresh(bool level)
{
    assert(_host != nullptr);
    _host->setRefresh(level);
}

// inputs

uint8_t getDataBus()
{
    assert(_host != nullptr);
    return _host->getDataBus();
}

bool getReset()
{
    assert(_host != nullptr);
    return _host->getReset();
}

bool getBusReq()
{
    assert(_host != nullptr);
    return _host->getBusReq();
}

bool getNmi()
{
    assert(_host != nullptr);
    return _host->getNmi();
}

bool getInt()
{
    assert(_host != nullptr);
    return _host->getInt();
}

bool getWait()
{
    assert(_host != nullptr);
    return _host->getWait();
}
