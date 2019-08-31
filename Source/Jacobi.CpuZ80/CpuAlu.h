#pragma once

#include "Types.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void SetBit8(uint8_t* storage, uint8_t bit, bool_t value);
bool_t GetBit8(uint8_t storage, uint8_t bit);

#ifdef __cplusplus
}
#endif
