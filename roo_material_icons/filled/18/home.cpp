#include "home.h"

using namespace roo_display;

// Image file ic_filled_18_home_sensor_door 18x18, 4-bit Alpha,  RLE, 58 bytes.
static const uint8_t ic_filled_18_home_sensor_door_data[] PROGMEM = {
  0x80, 0xC4, 0x08, 0x06, 0x37, 0x05, 0xFB, 0x05, 0x60, 0x6F, 0xB0, 0x66, 0x06, 0xFB, 0x06, 0x60,
  0x6F, 0xB0, 0x66, 0x06, 0xFB, 0x06, 0x60, 0x6E, 0x83, 0xE3, 0xAF, 0x66, 0x06, 0xE8, 0x3E, 0x3A,
  0xF6, 0x60, 0x6F, 0xB0, 0x66, 0x06, 0xFB, 0x06, 0x60, 0x6F, 0xB0, 0x66, 0x06, 0xFB, 0x06, 0x60,
  0x6F, 0xB0, 0x66, 0x01, 0x80, 0x63, 0x01, 0x80, 0xC3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_18_home_sensor_door() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_filled_18_home_sensor_door_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_18_home_sensor_window 18x18, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_filled_18_home_sensor_window_data[] PROGMEM = {
  0x80, 0xC4, 0x08, 0x06, 0x37, 0x05, 0x0C, 0x80, 0x49, 0x0C, 0x05, 0x68, 0x16, 0x74, 0x80, 0x27,
  0x81, 0x47, 0x66, 0x81, 0x67, 0x9E, 0x81, 0x97, 0x66, 0x81, 0x67, 0x9E, 0x81, 0x97, 0x66, 0x89,
  0x26, 0x79, 0xFB, 0x33, 0xBF, 0x97, 0x66, 0x06, 0x07, 0x0F, 0x12, 0x0F, 0x10, 0x70, 0x66, 0x81,
  0x67, 0x9E, 0x81, 0x97, 0x66, 0x81, 0x67, 0x9E, 0x81, 0x97, 0x66, 0x81, 0x67, 0x9E, 0x81, 0x97,
  0x66, 0x81, 0x67, 0x9E, 0x81, 0x97, 0x66, 0x81, 0x67, 0x48, 0x02, 0x78, 0x14, 0x76, 0x60, 0x50,
  0xC8, 0x04, 0x90, 0xC0, 0x57, 0x80, 0x63, 0x80, 0xC4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_18_home_sensor_window() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_filled_18_home_sensor_window_data, Alpha4(color::Black));
  return value;
}
