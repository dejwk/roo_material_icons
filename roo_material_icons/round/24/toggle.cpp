#include "toggle.h"

using namespace roo_display;

// Image file ic_round_24_toggle_check_box_outline_blank 24x24, 4-bit Alpha,  RLE, 64 bytes.
static const uint8_t ic_round_24_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x04, 0x0D, 0xFF, 0x0D, 0x04, 0x60, 0xDF, 0xFA, 0x0D, 0x6A, 0x03, 0x75, 0x03,
  0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6,
  0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA0,
  0x37, 0x50, 0x3A, 0x60, 0xDF, 0xFA, 0x0D, 0x60, 0x40, 0xDF, 0xF0, 0xD0, 0x48, 0x09, 0x87, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_check_box_outline_blank() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_check_box 24x24, 4-bit Alpha,  RLE, 83 bytes.
static const uint8_t ic_round_24_toggle_check_box_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x04, 0x0D, 0xFF, 0x0D, 0x04, 0x60, 0xDF, 0xFA, 0x0D, 0x6F, 0xFC, 0x6F, 0xFC,
  0x6F, 0xE8, 0x1A, 0x1A, 0xA6, 0xFD, 0x0A, 0x20, 0xAA, 0x6F, 0xC0, 0xA2, 0x07, 0xB6, 0xFB, 0x0A,
  0x20, 0x7C, 0x6A, 0x81, 0xA1, 0xAC, 0x0A, 0x20, 0x7D, 0x6A, 0x0A, 0x20, 0xAA, 0x0A, 0x20, 0x7E,
  0x6B, 0x07, 0x20, 0x0A, 0x20, 0x7F, 0x6C, 0x07, 0x40, 0x7F, 0x96, 0xD0, 0x72, 0x07, 0xFA, 0x6E,
  0x00, 0xAF, 0xB6, 0xFF, 0xC6, 0xFF, 0xC6, 0x0D, 0xFF, 0xA0, 0xD6, 0x04, 0x0D, 0xFF, 0x0D, 0x04,
  0x80, 0x98, 0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_check_box() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_check_box_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_indeterminate_check_box 24x24, 4-bit Alpha,  RLE, 58 bytes.
static const uint8_t ic_round_24_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x04, 0x0D, 0xFF, 0x0D, 0x04, 0x60, 0xDF, 0xFA, 0x0D, 0x6F, 0xFC, 0x6F, 0xFC,
  0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6C, 0x03, 0x71, 0x03, 0xC6, 0xC0, 0x37, 0x10,
  0x3C, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x60, 0xDF, 0xFA,
  0x0D, 0x60, 0x40, 0xDF, 0xF0, 0xD0, 0x48, 0x09, 0x87, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_indeterminate_check_box() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_radio_button_checked 24x24, 4-bit Alpha,  RLE, 166 bytes.
static const uint8_t ic_round_24_toggle_radio_button_checked_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x70, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x40, 0x8A,
  0x81, 0xC6, 0x22, 0x81, 0x26, 0xCA, 0x08, 0x72, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x70, 0x4A,
  0x04, 0x73, 0x04, 0xA0, 0x46, 0x81, 0xDF, 0x63, 0x84, 0x4B, 0xEE, 0xB4, 0x38, 0x16, 0xFD, 0x58,
  0x15, 0xFC, 0x30, 0x8E, 0x08, 0x38, 0x1C, 0xF5, 0x48, 0x19, 0xF6, 0x20, 0x4F, 0x90, 0x42, 0x81,
  0x6F, 0x94, 0x81, 0xDF, 0x22, 0x0B, 0xF9, 0x0B, 0x28, 0x12, 0xFD, 0x40, 0xE9, 0x30, 0xEF, 0x90,
  0xE3, 0x90, 0xE4, 0x0E, 0x93, 0x0E, 0xF9, 0x0E, 0x39, 0x0E, 0x48, 0x1D, 0xF2, 0x20, 0xBF, 0x90,
  0xB2, 0x81, 0x2F, 0xD4, 0x81, 0x9F, 0x62, 0x04, 0xF9, 0x04, 0x28, 0x16, 0xF9, 0x48, 0x15, 0xFC,
  0x30, 0x8E, 0x08, 0x38, 0x1C, 0xF5, 0x58, 0x1D, 0xF6, 0x38, 0x44, 0xBE, 0xEB, 0x43, 0x81, 0x6F,
  0xD6, 0x04, 0xA0, 0x47, 0x30, 0x4A, 0x04, 0x70, 0x8A, 0x06, 0x71, 0x06, 0xA0, 0x87, 0x20, 0x8A,
  0x81, 0xC6, 0x22, 0x81, 0x26, 0xCA, 0x08, 0x74, 0x04, 0x0D, 0xF9, 0x0D, 0x04, 0x77, 0x86, 0x59,
  0xDE, 0xED, 0x95, 0x80, 0xE4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_radio_button_checked() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_radio_button_unchecked 24x24, 4-bit Alpha,  RLE, 136 bytes.
