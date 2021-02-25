#include "home.h"

using namespace roo_display;

// Image file ic_sharp_48_home_sensor_door 48x48, 4-bit Alpha,  RLE, 178 bytes.
static const uint8_t ic_sharp_48_home_sensor_door_data[] PROGMEM = {
  0x80, 0xB8, 0x40, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xF8, 0x2A, 0x32, 0x8F, 0x77, 0x2F, 0xFE, 0x06,
  0x40, 0xAE, 0x77, 0x2F, 0xFE, 0x01, 0x40, 0x4E, 0x77, 0x2F, 0xFE, 0x01, 0x40, 0x2E, 0x77, 0x2F,
  0xFE, 0x08, 0x40, 0x7E, 0x77, 0x2F, 0xFE, 0x83, 0xE5, 0x02, 0x8F, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x80,
  0xB8, 0x40,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_48_home_sensor_door() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_sharp_48_home_sensor_door_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_48_home_sensor_window 48x48, 4-bit Alpha,  RLE, 194 bytes.
static const uint8_t ic_sharp_48_home_sensor_window_data[] PROGMEM = {
  0x80, 0xB8, 0x40, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7,
  0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72,
  0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2,
  0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xE7,
  0x1E, 0x2C, 0x77, 0x2C, 0x2E, 0x71, 0xE2, 0xC7, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73,
  0xC7, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72,
  0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2,
  0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF,
  0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2,
  0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72,
  0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC8, 0x0B,
  0x84, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_48_home_sensor_window() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_sharp_48_home_sensor_window_data, Alpha4(color::Black));
  return value;
}
