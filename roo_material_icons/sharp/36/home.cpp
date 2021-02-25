#include "home.h"

using namespace roo_display;

// Image file ic_sharp_36_home_sensor_door 36x36, 4-bit Alpha,  RLE, 109 bytes.
static const uint8_t ic_sharp_36_home_sensor_door_data[] PROGMEM = {
  0x80, 0x9D, 0x60, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF,
  0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB,
  0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xB0, 0xEE, 0x75, 0xFF, 0x98, 0x2A, 0x10, 0x6D,
  0x75, 0xFF, 0x90, 0x23, 0x0C, 0xC7, 0x5F, 0xF9, 0x01, 0x30, 0xBC, 0x75, 0xFF, 0x90, 0x92, 0x04,
  0xD7, 0x5F, 0xFA, 0x0E, 0x0D, 0xE7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F,
  0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF,
  0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB8, 0x09, 0xD6, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_home_sensor_door() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_home_sensor_door_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_sensor_window 36x36, 4-bit Alpha,  RLE, 166 bytes.
static const uint8_t ic_sharp_36_home_sensor_window_data[] PROGMEM = {
  0x80, 0x9D, 0x60, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xB7, 0x74, 0xB7, 0x5B,
  0x10, 0x38, 0x09, 0x27, 0x03, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF,
  0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1,
  0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B,
  0x75, 0xB1, 0x07, 0xC6, 0xC0, 0x71, 0xB7, 0x5B, 0x10, 0x38, 0x00, 0x76, 0x80, 0x07, 0x03, 0x1B,
  0x75, 0xB7, 0x74, 0xB7, 0x5B, 0x77, 0x4B, 0x75, 0xB1, 0x03, 0x80, 0x92, 0x70, 0x31, 0xB7, 0x5B,
  0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71,
  0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F,
  0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B,
  0x10, 0x38, 0x09, 0x27, 0x03, 0x1B, 0x75, 0xB7, 0x74, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7,
  0x5F, 0xFF, 0xB8, 0x09, 0xD6, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_home_sensor_window() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_home_sensor_window_data, Alpha4(color::Black));
  return value;
}

