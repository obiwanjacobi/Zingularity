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
    void setBusAck(Signal active); // host also floats buses
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
    Signal getNmi();    // host detects pulse and resets cached value after this is called.
    Signal getInt();
    Signal getWait();

#ifdef __cplusplus
}
#endif