#pragma once

#include <stdint.h>

//
// decls to be implemented by host
//

void setAddressBus(uint16_t address);
void setDataBus(uint8_t address);
void setBusAck(bool level); // host also floats buses
void setHalt(bool level);
void setRd(bool level);
void setWr(bool level);
void setMemReq(bool level);
void setIOReq(bool level);

// inputs

uint8_t getDataBus();
bool getReset();
bool getBusReq();
bool getNmi();
bool getInt();
bool getWait();