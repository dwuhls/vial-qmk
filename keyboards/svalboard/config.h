/*
Copyright 2023 Morgan Venable @_claussen

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

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS  10
#define MATRIX_COLS  6

//#define DEBUG_MATRIX_SCAN_RATE

// wiring of each half
//Layout for svalboard v0 (different from lalboard_v2)
//1 2 3 4 5 6
//S E D N W None
//Both Thumbs (these are same as lalboard_v2)
//OL OU D IL MODE DOUBLE
//Knuckle Nail Down Pad Up Double

#define MATRIX_COL_PUSHED_STATES { 0, 0, 1, 0, 0, 0 }
#define DOUBLEDOWN_COL 5 // need a pullup on COL6

#define SERIAL_DEBUG
#define SERIAL_USART_TX_PIN GP0 
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500 // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP2 // Specify a optional status led by GPIO number which blinks when entering the bootloader


#define FORCE_NKRO
#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define VIAL_KEY_OVERRIDE_ENTRIES 30
#define PREWAIT_US 90
#define POSTWAIT_US 90
#define VIAL_TAP_DANCE_ENTRIES 100
#define VIAL_COMBO_ENTRIES 100

//#define USB_POLLING_INTERVAL_MS 1




