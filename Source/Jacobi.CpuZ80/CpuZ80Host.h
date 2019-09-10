#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum
    {
        Inactive,
        Active

    } Signal;

    //
    // decls to be implemented by host
    //

    void setAddressBus(uint16_t address);
    void setDataBus(uint8_t data);
    // A0-A15, D0-D7, RD, WR, MEMRQ, IOREQ, RFSH
    void floatBus(Signal active);
    void setBusAck(Signal active);
    void setHalt(Signal active);
    void setRd(Signal active);
    void setWr(Signal active);
    void setMemReq(Signal active);
    void setIOReq(Signal active);
    void setRefresh(Signal active);
    void setM1(Signal active);

    // inputs

    uint8_t getDataBus();
    Signal getReset();
    Signal getBusReq();
    // host detects pulse and resets cached value after this is called.
    Signal getNmi();
    Signal getInt();
    Signal getWait();

#ifdef __cplusplus
}
#endif