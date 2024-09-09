#include "glyph_display.h"
#include "tock.h"

bool glyph_display_is_present(void) {
    syscall_return_t ret = command(GLYPH_DISPLAY_DRIVER_NUM, 0, 0, 0);

    if (ret.type == TOCK_SYSCALL_SUCCESS) {
        return true;
    } else {
        return false;
    }
}

bool glyph_display_show_character(char character) {
    syscall_return_t ret = command(GLYPH_DISPLAY_DRIVER_NUM, 1, character, 0);

    if (ret.type == TOCK_SYSCALL_SUCCESS) {
        return true;
    } else {
        return false;
    }
}
