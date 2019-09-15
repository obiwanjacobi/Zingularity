#ifdef Z80TEST
    
#include <stdint.h>
#include "Types.h"

typedef struct
{
    uint8_t* bytes; 
    uint16_t length;
    
} Memory;

bool_t Memory_Read(Memory* memory, uint16_t address, uint8_t* storage);
bool_t Memory_Write(Memory* memory, uint16_t address, uint8_t data);

#endif
/* [] END OF FILE */
