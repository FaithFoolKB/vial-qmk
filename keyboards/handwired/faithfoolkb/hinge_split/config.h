#pragma once
#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROWS 10
#define MATRIX_COLS 7
#define SPLIT_USB_DETECT
#define DEBOUNCE 5
#define USE_I2C
#define I2C1_SCL_PIN D0
#define I2C1_SDA_PIN D1
#define MATRIX_ROW_PINS { B5, B4, E6, D7, C6 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }
