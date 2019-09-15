#include "Memory.h"

bool_t Memory_Read(Memory* memory, uint16_t address, uint8_t* storage)
{
    if (memory->length < address)
    {
        *storage = memory->bytes[address];
        return true;
    }
    
    return false;
}

bool_t Memory_Write(Memory* memory, uint16_t address, uint8_t data)
{
    if (memory->length < address)
    {
        memory->bytes[address] = data;
        return true;
    }
    
    return false;
}

/* [] END OF FILE */
