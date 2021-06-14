
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT(                                                                     \
    L00, L01, L02, L03, L04, L05, L06,           R07, R08, R09, R10, R11, R12, R13, \
    L14, L15, L16, L17, L18, L19, L20,           R21, R22, R23, R24, R25, R26, R27, \
         L28, L29, L30, L31, L32,                     R33, R34, R35, R36, R37,      \
                        L38, L39, L40,           R41, R42, R43                      \
) \
{ \
    { L00,   L01,   L02,   L03,   L04,   L05,   L06   }, \
    { L14,   L15,   L16,   L17,   L18,   L19,   L20   }, \
    { KC_NO, L28,   L29,   L30,   L31,   L32,   KC_NO }, \
    { KC_NO, L38,   L39,   L40,   KC_NO, KC_NO, KC_NO }, \
    { R07,   R08,   R09,   R10,   R11,   R12,   R13   }, \
    { R21,   R22,   R23,   R24,   R25,   R26,   R27   }, \
    { KC_NO, R33,   R34,   R35,   R36,   R37,   KC_NO }, \
    { KC_NO, R41,   R42,   R43,   KC_NO, KC_NO, KC_NO }, \
}
