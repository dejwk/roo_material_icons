#include "toggle.h"

using namespace roo_display;

// Image file ic_sharp_36_toggle_check_box_outline_blank 36x36, 4-bit Alpha,  RLE, 203 bytes.
static const uint8_t ic_sharp_36_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x80, 0xAA, 0x00, 0x03, 0x80, 0xA6, 0x70, 0x37, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF,
  0xD0, 0x77, 0x10, 0x7A, 0x0B, 0x80, 0xA0, 0x70, 0xBA, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07,
  0xA0, 0x77, 0x10, 0x7A, 0x07, 0x77, 0x60, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0,
  0x77, 0x10, 0x7A, 0x07, 0x77, 0x60, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77,
  0x10, 0x7A, 0x07, 0x77, 0x60, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x10,
  0x7A, 0x07, 0x77, 0x60, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x10, 0x7A,
  0x07, 0x77, 0x60, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07,
  0x77, 0x60, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07, 0x77,
  0x60, 0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07, 0x77, 0x60,
  0x7A, 0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07, 0x77, 0x60, 0x7A,
  0x07, 0x71, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x07, 0x77, 0x60, 0x7A, 0x07,
  0x71, 0x07, 0xA0, 0xB8, 0x0A, 0x07, 0x0B, 0xA0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F,
  0xFF, 0xD0, 0x77, 0x10, 0x38, 0x0A, 0x67, 0x03, 0x80, 0xAA, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_check_box_outline_blank() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_check_box 36x36, 4-bit Alpha,  RLE, 220 bytes.
