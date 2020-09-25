#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFACC
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Holowizor
#define PRODUCT         MACRO6 Rev. 1
#define DESCRIPTION     3x2 Macropad with Rotary Encoder

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { F6, F7 }
#define MATRIX_COL_PINS { D1, D0, B1 }

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_B { F5 }
#define ENCODERS_PAD_A { F4 }
#define ENCODER_RESOLUTION 1