#include "home.h"

using namespace roo_display;

// Image file ic_sharp_36_home_auto_mode 36x36, 4-bit Alpha,  RLE, 298 bytes.
static const uint8_t ic_sharp_36_home_auto_mode_data[] PROGMEM = {
  0x76, 0x81, 0x14, 0x22, 0x81, 0x23, 0x17, 0x77, 0x28, 0x12, 0x7D, 0xA0, 0x72, 0x07, 0xA8, 0x1C,
  0x72, 0x77, 0x40, 0x20, 0x9D, 0x07, 0x20, 0x7D, 0x09, 0x02, 0x77, 0x10, 0x60, 0xEC, 0x81, 0xEC,
  0x42, 0x81, 0x4C, 0xEC, 0x0E, 0x06, 0x76, 0x03, 0xC0, 0xA0, 0x47, 0x10, 0x40, 0xAC, 0x03, 0x76,
  0x82, 0x6F, 0xC3, 0x75, 0x82, 0x3C, 0xF6, 0x74, 0x03, 0x30, 0x37, 0x72, 0x03, 0x30, 0x37, 0x81,
  0x6F, 0x67, 0x77, 0x18, 0x16, 0xF6, 0x50, 0x20, 0xEA, 0x03, 0x77, 0x60, 0x3A, 0x0E, 0x02, 0x40,
  0x9A, 0x0C, 0x77, 0x71, 0x0C, 0xA0, 0x93, 0x02, 0xB0, 0x37, 0x30, 0x07, 0x73, 0x03, 0xB0, 0x22,
  0x07, 0xA0, 0xA7, 0x40, 0x0D, 0x74, 0x0A, 0xA0, 0x72, 0x0C, 0xA0, 0x47, 0x30, 0x5A, 0x05, 0x73,
  0x04, 0xA8, 0x1C, 0x01, 0xA0, 0xE7, 0x40, 0xCA, 0x0C, 0x74, 0x0E, 0xA0, 0x10, 0x3A, 0x0B, 0x73,
  0x05, 0xC0, 0x57, 0x30, 0xBA, 0x83, 0x33, 0x77, 0x47, 0x10, 0x50, 0xCE, 0x0C, 0x05, 0x71, 0x82,
  0x47, 0x73, 0x73, 0x07, 0x0D, 0xFB, 0x0D, 0x07, 0x77, 0x60, 0x70, 0xDF, 0xB0, 0xD0, 0x77, 0x77,
  0x10, 0x50, 0xCE, 0x0C, 0x05, 0x77, 0x75, 0x05, 0xC0, 0x57, 0x77, 0x71, 0x0C, 0xA0, 0xC7, 0x71,
  0x03, 0x80, 0x47, 0x03, 0x50, 0x5A, 0x05, 0x73, 0x81, 0x35, 0x12, 0x07, 0xF9, 0x07, 0x60, 0x0D,
  0x74, 0x0B, 0xA8, 0x17, 0x07, 0xF9, 0x07, 0x60, 0x07, 0x73, 0x03, 0xB8, 0x11, 0x07, 0xD8, 0x28,
  0x77, 0x37, 0x74, 0x0C, 0xA0, 0xA2, 0x07, 0xD0, 0x87, 0x76, 0x08, 0xA0, 0xE0, 0x12, 0x07, 0xA0,
  0xDB, 0x07, 0x77, 0x40, 0x7B, 0x06, 0x30, 0x7A, 0x07, 0x0A, 0xB0, 0x87, 0x72, 0x08, 0xB0, 0xA4,
  0x07, 0xA8, 0x17, 0x0B, 0xB0, 0xC0, 0x37, 0x50, 0x30, 0xCB, 0x0B, 0x50, 0x7A, 0x07, 0x20, 0xAC,
  0x0A, 0x04, 0x71, 0x04, 0x0B, 0xC0, 0xA6, 0x82, 0x37, 0x73, 0x30, 0x70, 0xEC, 0x85, 0xEB, 0x97,
  0x89, 0xBD, 0x0E, 0x07, 0x77, 0x10, 0x20, 0xAF, 0xF0, 0xA0, 0x17, 0x74, 0x81, 0x28, 0xDF, 0x98,
  0x1C, 0x81, 0x77, 0x72, 0x86, 0x14, 0x57, 0x75, 0x41, 0x76,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_auto_mode() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 34, 34), Box(0, 0, 35, 35),
      ic_sharp_36_home_auto_mode_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_blinds_closed 36x36, 4-bit Alpha,  RLE, 125 bytes.
static const uint8_t ic_sharp_36_home_blinds_closed_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6B, 0x75,
  0xB3, 0xB6, 0xB7, 0x5B, 0x3B, 0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB,
  0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6B, 0x75, 0xB3, 0xB6, 0xB7, 0x5B, 0x3B, 0x6B, 0x80, 0x90,
  0x7B, 0x0F, 0x7B, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6B, 0x75,
  0xB3, 0xB6, 0xB7, 0x5B, 0x3B, 0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB,
  0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6B, 0x75, 0xB3, 0xB6, 0xB7, 0x5B, 0x3B, 0x30, 0xF7, 0xB8,
  0x09, 0x07, 0xB0, 0xF7, 0xB0, 0xF7, 0x80, 0xF0, 0xF8, 0x09, 0x47, 0x08, 0xD0, 0x88, 0x03, 0x77,
  0x73, 0x0D, 0xB0, 0xD7, 0x77, 0x48, 0x33, 0xDF, 0xD3, 0x77, 0x76, 0x01, 0x73,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_blinds_closed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 34), Box(0, 0, 35, 35),
      ic_sharp_36_home_blinds_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_blinds 36x36, 4-bit Alpha,  RLE, 113 bytes.
static const uint8_t ic_sharp_36_home_blinds_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6B, 0x75,
  0xB3, 0xB6, 0xB7, 0x5B, 0x3B, 0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB,
  0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6B, 0x75, 0xB3, 0xB6, 0xB7, 0x5B, 0x3B, 0x6B, 0x80, 0x90,
  0x7B, 0x0F, 0x7B, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6B, 0x80, 0x90, 0x7B, 0x0F, 0x7B, 0x6B, 0x75,
  0xB3, 0xB6, 0xB7, 0x5B, 0x3B, 0x6B, 0x74, 0x04, 0xB0, 0x42, 0xB6, 0xB7, 0x40, 0xDB, 0x0E, 0x2B,
  0x6B, 0x73, 0x01, 0xD0, 0x11, 0xB6, 0xB7, 0x40, 0xCB, 0x0C, 0x2B, 0x6B, 0x74, 0x83, 0x2B, 0xEB,
  0x22, 0xB6, 0xB7, 0x74, 0xB3, 0x0F, 0x7B, 0x80, 0x96, 0x7B, 0x0F, 0x78, 0x0F, 0x0F, 0x80, 0xB2,
  0x70,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_blinds() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_blinds_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_broadcast_on_home 36x36, 4-bit Alpha,  RLE, 262 bytes.
