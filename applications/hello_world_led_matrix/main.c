#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <led.h>
#include <timer.h>
#include <console.h>
#include "glyph_display.h"

int main(void) {
    const char *boot_message = "Application running on top of TockOS\r\n";
    const char *led_matrix_message = "v2 hello world from a LED matrix";

    putnstr_async(boot_message, strlen(boot_message), NULL, NULL);

    if (!glyph_display_is_present()) {
        putnstr("glyph_display driver is not present\r\n", 36);
        return 0;
    }

    putnstr("glyph_display driver is present\r\n", 34);

    while (1) {
        for (unsigned int index = 0; index < strlen(led_matrix_message); index++) {
            glyph_display_show_character(led_matrix_message[index]);
            delay_ms(500);
        }
    }

    return 0;
}