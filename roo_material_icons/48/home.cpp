#include "home.h"

using namespace roo_display;

// Image file ic_48_home_sensor_window 48x48, 4-bit Alpha,  RLE, 217 bytes.
static const uint8_t ic_48_home_sensor_window_data[] PROGMEM = {
  0x80, 0xB8, 0x50, 0x81, 0x19, 0xCF, 0xFF, 0xB8, 0x1C, 0x81, 0x77, 0x30, 0x10, 0xEF, 0xFF, 0xF0,
  0xD0, 0x17, 0x72, 0x0A, 0xFF, 0xFF, 0xA0, 0x87, 0x72, 0x0E, 0xFF, 0xFF, 0xA0, 0xC7, 0x72, 0xC7,
  0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2,
  0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7,
  0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72,
  0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xE7, 0x1E, 0x2C, 0x77, 0x2C,
  0x2E, 0x71, 0xE2, 0xC7, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0xC7, 0x77,
  0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7,
  0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72,
  0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2,
  0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF, 0xE2, 0xC7, 0x72, 0xC2, 0xFF,
  0xE2, 0xC7, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0x0E, 0xFF, 0xFF, 0xA0,
  0xD7, 0x72, 0x0B, 0xFF, 0xFF, 0xA0, 0x97, 0x72, 0x02, 0xFF, 0xFF, 0x90, 0xE0, 0x17, 0x73, 0x81,
  0x2B, 0xEF, 0xFF, 0xB8, 0x1E, 0xA1, 0x80, 0xB8, 0x50,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_home_sensor_window() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_home_sensor_window_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_home_sensor_door 48x48, 4-bit Alpha,  RLE, 190 bytes.
static const uint8_t ic_48_home_sensor_door_data[] PROGMEM = {
  0x80, 0xB8, 0x50, 0x81, 0x19, 0xCF, 0xFF, 0xB8, 0x1C, 0x81, 0x77, 0x30, 0x10, 0xEF, 0xFF, 0xF0,
  0xD0, 0x17, 0x72, 0x0A, 0xFF, 0xFF, 0xA0, 0x87, 0x72, 0x0E, 0xFF, 0xFF, 0xA0, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF, 0xFF, 0xC7, 0x72, 0xFF,
  0xFF, 0xC7, 0x72, 0xFF, 0xF8, 0x2A, 0x32, 0x8F, 0x77, 0x2F, 0xFE, 0x06, 0x40, 0xAE, 0x77, 0x2F,
  0xFE, 0x01, 0x40, 0x4E, 0x77, 0x2F, 0xFE, 0x01, 0x40, 0x2E, 0x77, 0x2F, 0xFE, 0x08, 0x40, 0x7E,
  0x77, 0x2F, 0xFE, 0x83, 0xE5, 0x02, 0x8F, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77,
  0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF, 0xFC, 0x80, 0xB8, 0x40,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_home_sensor_door() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_home_sensor_door_data, Alpha4(color::Black));
  return value;
}
