/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H

#define BASE 0 // default layer

// Blank template at the bottom


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT(
    KC_W,   KC_W, KC_E, KC_R, KC_T,   KC_Y,      KC_W,        KC_T, KC_Y, KC_U,   KC_I, KC_O,    KC_P,   KC_W,
    KC_ESC, KC_A, KC_S, KC_D, KC_F,   KC_G,      KC_W,        KC_W, KC_H, KC_J,   KC_K, KC_L,    KC_W,   KC_ESC,
    KC_Z,   KC_Z, KC_W, KC_X, KC_C,   KC_V,      KC_Z,        KC_Z, KC_B, KC_N,   KC_M, KC_COMM, KC_DOT, KC_Z,
                        KC_Z, KC_SPC, KC_LSHIFT, KC_W,        KC_W, KC_W, KC_SPC, KC_Z
    ),
};


#define USE_SERIAL
#define MASTER_LEFT