static const uint8_t ic_sharp_36_home_broadcast_on_home_data[] PROGMEM = {
  0x3F, 0xFF, 0xE6, 0xFF, 0xFE, 0x6F, 0xFF, 0xE7, 0x77, 0x72, 0xB7, 0x77, 0x72, 0xB7, 0x77, 0x72,
  0xB7, 0x77, 0x72, 0xB3, 0x80, 0x67, 0x03, 0x77, 0x20, 0x20, 0x99, 0x3F, 0xB0, 0x77, 0x18, 0x53,
  0x89, 0xB9, 0x83, 0x30, 0x43, 0xFB, 0x07, 0x60, 0x50, 0xDF, 0x0D, 0x05, 0x5B, 0x80, 0x07, 0x0B,
  0xA0, 0x75, 0x09, 0xB8, 0x3C, 0x97, 0x9C, 0xB0, 0x94, 0xB4, 0x07, 0xA0, 0x74, 0x0A, 0xA0, 0xA0,
  0x25, 0x02, 0x0A, 0xA0, 0xA3, 0xB4, 0x07, 0xA0, 0x73, 0x07, 0xA8, 0x91, 0x70, 0x29, 0xDF, 0xD9,
  0x20, 0x7A, 0x07, 0x2B, 0x40, 0x7A, 0x07, 0x20, 0x1A, 0x81, 0x80, 0x6F, 0x81, 0x60, 0x8A, 0x01,
  0x1B, 0x40, 0x7A, 0x07, 0x28, 0x38, 0xFD, 0x05, 0xA8, 0x3D, 0x64, 0x6D, 0xA8, 0x35, 0x0D, 0xF8,
  0x1B, 0x40, 0x7A, 0x07, 0x28, 0x5D, 0xF7, 0x0D, 0xFB, 0x58, 0x5B, 0xFD, 0x07, 0xFD, 0x1B, 0x40,
  0x7A, 0x81, 0x70, 0x1A, 0x02, 0x04, 0xA8, 0x51, 0x08, 0xC8, 0x01, 0xA0, 0x40, 0x2A, 0x01, 0xB4,
  0x07, 0xA8, 0x17, 0x03, 0xA1, 0x83, 0x6F, 0xD0, 0x3B, 0x83, 0x30, 0xDF, 0x61, 0xA0, 0x3B, 0x40,
  0x7A, 0x81, 0x70, 0x3A, 0x18, 0x36, 0xFD, 0x03, 0xB8, 0x33, 0x0D, 0xF6, 0x1A, 0x03, 0xB4, 0x07,
  0xA8, 0x17, 0x01, 0xA0, 0x20, 0x4A, 0x85, 0x10, 0xBF, 0xB0, 0x2A, 0x04, 0x02, 0xA0, 0x1B, 0x40,
  0x7A, 0x07, 0x28, 0xA1, 0xDF, 0x70, 0xDF, 0x90, 0x9F, 0x90, 0x9F, 0xD0, 0x7F, 0xD1, 0xFB, 0x07,
  0x28, 0xA1, 0x8F, 0xD0, 0x5D, 0x10, 0x9F, 0x90, 0x1D, 0x50, 0xDF, 0x81, 0xFB, 0x07, 0x20, 0x1A,
  0x08, 0x48, 0x19, 0xF9, 0x40, 0x8A, 0x01, 0x1F, 0xB0, 0x73, 0x81, 0x8F, 0xD4, 0x81, 0x9F, 0x94,
  0x81, 0xDF, 0x77, 0x73, 0x09, 0x01, 0x48, 0x19, 0xF9, 0x40, 0x10, 0x87, 0x77, 0x38, 0x19, 0xF9,
  0x77, 0x77, 0x28, 0x19, 0xF9, 0x72,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_broadcast_on_home() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 6, 35, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_broadcast_on_home_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_broadcast_on_personal 36x36, 4-bit Alpha,  RLE, 271 bytes.
static const uint8_t ic_sharp_36_home_broadcast_on_personal_data[] PROGMEM = {
  0x74, 0x00, 0x27, 0x77, 0x68, 0x25, 0xEE, 0x57, 0x77, 0x40, 0x9C, 0x09, 0x77, 0x71, 0x02, 0x0C,
  0xE0, 0xC0, 0x27, 0x75, 0x05, 0x0E, 0xF9, 0x0E, 0x05, 0x77, 0x30, 0x9F, 0xD0, 0x97, 0x70, 0x20,
  0xCF, 0xF0, 0xC0, 0x27, 0x40, 0x50, 0xEF, 0xFA, 0x0E, 0x05, 0x72, 0x09, 0xFE, 0x86, 0xB6, 0x31,
  0x01, 0x31, 0x70, 0xCF, 0xD0, 0xA0, 0x27, 0x71, 0xFC, 0x0E, 0x04, 0x38, 0x53, 0x89, 0xB9, 0x83,
  0x7F, 0xB0, 0xE0, 0x22, 0x05, 0x0D, 0xF0, 0xD0, 0x55, 0xFB, 0x03, 0x20, 0x9B, 0x83, 0xC9, 0x79,
  0xCB, 0x09, 0x4F, 0xA0, 0x62, 0x0A, 0xA0, 0xA0, 0x25, 0x02, 0x0A, 0xA0, 0xA3, 0xF9, 0x0D, 0x20,
  0x7A, 0x89, 0x17, 0x02, 0x9D, 0xFD, 0x92, 0x07, 0xA0, 0x72, 0xF9, 0x81, 0x60, 0x1A, 0x81, 0x80,
  0x6F, 0x81, 0x60, 0x8A, 0x01, 0x1F, 0x98, 0x51, 0x08, 0xFD, 0x05, 0xA8, 0x3D, 0x64, 0x6D, 0xA8,
  0x35, 0x0D, 0xF8, 0x1F, 0x0C, 0x28, 0x5D, 0xF7, 0x0D, 0xFB, 0x58, 0x5B, 0xFD, 0x07, 0xFD, 0x1F,
  0x81, 0xA0, 0x1A, 0x02, 0x04, 0xA8, 0x51, 0x08, 0xC8, 0x01, 0xA0, 0x40, 0x2A, 0x01, 0xF8, 0x18,
  0x03, 0xA1, 0x83, 0x6F, 0xD0, 0x3B, 0x83, 0x30, 0xDF, 0x61, 0xA0, 0x3F, 0x81, 0x80, 0x3A, 0x18,
  0x36, 0xFD, 0x03, 0xB8, 0x33, 0x0D, 0xF6, 0x1A, 0x03, 0xF8, 0x19, 0x01, 0xA0, 0x20, 0x4A, 0x85,
  0x10, 0xBF, 0xB0, 0x2A, 0x04, 0x02, 0xA0, 0x1F, 0x0C, 0x28, 0xA1, 0xDF, 0x70, 0xDF, 0x90, 0x9F,
  0x90, 0x9F, 0xD0, 0x7F, 0xD1, 0xF9, 0x8A, 0x31, 0x08, 0xFD, 0x05, 0xD1, 0x09, 0xF9, 0x01, 0xD5,
  0x0D, 0xF8, 0x1F, 0x98, 0x16, 0x01, 0xA0, 0x84, 0x81, 0x9F, 0x94, 0x08, 0xA0, 0x11, 0xF9, 0x0D,
  0x28, 0x18, 0xFD, 0x48, 0x19, 0xF9, 0x48, 0x1D, 0xF7, 0x2F, 0xA0, 0x72, 0x09, 0x01, 0x48, 0x19,
  0xF9, 0x40, 0x10, 0x83, 0x80, 0x67, 0x71, 0x81, 0x9F, 0x97, 0x77, 0x68, 0x19, 0xF9, 0x72,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_broadcast_on_personal() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 4, 35, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_broadcast_on_personal_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_curtains_closed 36x36, 4-bit Alpha,  RLE, 127 bytes.
static const uint8_t ic_sharp_36_home_curtains_closed_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xB8, 0x2B, 0x77, 0xBF, 0xB6, 0xFB, 0x07,
  0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20,
  0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F,
  0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6,
  0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB,
  0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07,
  0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20, 0x7F, 0xB6, 0xFB, 0x07, 0x20,
  0x7F, 0xB3, 0x0F, 0x7F, 0xB8, 0x2B, 0x77, 0xBF, 0xB0, 0xF7, 0x80, 0xF0, 0xF8, 0x0B, 0x27,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_curtains_closed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_curtains_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_curtains 36x36, 4-bit Alpha,  RLE, 128 bytes.
static const uint8_t ic_sharp_36_home_curtains_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xC0, 0x0E, 0xFC, 0x6F, 0xC0, 0xC0, 0xBF,
  0xC6, 0xFC, 0x09, 0x08, 0xFC, 0x6F, 0xC0, 0x05, 0xFC, 0x6F, 0xC8, 0x11, 0x1E, 0xFB, 0x6F, 0xB0,
  0xA2, 0x09, 0xFB, 0x6F, 0xB0, 0x32, 0x03, 0xFB, 0x6F, 0xA0, 0x94, 0x09, 0xFA, 0x6F, 0x90, 0xD5,
  0x01, 0x0D, 0xF9, 0x6F, 0x0D, 0x02, 0x60, 0x20, 0xEF, 0x6E, 0x0C, 0x02, 0x71, 0x02, 0x0C, 0xE6,
  0xE0, 0xC0, 0x27, 0x10, 0x20, 0xCE, 0x6F, 0x0D, 0x02, 0x60, 0x20, 0xEF, 0x6F, 0x90, 0xD5, 0x01,
  0x0D, 0xF9, 0x6F, 0xA0, 0x94, 0x09, 0xFA, 0x6F, 0xB0, 0x22, 0x03, 0xFB, 0x6F, 0xB0, 0x92, 0x0A,
  0xFB, 0x6F, 0xB8, 0x1E, 0x01, 0xFC, 0x6F, 0xC0, 0x50, 0x6F, 0xC6, 0xFC, 0x08, 0x09, 0xFC, 0x6F,
  0xC0, 0xB0, 0xCF, 0xC3, 0x0F, 0x7F, 0xC0, 0x0E, 0xFC, 0x0F, 0x78, 0x0F, 0x0F, 0x80, 0xB2, 0x70,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_curtains() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_curtains_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_electric_bolt 36x36, 4-bit Alpha,  RLE, 156 bytes.
static const uint8_t ic_sharp_36_home_electric_bolt_data[] PROGMEM = {
  0x77, 0x38, 0x12, 0xB1, 0x77, 0x73, 0x82, 0x4E, 0xFC, 0x77, 0x72, 0x05, 0xB0, 0x47, 0x77, 0x10,
  0x7B, 0x08, 0x77, 0x71, 0x09, 0xB0, 0xC7, 0x77, 0x10, 0xAC, 0x02, 0x77, 0x60, 0x10, 0xCC, 0x06,
  0x77, 0x60, 0x20, 0xDC, 0x0B, 0x77, 0x60, 0x30, 0xEC, 0x0E, 0x01, 0x77, 0x50, 0x50, 0xED, 0x04,
  0x77, 0x50, 0x6E, 0x08, 0x77, 0x50, 0x8E, 0x0C, 0x77, 0x50, 0xAF, 0x98, 0x7D, 0xCB, 0x97, 0x65,
  0x32, 0x71, 0x01, 0x0B, 0xFF, 0xD8, 0x6E, 0xDB, 0xA8, 0x02, 0xDF, 0xFF, 0xA8, 0x2E, 0x33, 0xEF,
  0xFF, 0xA8, 0x6D, 0x20, 0x8A, 0xBD, 0xEF, 0xFD, 0x0B, 0x01, 0x71, 0x87, 0x23, 0x56, 0x79, 0xBC,
  0xDF, 0x90, 0xA7, 0x75, 0x0C, 0xE0, 0x87, 0x75, 0x08, 0xE0, 0x67, 0x75, 0x04, 0xD0, 0xE0, 0x57,
  0x75, 0x01, 0x0E, 0xC0, 0xE0, 0x37, 0x76, 0x0B, 0xC0, 0xD0, 0x27, 0x76, 0x06, 0xC0, 0xC0, 0x17,
  0x76, 0x02, 0xC0, 0xA7, 0x77, 0x10, 0xCB, 0x09, 0x77, 0x71, 0x08, 0xB0, 0x77, 0x77, 0x10, 0x4B,
  0x05, 0x77, 0x72, 0x82, 0xCF, 0xE4, 0x77, 0x73, 0x81, 0x1B, 0x27, 0x73,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_electric_bolt() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 3, 31, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_electric_bolt_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_electric_meter 36x36, 4-bit Alpha,  RLE, 198 bytes.
static const uint8_t ic_sharp_36_home_electric_meter_data[] PROGMEM = {
  0x72, 0x89, 0x02, 0x7B, 0xDE, 0xED, 0xB7, 0x27, 0x72, 0x03, 0x0C, 0xFB, 0x0C, 0x03, 0x76, 0x0A,
  0xFF, 0x0A, 0x73, 0x02, 0x0D, 0xFF, 0xA0, 0xD0, 0x27, 0x01, 0x0D, 0xFF, 0xC0, 0xD0, 0x16, 0x0C,
  0xFF, 0xE0, 0xC5, 0x07, 0xFF, 0xF9, 0x07, 0x30, 0x10, 0xED, 0x80, 0x90, 0x7D, 0x0E, 0x01, 0x20,
  0x7E, 0x75, 0xE0, 0x72, 0x0C, 0xE7, 0x5E, 0x81, 0xC0, 0x2F, 0x80, 0x90, 0x7F, 0x02, 0x04, 0xFF,
  0xFD, 0x04, 0x06, 0xFE, 0x09, 0x06, 0xFC, 0x06, 0x07, 0xFD, 0x09, 0x20, 0x5F, 0xB0, 0x70, 0x6F,
  0xC0, 0x93, 0x01, 0x0D, 0xFA, 0x06, 0x05, 0xFB, 0x09, 0x30, 0x10, 0xCF, 0xB0, 0x50, 0x1F, 0xA0,
  0xD4, 0x02, 0x0E, 0xFB, 0x81, 0x10, 0xDF, 0xA0, 0x94, 0x03, 0x0E, 0xF9, 0x0D, 0x20, 0x7F, 0xB0,
  0x33, 0x03, 0x0E, 0xF9, 0x07, 0x20, 0x10, 0xEF, 0x90, 0x53, 0x03, 0x0E, 0xF9, 0x0E, 0x01, 0x30,
  0x7F, 0x0D, 0x01, 0x20, 0x30, 0xEF, 0xA0, 0x75, 0x0C, 0xF8, 0x2C, 0x13, 0xEF, 0xA0, 0xC6, 0x01,
  0x0D, 0xF0, 0xC0, 0xEF, 0xA0, 0xD0, 0x17, 0x02, 0x0D, 0xFF, 0xA0, 0xD0, 0x27, 0x20, 0x10, 0xAF,
  0xF0, 0xA0, 0x17, 0x50, 0x40, 0xBF, 0xB0, 0xB0, 0x47, 0x72, 0x08, 0xA0, 0xEA, 0x0E, 0xA0, 0x87,
  0x74, 0x07, 0xA0, 0x72, 0x07, 0xA0, 0x77, 0x74, 0x07, 0xA0, 0x72, 0x07, 0xA0, 0x77, 0x74, 0x07,
  0xA0, 0x72, 0x07, 0xA0, 0x77, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_electric_meter() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 3, 31, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_electric_meter_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_energy_savings_leaf 36x36, 4-bit Alpha,  RLE, 188 bytes.
static const uint8_t ic_sharp_36_home_energy_savings_leaf_data[] PROGMEM = {
  0x74, 0x03, 0x05, 0x80, 0x92, 0x70, 0x37, 0x18, 0x14, 0xAE, 0xFF, 0xA0, 0x76, 0x03, 0x0B, 0xFF,
  0xD0, 0x75, 0x06, 0xFF, 0xF0, 0x74, 0x08, 0xFF, 0xF9, 0x07, 0x30, 0x6F, 0xFF, 0xA0, 0x72, 0x03,
  0xFD, 0x0E, 0x0C, 0xFB, 0x07, 0x20, 0xBF, 0xC8, 0x1E, 0x33, 0xFB, 0x81, 0x70, 0x4F, 0xC8, 0x2D,
  0x20, 0xDF, 0xB8, 0x17, 0x0A, 0xFB, 0x82, 0xD1, 0x09, 0xFC, 0x81, 0x70, 0xEF, 0xA8, 0x2C, 0x10,
  0x5F, 0xD0, 0x70, 0x3F, 0xA0, 0xB2, 0x01, 0x0E, 0xFD, 0x07, 0x05, 0xF9, 0x0A, 0x38, 0x34, 0x9B,
  0xCE, 0xFA, 0x07, 0x06, 0xF0, 0x97, 0x30, 0x10, 0xBE, 0x00, 0x7E, 0x0B, 0x01, 0x73, 0x09, 0xF0,
  0x70, 0x5F, 0xA8, 0x3E, 0xCB, 0x94, 0x30, 0xAF, 0x90, 0x50, 0x3F, 0xD0, 0xE0, 0x12, 0x0B, 0xFA,
  0x81, 0x30, 0xEF, 0xC8, 0x25, 0x01, 0xCF, 0xA0, 0xE2, 0x0A, 0xFB, 0x82, 0x90, 0x1D, 0xFB, 0x0A,
  0x20, 0x4F, 0xA8, 0x2D, 0x02, 0xDF, 0xC0, 0x43, 0x0C, 0xF9, 0x81, 0x33, 0xEF, 0xC0, 0xB4, 0x02,
  0xF9, 0x0C, 0x0E, 0xFD, 0x03, 0x50, 0xBF, 0xFE, 0x06, 0x50, 0x9F, 0xFE, 0x08, 0x50, 0x9B, 0x0B,
  0xFF, 0xA0, 0x65, 0x03, 0xB8, 0x29, 0x02, 0xCF, 0xD0, 0xB0, 0x37, 0x81, 0x6F, 0x94, 0x81, 0x4A,
  0xEE, 0x81, 0xEA, 0x47, 0x30, 0x37, 0x18, 0x43, 0x57, 0x75, 0x37, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_energy_savings_leaf() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 31, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_energy_savings_leaf_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_gas_meter 36x36, 4-bit Alpha,  RLE, 74 bytes.
static const uint8_t ic_sharp_36_home_gas_meter_data[] PROGMEM = {
  0x70, 0x7A, 0x07, 0x20, 0x7A, 0x07, 0x77, 0x07, 0xA0, 0x72, 0x07, 0xA0, 0x77, 0x70, 0x7A, 0x07,
  0x20, 0x7A, 0x07, 0x78, 0x0A, 0xA2, 0xF7, 0x5F, 0xD7, 0x5F, 0xD7, 0x58, 0x0F, 0x5F, 0x00, 0xEF,
  0xFF, 0x90, 0x04, 0xFF, 0xF0, 0x52, 0x05, 0xFF, 0xD0, 0x84, 0x08, 0xFF, 0xB0, 0xC6, 0x0C, 0xFF,
  0xA0, 0x56, 0x05, 0xFF, 0xA0, 0x46, 0x04, 0xFF, 0xA0, 0x76, 0x07, 0xFF, 0xA0, 0xE0, 0x14, 0x01,
  0x0E, 0xFF, 0xB8, 0x4E, 0x51, 0x15, 0xE8, 0x0A, 0xA5, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_gas_meter() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 3, 29, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_gas_meter_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_heat_pump 36x36, 4-bit Alpha,  RLE, 205 bytes.
static const uint8_t ic_sharp_36_home_heat_pump_data[] PROGMEM = {
  0x03, 0x80, 0xA6, 0x70, 0x30, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07,
  0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFB, 0x0E, 0x0B, 0xA0, 0xB0, 0xEF, 0xB0, 0x07, 0xF9,
  0x82, 0xE7, 0x01, 0xA8, 0x21, 0x07, 0xEF, 0x90, 0x07, 0xF9, 0x82, 0xE2, 0x01, 0xA8, 0x21, 0x02,
  0xEF, 0x90, 0x07, 0xE8, 0x4E, 0xEF, 0xE2, 0x1A, 0x84, 0x12, 0xEF, 0xEE, 0xE0, 0x07, 0xE8, 0x47,
  0x2E, 0xFE, 0x4A, 0x84, 0x4E, 0xFE, 0x27, 0xE0, 0x07, 0xD0, 0xE2, 0x82, 0x2E, 0xFE, 0xA8, 0x2E,
  0xFE, 0x22, 0x0E, 0xD0, 0x07, 0xD8, 0x96, 0xB1, 0x11, 0x4E, 0xF9, 0x9F, 0xE4, 0x11, 0x1B, 0xD0,
  0x07, 0xFC, 0x09, 0x20, 0x9F, 0xC0, 0x07, 0xFC, 0x09, 0x20, 0x9F, 0xC0, 0x07, 0xD8, 0x96, 0xB1,
  0x11, 0x4E, 0xF9, 0x9F, 0xE4, 0x11, 0x1B, 0xD0, 0x07, 0xD0, 0xE2, 0x82, 0x2E, 0xFE, 0xA8, 0x2E,
  0xFE, 0x22, 0x0E, 0xD0, 0x07, 0xE8, 0x47, 0x2E, 0xFE, 0x4A, 0x84, 0x4E, 0xFE, 0x27, 0xE0, 0x07,
  0xE8, 0x4E, 0xEF, 0xE2, 0x1A, 0x84, 0x12, 0xEF, 0xEE, 0xE0, 0x07, 0xF9, 0x82, 0xE2, 0x01, 0xA8,
  0x21, 0x02, 0xEF, 0x90, 0x07, 0xF9, 0x82, 0xE7, 0x01, 0xA8, 0x21, 0x07, 0xEF, 0x90, 0x07, 0xFB,
  0x0E, 0x0B, 0xA0, 0xB0, 0xEF, 0xB0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD,
  0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x07, 0x03, 0x80, 0xA6, 0x70, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_heat_pump() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 31, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_heat_pump_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_mode_fan_off 36x36, 4-bit Alpha,  RLE, 232 bytes.
static const uint8_t ic_sharp_36_home_mode_fan_off_data[] PROGMEM = {
  0x76, 0x86, 0x16, 0xAD, 0xFE, 0xB3, 0x74, 0x02, 0x07, 0x72, 0x07, 0x0E, 0xE0, 0xE0, 0x37, 0x28,
  0x22, 0xEF, 0x77, 0x09, 0xFA, 0x0B, 0x72, 0x09, 0xB0, 0x75, 0x04, 0xFB, 0x0E, 0x73, 0x0B, 0xB0,
  0x74, 0x0B, 0xFB, 0x0E, 0x74, 0x0B, 0xB0, 0x73, 0x04, 0xFB, 0x09, 0x75, 0x0B, 0xB0, 0x73, 0x04,
  0xF9, 0x0D, 0x01, 0x76, 0x0B, 0xB0, 0x73, 0x04, 0xE0, 0xB0, 0x17, 0x71, 0x0B, 0xB0, 0x73, 0x04,
  0xC0, 0xD0, 0x17, 0x68, 0x23, 0xBD, 0xDC, 0x07, 0x30, 0x4B, 0x06, 0x28, 0x51, 0x7B, 0xEE, 0xB4,
  0x40, 0x3F, 0xA0, 0x73, 0x04, 0xA8, 0x19, 0x5B, 0xF0, 0x83, 0x0B, 0xFB, 0x07, 0x30, 0x4F, 0xD0,
  0x62, 0x0E, 0xFC, 0x07, 0x30, 0x4F, 0xC8, 0x2E, 0x10, 0xEF, 0xD0, 0x73, 0x04, 0xFC, 0x81, 0x60,
  0xDF, 0xE0, 0x73, 0x04, 0xFB, 0x81, 0xA0, 0xAF, 0xF0, 0x73, 0x04, 0xFA, 0x81, 0xD0, 0x6F, 0xF9,
  0x07, 0x30, 0x4F, 0x98, 0x2E, 0x01, 0xEF, 0xF9, 0x07, 0x30, 0x4F, 0x0E, 0x20, 0x6F, 0xFA, 0x07,
  0x30, 0x4E, 0x0B, 0x30, 0x8F, 0x81, 0xB5, 0x9E, 0x07, 0x30, 0x4D, 0x03, 0x48, 0x54, 0xBE, 0xEB,
  0x71, 0x20, 0x6F, 0x07, 0x38, 0x34, 0xDD, 0xB3, 0x76, 0x01, 0x0D, 0xF9, 0x07, 0x77, 0x50, 0x10,
  0xBF, 0xB0, 0x77, 0x73, 0x01, 0x0D, 0xFD, 0x07, 0x77, 0x20, 0x9F, 0xF0, 0x77, 0x71, 0x0E, 0xFB,
  0x00, 0xBB, 0x07, 0x77, 0x0E, 0xFB, 0x81, 0x40, 0xBB, 0x07, 0x76, 0x0B, 0xFA, 0x09, 0x30, 0xBB,
  0x07, 0x75, 0x03, 0x0E, 0xE0, 0xE0, 0x75, 0x0B, 0xB0, 0x67, 0x58, 0x63, 0xBE, 0xFD, 0xA6, 0x17,
  0x82, 0xBF, 0xE2, 0x77, 0x77, 0x09, 0x02, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_mode_fan_off() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 3, 32, 33), Box(0, 0, 35, 35),
      ic_sharp_36_home_mode_fan_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_nest_cam_wired_stand 36x36, 4-bit Alpha,  RLE, 122 bytes.
static const uint8_t ic_sharp_36_home_nest_cam_wired_stand_data[] PROGMEM = {
  0x74, 0x85, 0x13, 0x46, 0x79, 0xA6, 0x82, 0x49, 0xCE, 0xF9, 0x40, 0x50, 0xDF, 0xD3, 0x09, 0xFF,
  0x20, 0x9F, 0xF9, 0x10, 0x6F, 0xFA, 0x01, 0x0E, 0xFF, 0xA0, 0x6F, 0xFB, 0x0B, 0xFF, 0xB0, 0xEF,
  0xFB, 0x0E, 0xFF, 0xB0, 0xEF, 0xFB, 0x0B, 0xFF, 0xB0, 0x8F, 0xFB, 0x02, 0xFF, 0xB1, 0x09, 0xFF,
  0xA2, 0x0D, 0xFF, 0x92, 0x01, 0x0D, 0xFF, 0x30, 0x10, 0xAF, 0xE5, 0x81, 0x39, 0xDF, 0xB7, 0x18,
  0x21, 0x34, 0xDA, 0x81, 0xEC, 0xE9, 0x78, 0x25, 0x76, 0x7B, 0x04, 0x71, 0x08, 0x0E, 0xE0, 0x97,
  0x01, 0x0C, 0xF9, 0x0D, 0x02, 0x60, 0xBF, 0xB0, 0xD5, 0x06, 0xFD, 0x09, 0x40, 0xDF, 0xD0, 0xE3,
  0x03, 0xFF, 0x04, 0x20, 0x5F, 0xF0, 0x62, 0x07, 0xFF, 0x07, 0x20, 0x7F, 0xF0, 0x72, 0x07, 0xFF,
  0x07, 0x20, 0x7F, 0xF0, 0x72, 0x03, 0x80, 0x92, 0x70, 0x31,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_nest_cam_wired_stand() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(9, 1, 26, 34), Box(0, 0, 35, 35),
      ic_sharp_36_home_nest_cam_wired_stand_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_oil_barrel 36x36, 4-bit Alpha,  RLE, 155 bytes.
static const uint8_t ic_sharp_36_home_oil_barrel_data[] PROGMEM = {
  0x03, 0x80, 0xA6, 0x70, 0x30, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x83, 0x73, 0x77, 0xBF, 0xFE,
  0x82, 0xB7, 0x73, 0x30, 0x7F, 0xFE, 0x07, 0x60, 0x7F, 0xFE, 0x07, 0x60, 0x7F, 0xFE, 0x07, 0x60,
  0x7F, 0xFE, 0x07, 0x60, 0x7F, 0xFE, 0x07, 0x60, 0x7F, 0xA0, 0x05, 0xFA, 0x07, 0x60, 0x7F, 0x90,
  0x72, 0x07, 0xF9, 0x07, 0x60, 0x7F, 0x09, 0x40, 0x9F, 0x07, 0x38, 0x23, 0x77, 0xBE, 0x0B, 0x60,
  0xBE, 0x83, 0xB7, 0x73, 0x7F, 0x90, 0xE0, 0x16, 0x02, 0xFA, 0x00, 0x7F, 0x90, 0xA7, 0x10, 0xAF,
  0x98, 0x37, 0x37, 0x7B, 0xD0, 0x87, 0x10, 0x8D, 0x82, 0xB7, 0x73, 0x30, 0x7D, 0x0A, 0x71, 0x0A,
  0xD0, 0x76, 0x07, 0xD0, 0xE0, 0x16, 0x01, 0x0E, 0xD0, 0x76, 0x07, 0xE0, 0xA6, 0x0A, 0xE0, 0x76,
  0x07, 0xF8, 0x4C, 0x41, 0x14, 0xCF, 0x07, 0x60, 0x7F, 0xFE, 0x07, 0x60, 0x7F, 0xFE, 0x07, 0x60,
  0x7F, 0xFE, 0x07, 0x60, 0x7F, 0xFE, 0x07, 0x38, 0x23, 0x77, 0xBF, 0xFE, 0x83, 0xB7, 0x73, 0x7F,
  0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x07, 0x03, 0x80, 0xA6, 0x70, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_oil_barrel() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 31, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_oil_barrel_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_propane 36x36, 4-bit Alpha,  RLE, 153 bytes.
static const uint8_t ic_sharp_36_home_propane_data[] PROGMEM = {
  0x74, 0x80, 0x90, 0x77, 0x77, 0x1F, 0xD7, 0x77, 0x1F, 0xD7, 0x77, 0x1B, 0x80, 0x27, 0xB7, 0x77,
  0x1B, 0x6B, 0x77, 0x38, 0x15, 0xAD, 0xFF, 0xA8, 0x1D, 0xA5, 0x73, 0x04, 0x0D, 0xFF, 0xF9, 0x0D,
  0x04, 0x70, 0x8F, 0xFF, 0xD0, 0x85, 0x07, 0xFF, 0xFF, 0x07, 0x30, 0x3F, 0xFF, 0xFA, 0x03, 0x20,
  0xBF, 0xFF, 0xFA, 0x81, 0xB0, 0x1F, 0xFF, 0xFC, 0x01, 0x05, 0xFF, 0xFF, 0xC0, 0x50, 0x7F, 0xFF,
  0xFC, 0x07, 0x06, 0xFF, 0xFF, 0xC0, 0x60, 0x5F, 0xFF, 0xFC, 0x05, 0x01, 0xFF, 0xFF, 0xC8, 0x11,
  0x0B, 0xFF, 0xFF, 0xA0, 0xB2, 0x04, 0xFF, 0xFF, 0xA0, 0x43, 0x08, 0xFF, 0xFF, 0x08, 0x50, 0xAF,
  0xFF, 0xD0, 0xA7, 0x07, 0x0E, 0xFF, 0xF9, 0x0E, 0x07, 0x72, 0x82, 0x16, 0xBD, 0xFF, 0xA8, 0x2D,
  0xB6, 0x17, 0x70, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x74, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07,
  0x77, 0x40, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x74, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07, 0x77,
  0x48, 0x23, 0x77, 0x37, 0x18, 0x23, 0x77, 0x37, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_propane() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 4, 34, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_propane_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_propane_tank 36x36, 4-bit Alpha,  RLE, 109 bytes.
static const uint8_t ic_sharp_36_home_propane_tank_data[] PROGMEM = {
  0x40, 0x7F, 0xF0, 0x77, 0x10, 0x7F, 0xF0, 0x77, 0x10, 0x7F, 0xF0, 0x77, 0x10, 0x7A, 0x07, 0x71,
  0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07, 0x28, 0x23, 0x77, 0x32, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07,
  0x20, 0x7A, 0x07, 0x20, 0x7A, 0x07, 0x70, 0x50, 0xDF, 0xF0, 0xD0, 0x54, 0x01, 0x0B, 0xFF, 0xC0,
  0xB0, 0x12, 0x0C, 0xFF, 0xE8, 0x1C, 0x05, 0xFF, 0xF9, 0x05, 0x0B, 0xFF, 0xF9, 0x0B, 0x0E, 0xFF,
  0xF9, 0x0E, 0x80, 0x9B, 0x4F, 0x80, 0xA4, 0x78, 0x0D, 0x40, 0x80, 0xA4, 0x78, 0x09, 0xB4, 0xF0,
  0xEF, 0xFF, 0x90, 0xE0, 0xCF, 0xFF, 0x90, 0xC0, 0x6F, 0xFF, 0x98, 0x16, 0x0C, 0xFF, 0xE0, 0xC2,
  0x01, 0x0C, 0xFF, 0xC0, 0xC0, 0x14, 0x81, 0x6C, 0xEF, 0xD8, 0x1E, 0xC6, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_propane_tank() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 3, 29, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_propane_tank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_roller_shades_closed 36x36, 4-bit Alpha,  RLE, 101 bytes.
static const uint8_t ic_sharp_36_home_roller_shades_closed_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6,
  0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF,
  0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB,
  0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6B, 0x80, 0x37, 0x0B, 0xA0, 0xB8, 0x03, 0x7B, 0x6B, 0x70, 0x7A,
  0x07, 0x7B, 0x6B, 0x70, 0x7A, 0x07, 0x7B, 0x30, 0xF7, 0xB8, 0x03, 0x70, 0xBA, 0x0B, 0x80, 0x37,
  0xB0, 0xF7, 0x80, 0xF0, 0xF8, 0x09, 0x07, 0x0C, 0xC0, 0xC8, 0x09, 0x07, 0x75, 0x05, 0xC0, 0x57,
  0x77, 0x40, 0x9A, 0x09, 0x76,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_roller_shades_closed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 33), Box(0, 0, 35, 35),
      ic_sharp_36_home_roller_shades_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_roller_shades 36x36, 4-bit Alpha,  RLE, 98 bytes.
static const uint8_t ic_sharp_36_home_roller_shades_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6,
  0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xFF, 0xB6, 0xFF,
  0xFB, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6B, 0x80, 0x37, 0x0B, 0xA0, 0xB8, 0x03, 0x7B, 0x6B, 0x70,
  0x7A, 0x07, 0x7B, 0x6B, 0x70, 0x7A, 0x07, 0x7B, 0x6B, 0x70, 0xBA, 0x0C, 0x01, 0x6B, 0x6B, 0x60,
  0x7C, 0x08, 0x6B, 0x6B, 0x60, 0x9C, 0x09, 0x6B, 0x6B, 0x60, 0x5C, 0x05, 0x6B, 0x6B, 0x78, 0x27,
  0xEE, 0x77, 0xB6, 0xB7, 0x74, 0xB3, 0x0F, 0x7B, 0x80, 0x96, 0x7B, 0x0F, 0x78, 0x0F, 0x0F, 0x80,
  0xB2, 0x70,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_roller_shades() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_roller_shades_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_sensor_door 36x36, 4-bit Alpha,  RLE, 30 bytes.
static const uint8_t ic_sharp_36_home_sensor_door_data[] PROGMEM = {
  0x80, 0xCD, 0x4F, 0x0E, 0x0C, 0xFF, 0xF0, 0x92, 0x03, 0x0E, 0xFF, 0xD0, 0x13, 0x09, 0xFF, 0xD0,
  0x13, 0x09, 0xFF, 0xD0, 0x92, 0x03, 0x0E, 0xFF, 0xE0, 0xE0, 0xC8, 0x0C, 0xC2, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_sensor_door() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 3, 29, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_sensor_door_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_sensor_occupied 36x36, 4-bit Alpha,  RLE, 243 bytes.
static const uint8_t ic_sharp_36_home_sensor_occupied_data[] PROGMEM = {
  0x72, 0x04, 0x01, 0x75, 0x01, 0x04, 0x77, 0x28, 0x23, 0xBF, 0x87, 0x58, 0x28, 0xFB, 0x37, 0x60,
  0x8B, 0x0E, 0x75, 0x0E, 0xB0, 0x87, 0x40, 0xBC, 0x08, 0x75, 0x08, 0xC0, 0xB0, 0x17, 0x01, 0x0C,
  0xB0, 0xA0, 0x17, 0x70, 0x10, 0xAB, 0x0C, 0x01, 0x60, 0xBB, 0x07, 0x77, 0x40, 0x7B, 0x0B, 0x50,
  0x8B, 0x05, 0x71, 0x82, 0x26, 0x62, 0x71, 0x05, 0xB0, 0x83, 0x03, 0xB0, 0x77, 0x10, 0xAC, 0x0A,
  0x71, 0x07, 0xB0, 0x32, 0x0B, 0xA0, 0xA7, 0x10, 0x9E, 0x09, 0x71, 0x0A, 0xA8, 0x1B, 0x04, 0xB0,
  0x17, 0x02, 0xF9, 0x02, 0x70, 0x1B, 0x83, 0x41, 0x8E, 0x87, 0x10, 0x6F, 0x90, 0x67, 0x18, 0x28,
  0xE8, 0x17, 0x50, 0x6F, 0x90, 0x67, 0x77, 0x30, 0x2F, 0x90, 0x27, 0x77, 0x40, 0x9E, 0x09, 0x77,
  0x76, 0x0A, 0xC0, 0xA7, 0x77, 0x71, 0x82, 0x26, 0x62, 0x80, 0xF1, 0x08, 0x24, 0x8B, 0xDA, 0x82,
  0xDB, 0x84, 0x77, 0x71, 0x07, 0x0E, 0xFB, 0x0E, 0x07, 0x77, 0x40, 0x20, 0xDF, 0xF0, 0xD0, 0x27,
  0x72, 0x0B, 0xFF, 0xA0, 0xB7, 0x72, 0xFF, 0xC7, 0x72, 0xFF, 0xC7, 0x18, 0x21, 0x8E, 0x84, 0xFF,
  0xC4, 0x83, 0x8E, 0x81, 0x4B, 0x01, 0x38, 0x09, 0x67, 0x30, 0x1B, 0x81, 0x40, 0xBA, 0x0A, 0x77,
  0x73, 0x0A, 0xA0, 0xB2, 0x03, 0xB0, 0x77, 0x77, 0x10, 0x7B, 0x03, 0x30, 0x8B, 0x05, 0x77, 0x60,
  0x5B, 0x08, 0x50, 0xBB, 0x07, 0x77, 0x40, 0x7B, 0x0B, 0x60, 0x10, 0xCB, 0x0A, 0x01, 0x77, 0x01,
  0x0A, 0xB0, 0xC0, 0x17, 0x01, 0x0B, 0xC0, 0x87, 0x50, 0x8C, 0x0B, 0x01, 0x73, 0x08, 0xB0, 0xE7,
  0x50, 0xEB, 0x08, 0x76, 0x82, 0x3B, 0xF8, 0x75, 0x82, 0x8F, 0xB3, 0x77, 0x20, 0x40, 0x17, 0x50,
  0x10, 0x47, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_sensor_occupied() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 34, 34), Box(0, 0, 35, 35),
      ic_sharp_36_home_sensor_occupied_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_sensor_window 36x36, 4-bit Alpha,  RLE, 112 bytes.
static const uint8_t ic_sharp_36_home_sensor_window_data[] PROGMEM = {
  0x80, 0x98, 0x7F, 0x77, 0x4E, 0x10, 0x38, 0x09, 0x27, 0x03, 0x1E, 0x10, 0x7F, 0xF0, 0x71, 0xE1,
  0x07, 0xFF, 0x07, 0x1E, 0x10, 0x7F, 0xF0, 0x71, 0xE1, 0x07, 0xFF, 0x07, 0x1E, 0x10, 0x7F, 0xF0,
  0x71, 0xE1, 0x07, 0xFF, 0x07, 0x1E, 0x10, 0x7F, 0xF0, 0x71, 0xE1, 0x07, 0xC6, 0xC0, 0x71, 0xE1,
  0x03, 0x80, 0x07, 0x68, 0x00, 0x70, 0x31, 0xE7, 0x74, 0xE7, 0x74, 0xE1, 0x03, 0x80, 0x92, 0x70,
  0x31, 0xE1, 0x07, 0xFF, 0x07, 0x1E, 0x10, 0x7F, 0xF0, 0x71, 0xE1, 0x07, 0xFF, 0x07, 0x1E, 0x10,
  0x7F, 0xF0, 0x71, 0xE1, 0x07, 0xFF, 0x07, 0x1E, 0x10, 0x7F, 0xF0, 0x71, 0xE1, 0x07, 0xFF, 0x07,
  0x1E, 0x10, 0x7F, 0xF0, 0x71, 0xE1, 0x03, 0x80, 0x92, 0x70, 0x31, 0xE7, 0x74, 0x80, 0x98, 0x7F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_sensor_window() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 3, 29, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_sensor_window_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_shield_moon 36x36, 4-bit Alpha,  RLE, 151 bytes.
static const uint8_t ic_sharp_36_home_shield_moon_data[] PROGMEM = {
  0x72, 0x84, 0x16, 0xCC, 0x61, 0x77, 0x20, 0x40, 0xAE, 0x0A, 0x04, 0x74, 0x81, 0x28, 0xEF, 0xB8,
  0x1E, 0x82, 0x58, 0x11, 0x6C, 0xFF, 0xA8, 0x3C, 0x61, 0x0A, 0xFF, 0xF9, 0x0A, 0x80, 0xE6, 0xF8,
  0x1D, 0x8E, 0xFF, 0xD0, 0xD0, 0x42, 0x0B, 0xFF, 0xC0, 0xD0, 0x13, 0x0E, 0xFF, 0xC0, 0x23, 0x01,
  0xFF, 0xC0, 0x95, 0xFF, 0xC0, 0x45, 0x0D, 0xFF, 0xB6, 0x07, 0xFC, 0x0E, 0xD6, 0x01, 0x0D, 0xFA,
  0x0E, 0x0D, 0xD0, 0x26, 0x03, 0x0E, 0xF9, 0x0D, 0x0B, 0xD0, 0x67, 0x02, 0x0B, 0xF0, 0xB0, 0x7D,
  0x0D, 0x72, 0x03, 0x07, 0xD0, 0x70, 0x3E, 0x08, 0x72, 0x01, 0x0E, 0xC8, 0x13, 0x0E, 0xE0, 0x87,
  0x02, 0x0D, 0xC0, 0xE2, 0x08, 0xF8, 0x5D, 0x62, 0x01, 0x39, 0xE0, 0x82, 0x01, 0xFF, 0xE0, 0x13,
  0x07, 0xFF, 0xC0, 0x75, 0x0D, 0xFF, 0xA0, 0xD6, 0x03, 0x0E, 0xFF, 0x0E, 0x03, 0x70, 0x4F, 0xF0,
  0x47, 0x20, 0x50, 0xEF, 0xB0, 0xE0, 0x57, 0x40, 0x30, 0xDF, 0x90, 0xD0, 0x37, 0x70, 0x8E, 0x08,
  0x77, 0x38, 0x41, 0x7C, 0xC7, 0x17, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_shield_moon() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 3, 29, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_shield_moon_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_solar_power 36x36, 4-bit Alpha,  RLE, 178 bytes.
static const uint8_t ic_sharp_36_home_solar_power_data[] PROGMEM = {
  0x10, 0x7C, 0x10, 0x6F, 0xF0, 0x61, 0xC0, 0x72, 0x07, 0xC1, 0x05, 0xFF, 0x05, 0x1C, 0x07, 0x20,
  0x7C, 0x2F, 0xF2, 0xC0, 0x77, 0x20, 0x9F, 0xD0, 0x97, 0x72, 0x01, 0x0D, 0xFB, 0x0D, 0x01, 0x77,
  0x18, 0x21, 0x02, 0xDF, 0x98, 0x2D, 0x20, 0x17, 0x68, 0x48, 0xD2, 0x01, 0x9E, 0x84, 0x91, 0x02,
  0xD9, 0x74, 0x08, 0xA0, 0xD0, 0x13, 0x82, 0x57, 0x75, 0x30, 0x10, 0xDA, 0x09, 0x72, 0x08, 0xB0,
  0xA7, 0x50, 0xAB, 0x08, 0x71, 0x05, 0xA0, 0xA5, 0x07, 0xA0, 0x75, 0x0A, 0xA0, 0x57, 0x20, 0x50,
  0x96, 0x07, 0xA0, 0x76, 0x09, 0x05, 0x77, 0x40, 0x7A, 0x07, 0x77, 0x75, 0x07, 0xA0, 0x77, 0x77,
  0x58, 0x23, 0x77, 0x38, 0x09, 0x90, 0x08, 0x06, 0x70, 0x32, 0x03, 0x80, 0x67, 0x50, 0x3F, 0xB0,
  0x72, 0x07, 0xFB, 0x03, 0x40, 0x6F, 0xB0, 0x72, 0x07, 0xFB, 0x06, 0x40, 0xAF, 0xB0, 0x72, 0x07,
  0xFB, 0x0A, 0x40, 0xDF, 0xB0, 0x72, 0x07, 0xFB, 0x0D, 0x80, 0x9B, 0x10, 0x0C, 0xFC, 0x07, 0x20,
  0x7F, 0xC0, 0xC2, 0xFD, 0x07, 0x20, 0x7F, 0xD1, 0x03, 0xFD, 0x07, 0x20, 0x7F, 0xD0, 0x30, 0x6F,
  0xD0, 0x72, 0x07, 0xFD, 0x06, 0x0A, 0xFD, 0x07, 0x20, 0x7F, 0xD0, 0xA0, 0xDF, 0xD0, 0x72, 0x07,
  0xFD, 0x0D,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_solar_power() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 32, 32), Box(0, 0, 35, 35),
      ic_sharp_36_home_solar_power_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_vertical_shades_closed 36x36, 4-bit Alpha,  RLE, 262 bytes.
static const uint8_t ic_sharp_36_home_vertical_shades_closed_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6B, 0x81, 0x77, 0xDA, 0x81, 0x97, 0xBA, 0x81,
  0xB7, 0x9A, 0x81, 0xD7, 0x7B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B,
  0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30,
  0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B,
  0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81,
  0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A,
  0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA,
  0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70,
  0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20,
  0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81,
  0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B,
  0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A,
  0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B,
  0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30,
  0x7A, 0x81, 0x70, 0x3A, 0x0B, 0x2B, 0x6B, 0x20, 0xBA, 0x81, 0x30, 0x7A, 0x81, 0x70, 0x3A, 0x0B,
  0x2B, 0x30, 0xF7, 0xB8, 0x17, 0x7D, 0xA8, 0x19, 0x7B, 0xA8, 0x1B, 0x79, 0xA8, 0x1D, 0x77, 0xB0,
  0xF7, 0x80, 0xF0, 0xF8, 0x0B, 0x27,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_vertical_shades_closed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_vertical_shades_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_vertical_shades 36x36, 4-bit Alpha,  RLE, 85 bytes.
static const uint8_t ic_sharp_36_home_vertical_shades_data[] PROGMEM = {
  0x38, 0x0A, 0x47, 0x6F, 0xFF, 0xB6, 0xFF, 0xFB, 0x6F, 0xA8, 0x02, 0x7F, 0xA6, 0xFA, 0x6F, 0xA6,
  0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA,
  0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F,
  0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6,
  0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA6, 0xFA, 0x6F, 0xA3, 0x0F, 0x7F, 0xA8, 0x02, 0x7F, 0xA0, 0xF7,
  0x80, 0xF0, 0xF8, 0x0B, 0x27,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_vertical_shades() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 4, 32, 31), Box(0, 0, 35, 35),
      ic_sharp_36_home_vertical_shades_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_home_wind_power 36x36, 4-bit Alpha,  RLE, 236 bytes.
static const uint8_t ic_sharp_36_home_wind_power_data[] PROGMEM = {
  0x77, 0x73, 0x02, 0x03, 0x77, 0x77, 0x38, 0x32, 0xEF, 0x91, 0x77, 0x77, 0x03, 0x0E, 0xB0, 0xE0,
  0x67, 0x38, 0x05, 0x77, 0x04, 0x0E, 0xE0, 0xB7, 0x2F, 0xA6, 0x05, 0xF9, 0x08, 0x72, 0xFA, 0x50,
  0x5F, 0x90, 0xD7, 0x38, 0x05, 0x74, 0x06, 0xFA, 0x05, 0x77, 0x71, 0x07, 0xFA, 0x0B, 0x77, 0x72,
  0xFB, 0x02, 0x60, 0x38, 0x03, 0x77, 0x2F, 0xA0, 0x87, 0x07, 0xF7, 0x2F, 0x90, 0xD7, 0x10, 0x7F,
  0x72, 0xF9, 0x05, 0x71, 0x03, 0x80, 0x37, 0x72, 0xF0, 0xB7, 0x77, 0x5F, 0x02, 0x77, 0x75, 0x81,
  0xEB, 0xEB, 0x08, 0x73, 0x03, 0x80, 0x93, 0x74, 0x81, 0x5F, 0xD7, 0x40, 0x7F, 0xF8, 0x65, 0x07,
  0xA7, 0x06, 0x57, 0x40, 0x7F, 0xE8, 0x1E, 0x07, 0xB0, 0x77, 0x60, 0x7F, 0xE8, 0x1C, 0x0A, 0xB8,
  0x3A, 0x08, 0x73, 0x72, 0x07, 0xFE, 0x81, 0xE0, 0x7B, 0x81, 0x70, 0xEA, 0x82, 0xEB, 0x71, 0x50,
  0x7F, 0xF8, 0x55, 0x07, 0xA7, 0x06, 0xE0, 0x95, 0x04, 0x0C, 0xFE, 0x0B, 0x40, 0x60, 0xEF, 0x02,
  0x68, 0x21, 0x59, 0xEF, 0x0E, 0x06, 0x28, 0x1E, 0xBE, 0xFA, 0x0B, 0x73, 0x81, 0x37, 0xCB, 0x09,
  0x01, 0x3F, 0xE0, 0x47, 0x58, 0x11, 0x53, 0x5B, 0x0B, 0xFA, 0x0C, 0x77, 0x6B, 0x10, 0xBF, 0xA0,
  0x67, 0x75, 0xB2, 0x0B, 0xF9, 0x0E, 0x50, 0x38, 0x03, 0x76, 0xB3, 0x0B, 0xF9, 0x08, 0x40, 0x7F,
  0x6B, 0x40, 0xBF, 0x0E, 0x01, 0x30, 0x7F, 0x6B, 0x50, 0xBF, 0x03, 0x30, 0x38, 0x03, 0x74, 0x01,
  0x06, 0xB0, 0x60, 0x14, 0x0B, 0xD0, 0x47, 0x71, 0x03, 0x0E, 0xD0, 0xE0, 0x34, 0x0B, 0xB0, 0x47,
  0x72, 0x0B, 0xF0, 0xB5, 0x81, 0xBF, 0x47, 0x73, 0x80, 0x57, 0x60, 0x34,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_36_home_wind_power() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 34, 34), Box(0, 0, 35, 35),
      ic_sharp_36_home_wind_power_data, Alpha4(color::Black));
  return value;
}
