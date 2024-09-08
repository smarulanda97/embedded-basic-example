#include "glyph_display.h"
#include "stdio.h"
#include "timer.h"

const char *MESSAGE = "Hello world";

int main(void) {
    if (glyph_display_is_present()) {
        while (true) {
            for (unsigned int index = 0; index < strlen(MESSAGE); index++) {
                glyph_display_show_character(MESSAGE[index]);
                delay_ms(250);
            }
        }
    }
}