static const uint8_t ic_round_24_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x70, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x40, 0x8A,
  0x81, 0xC6, 0x22, 0x81, 0x26, 0xCA, 0x08, 0x72, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x70, 0x4A,
  0x04, 0x73, 0x04, 0xA0, 0x46, 0x81, 0xDF, 0x67, 0x58, 0x16, 0xFD, 0x58, 0x15, 0xFC, 0x77, 0x81,
  0xCF, 0x54, 0x81, 0x9F, 0x67, 0x78, 0x16, 0xF9, 0x48, 0x1D, 0xF2, 0x77, 0x81, 0x2F, 0xD4, 0x0E,
  0x97, 0x72, 0x90, 0xE4, 0x0E, 0x97, 0x72, 0x90, 0xE4, 0x81, 0xDF, 0x27, 0x78, 0x12, 0xFD, 0x48,
  0x19, 0xF6, 0x77, 0x81, 0x6F, 0x94, 0x81, 0x5F, 0xC7, 0x78, 0x1C, 0xF5, 0x58, 0x1D, 0xF6, 0x75,
  0x81, 0x6F, 0xD6, 0x04, 0xA0, 0x47, 0x30, 0x4A, 0x04, 0x70, 0x8A, 0x06, 0x71, 0x06, 0xA0, 0x87,
  0x20, 0x8A, 0x81, 0xC6, 0x22, 0x81, 0x26, 0xCA, 0x08, 0x74, 0x04, 0x0D, 0xF9, 0x0D, 0x04, 0x77,
  0x86, 0x59, 0xDE, 0xED, 0x95, 0x80, 0xE4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_radio_button_unchecked() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_star_border 24x24, 4-bit Alpha,  RLE, 121 bytes.
static const uint8_t ic_round_24_toggle_star_border_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x00, 0x37, 0x77, 0x82, 0x1E, 0xE1, 0x77, 0x60, 0x7A, 0x07, 0x77, 0x68, 0x2D,
  0xCC, 0xD7, 0x75, 0x84, 0x5F, 0x66, 0xF5, 0x77, 0x18, 0x31, 0x34, 0xCE, 0x28, 0x3E, 0xC5, 0x31,
  0x72, 0x04, 0x0E, 0xD0, 0x82, 0x08, 0xD0, 0xE0, 0x46, 0x05, 0xA8, 0x28, 0x54, 0x34, 0x82, 0x34,
  0x58, 0xA0, 0x57, 0x82, 0x6F, 0xD2, 0x71, 0x82, 0x2D, 0xF6, 0x72, 0x82, 0x4E, 0xE4, 0x68, 0x23,
  0xEE, 0x47, 0x48, 0x22, 0xDF, 0x14, 0x82, 0x1F, 0xD2, 0x76, 0x0A, 0x0E, 0x60, 0xE0, 0xA7, 0x70,
  0xD0, 0xB2, 0x00, 0x42, 0x0B, 0x0D, 0x76, 0x83, 0x2F, 0x71, 0xAA, 0x83, 0xA1, 0x7F, 0x17, 0x58,
  0x92, 0x5F, 0xBE, 0xF8, 0x8F, 0xEB, 0xF5, 0x75, 0x09, 0xA0, 0xB0, 0x22, 0x02, 0x0C, 0xA0, 0x97,
  0x58, 0x15, 0xC5, 0x68, 0x15, 0xD5, 0x80, 0x9C, 0x20,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_star_border() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_star_border_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_star_border_purple500 24x24, 4-bit Alpha,  RLE, 103 bytes.
