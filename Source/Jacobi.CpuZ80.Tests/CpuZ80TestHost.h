#pragma once

#include "TestGlobals.h"
#include <stdint.h>

class CpuZ80TestHost;
void SetCpuZ80Host(CpuZ80TestHost* host);

class CpuZ80TestHost
{
public:
    CpuZ80TestHost()
        : Address(0), Data(0), BusAck(false), BusReq(false), Halt(false), Rd(false), Wr(false), MemReq(false), 
            IoReq(false), Nmi(false), Int(false), Rst(false), Wait(false), Refresh(false), M1(false)
    { SetCpuZ80Host(this); }

    // outputs

    void setAddressBus(uint16_t address) { Address = address; }
    void setDataBus(uint8_t data) { Data = data; }
    void floatBus(bool active) { FloatBus = active; }
    void setBusAck(bool active) { BusAck = active; }
    void setHalt(bool active) { Halt = active; }
    void setRd(bool active) { Rd = active; }
    void setWr(bool active) { Wr = active; }
    void setMemReq(bool active) { MemReq = active; }
    void setIOReq(bool active) { IoReq = active; }
    void setRefresh(bool active) { Refresh = active; }
    void setM1(bool active) { M1 = active; }

    // inputs

    uint8_t getDataBus() { return Data; }
    bool getReset() { return Rst; }
    bool getBusReq() { return BusReq; }
    bool getNmi() { return Nmi; }
    bool getInt() { return Int; }
    bool getWait() { return Wait; }

    // state

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

    bool FloatBus;
};