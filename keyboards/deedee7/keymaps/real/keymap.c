/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define NUMB 2 // numbers
#define NAVK 3 // navigation keys
#define NAVM 4 // navigation mouse

// Blank template at the bottom

enum customKeycodes {
	URL  = 1
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT(
    LT(NAVK, KC_Q), KC_W,   KC_E,               KC_R,      KC_T,             KC_Y, MT(KC_LALT, KC_U),            KC_T,                 KC_Y,    KC_U,             KC_I,    KC_O,      KC_P,                 LT(SYMB, KC_ESC),
    KC_ESC,         KC_A,   KC_S,               KC_D,      KC_F,             KC_G, MT(KC_LCTRL, KC_H),           MT(KC_LALT, KC_QUOT), KC_H,    KC_J,             KC_K,    KC_L,      MT(KC_LGUI, KC_SCLN), KC_ESC,
                    KC_Z,   MT(KC_LGUI, KC_X),  KC_X,      KC_C,             KC_V,                                                     KC_B,    KC_N,             KC_M,    KC_COMM,   KC_DOT,
                            KC_SPC,             KC_LSHIFT, LT(NUMB, KC_DEL),                                                                    LT(NAVM, KC_ENT), KC_LSHIFT, KC_SPC
    ),

[SYMB] = LAYOUT(
     _______, KC_GRV,  KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, _______,        KC_AMPR,  KC_PLUS, KC_MINS, KC_EQL,  KC_PERC, _______, _______,
     _______, KC_TILD, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, _______,        KC_PIPE,  KC_ASTR, KC_SLSH, KC_BSLS, _______, _______, _______,
              _______, KC_X,    KC_CIRC, KC_LBRC, KC_RBRC,                           _______, _______, _______, _______, _______,
                                _______, _______, _______,                           _______, _______, _______
     ),

[NUMB] = LAYOUT(
      _______, KC_0,    KC_1,    KC_2,    KC_3,    _______, _______,        _______,  KC_0,    KC_1,    KC_2,    KC_3, _______, _______,
      _______, _______, KC_4,    KC_5,    KC_6,    _______, KC_LCTRL,        KC_LALT,  _______, KC_4,    KC_5,    KC_6, KC_LGUI, _______,
               _______, KC_7,    KC_8,    KC_9,    _______,                           _______, KC_7,    KC_8,    KC_9, _______,
                                 _______, _______, _______,                           _______, _______, _______
      ),

[NAVK] = LAYOUT(
      _______, _______, KC_DOWN, _______, _______,   _______, _______,        KC_MS_WH_UP,    KC_PGUP,       KC_HOME,      KC_UP,       KC_END,  KC_PGDOWN,        KC_TILDE,
      _______, KC_LEFT, KC_UP,   KC_RGHT, _______,   _______, _______,        KC_MS_WH_DOWN,  KC_MS_WH_LEFT, KC_LEFT,      KC_DOWN,     KC_RGHT, KC_MS_WH_RIGHT,   _______,
               _______, _______, _______, _______,   _______,                                 _______,       _______,      _______,     _______, _______,
                                 _______, KC_LSHIFT, KC_TAB,                                 KC_LGUI,       KC_LALT,      KC_LCTRL
      ),

[NAVM] = LAYOUT(
      _______, _______,    KC_MS_DOWN, _______,     _______, _______, _______,        _______,  KC_MS_BTN1, KC_MS_BTN2, KC_MS_UP,   _______,     KC_MS_ACCEL0, _______,
      _______, KC_MS_LEFT, KC_MS_UP,   KC_MS_RIGHT, _______, _______, _______,        _______,  KC_MS_BTN3, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_ACCEL1, _______,
               _______,    _______,    _______,     _______, _______,                           KC_MS_BTN4, KC_MS_BTN5, _______,    _______,     KC_MS_ACCEL2,
                                       _______,     _______, _______,                           KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3
      ),
};
