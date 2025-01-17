#pragma once

#define XXX KC_NO
#define XXXX KC_NO

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
XXX,   XXX,   XXX,   K32,   K33,   K34,   K35,   K36,   K37,   DF(U_GAME), XXX, XXX \
)

// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME \
KC_Q,              KC_W,             KC_E,             KC_R,              KC_T,            KC_Y,             KC_U,             KC_I,             KC_O,              KC_P,             \
KC_A,              KC_S,             KC_D,             KC_F,              KC_G,            KC_H,             KC_J,             KC_K,             KC_L,              KC_QUOT,           \
KC_Z,              KC_X,             KC_C,             KC_V,              KC_B,            KC_N,             KC_M,             KC_COMMA,         KC_DOT,            KC_SLASH,         \
XXXX,              XXXX,             XXXX,             XXXX,              XXXX,            XXXX,             XXXX,             XXXX,             XXXX,              XXXX

#define MIRYOKU_LAYERMAPPING_GAME( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
N30,   N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT_no_ball( \
K00,   K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,   K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,   K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
XXX,   XXX,   XXX,   K32,   K33,   K34,   K35,   K36,   K37, DF(U_BASE), XXX, XXX \
)


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \


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
