#include "home.h"

using namespace roo_display;

// Image file ic_filled_36_home_sensor_door 36x36, 4-bit Alpha,  RLE, 116 bytes.
static const uint8_t ic_filled_36_home_sensor_door_data[] PROGMEM = {
  0x80, 0x9D, 0x70, 0x07, 0x0C, 0xFF, 0xC0, 0xA0, 0x47, 0x60, 0x6F, 0xFF, 0x90, 0x67, 0x50, 0xCF,
  0xFF, 0x90, 0xC7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F,
  0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFF, 0xB7, 0x5F, 0xFB,
  0x0E, 0xE7, 0x5F, 0xF9, 0x82, 0xA1, 0x06, 0xD7, 0x5F, 0xF9, 0x02, 0x30, 0xCC, 0x75, 0xFF, 0x90,
  0x13, 0x0B, 0xC7, 0x5F, 0xF9, 0x09, 0x20, 0x4D, 0x75, 0xFF, 0xA0, 0xE0, 0xDE, 0x75, 0xFF, 0xFB,
  0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75,
  0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF,
  0xFB, 0x80, 0x9D, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_filled_36_home_sensor_door() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_home_sensor_door_data, Alpha4(color::Black));
  return value;
}

// Image file ic_filled_36_home_sensor_window 36x36, 4-bit Alpha,  RLE, 181 bytes.
static const uint8_t ic_filled_36_home_sensor_window_data[] PROGMEM = {
  0x80, 0x9D, 0x70, 0x07, 0x0C, 0xFF, 0xC0, 0xA0, 0x47, 0x60, 0x6F, 0xFF, 0x90, 0x67, 0x50, 0xCF,
  0xFF, 0x90, 0xC7, 0x5B, 0x77, 0x4B, 0x75, 0xB1, 0x03, 0x80, 0x92, 0x70, 0x31, 0xB7, 0x5B, 0x10,
  0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7,
  0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0,
  0x71, 0xB7, 0x5B, 0x10, 0x7F, 0xF0, 0x71, 0xB7, 0x5B, 0x10, 0x7C, 0x6C, 0x07, 0x1B, 0x75, 0xB1,
  0x03, 0x80, 0x07, 0x68, 0x00, 0x70, 0x31, 0xB7, 0x5B, 0x77, 0x4B, 0x75, 0xB7, 0x74, 0xB7, 0x5B,
  0x10, 0x38, 0x09, 0x27, 0x03, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF,
  0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1,
  0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B,
  0x75, 0xB1, 0x07, 0xFF, 0x07, 0x1B, 0x75, 0xB1, 0x03, 0x80, 0x92, 0x70, 0x31, 0xB7, 0x5B, 0x77,
  0x4B, 0x75, 0x0E, 0xFF, 0xF9, 0x0B, 0x75, 0x09, 0xFF, 0xF9, 0x05, 0x76, 0x07, 0x0D, 0xFF, 0xC0,
  0xE0, 0x88, 0x09, 0xD7, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_filled_36_home_sensor_window() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_home_sensor_window_data, Alpha4(color::Black));
  return value;
}