static const uint8_t ic_round_24_toggle_star_border_purple500_data[] PROGMEM = {
  0x80, 0x9C, 0x70, 0x00, 0x47, 0x77, 0x01, 0xA0, 0x17, 0x76, 0x05, 0xA0, 0x57, 0x76, 0x0A, 0xA0,
  0xA7, 0x76, 0x0E, 0xA0, 0xE7, 0x75, 0x84, 0x4F, 0xCC, 0xF4, 0x76, 0x09, 0xE0, 0x07, 0xE0, 0x97,
  0x10, 0x9E, 0x00, 0x3E, 0x0A, 0x72, 0x07, 0xA0, 0xC0, 0x24, 0x02, 0x0C, 0xA0, 0x77, 0x48, 0x33,
  0xDF, 0xE4, 0x28, 0x34, 0xEF, 0xD3, 0x77, 0x81, 0xEF, 0x32, 0x81, 0x3F, 0xE7, 0x71, 0x89, 0x02,
  0xFE, 0x2C, 0xC2, 0xEF, 0x27, 0x78, 0x27, 0xFD, 0xEA, 0x82, 0xED, 0xF7, 0x77, 0x0C, 0xB0, 0x0A,
  0xB0, 0xB7, 0x60, 0x1B, 0x06, 0x20, 0x7B, 0x01, 0x75, 0x82, 0x3F, 0xD3, 0x48, 0x23, 0xDF, 0x37,
  0x60, 0x37, 0x01, 0x03, 0x80, 0x99, 0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_star_border_purple500() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_star_border_purple500_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_star_half 24x24, 4-bit Alpha,  RLE, 109 bytes.
static const uint8_t ic_round_24_toggle_star_half_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x00, 0x37, 0x77, 0x82, 0x1E, 0xE1, 0x77, 0x60, 0x7A, 0x07, 0x77, 0x68, 0x2D,
  0xFC, 0xD7, 0x75, 0x05, 0xA8, 0x16, 0xF5, 0x77, 0x18, 0x21, 0x34, 0xCA, 0x18, 0x3E, 0xC5, 0x31,
  0x72, 0x04, 0x0E, 0xF1, 0x08, 0xD0, 0xE0, 0x46, 0x05, 0xF9, 0x28, 0x23, 0x45, 0x8A, 0x05, 0x70,
  0x6F, 0x48, 0x22, 0xDF, 0x67, 0x20, 0x40, 0xED, 0x38, 0x23, 0xEE, 0x47, 0x40, 0x20, 0xDC, 0x28,
  0x21, 0xFD, 0x27, 0x60, 0xAC, 0x30, 0xE0, 0xA7, 0x70, 0xDC, 0x04, 0x20, 0xB0, 0xD7, 0x60, 0x2E,
  0x83, 0xA1, 0x7F, 0x17, 0x50, 0x5C, 0x85, 0x88, 0xFE, 0xBF, 0x57, 0x50, 0x9A, 0x0B, 0x02, 0x20,
  0x20, 0xCA, 0x09, 0x75, 0x81, 0x5C, 0x56, 0x81, 0x5D, 0x58, 0x09, 0xC2, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_star_half() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_star_half_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_star_outline 24x24, 4-bit Alpha,  RLE, 121 bytes.
static const uint8_t ic_round_24_toggle_star_outline_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x00, 0x37, 0x77, 0x82, 0x1E, 0xE1, 0x77, 0x60, 0x7A, 0x07, 0x77, 0x68, 0x2D,
  0xCC, 0xD7, 0x75, 0x84, 0x5F, 0x66, 0xF5, 0x77, 0x18, 0x31, 0x34, 0xCE, 0x28, 0x3E, 0xC5, 0x31,
  0x72, 0x04, 0x0E, 0xD0, 0x82, 0x08, 0xD0, 0xE0, 0x46, 0x05, 0xA8, 0x28, 0x54, 0x34, 0x82, 0x34,
  0x58, 0xA0, 0x57, 0x82, 0x6F, 0xD2, 0x71, 0x82, 0x2D, 0xF6, 0x72, 0x82, 0x4E, 0xE4, 0x68, 0x23,
  0xEE, 0x47, 0x48, 0x22, 0xDF, 0x14, 0x82, 0x1F, 0xD2, 0x76, 0x0A, 0x0E, 0x60, 0xE0, 0xA7, 0x70,
  0xD0, 0xB2, 0x00, 0x42, 0x0B, 0x0D, 0x76, 0x83, 0x2F, 0x71, 0xAA, 0x83, 0xA1, 0x7F, 0x17, 0x58,
  0x92, 0x5F, 0xBE, 0xF8, 0x8F, 0xEB, 0xF5, 0x75, 0x09, 0xA0, 0xB0, 0x22, 0x02, 0x0C, 0xA0, 0x97,
  0x58, 0x15, 0xC5, 0x68, 0x15, 0xD5, 0x80, 0x9C, 0x20,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_star_outline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_star_outline_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_star 24x24, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_round_24_toggle_star_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x00, 0x37, 0x77, 0x82, 0x1E, 0xE1, 0x77, 0x60, 0x7A, 0x07, 0x77, 0x60, 0xDA,
  0x0D, 0x77, 0x50, 0x5C, 0x05, 0x77, 0x18, 0x21, 0x34, 0xCC, 0x82, 0xC4, 0x31, 0x72, 0x04, 0x0E,
  0xFF, 0x0E, 0x04, 0x60, 0x5F, 0xFA, 0x05, 0x70, 0x6F, 0xF0, 0x67, 0x20, 0x40, 0xEF, 0xB0, 0xE0,
  0x47, 0x40, 0x20, 0xDF, 0x90, 0xD0, 0x37, 0x60, 0xAF, 0x90, 0xA7, 0x70, 0xDF, 0x90, 0xD7, 0x60,
  0x2F, 0xB0, 0x17, 0x50, 0x5C, 0x00, 0x8C, 0x05, 0x75, 0x09, 0xA0, 0xB0, 0x22, 0x02, 0x0C, 0xA0,
  0x97, 0x58, 0x15, 0xC5, 0x68, 0x15, 0xD5, 0x80, 0x9C, 0x20,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_star() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_star_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_star_purple500 24x24, 4-bit Alpha,  RLE, 103 bytes.
static const uint8_t ic_round_24_toggle_star_purple500_data[] PROGMEM = {
  0x80, 0x9C, 0x70, 0x00, 0x47, 0x77, 0x01, 0xA0, 0x17, 0x76, 0x05, 0xA0, 0x57, 0x76, 0x0A, 0xA0,
  0xA7, 0x76, 0x0E, 0xA0, 0xE7, 0x75, 0x84, 0x4F, 0xCC, 0xF4, 0x76, 0x09, 0xE0, 0x07, 0xE0, 0x97,
  0x10, 0x9E, 0x00, 0x3E, 0x0A, 0x72, 0x07, 0xA0, 0xC0, 0x24, 0x02, 0x0C, 0xA0, 0x77, 0x48, 0x33,
  0xDF, 0xE4, 0x28, 0x34, 0xEF, 0xD3, 0x77, 0x81, 0xEF, 0x32, 0x81, 0x3F, 0xE7, 0x71, 0x89, 0x02,
  0xFE, 0x2C, 0xC2, 0xEF, 0x27, 0x78, 0x27, 0xFD, 0xEA, 0x82, 0xED, 0xF7, 0x77, 0x0C, 0xB0, 0x0A,
  0xB0, 0xB7, 0x60, 0x1B, 0x06, 0x20, 0x7B, 0x01, 0x75, 0x82, 0x3F, 0xD3, 0x48, 0x23, 0xDF, 0x37,
  0x60, 0x37, 0x01, 0x03, 0x80, 0x99, 0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_star_purple500() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_star_purple500_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_toggle_off 24x24, 4-bit Alpha,  RLE, 67 bytes.
static const uint8_t ic_round_24_toggle_toggle_off_data[] PROGMEM = {
  0x80, 0xAD, 0x00, 0x81, 0x4B, 0xEF, 0xB8, 0x1E, 0xB4, 0x70, 0x8F, 0xFA, 0x08, 0x50, 0x4A, 0x82,
  0x71, 0x17, 0xFD, 0x04, 0x48, 0x1B, 0xF7, 0x40, 0x7F, 0xC0, 0xB4, 0x81, 0xEF, 0x14, 0x01, 0xFC,
  0x0E, 0x48, 0x1E, 0xF1, 0x40, 0x1F, 0xC0, 0xE4, 0x81, 0xBF, 0x74, 0x07, 0xFC, 0x0B, 0x40, 0x4A,
  0x82, 0x71, 0x17, 0xFD, 0x04, 0x50, 0x8F, 0xFA, 0x08, 0x78, 0x14, 0xBE, 0xFB, 0x81, 0xEB, 0x48,
  0x0A, 0xD0, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_toggle_off() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_toggle_off_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_24_toggle_toggle_on 24x24, 4-bit Alpha,  RLE, 67 bytes.
static const uint8_t ic_round_24_toggle_toggle_on_data[] PROGMEM = {
  0x80, 0xAD, 0x00, 0x81, 0x4B, 0xEF, 0xB8, 0x1E, 0xB4, 0x70, 0x8F, 0xFA, 0x08, 0x50, 0x4F, 0xD8,
  0x27, 0x11, 0x7A, 0x04, 0x40, 0xBF, 0xC0, 0x74, 0x81, 0x7F, 0xB4, 0x0E, 0xFC, 0x01, 0x48, 0x11,
  0xFE, 0x40, 0xEF, 0xC0, 0x14, 0x81, 0x1F, 0xE4, 0x0B, 0xFC, 0x07, 0x48, 0x17, 0xFB, 0x40, 0x4F,
  0xD8, 0x27, 0x11, 0x7A, 0x04, 0x50, 0x8F, 0xFA, 0x08, 0x78, 0x14, 0xBE, 0xFB, 0x81, 0xEB, 0x48,
  0x0A, 0xD0, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_24_toggle_toggle_on() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_round_24_toggle_toggle_on_data, Alpha4(color::Black));
  return value;
}
