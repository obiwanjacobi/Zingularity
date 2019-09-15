#include "Types.h"

typedef struct
{
    uint16_t Address;
    uint8_t DataOut;
    uint8_t DataIn;
    
    bool_t RST;
    bool_t NMI;
    bool_t INT;
    bool_t BUSREQ;
    bool_t BUSACK;
    bool_t HALT;
    bool_t WAIT;
    bool_t RFSH;
    bool_t M1;
    bool_t MEMRQ;
    bool_t IOREQ;
    bool_t RD;
    bool_t WR;
    
} CpuPinState;

extern CpuPinState _emuPinState;

/* [] END OF FILE */
