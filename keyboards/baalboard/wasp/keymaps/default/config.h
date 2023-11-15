#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBAAD
#define PRODUCT_ID      0xBA01
#define DEVICE_VER      0x0001
#define PRODUCT         "wasp"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { GP29, GP28, GP12, GP10 }
#define MATRIX_COL_PINS { GP13, GP11, GP27, GP26, GP15, GP14, GP9, GP8 }


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.


BOARD = GENERIC_RP_RP2040

/* 

#define MATRIX_ROW_PINS { D1, D0, B7, B3, B2 }
#define MATRIX_COL_PINS { C6, C7, D3, D5, D4, F0, F1, F4, F5, F6, F7, B6, B5, B4, D7, D6, D2 }


Pro Micro Label	Pro Micro Pin	RP2040-Zero
TX0	            D3          	GP0
RX1	            D2  	        GP1
2	            D1	            GP4
3	            D0	            GP5
4	            D4	            GP6
5	            C6	            GP7
6	            D7	            GP8
7	            E6	            GP3
8	            B4	            GP9
9	            B5	            GP10
10	            B6	            GP12
16	            B2	            GP13
14	            B3	            GP29
15	            B1	            GP14
A0	            F7	            GP15
A1	            F6	            GP26
A2	            F5	            GP27
A3	            F4	            GP28

key matrix pins */




/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

... snip ...

/* RGB Backlighting configuration */


#endif

#endif