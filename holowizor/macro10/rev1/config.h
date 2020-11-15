#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFACC
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    Holowizor
#define PRODUCT         MACRO10 Rev. 1
#define DESCRIPTION     4x2+2 Macropad with 2 Rotary Encoders

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { B3, B2, B6 }
#define MATRIX_COL_PINS { C6, D7, E6, B4 }

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_B { F4, F5 }
#define ENCODERS_PAD_A { F6, F7 }
#define ENCODER_RESOLUTION 4