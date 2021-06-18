#include "home.h"

using namespace roo_display;

// Image file ic_sharp_24_home_sensor_door 24x24, 4-bit Alpha,  RLE, 64 bytes.
static const uint8_t ic_sharp_24_home_sensor_door_data[] PROGMEM = {
  0x80, 0xE0, 0x0F, 0xFA, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x71, 0xFF,
  0xA7, 0x1F, 0xFA, 0x71, 0xFF, 0xA7, 0x1F, 0xB8, 0x1E, 0xAE, 0xB7, 0x1F, 0xB8, 0x12, 0x04, 0xB7,
  0x1F, 0xB8, 0x11, 0x03, 0xB7, 0x1F, 0xB8, 0x1D, 0x8D, 0xB7, 0x1F, 0xFA, 0x71, 0xFF, 0xA7, 0x1F,
  0xFA, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x71, 0xFF, 0xA8, 0x0E, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_home_sensor_door() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_home_sensor_door_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_home_sensor_window 24x24, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_sharp_24_home_sensor_window_data[] PROGMEM = {
  0x80, 0xE0, 0x0F, 0xFA, 0x71, 0xFF, 0xA7, 0x1A, 0x75, 0xA7, 0x1A, 0x1F, 0xB1, 0xA7, 0x1A, 0x1F,
  0xB1, 0xA7, 0x1A, 0x1F, 0xB1, 0xA7, 0x1A, 0x1F, 0xB1, 0xA7, 0x1A, 0x1F, 0xB1, 0xA7, 0x1A, 0x1B,
  0x4B, 0x1A, 0x71, 0xA7, 0x5A, 0x71, 0xA7, 0x5A, 0x71, 0xA1, 0xFB, 0x1A, 0x71, 0xA1, 0xFB, 0x1A,
  0x71, 0xA1, 0xFB, 0x1A, 0x71, 0xA1, 0xFB, 0x1A, 0x71, 0xA1, 0xFB, 0x1A, 0x71, 0xA1, 0xFB, 0x1A,
  0x71, 0xA7, 0x5A, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x80, 0xE0, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_home_sensor_window() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_home_sensor_window_data, Alpha4(color::Black));
  return value;
}

