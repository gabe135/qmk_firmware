/*
Copyright 2019 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x2157
#define DEVICE_VER      0x0200
#define MANUFACTURER    Gabe
#define PRODUCT         Gabe Split


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
// esquerda
//#define MATRIX_ROW_PINS { F6, F7, B2, E6, B4 }
//#define MATRIX_COL_PINS { B1, B3, B6, B5, D7, C6, D4 }
// direita
#define MATRIX_ROW_PINS { D4, D7, B4, B3, B2 }
#define MATRIX_COL_PINS { C6, E6, B5, B6, B1, F7, F6 }


#define SOFT_SERIAL_PIN D0

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN
//#define RGBLED_NUM 14
//#define RGBLED_SPLIT { 7, 7 }

/* Backlight LEDs */
//*#define BACKLIGHT_PIN /
//#define BACKLIGHT_LEVELS 7*/
