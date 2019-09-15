#include "CpuZ80Host.h"
#include "Types.h"
#include "Memory.h"

void ctrl_clock(bool_t high);

void ctrl_setReset(Signal active);
void ctrl_setNmi(Signal active);
void ctrl_setInt(Signal active);
void ctrl_setWait(Signal active);
void ctrl_setData(uint8_t data);

bool_t ctrl_IO(Memory* memory);
void ctrl_PrintDiff();
void ctrl_InitPins();

/* [] END OF FILE */
