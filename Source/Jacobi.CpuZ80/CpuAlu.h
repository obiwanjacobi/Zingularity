#pragma once

#include "Types.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum
    {
        Alu_WithoutCarry,
        Alu_WithCarry

    } AluMode;


    uint8_t Add8(uint8_t augend, uint8_t addend, AluMode carry);
    uint8_t Sub8(uint8_t minuend, uint8_t subtrahend, AluMode carry);
    uint8_t Inc8(uint8_t value);
    uint8_t Dec8(uint8_t value);

    uint8_t SetBit8(uint8_t value8, uint8_t bit, bool_t value1);
    bool_t GetBit8(uint8_t value, uint8_t bit);


#ifdef __cplusplus
}
#endif
