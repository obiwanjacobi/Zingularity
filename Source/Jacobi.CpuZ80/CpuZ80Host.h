#pragma once

#include <stdint.h>

//
// decls to be implemented by host
//

//
// booleans are logical!
//  false = inactive (high)
//  true = active (low)
//

void setAddressBus(uint16_t address);
void setDataBus(uint8_t data);
void setBusAck(bool active); // host also floats buses
void setHalt(bool active);
void setRd(bool active);
void setWr(bool active);
void setMemReq(bool active);
void setIOReq(bool active);
void setRefresh(bool active);
void setM1(bool active);

// inputs

uint8_t getDataBus();
bool getReset();
bool getBusReq();
bool getNmi();
bool getInt();
bool getWait();