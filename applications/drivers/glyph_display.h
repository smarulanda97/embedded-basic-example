#pragma once
#include "tock.h"

#define GLYPH_DISPLAY_DRIVER_NUM 0xa0002

#ifdef __cplusplus
    extern "C" {
#endif

// check if the driver matrix_led is present
bool glyph_display_is_present(void);

// turn on the leds required to display the given character
bool glyph_display_show_character(char character);

// turn on all the leds in the matrix to check if they are working
bool glyph_display_test(void);

#ifdef __cplusplus
    extern "C" }
#endif
