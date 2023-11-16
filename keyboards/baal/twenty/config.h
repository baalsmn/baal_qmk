// Copyright 2023 baalsmn (@baalsmn)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define MATRIX_ROWS 4
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { GP29, GP28, GP12, GP10 }
#define MATRIX_COL_PINS { GP13, GP11, GP27, GP26, GP15, GP14, GP9, GP8 }


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
