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
    virtual void setBusAck(bool active) { BusAck = active; }
    virtual void setHalt(bool active) { Halt = active; }
    virtual void setRd(bool active) { Rd = active; }
    virtual void setWr(bool active) { Wr = active; }
    virtual void setMemReq(bool active) { MemReq = active; }
    virtual void setIOReq(bool active) { IoReq = active; }
    virtual void setRefresh(bool active) { Refresh = active; }
    virtual void setM1(bool active) { M1 = active; }

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
    bool M1;
};