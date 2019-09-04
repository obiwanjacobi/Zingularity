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

uint8_t SetBit8(uint8_t value8, uint8_t bit, bool_t value1);
bool_t GetBit8(uint8_t value, uint8_t bit);

uint8_t Sub8(uint8_t minuend, uint8_t subtrahend, AluMode carry);



bool_t IsParityEven(uint8_t value);
bool_t IsOverflow(uint8_t value1, uint8_t value2, uint16_t result);
bool_t IsNegative(uint8_t value);
bool_t IsZero(uint8_t value);
bool_t HalfCarry(uint8_t beforeValue, uint8_t result);
bool_t HalfBorrow(uint8_t beforeValue, uint8_t result);
bool_t Carry(uint16_t result);
bool_t Borrow(uint16_t result);

#ifdef __cplusplus
}
#endif
