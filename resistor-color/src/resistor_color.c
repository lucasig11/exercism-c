#include "resistor_color.h"

int color_code(resistor_band_t color) { return color; }

const resistor_band_t* colors(void)
{ 
    static resistor_band_t color_codes[10];

    for (resistor_band_t i = BLACK; i <= WHITE; i++) {
        color_codes[i] = i;
    }
    
    return color_codes;
}