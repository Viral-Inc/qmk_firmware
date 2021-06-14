
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
    L28, L29, L30, L31, L32, L33, L34,           R35, R36, R37, R38, R39, R40, R41, \
                   L42, L43, L44, L45,           R46, R47, R48, L49                 \
) \
{ \
    { L00,   L01,   L02,   L03,   L04,   L05,   L06   }, \
    { L14,   L15,   L16,   L17,   L18,   L19,   L20   }, \
    { L28,   L29,   L30,   L31,   L32,   L33,   L34   }, \
    { L42,   L43,   L44,   L45,   KC_NO, KC_NO, KC_NO }, \
    { R07,   R08,   R09,   R10,   R11,   R12,   R13   }, \
    { R21,   R22,   R23,   R24,   R25,   R26,   R27   }, \
    { R35,   R36,   R37,   R38,   R39,   R40,   R41,  }, \
    { R46,   R47,   R48,   R49,   KC_NO, KC_NO, KC_NO }, \
}
