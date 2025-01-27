#include QMK_KEYBOARD_H

#define RIGHT_HAND 0
#define LEFT_HAND 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [RIGHT_HAND] = LAYOUT(
        DPI_CONFIG, MS_BTN3, DRAG_SCROLL, MS_BTN2,
        MS_BTN1,                          TO(LEFT_HAND)
    ),
    [LEFT_HAND] = LAYOUT(
        MS_BTN2, DRAG_SCROLL, MS_BTN3, DPI_CONFIG,
        TO(RIGHT_HAND),                MS_BTN1
    )
};
