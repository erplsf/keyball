#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
N30,   N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT_no_ball( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
XXX,   XXX,   XXX,   K32,   K33,   K34,   K35,   K36,   K37, XXX, XXX, XXX \
)

// needed for building more layers
// FIXME: why do we need to undefine previous value?
#undef LAYER_STATE_8BIT
#define LAYER_STATE_32BIT

// needed to make RGB work
#define RGB_DI_PIN WS2812_DI_PIN

// disable split detection - should help with sleeping issues
#undef SPLIT_USB_DETECT

// right half is the master
/* #define MASTER_RIGHT */