static const uint8_t ic_sharp_36_toggle_check_box_data[] PROGMEM = {
  0x80, 0xAA, 0x00, 0x03, 0x80, 0xA6, 0x70, 0x37, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF,
  0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0,
  0x77, 0x10, 0x7F, 0xFE, 0x81, 0xB3, 0xEB, 0x07, 0x71, 0x07, 0xFF, 0xD0, 0xB2, 0x02, 0x0E, 0xA0,
  0x77, 0x10, 0x7F, 0xFC, 0x0B, 0x30, 0x10, 0xDA, 0x07, 0x71, 0x07, 0xFF, 0xB0, 0xB3, 0x01, 0x0D,
  0xB0, 0x77, 0x10, 0x7F, 0xFA, 0x0B, 0x30, 0x10, 0xDC, 0x07, 0x71, 0x07, 0xFF, 0x90, 0xB3, 0x01,
  0x0D, 0xD0, 0x77, 0x10, 0x7B, 0x81, 0xE3, 0xDF, 0x90, 0xB3, 0x01, 0x0D, 0xE0, 0x77, 0x10, 0x7A,
  0x83, 0xE2, 0x01, 0xDE, 0x0B, 0x30, 0x10, 0xDF, 0x07, 0x71, 0x07, 0xA0, 0xD0, 0x12, 0x01, 0x0D,
  0xC0, 0xB3, 0x01, 0x0D, 0xF9, 0x07, 0x71, 0x07, 0xB0, 0xD0, 0x12, 0x01, 0x0D, 0xA0, 0xB3, 0x01,
  0x0D, 0xFA, 0x07, 0x71, 0x07, 0xC0, 0xD0, 0x12, 0x81, 0x1D, 0xB3, 0x01, 0x0D, 0xFB, 0x07, 0x71,
  0x07, 0xD0, 0xD0, 0x12, 0x01, 0x30, 0x10, 0xDF, 0xC0, 0x77, 0x10, 0x7E, 0x0D, 0x01, 0x40, 0x10,
  0xDF, 0xD0, 0x77, 0x10, 0x7F, 0x0D, 0x01, 0x20, 0x10, 0xDF, 0xE0, 0x77, 0x10, 0x7F, 0x98, 0x2D,
  0x11, 0xDF, 0xF0, 0x77, 0x10, 0x7F, 0xA0, 0x0D, 0xFF, 0x90, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77,
  0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10,
  0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x38, 0x0A, 0x67, 0x03, 0x80, 0xAA, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_check_box() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_indeterminate_check_box 36x36, 4-bit Alpha,  RLE, 157 bytes.
static const uint8_t ic_sharp_36_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x80, 0xAA, 0x00, 0x03, 0x80, 0xA6, 0x70, 0x37, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF,
  0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0,
  0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77,
  0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10,
  0x7D, 0x0B, 0x80, 0x92, 0x70, 0xBD, 0x07, 0x71, 0x07, 0xD0, 0x77, 0x70, 0x7D, 0x07, 0x71, 0x07,
  0xD0, 0x77, 0x70, 0x7D, 0x07, 0x71, 0x07, 0xD0, 0xB8, 0x09, 0x27, 0x0B, 0xD0, 0x77, 0x10, 0x7F,
  0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF,
  0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0,
  0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77,
  0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x38, 0x0A, 0x67, 0x03, 0x80, 0xAA, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_indeterminate_check_box() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_radio_button_checked 36x36, 4-bit Alpha,  RLE, 282 bytes.
static const uint8_t ic_sharp_36_toggle_radio_button_checked_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x02, 0x7A, 0xCD, 0xDB, 0xA7, 0x27, 0x77, 0x30, 0x60, 0xDF, 0xB0, 0xD0,
  0x57, 0x76, 0x04, 0x0D, 0xFF, 0x0C, 0x03, 0x77, 0x30, 0x7C, 0x89, 0x0E, 0x95, 0x31, 0x13, 0x5A,
  0xEC, 0x06, 0x77, 0x10, 0xAB, 0x0E, 0x06, 0x73, 0x07, 0x0E, 0xB0, 0x87, 0x60, 0x7B, 0x0A, 0x01,
  0x75, 0x01, 0x0C, 0xB0, 0x67, 0x40, 0x5B, 0x08, 0x77, 0x20, 0xAB, 0x03, 0x73, 0x0E, 0xA0, 0xA7,
  0x82, 0x45, 0x53, 0x70, 0xCA, 0x0C, 0x72, 0x07, 0xA0, 0xD5, 0x01, 0x08, 0xD0, 0xE0, 0x75, 0x01,
  0x0E, 0xA0, 0x57, 0x10, 0xEA, 0x05, 0x40, 0x20, 0xDF, 0x90, 0xC0, 0x14, 0x07, 0xA0, 0xD7, 0x04,
  0xA0, 0xD4, 0x01, 0x0D, 0xFB, 0x0C, 0x50, 0xEA, 0x02, 0x60, 0x9A, 0x08, 0x40, 0x9F, 0xD0, 0x74,
  0x0A, 0xA0, 0x76, 0x0C, 0xA0, 0x33, 0x01, 0xFE, 0x0E, 0x40, 0x5A, 0x0A, 0x60, 0xDA, 0x01, 0x30,
  0x5F, 0xF0, 0x33, 0x03, 0xA0, 0xB6, 0xB4, 0x07, 0xFF, 0x05, 0x30, 0x1A, 0x0D, 0x6B, 0x40, 0x7F,
  0xF0, 0x63, 0x01, 0xA0, 0xD6, 0x0E, 0xA0, 0x13, 0x06, 0xFF, 0x04, 0x30, 0x3A, 0x0C, 0x60, 0xCA,
  0x03, 0x30, 0x1F, 0xF4, 0x05, 0xA0, 0xA6, 0x09, 0xA0, 0x74, 0x0A, 0xFD, 0x08, 0x40, 0x9A, 0x07,
  0x60, 0x4A, 0x0C, 0x40, 0x20, 0xEF, 0xB0, 0xD0, 0x14, 0x0E, 0xA0, 0x27, 0xB0, 0x44, 0x03, 0x0E,
  0xF9, 0x0D, 0x02, 0x40, 0x6A, 0x0D, 0x71, 0x08, 0xA0, 0xC5, 0x02, 0x0A, 0xE0, 0x90, 0x14, 0x01,
  0x0E, 0xA0, 0x67, 0x10, 0x10, 0xEA, 0x09, 0x68, 0x41, 0x67, 0x75, 0x16, 0x0A, 0xA0, 0xD7, 0x30,
  0x6B, 0x06, 0x77, 0x20, 0x8B, 0x04, 0x74, 0x09, 0xB0, 0x97, 0x70, 0xAB, 0x07, 0x76, 0x0B, 0xB0,
  0xC0, 0x47, 0x30, 0x50, 0xDB, 0x0A, 0x77, 0x10, 0x9C, 0x82, 0xC7, 0x31, 0x28, 0x21, 0x38, 0xDC,
  0x07, 0x77, 0x30, 0x60, 0xEF, 0xF0, 0xE0, 0x57, 0x75, 0x01, 0x08, 0xFC, 0x0E, 0x07, 0x77, 0x73,
  0x82, 0x49, 0xCE, 0xA8, 0x2D, 0xC9, 0x48, 0x09, 0xE5, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_radio_button_checked() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_radio_button_unchecked 36x36, 4-bit Alpha,  RLE, 237 bytes.
static const uint8_t ic_sharp_36_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x02, 0x7A, 0xCD, 0xDB, 0xA7, 0x27, 0x77, 0x30, 0x60, 0xDF, 0xB0, 0xD0,
  0x57, 0x76, 0x04, 0x0D, 0xFF, 0x0C, 0x03, 0x77, 0x30, 0x7C, 0x89, 0x0E, 0x95, 0x31, 0x13, 0x5A,
  0xEC, 0x06, 0x77, 0x10, 0xAB, 0x0E, 0x06, 0x73, 0x07, 0x0E, 0xB0, 0x87, 0x60, 0x7B, 0x0A, 0x01,
  0x75, 0x01, 0x0C, 0xB0, 0x67, 0x40, 0x5B, 0x08, 0x77, 0x20, 0xAB, 0x03, 0x73, 0x0E, 0xA0, 0xA7,
  0x74, 0x0C, 0xA0, 0xC7, 0x20, 0x7A, 0x0D, 0x77, 0x50, 0x10, 0xEA, 0x05, 0x71, 0x0E, 0xA0, 0x57,
  0x76, 0x07, 0xA0, 0xD7, 0x04, 0xA0, 0xD7, 0x77, 0x10, 0xEA, 0x02, 0x60, 0x9A, 0x08, 0x77, 0x71,
  0x0A, 0xA0, 0x76, 0x0C, 0xA0, 0x37, 0x77, 0x10, 0x5A, 0x0A, 0x60, 0xDA, 0x01, 0x77, 0x71, 0x03,
  0xA0, 0xB6, 0xB7, 0x77, 0x20, 0x1A, 0x0D, 0x6B, 0x77, 0x72, 0x01, 0xA0, 0xD6, 0x0E, 0xA0, 0x17,
  0x77, 0x10, 0x3A, 0x0C, 0x60, 0xCA, 0x03, 0x77, 0x71, 0x05, 0xA0, 0xA6, 0x09, 0xA0, 0x77, 0x77,
  0x10, 0x9A, 0x07, 0x60, 0x4A, 0x0C, 0x77, 0x71, 0x0E, 0xA0, 0x27, 0xB0, 0x47, 0x76, 0x06, 0xA0,
  0xD7, 0x10, 0x8A, 0x0C, 0x77, 0x50, 0x10, 0xEA, 0x06, 0x71, 0x01, 0x0E, 0xA0, 0x97, 0x74, 0x0A,
  0xA0, 0xD7, 0x30, 0x6B, 0x06, 0x77, 0x20, 0x8B, 0x04, 0x74, 0x09, 0xB0, 0x97, 0x70, 0xAB, 0x07,
  0x76, 0x0B, 0xB0, 0xC0, 0x47, 0x30, 0x50, 0xDB, 0x0A, 0x77, 0x10, 0x9C, 0x82, 0xC7, 0x31, 0x28,
  0x21, 0x38, 0xDC, 0x07, 0x77, 0x30, 0x60, 0xEF, 0xF0, 0xE0, 0x57, 0x75, 0x01, 0x08, 0xFC, 0x0E,
  0x07, 0x77, 0x73, 0x82, 0x49, 0xCE, 0xA8, 0x2D, 0xC9, 0x48, 0x09, 0xE5, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_radio_button_unchecked() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_star_border 36x36, 4-bit Alpha,  RLE, 240 bytes.
static const uint8_t ic_sharp_36_toggle_star_border_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x03, 0x01, 0x77, 0x77, 0x60, 0xA0, 0x87, 0x77, 0x75, 0x81, 0x1F, 0xE7, 0x77,
  0x75, 0x08, 0xA0, 0x67, 0x77, 0x74, 0x0E, 0xA0, 0xC7, 0x77, 0x73, 0x05, 0xC0, 0x37, 0x77, 0x72,
  0x84, 0xCF, 0xCE, 0xFA, 0x77, 0x77, 0x10, 0x3A, 0x06, 0x08, 0xA0, 0x17, 0x77, 0x78, 0x39, 0xFE,
  0x01, 0xA0, 0x87, 0x77, 0x60, 0x1A, 0x08, 0x28, 0x1A, 0xFE, 0x77, 0x38, 0x90, 0x13, 0x45, 0x78,
  0x9B, 0xCD, 0xB0, 0x22, 0x03, 0xB8, 0x90, 0xDC, 0xB9, 0x87, 0x54, 0x31, 0x60, 0x6F, 0xC0, 0xA4,
  0x0C, 0xFB, 0x0E, 0x04, 0x70, 0x40, 0xEB, 0x85, 0xBA, 0x97, 0x65, 0x14, 0x85, 0x25, 0x77, 0x9B,
  0xCB, 0x0E, 0x03, 0x72, 0x02, 0x0E, 0xA0, 0x87, 0x72, 0x0A, 0xA0, 0xD0, 0x17, 0x40, 0x10, 0xCA,
  0x0A, 0x76, 0x01, 0x0B, 0xA0, 0xB0, 0x17, 0x70, 0xBA, 0x0C, 0x01, 0x73, 0x02, 0x0D, 0xA0, 0x97,
  0x73, 0x09, 0xA0, 0xD0, 0x27, 0x10, 0x30, 0xEA, 0x07, 0x77, 0x50, 0x7A, 0x0A, 0x71, 0x0C, 0xA0,
  0x57, 0x77, 0xA0, 0x77, 0x18, 0x19, 0xFD, 0x77, 0x70, 0x3A, 0x03, 0x71, 0x05, 0xA0, 0x17, 0x76,
  0x06, 0xA3, 0x81, 0x18, 0x73, 0x01, 0xA0, 0x57, 0x76, 0x81, 0xAF, 0xC2, 0x05, 0x0E, 0xA0, 0xD0,
  0x42, 0x81, 0xEF, 0x87, 0x76, 0x83, 0xEF, 0x82, 0xBE, 0x83, 0xA1, 0xAF, 0xC7, 0x75, 0x02, 0xA0,
  0xCB, 0x82, 0xC3, 0x4D, 0xB0, 0xCA, 0x77, 0x50, 0x5C, 0x0E, 0x06, 0x40, 0x7D, 0x04, 0x77, 0x40,
  0x9B, 0x09, 0x01, 0x60, 0x20, 0xBB, 0x07, 0x77, 0x48, 0x2D, 0xFD, 0x37, 0x38, 0x25, 0xDF, 0xB7,
  0x73, 0x81, 0x1E, 0x77, 0x70, 0x80, 0xE7, 0x73, 0x00, 0x17, 0x72, 0x02, 0x01, 0x80, 0xAA, 0x40,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_star_border() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_star_border_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_star_border_purple500 36x36, 4-bit Alpha,  RLE, 240 bytes.
static const uint8_t ic_sharp_36_toggle_star_border_purple500_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x03, 0x01, 0x77, 0x77, 0x60, 0xA0, 0x87, 0x77, 0x75, 0x81, 0x1F, 0xE7, 0x77,
  0x75, 0x08, 0xA0, 0x67, 0x77, 0x74, 0x0E, 0xA0, 0xC7, 0x77, 0x73, 0x05, 0xC0, 0x37, 0x77, 0x72,
  0x84, 0xCF, 0xCE, 0xFA, 0x77, 0x77, 0x10, 0x3A, 0x06, 0x08, 0xA0, 0x17, 0x77, 0x78, 0x39, 0xFE,
  0x01, 0xA0, 0x87, 0x77, 0x60, 0x1A, 0x08, 0x28, 0x1A, 0xFE, 0x77, 0x38, 0x90, 0x13, 0x45, 0x78,
  0x9B, 0xCD, 0xB0, 0x22, 0x03, 0xB8, 0x90, 0xDC, 0xB9, 0x87, 0x54, 0x31, 0x60, 0x6F, 0xC0, 0xA4,
  0x0C, 0xFB, 0x0E, 0x04, 0x70, 0x40, 0xEB, 0x85, 0xBA, 0x97, 0x65, 0x14, 0x85, 0x25, 0x77, 0x9B,
  0xCB, 0x0E, 0x03, 0x72, 0x02, 0x0E, 0xA0, 0x87, 0x72, 0x0A, 0xA0, 0xD0, 0x17, 0x40, 0x10, 0xCA,
  0x0A, 0x76, 0x01, 0x0B, 0xA0, 0xB0, 0x17, 0x70, 0xBA, 0x0C, 0x01, 0x73, 0x02, 0x0D, 0xA0, 0x97,
  0x73, 0x09, 0xA0, 0xD0, 0x27, 0x10, 0x30, 0xEA, 0x07, 0x77, 0x50, 0x7A, 0x0A, 0x71, 0x0C, 0xA0,
  0x57, 0x77, 0xA0, 0x77, 0x18, 0x19, 0xFD, 0x77, 0x70, 0x3A, 0x03, 0x71, 0x05, 0xA0, 0x17, 0x76,
  0x06, 0xA3, 0x81, 0x18, 0x73, 0x01, 0xA0, 0x57, 0x76, 0x81, 0xAF, 0xC2, 0x05, 0x0E, 0xA0, 0xD0,
  0x42, 0x81, 0xEF, 0x87, 0x76, 0x83, 0xEF, 0x82, 0xBE, 0x83, 0xA1, 0xAF, 0xC7, 0x75, 0x02, 0xA0,
  0xCB, 0x82, 0xC3, 0x4D, 0xB0, 0xCA, 0x77, 0x50, 0x5C, 0x0E, 0x06, 0x40, 0x7D, 0x04, 0x77, 0x40,
  0x9B, 0x09, 0x01, 0x60, 0x20, 0xBB, 0x07, 0x77, 0x48, 0x2D, 0xFD, 0x37, 0x38, 0x25, 0xDF, 0xB7,
  0x73, 0x81, 0x1E, 0x77, 0x70, 0x80, 0xE7, 0x73, 0x00, 0x17, 0x72, 0x02, 0x01, 0x80, 0xAA, 0x40,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_star_border_purple500() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_star_border_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_star_half 36x36, 4-bit Alpha,  RLE, 212 bytes.
static const uint8_t ic_sharp_36_toggle_star_half_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x03, 0x01, 0x77, 0x77, 0x60, 0xA0, 0x87, 0x77, 0x75, 0x81, 0x1F, 0xE7, 0x77,
  0x75, 0x08, 0xA0, 0x67, 0x77, 0x74, 0x0E, 0xA0, 0xC7, 0x77, 0x73, 0x05, 0xC0, 0x37, 0x77, 0x72,
  0x0C, 0xA8, 0x1E, 0xFA, 0x77, 0x77, 0x10, 0x3B, 0x08, 0xA0, 0x17, 0x77, 0x70, 0x9B, 0x01, 0xA0,
  0x87, 0x77, 0x60, 0x1C, 0x18, 0x1A, 0xFE, 0x77, 0x38, 0x90, 0x13, 0x45, 0x78, 0x9B, 0xCD, 0xD1,
  0x03, 0xB8, 0x90, 0xDC, 0xB9, 0x87, 0x54, 0x31, 0x60, 0x6F, 0xF2, 0x0C, 0xFB, 0x0E, 0x04, 0x70,
  0x40, 0xEF, 0xD2, 0x85, 0x25, 0x77, 0x9B, 0xCB, 0x0E, 0x03, 0x72, 0x02, 0x0E, 0xFC, 0x71, 0x0A,
  0xA0, 0xD0, 0x17, 0x40, 0x10, 0xCF, 0xB6, 0x01, 0x0B, 0xA0, 0xB0, 0x17, 0x70, 0xBF, 0xA5, 0x02,
  0x0D, 0xA0, 0x97, 0x73, 0x09, 0xF9, 0x40, 0x30, 0xEA, 0x07, 0x77, 0x50, 0x7F, 0x40, 0xCA, 0x05,
  0x77, 0x7F, 0x48, 0x19, 0xFD, 0x77, 0x70, 0x3F, 0x40, 0x5A, 0x01, 0x77, 0x60, 0x6F, 0x07, 0x30,
  0x1A, 0x05, 0x77, 0x60, 0xAF, 0x90, 0xD0, 0x42, 0x81, 0xEF, 0x87, 0x76, 0x0E, 0xFB, 0x83, 0xA1,
  0xAF, 0xC7, 0x75, 0x02, 0xE8, 0x2C, 0x34, 0xDB, 0x0C, 0xA7, 0x75, 0x05, 0xC0, 0xE0, 0x64, 0x07,
  0xD0, 0x47, 0x74, 0x09, 0xB0, 0x90, 0x16, 0x02, 0x0B, 0xB0, 0x77, 0x74, 0x82, 0xDF, 0xD3, 0x73,
  0x82, 0x5D, 0xFB, 0x77, 0x38, 0x11, 0xE7, 0x77, 0x08, 0x0E, 0x77, 0x30, 0x01, 0x77, 0x20, 0x20,
  0x18, 0x0A, 0xA4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_star_half() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_star_half_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_star_outline 36x36, 4-bit Alpha,  RLE, 240 bytes.
static const uint8_t ic_sharp_36_toggle_star_outline_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x03, 0x01, 0x77, 0x77, 0x60, 0xA0, 0x87, 0x77, 0x75, 0x81, 0x1F, 0xE7, 0x77,
  0x75, 0x08, 0xA0, 0x67, 0x77, 0x74, 0x0E, 0xA0, 0xC7, 0x77, 0x73, 0x05, 0xC0, 0x37, 0x77, 0x72,
  0x84, 0xCF, 0xCE, 0xFA, 0x77, 0x77, 0x10, 0x3A, 0x06, 0x08, 0xA0, 0x17, 0x77, 0x78, 0x39, 0xFE,
  0x01, 0xA0, 0x87, 0x77, 0x60, 0x1A, 0x08, 0x28, 0x1A, 0xFE, 0x77, 0x38, 0x90, 0x13, 0x45, 0x78,
  0x9B, 0xCD, 0xB0, 0x22, 0x03, 0xB8, 0x90, 0xDC, 0xB9, 0x87, 0x54, 0x31, 0x60, 0x6F, 0xC0, 0xA4,
  0x0C, 0xFB, 0x0E, 0x04, 0x70, 0x40, 0xEB, 0x85, 0xBA, 0x97, 0x65, 0x14, 0x85, 0x25, 0x77, 0x9B,
  0xCB, 0x0E, 0x03, 0x72, 0x02, 0x0E, 0xA0, 0x87, 0x72, 0x0A, 0xA0, 0xD0, 0x17, 0x40, 0x10, 0xCA,
  0x0A, 0x76, 0x01, 0x0B, 0xA0, 0xB0, 0x17, 0x70, 0xBA, 0x0C, 0x01, 0x73, 0x02, 0x0D, 0xA0, 0x97,
  0x73, 0x09, 0xA0, 0xD0, 0x27, 0x10, 0x30, 0xEA, 0x07, 0x77, 0x50, 0x7A, 0x0A, 0x71, 0x0C, 0xA0,
  0x57, 0x77, 0xA0, 0x77, 0x18, 0x19, 0xFD, 0x77, 0x70, 0x3A, 0x03, 0x71, 0x05, 0xA0, 0x17, 0x76,
  0x06, 0xA3, 0x81, 0x18, 0x73, 0x01, 0xA0, 0x57, 0x76, 0x81, 0xAF, 0xC2, 0x05, 0x0E, 0xA0, 0xD0,
  0x42, 0x81, 0xEF, 0x87, 0x76, 0x83, 0xEF, 0x82, 0xBE, 0x83, 0xA1, 0xAF, 0xC7, 0x75, 0x02, 0xA0,
  0xCB, 0x82, 0xC3, 0x4D, 0xB0, 0xCA, 0x77, 0x50, 0x5C, 0x0E, 0x06, 0x40, 0x7D, 0x04, 0x77, 0x40,
  0x9B, 0x09, 0x01, 0x60, 0x20, 0xBB, 0x07, 0x77, 0x48, 0x2D, 0xFD, 0x37, 0x38, 0x25, 0xDF, 0xB7,
  0x73, 0x81, 0x1E, 0x77, 0x70, 0x80, 0xE7, 0x73, 0x00, 0x17, 0x72, 0x02, 0x01, 0x80, 0xAA, 0x40,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_star_outline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_star_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_star 36x36, 4-bit Alpha,  RLE, 174 bytes.
static const uint8_t ic_sharp_36_toggle_star_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x03, 0x01, 0x77, 0x77, 0x60, 0xA0, 0x87, 0x77, 0x75, 0x81, 0x1F, 0xE7, 0x77,
  0x75, 0x08, 0xA0, 0x67, 0x77, 0x74, 0x0E, 0xA0, 0xC7, 0x77, 0x73, 0x05, 0xC0, 0x37, 0x77, 0x72,
  0x0C, 0xC0, 0xA7, 0x77, 0x71, 0x03, 0xE0, 0x17, 0x77, 0x70, 0x9E, 0x07, 0x77, 0x76, 0x01, 0xF0,
  0xE7, 0x73, 0x89, 0x01, 0x34, 0x57, 0x89, 0xBC, 0xDF, 0xB8, 0x90, 0xDC, 0xB9, 0x87, 0x54, 0x31,
  0x60, 0x6F, 0xFF, 0xE0, 0xE0, 0x47, 0x04, 0x0E, 0xFF, 0xFB, 0x0E, 0x03, 0x72, 0x02, 0x0E, 0xFF,
  0xF9, 0x0D, 0x01, 0x74, 0x01, 0x0C, 0xFF, 0xE0, 0xB0, 0x17, 0x70, 0xBF, 0xFC, 0x09, 0x77, 0x30,
  0x9F, 0xFA, 0x07, 0x77, 0x50, 0x7F, 0xF0, 0x57, 0x77, 0xFE, 0x0D, 0x77, 0x70, 0x3F, 0xF0, 0x17,
  0x76, 0x06, 0xFF, 0x04, 0x77, 0x60, 0xAF, 0xF0, 0x87, 0x76, 0x0E, 0xFF, 0x0C, 0x77, 0x50, 0x2E,
  0x82, 0xC3, 0x4D, 0xE7, 0x75, 0x05, 0xC0, 0xE0, 0x64, 0x07, 0xD0, 0x37, 0x74, 0x09, 0xB0, 0x90,
  0x16, 0x02, 0x0B, 0xB0, 0x77, 0x74, 0x82, 0xDF, 0xD3, 0x73, 0x82, 0x5D, 0xFB, 0x77, 0x38, 0x11,
  0xE7, 0x77, 0x08, 0x0E, 0x77, 0x30, 0x01, 0x77, 0x20, 0x20, 0x18, 0x0A, 0xA4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_star() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_star_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_star_purple500 36x36, 4-bit Alpha,  RLE, 174 bytes.
static const uint8_t ic_sharp_36_toggle_star_purple500_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x03, 0x01, 0x77, 0x77, 0x60, 0xA0, 0x87, 0x77, 0x75, 0x81, 0x1F, 0xE7, 0x77,
  0x75, 0x08, 0xA0, 0x67, 0x77, 0x74, 0x0E, 0xA0, 0xC7, 0x77, 0x73, 0x05, 0xC0, 0x37, 0x77, 0x72,
  0x0C, 0xC0, 0xA7, 0x77, 0x71, 0x03, 0xE0, 0x17, 0x77, 0x70, 0x9E, 0x07, 0x77, 0x76, 0x01, 0xF0,
  0xE7, 0x73, 0x89, 0x01, 0x34, 0x57, 0x89, 0xBC, 0xDF, 0xB8, 0x90, 0xDC, 0xB9, 0x87, 0x54, 0x31,
  0x60, 0x6F, 0xFF, 0xE0, 0xE0, 0x47, 0x04, 0x0E, 0xFF, 0xFB, 0x0E, 0x03, 0x72, 0x02, 0x0E, 0xFF,
  0xF9, 0x0D, 0x01, 0x74, 0x01, 0x0C, 0xFF, 0xE0, 0xB0, 0x17, 0x70, 0xBF, 0xFC, 0x09, 0x77, 0x30,
  0x9F, 0xFA, 0x07, 0x77, 0x50, 0x7F, 0xF0, 0x57, 0x77, 0xFE, 0x0D, 0x77, 0x70, 0x3F, 0xF0, 0x17,
  0x76, 0x06, 0xFF, 0x04, 0x77, 0x60, 0xAF, 0xF0, 0x87, 0x76, 0x0E, 0xFF, 0x0C, 0x77, 0x50, 0x2E,
  0x82, 0xC3, 0x4D, 0xE7, 0x75, 0x05, 0xC0, 0xE0, 0x64, 0x07, 0xD0, 0x37, 0x74, 0x09, 0xB0, 0x90,
  0x16, 0x02, 0x0B, 0xB0, 0x77, 0x74, 0x82, 0xDF, 0xD3, 0x73, 0x82, 0x5D, 0xFB, 0x77, 0x38, 0x11,
  0xE7, 0x77, 0x08, 0x0E, 0x77, 0x30, 0x01, 0x77, 0x20, 0x20, 0x18, 0x0A, 0xA4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_star_purple500() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_star_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_toggle_off 36x36, 4-bit Alpha,  RLE, 117 bytes.
static const uint8_t ic_sharp_36_toggle_toggle_off_data[] PROGMEM = {
  0x80, 0xDD, 0x40, 0x81, 0x25, 0x68, 0x09, 0x27, 0x81, 0x65, 0x17, 0x70, 0x40, 0xCF, 0xFE, 0x0B,
  0x03, 0x74, 0x08, 0xFF, 0xFB, 0x06, 0x72, 0x07, 0xB8, 0x2E, 0xB9, 0xCF, 0xFD, 0x05, 0x70, 0x2B,
  0x0B, 0x01, 0x30, 0x20, 0xCF, 0xFB, 0x0E, 0x01, 0x60, 0x8A, 0x0C, 0x60, 0x10, 0xDF, 0xFB, 0x07,
  0x60, 0xDA, 0x04, 0x70, 0x6F, 0xFB, 0x0B, 0x6B, 0x01, 0x70, 0x2F, 0xFB, 0x0D, 0x6B, 0x71, 0x02,
  0xFF, 0xB0, 0xD6, 0x0D, 0xA0, 0x37, 0x05, 0xFF, 0xB0, 0xB6, 0x09, 0xA0, 0xB7, 0x0D, 0xFF, 0xB0,
  0x76, 0x02, 0xB0, 0x94, 0x01, 0x0A, 0xFF, 0xC0, 0x17, 0x08, 0xB8, 0x3D, 0x97, 0xAE, 0xFF, 0xC0,
  0x77, 0x20, 0xAF, 0xFF, 0xB0, 0x87, 0x40, 0x60, 0xEF, 0xFE, 0x0D, 0x05, 0x77, 0x04, 0x80, 0x96,
  0x70, 0x38, 0x0D, 0xD4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_toggle_off() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_toggle_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_toggle_toggle_on 36x36, 4-bit Alpha,  RLE, 117 bytes.
static const uint8_t ic_sharp_36_toggle_toggle_on_data[] PROGMEM = {
  0x80, 0xDD, 0x40, 0x81, 0x25, 0x68, 0x09, 0x27, 0x81, 0x65, 0x17, 0x70, 0x40, 0xCF, 0xFE, 0x0B,
  0x03, 0x74, 0x08, 0xFF, 0xFB, 0x06, 0x72, 0x07, 0xFF, 0xC8, 0x2E, 0xB9, 0xCC, 0x05, 0x70, 0x2F,
  0xFC, 0x0B, 0x01, 0x30, 0x20, 0xCA, 0x0E, 0x01, 0x60, 0x8F, 0xFB, 0x0C, 0x60, 0x10, 0xDA, 0x07,
  0x60, 0xDF, 0xFB, 0x04, 0x70, 0x6A, 0x0B, 0x6F, 0xFC, 0x01, 0x70, 0x2A, 0x0D, 0x6F, 0xFC, 0x71,
  0x02, 0xA0, 0xD6, 0x0D, 0xFF, 0xB0, 0x37, 0x05, 0xA0, 0xB6, 0x09, 0xFF, 0xB0, 0xB7, 0x0D, 0xA0,
  0x76, 0x02, 0xFF, 0xC0, 0x94, 0x01, 0x0A, 0xB0, 0x17, 0x08, 0xFF, 0xC8, 0x3D, 0x97, 0xAE, 0xB0,
  0x77, 0x20, 0xAF, 0xFF, 0xB0, 0x87, 0x40, 0x60, 0xEF, 0xFE, 0x0D, 0x05, 0x77, 0x04, 0x80, 0x96,
  0x70, 0x38, 0x0D, 0xD4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_36_toggle_toggle_on() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_toggle_toggle_on_data, Alpha4(color::Black));
  return value;
}

