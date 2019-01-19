#pragma once

#include <stdint.h>

class CpuZ80TestHost;
void SetCpuZ80Host(CpuZ80TestHost* host);

class CpuZ80TestHost
{
public:
    CpuZ80TestHost() { SetCpuZ80Host(this); }
    virtual void setAddressBus(uint16_t address) { Address = address; }
    virtual void setDataBus(uint8_t data) { Data = data; }
    virtual void setBusAck(bool level) { BusAck = level; }
    virtual void setHalt(bool level) { Halt = level; }
    virtual void setRd(bool level) { Rd = level; }
    virtual void setWr(bool level) { Wr = level; }
    virtual void setMemReq(bool level) { MemReq = level; }
    virtual void setIOReq(bool level) { IoReq = level; }
    virtual void setRefresh(bool level) { Refresh = level; }

    // inputs

    virtual uint8_t getDataBus() { return Data; }
    virtual bool getReset() { return Rst; }
    virtual bool getBusReq() { return BusReq; }
    virtual bool getNmi() { return Nmi; }
    virtual bool getInt() { return Int; }
    virtual bool getWait() { return Wait; }

    uint16_t Address;
    uint8_t Data;
    bool BusReq;
    bool BusAck;
    bool Halt;
    bool Rd;
    bool Wr;
    bool MemReq;
    bool IoReq;
    bool Nmi;
    bool Int;
    bool Rst;
    bool Wait;
    bool Refresh;
};