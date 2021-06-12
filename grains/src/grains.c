#include "grains.h"

uint64_t square(uint8_t index)
{
    return powl(2, index) / 2;
}

uint64_t total(void) 
{
    return powl(2, 64) - 1;
}
