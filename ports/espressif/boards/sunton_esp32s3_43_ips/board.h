/* 
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Ha Thach (tinyusb.org) for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once
//--------------------------------------------------------------------+
// Button
//--------------------------------------------------------------------+

// Enter UF2 mode if GPIO is pressed while 2nd stage bootloader indicator
// is on e.g RGB = Purple. If it is GPIO0, user should not hold this while
// reset since that will instead run the 1st stage ROM bootloader
#define PIN_BUTTON_UF2        0

// Initial delay in milliseconds to detect user interaction to enter UF2
#define UF2_DETECTION_DELAY_MS  1000

// GPIO that implement 1-bit memory with RC components which hold the
// pin value long enough for double reset detection.
// #define PIN_DOUBLE_RESET_RC   38

//--------------------------------------------------------------------+
// LED
//--------------------------------------------------------------------+

// GPIO connected to Neopixel data
// #define NEOPIXEL_PIN          33

// #define NEOPIXEL_POWER_PIN    34
// #define NEOPIXEL_POWER_STATE  1

// Brightness percentage from 1 to 255
// #define NEOPIXEL_BRIGHTNESS   0x10

// Number of neopixels
// #define NEOPIXEL_NUMBER       1

// LED for indicator and writing flash
// If not defined neopixel will be use for flash writing instead
// #define LED_PIN               13
// #define LED_STATE_ON          1

//--------------------------------------------------------------------+
// TFT
//--------------------------------------------------------------------+

//#define CONFIG_LCD_TYPE_ILI9341
//#define CONFIG_LCD_TYPE_ST7262

//#define DISPLAY_PIN_MISO      -1 // required if use CONFIG_LCD_TYPE_AUTO
//#define DISPLAY_PIN_MOSI       -1 //6
//#define DISPLAY_PIN_SCK        -1 //7

//#define DISPLAY_PIN_CS         -1 //5
//#define DISPLAY_PIN_DC         -1 //4
//#define DISPLAY_PIN_RST       -1 //48

//#define DISPLAY_PIN_BL        2 //
//#define DISPLAY_BL_ON          1  // GPIO state to enable back light

// #define DISPLAY_PIN_POWER     21
// #define DISPLAY_POWER_ON       1  // GPIO state to enable TFT

//#define DISPLAY_WIDTH         800
//#define DISPLAY_HEIGHT        480

//#define DISPLAY_COL_OFFSET      0
//#define DISPLAY_ROW_OFFSET      0

// Memory Data Access Control & // Vertical Scroll Start Address
//#define DISPLAY_MADCTL        (TFT_MADCTL_BGR | TFT_MADCTL_MY | TFT_MADCTL_MX | TFT_MADCTL_MV)
//#define DISPLAY_VSCSAD        0

//#define DISPLAY_TITLE         "Sunton ESP32S3 4.3 inch"

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+

#define USB_VID                  0x303A
#define USB_PID                  0x7004

#define USB_MANUFACTURER         "Sunton"
#define USB_PRODUCT              "ESP32S3 4.3 IPS"

#define UF2_PRODUCT_NAME         USB_MANUFACTURER " " USB_PRODUCT

#define UF2_BOARD_ID             "SUNTON-ESP32S3-43-IPS"
#define UF2_VOLUME_LABEL         "SUNTONBOOT"
#define UF2_INDEX_URL            "https://www.makerfabs.com/sunton-esp32-s3-4-3-inch-ips-with-touch.html"


