// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define SERIAL_USART_TX_PIN GP12
#define USB_VBUS_PIN GP13

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

/* RP2040- and hardware-specific config */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define PICO_XOSC_STARTUP_DELAY_MULTIPLIER 64

/* RGB matrix defaults */
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_DEFAULT_HUE 12 // shifted down from HSV_ORANGE's 21 — reads less yellow on these LEDs
#define RGB_MATRIX_DEFAULT_SAT 255 // HSV_ORANGE sat
#define RGB_MATRIX_DEFAULT_VAL 120 // dimmer than HSV_ORANGE's default 255
#define RGB_MATRIX_TIMEOUT 300000 // turn off after 5 minutes idle
