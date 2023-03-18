#include "toggle.h"

using namespace roo_display;

// Image file ic_round_36_toggle_check_box_outline_blank 36x36, 4-bit Alpha,  RLE, 163 bytes.
static const uint8_t ic_round_36_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x20, 0x48, 0x0A, 0x27, 0x04, 0x30, 0x9F, 0xFF, 0xB8, 0x19, 0x04, 0xFF, 0xFD, 0x04, 0x07, 0xB0,
  0x98, 0x09, 0x67, 0x09, 0xB0, 0x07, 0xA0, 0x97, 0x76, 0x09, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07,
  0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77,
  0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07,
  0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07,
  0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77,
  0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07,
  0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07,
  0xA0, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x07, 0xA0, 0x97, 0x76, 0x09, 0xA0, 0x07, 0xB0, 0x98,
  0x09, 0x67, 0x09, 0xB0, 0x70, 0x4F, 0xFF, 0xD8, 0x14, 0x09, 0xFF, 0xFB, 0x09, 0x30, 0x48, 0x0A,
  0x27, 0x04, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_check_box_outline_blank() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 31, 31), Box(0, 0, 35, 35),
      ic_round_36_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_check_box 36x36, 4-bit Alpha,  RLE, 169 bytes.
static const uint8_t ic_round_36_toggle_check_box_data[] PROGMEM = {
  0x20, 0x48, 0x0A, 0x27, 0x04, 0x30, 0x9F, 0xFF, 0xB8, 0x19, 0x04, 0xFF, 0xFD, 0x04, 0x07, 0xFF,
  0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFE, 0x81, 0xC8, 0xEB, 0x00, 0x7F,
  0xFD, 0x0B, 0x20, 0x4B, 0x00, 0x7F, 0xFC, 0x0B, 0x30, 0x4B, 0x00, 0x7F, 0xFB, 0x0B, 0x30, 0x20,
  0xDB, 0x00, 0x7F, 0xFA, 0x0B, 0x30, 0x20, 0xDC, 0x00, 0x7F, 0xF9, 0x0B, 0x30, 0x20, 0xDD, 0x00,
  0x7B, 0x81, 0xE8, 0xCF, 0x90, 0xB3, 0x02, 0x0D, 0xE0, 0x07, 0xB0, 0x42, 0x0B, 0xE0, 0xB3, 0x02,
  0x0D, 0xF0, 0x07, 0xB0, 0x43, 0x0B, 0xC0, 0xB3, 0x02, 0x0D, 0xF9, 0x00, 0x7B, 0x0D, 0x02, 0x30,
  0xBA, 0x0B, 0x30, 0x20, 0xDF, 0xA0, 0x07, 0xC0, 0xD0, 0x23, 0x00, 0xB3, 0x01, 0x0D, 0xFB, 0x00,
  0x7D, 0x0D, 0x02, 0x60, 0x10, 0xDF, 0xC0, 0x07, 0xE0, 0xD0, 0x24, 0x01, 0x0D, 0xFD, 0x00, 0x7F,
  0x0D, 0x02, 0x20, 0x10, 0xDF, 0xE0, 0x07, 0xF9, 0x82, 0xD4, 0x4D, 0xFF, 0x00, 0x7F, 0xFF, 0xD0,
  0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x07, 0x04, 0xFF, 0xFD, 0x81, 0x40,
  0x9F, 0xFF, 0xB0, 0x93, 0x04, 0x80, 0xA2, 0x70, 0x42,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_check_box() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 31, 31), Box(0, 0, 35, 35),
      ic_round_36_toggle_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_indeterminate_check_box 36x36, 4-bit Alpha,  RLE, 117 bytes.
static const uint8_t ic_round_36_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x20, 0x48, 0x0A, 0x27, 0x04, 0x30, 0x9F, 0xFF, 0xB8, 0x19, 0x04, 0xFF, 0xFD, 0x04, 0x07, 0xFF,
  0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00,
  0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7E, 0x09,
  0x80, 0x90, 0x70, 0x9E, 0x00, 0x7D, 0x09, 0x77, 0x09, 0xD0, 0x07, 0xD0, 0x97, 0x70, 0x9D, 0x00,
  0x7E, 0x09, 0x80, 0x90, 0x70, 0x9E, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF,
  0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07, 0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x07,
  0xFF, 0xFD, 0x00, 0x7F, 0xFF, 0xD0, 0x70, 0x4F, 0xFF, 0xD8, 0x14, 0x09, 0xFF, 0xFB, 0x09, 0x30,
  0x48, 0x0A, 0x27, 0x04, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_indeterminate_check_box() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 31, 31), Box(0, 0, 35, 35),
      ic_round_36_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_radio_button_checked 36x36, 4-bit Alpha,  RLE, 257 bytes.
static const uint8_t ic_round_36_toggle_radio_button_checked_data[] PROGMEM = {
  0x73, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37, 0x74, 0x07, 0x0E, 0xFB, 0x0E, 0x07, 0x77, 0x05,
  0x0D, 0xFF, 0x0D, 0x05, 0x74, 0x07, 0xC8, 0x2D, 0x94, 0x22, 0x82, 0x24, 0x9D, 0xC0, 0x77, 0x20,
  0xAB, 0x0D, 0x06, 0x73, 0x06, 0x0D, 0xB0, 0xA7, 0x08, 0xB0, 0xA7, 0x70, 0xAB, 0x08, 0x50, 0x5B,
  0x08, 0x77, 0x20, 0x8B, 0x05, 0x40, 0xDA, 0x0A, 0x78, 0x25, 0x77, 0x57, 0x0A, 0xA0, 0xD3, 0x07,
  0xA0, 0xD5, 0x01, 0x09, 0xE0, 0x90, 0x15, 0x0D, 0xA0, 0x72, 0x0E, 0xA0, 0x64, 0x02, 0x0D, 0xF9,
  0x0D, 0x02, 0x40, 0x6A, 0x81, 0xE0, 0x3A, 0x0D, 0x40, 0x10, 0xDF, 0xB0, 0xD0, 0x14, 0x0D, 0xA0,
  0x30, 0x8A, 0x08, 0x40, 0x9F, 0xD0, 0x94, 0x08, 0xA0, 0x80, 0xBA, 0x04, 0x4F, 0xF4, 0x04, 0xA0,
  0xB0, 0xDA, 0x02, 0x30, 0x5F, 0xF0, 0x53, 0x02, 0xA0, 0xD0, 0xEA, 0x40, 0x6F, 0xF0, 0x64, 0xA0,
  0x0E, 0xA4, 0x06, 0xFF, 0x06, 0x4A, 0x0E, 0x0D, 0xA0, 0x23, 0x05, 0xFF, 0x05, 0x30, 0x2A, 0x0D,
  0x0B, 0xA0, 0x44, 0xFF, 0x40, 0x4A, 0x0B, 0x08, 0xA0, 0x84, 0x09, 0xFD, 0x09, 0x40, 0x8A, 0x08,
  0x03, 0xA0, 0xD4, 0x01, 0x0D, 0xFB, 0x0D, 0x01, 0x40, 0xDA, 0x81, 0x30, 0xEA, 0x06, 0x40, 0x20,
  0xDF, 0x90, 0xD0, 0x24, 0x06, 0xA0, 0xE2, 0x07, 0xA0, 0xD5, 0x01, 0x09, 0xE0, 0x90, 0x15, 0x0D,
  0xA0, 0x73, 0x0D, 0xA0, 0xA7, 0x82, 0x57, 0x75, 0x70, 0xAA, 0x0D, 0x40, 0x5B, 0x08, 0x77, 0x20,
  0x8B, 0x05, 0x50, 0x8B, 0x0A, 0x77, 0x0A, 0xB0, 0x87, 0x0A, 0xB0, 0xD0, 0x67, 0x30, 0x60, 0xDB,
  0x0A, 0x72, 0x07, 0xC8, 0x2D, 0x94, 0x22, 0x82, 0x24, 0x9D, 0xC0, 0x77, 0x40, 0x50, 0xDF, 0xF0,
  0xD0, 0x57, 0x70, 0x70, 0xEF, 0xB0, 0xE0, 0x77, 0x74, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37,
  0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_radio_button_checked() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 32, 32), Box(0, 0, 35, 35),
      ic_round_36_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_radio_button_unchecked 36x36, 4-bit Alpha,  RLE, 215 bytes.
static const uint8_t ic_round_36_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x73, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37, 0x74, 0x07, 0x0E, 0xFB, 0x0E, 0x07, 0x77, 0x05,
  0x0D, 0xFF, 0x0D, 0x05, 0x74, 0x07, 0xC8, 0x2D, 0x94, 0x22, 0x82, 0x24, 0x9D, 0xC0, 0x77, 0x20,
  0xAB, 0x0D, 0x06, 0x73, 0x06, 0x0D, 0xB0, 0xA7, 0x08, 0xB0, 0xA7, 0x70, 0xAB, 0x08, 0x50, 0x5B,
  0x08, 0x77, 0x20, 0x8B, 0x05, 0x40, 0xDA, 0x0A, 0x77, 0x40, 0xAA, 0x0D, 0x30, 0x7A, 0x0D, 0x77,
  0x60, 0xDA, 0x07, 0x20, 0xEA, 0x06, 0x77, 0x60, 0x6A, 0x81, 0xE0, 0x3A, 0x0D, 0x77, 0x71, 0x0D,
  0xA0, 0x30, 0x8A, 0x08, 0x77, 0x71, 0x08, 0xA0, 0x80, 0xBA, 0x04, 0x77, 0x71, 0x04, 0xA0, 0xB0,
  0xDA, 0x02, 0x77, 0x71, 0x02, 0xA0, 0xD0, 0xEA, 0x77, 0x73, 0xA0, 0x0E, 0xA7, 0x77, 0x3A, 0x0E,
  0x0D, 0xA0, 0x27, 0x77, 0x10, 0x2A, 0x0D, 0x0B, 0xA0, 0x47, 0x77, 0x10, 0x4A, 0x0B, 0x08, 0xA0,
  0x87, 0x77, 0x10, 0x8A, 0x08, 0x03, 0xA0, 0xD7, 0x77, 0x10, 0xDA, 0x81, 0x30, 0xEA, 0x06, 0x77,
  0x60, 0x6A, 0x0E, 0x20, 0x7A, 0x0D, 0x77, 0x60, 0xDA, 0x07, 0x30, 0xDA, 0x0A, 0x77, 0x40, 0xAA,
  0x0D, 0x40, 0x5B, 0x08, 0x77, 0x20, 0x8B, 0x05, 0x50, 0x8B, 0x0A, 0x77, 0x0A, 0xB0, 0x87, 0x0A,
  0xB0, 0xD0, 0x67, 0x30, 0x60, 0xDB, 0x0A, 0x72, 0x07, 0xC8, 0x2D, 0x94, 0x22, 0x82, 0x24, 0x9D,
  0xC0, 0x77, 0x40, 0x50, 0xDF, 0xF0, 0xD0, 0x57, 0x70, 0x70, 0xEF, 0xB0, 0xE0, 0x77, 0x74, 0x89,
  0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_radio_button_unchecked() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 32, 32), Box(0, 0, 35, 35),
      ic_round_36_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_star_border 36x36, 4-bit Alpha,  RLE, 193 bytes.
static const uint8_t ic_round_36_toggle_star_border_data[] PROGMEM = {
  0x75, 0x00, 0x77, 0x77, 0x20, 0x7A, 0x07, 0x77, 0x71, 0x0D, 0xA0, 0xD7, 0x77, 0x05, 0xC0, 0x57,
  0x76, 0x84, 0xBF, 0xDD, 0xFB, 0x77, 0x50, 0x2A, 0x00, 0x6A, 0x02, 0x77, 0x48, 0x19, 0xFE, 0x28,
  0x1E, 0xF9, 0x77, 0x38, 0x21, 0xEF, 0x92, 0x82, 0x9F, 0xE1, 0x72, 0x85, 0x67, 0x9A, 0xBD, 0xEB,
  0x02, 0x20, 0x2C, 0x86, 0xDB, 0xA9, 0x76, 0x0A, 0xFA, 0x0B, 0x40, 0xBF, 0xA0, 0x0A, 0xB8, 0x5B,
  0x98, 0x75, 0x41, 0x48, 0x51, 0x45, 0x78, 0x9B, 0xB8, 0x1A, 0x1C, 0xA0, 0xA7, 0x72, 0x0A, 0xA0,
  0xC0, 0x12, 0x0B, 0xA0, 0xC0, 0x17, 0x50, 0x10, 0xBA, 0x0B, 0x50, 0x9A, 0x0D, 0x02, 0x73, 0x02,
  0x0D, 0xA0, 0x97, 0x07, 0xA0, 0xE0, 0x37, 0x10, 0x30, 0xEA, 0x07, 0x72, 0x05, 0xA0, 0xB7, 0x10,
  0xBA, 0x05, 0x74, 0x81, 0xEF, 0x87, 0x18, 0x18, 0xFE, 0x74, 0x02, 0xA0, 0x47, 0x10, 0x4A, 0x02,
  0x73, 0x06, 0xA0, 0x12, 0x82, 0x19, 0x91, 0x3A, 0x06, 0x73, 0x81, 0x9F, 0xC2, 0x06, 0x0E, 0xA0,
  0xE0, 0x52, 0x81, 0xCF, 0x97, 0x38, 0x3D, 0xF9, 0x3C, 0xE8, 0x3C, 0x29, 0xFD, 0x72, 0x01, 0xA0,
  0xCB, 0x82, 0xC3, 0x3C, 0xB0, 0xCA, 0x01, 0x71, 0x05, 0xC0, 0xE0, 0x64, 0x06, 0x0E, 0xC0, 0x57,
  0x10, 0x6B, 0x09, 0x01, 0x60, 0x10, 0x9B, 0x06, 0x71, 0x82, 0x1B, 0xB3, 0x73, 0x82, 0x3B, 0xB1,
  0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_star_border() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 5, 30, 29), Box(0, 0, 35, 35),
      ic_round_36_toggle_star_border_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_star_border_purple500 36x36, 4-bit Alpha,  RLE, 159 bytes.
static const uint8_t ic_round_36_toggle_star_border_purple500_data[] PROGMEM = {
  0x74, 0x00, 0x27, 0x77, 0x04, 0xA0, 0x37, 0x76, 0x0A, 0xA0, 0xA7, 0x76, 0x0E, 0xA0, 0xE7, 0x75,
  0x04, 0xC0, 0x47, 0x74, 0x08, 0xC0, 0x87, 0x74, 0x0D, 0xC0, 0xD7, 0x73, 0x02, 0xA0, 0x0E, 0xA0,
  0x27, 0x72, 0x07, 0xA0, 0x0A, 0xA0, 0x77, 0x10, 0x50, 0xEF, 0xA0, 0x05, 0xFA, 0x81, 0xE5, 0xBF,
  0xB0, 0x01, 0xFB, 0x0B, 0x05, 0xFA, 0x0B, 0x20, 0xBF, 0xA8, 0x25, 0x03, 0xDB, 0x0D, 0x03, 0x71,
  0x03, 0x0D, 0xB0, 0xD0, 0x34, 0x09, 0xC0, 0x76, 0x07, 0xC0, 0xA7, 0x05, 0x0E, 0xB0, 0x94, 0x09,
  0xB0, 0xE0, 0x57, 0x20, 0x10, 0xDA, 0x06, 0x40, 0x6A, 0x0D, 0x02, 0x74, 0x0E, 0xA8, 0x41, 0x06,
  0x60, 0x1A, 0x0E, 0x74, 0x04, 0xA8, 0x1C, 0x0A, 0xA8, 0x1A, 0x0C, 0xA0, 0x47, 0x30, 0x9A, 0x0A,
  0x0D, 0xC0, 0xD0, 0xAA, 0x09, 0x73, 0x0E, 0xFD, 0x0E, 0x72, 0x03, 0xD8, 0x2E, 0x55, 0xED, 0x03,
  0x71, 0x08, 0xC0, 0xC0, 0x22, 0x02, 0x0C, 0xC0, 0x87, 0x10, 0xCB, 0x09, 0x60, 0x9B, 0x0C, 0x71,
  0x82, 0xBF, 0xE5, 0x71, 0x82, 0x6E, 0xFB, 0x71, 0x81, 0x16, 0x27, 0x38, 0x12, 0x61, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_star_border_purple500() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 6, 29, 30), Box(0, 0, 35, 35),
      ic_round_36_toggle_star_border_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_star_half 36x36, 4-bit Alpha,  RLE, 164 bytes.
static const uint8_t ic_round_36_toggle_star_half_data[] PROGMEM = {
  0x75, 0x00, 0x77, 0x77, 0x20, 0x7A, 0x07, 0x77, 0x71, 0x0D, 0xA0, 0xD7, 0x77, 0x05, 0xC0, 0x57,
  0x76, 0x0B, 0xA8, 0x1D, 0xFB, 0x77, 0x50, 0x2B, 0x06, 0xA0, 0x27, 0x74, 0x09, 0xB1, 0x81, 0xEF,
  0x97, 0x73, 0x01, 0x0E, 0xB1, 0x82, 0x9F, 0xE1, 0x72, 0x85, 0x67, 0x9A, 0xBD, 0xED, 0x10, 0x2C,
  0x86, 0xDB, 0xA9, 0x76, 0x0A, 0xFD, 0x20, 0xBF, 0xA0, 0x0A, 0xFD, 0x28, 0x51, 0x45, 0x78, 0x9B,
  0xB8, 0x1A, 0x1C, 0xFC, 0x71, 0x0A, 0xA0, 0xC0, 0x12, 0x0B, 0xFB, 0x60, 0x10, 0xBA, 0x0B, 0x50,
  0x9F, 0xA5, 0x02, 0x0D, 0xA0, 0x97, 0x07, 0xF9, 0x40, 0x30, 0xEA, 0x07, 0x72, 0x05, 0xF4, 0x0B,
  0xA0, 0x57, 0x40, 0xEE, 0x48, 0x18, 0xFE, 0x74, 0x02, 0xF4, 0x04, 0xA0, 0x27, 0x30, 0x6F, 0x09,
  0x01, 0x3A, 0x06, 0x73, 0x09, 0xF9, 0x0E, 0x05, 0x28, 0x1C, 0xF9, 0x73, 0x0D, 0xFB, 0x83, 0xC2,
  0x9F, 0xD7, 0x20, 0x1E, 0x82, 0xC3, 0x3C, 0xB0, 0xCA, 0x01, 0x71, 0x05, 0xC0, 0xE0, 0x64, 0x06,
  0x0E, 0xC0, 0x57, 0x10, 0x6B, 0x09, 0x01, 0x60, 0x10, 0x9B, 0x06, 0x71, 0x82, 0x1B, 0xB3, 0x73,
  0x82, 0x3B, 0xB1, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_star_half() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 5, 30, 29), Box(0, 0, 35, 35),
      ic_round_36_toggle_star_half_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_star_outline 36x36, 4-bit Alpha,  RLE, 193 bytes.
static const uint8_t ic_round_36_toggle_star_outline_data[] PROGMEM = {
  0x75, 0x00, 0x77, 0x77, 0x20, 0x7A, 0x07, 0x77, 0x71, 0x0D, 0xA0, 0xD7, 0x77, 0x05, 0xC0, 0x57,
  0x76, 0x84, 0xBF, 0xDD, 0xFB, 0x77, 0x50, 0x2A, 0x00, 0x6A, 0x02, 0x77, 0x48, 0x19, 0xFE, 0x28,
  0x1E, 0xF9, 0x77, 0x38, 0x21, 0xEF, 0x92, 0x82, 0x9F, 0xE1, 0x72, 0x85, 0x67, 0x9A, 0xBD, 0xEB,
  0x02, 0x20, 0x2C, 0x86, 0xDB, 0xA9, 0x76, 0x0A, 0xFA, 0x0B, 0x40, 0xBF, 0xA0, 0x0A, 0xB8, 0x5B,
  0x98, 0x75, 0x41, 0x48, 0x51, 0x45, 0x78, 0x9B, 0xB8, 0x1A, 0x1C, 0xA0, 0xA7, 0x72, 0x0A, 0xA0,
  0xC0, 0x12, 0x0B, 0xA0, 0xC0, 0x17, 0x50, 0x10, 0xBA, 0x0B, 0x50, 0x9A, 0x0D, 0x02, 0x73, 0x02,
  0x0D, 0xA0, 0x97, 0x07, 0xA0, 0xE0, 0x37, 0x10, 0x30, 0xEA, 0x07, 0x72, 0x05, 0xA0, 0xB7, 0x10,
  0xBA, 0x05, 0x74, 0x81, 0xEF, 0x87, 0x18, 0x18, 0xFE, 0x74, 0x02, 0xA0, 0x47, 0x10, 0x4A, 0x02,
  0x73, 0x06, 0xA0, 0x12, 0x82, 0x19, 0x91, 0x3A, 0x06, 0x73, 0x81, 0x9F, 0xC2, 0x06, 0x0E, 0xA0,
  0xE0, 0x52, 0x81, 0xCF, 0x97, 0x38, 0x3D, 0xF9, 0x3C, 0xE8, 0x3C, 0x29, 0xFD, 0x72, 0x01, 0xA0,
  0xCB, 0x82, 0xC3, 0x3C, 0xB0, 0xCA, 0x01, 0x71, 0x05, 0xC0, 0xE0, 0x64, 0x06, 0x0E, 0xC0, 0x57,
  0x10, 0x6B, 0x09, 0x01, 0x60, 0x10, 0x9B, 0x06, 0x71, 0x82, 0x1B, 0xB3, 0x73, 0x82, 0x3B, 0xB1,
  0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_star_outline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 5, 30, 29), Box(0, 0, 35, 35),
      ic_round_36_toggle_star_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_star 36x36, 4-bit Alpha,  RLE, 128 bytes.
static const uint8_t ic_round_36_toggle_star_data[] PROGMEM = {
  0x75, 0x00, 0x77, 0x77, 0x20, 0x7A, 0x07, 0x77, 0x71, 0x0D, 0xA0, 0xD7, 0x77, 0x05, 0xC0, 0x57,
  0x76, 0x0B, 0xC0, 0xB7, 0x75, 0x02, 0xE0, 0x27, 0x74, 0x09, 0xE0, 0x97, 0x73, 0x01, 0x0E, 0xE0,
  0xE0, 0x17, 0x28, 0x56, 0x79, 0xAB, 0xDE, 0xFB, 0x87, 0xED, 0xBA, 0x97, 0x50, 0xAF, 0xFF, 0xB0,
  0x90, 0xAF, 0xFF, 0xB8, 0x1A, 0x1C, 0xFF, 0xF9, 0x0D, 0x01, 0x20, 0xBF, 0xFE, 0x0B, 0x01, 0x40,
  0x9F, 0xFC, 0x09, 0x70, 0x7F, 0xFA, 0x07, 0x72, 0x05, 0xFF, 0x05, 0x74, 0x0E, 0xFD, 0x0E, 0x74,
  0x02, 0xFF, 0x02, 0x73, 0x06, 0xFF, 0x06, 0x73, 0x09, 0xFF, 0x09, 0x73, 0x0D, 0xFF, 0x0D, 0x72,
  0x01, 0xE8, 0x2C, 0x33, 0xCE, 0x01, 0x71, 0x05, 0xC0, 0xE0, 0x64, 0x06, 0x0E, 0xC0, 0x57, 0x10,
  0x6B, 0x09, 0x01, 0x60, 0x10, 0x9B, 0x06, 0x71, 0x82, 0x1B, 0xB3, 0x73, 0x82, 0x3B, 0xB1, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_star() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 5, 30, 29), Box(0, 0, 35, 35),
      ic_round_36_toggle_star_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_star_purple500 36x36, 4-bit Alpha,  RLE, 159 bytes.
static const uint8_t ic_round_36_toggle_star_purple500_data[] PROGMEM = {
  0x74, 0x00, 0x27, 0x77, 0x04, 0xA0, 0x37, 0x76, 0x0A, 0xA0, 0xA7, 0x76, 0x0E, 0xA0, 0xE7, 0x75,
  0x04, 0xC0, 0x47, 0x74, 0x08, 0xC0, 0x87, 0x74, 0x0D, 0xC0, 0xD7, 0x73, 0x02, 0xA0, 0x0E, 0xA0,
  0x27, 0x72, 0x07, 0xA0, 0x0A, 0xA0, 0x77, 0x10, 0x50, 0xEF, 0xA0, 0x05, 0xFA, 0x81, 0xE5, 0xBF,
  0xB0, 0x01, 0xFB, 0x0B, 0x05, 0xFA, 0x0B, 0x20, 0xBF, 0xA8, 0x25, 0x03, 0xDB, 0x0D, 0x03, 0x71,
  0x03, 0x0D, 0xB0, 0xD0, 0x34, 0x09, 0xC0, 0x76, 0x07, 0xC0, 0xA7, 0x05, 0x0E, 0xB0, 0x94, 0x09,
  0xB0, 0xE0, 0x57, 0x20, 0x10, 0xDA, 0x06, 0x40, 0x6A, 0x0D, 0x02, 0x74, 0x0E, 0xA8, 0x41, 0x06,
  0x60, 0x1A, 0x0E, 0x74, 0x04, 0xA8, 0x1C, 0x0A, 0xA8, 0x1A, 0x0C, 0xA0, 0x47, 0x30, 0x9A, 0x0A,
  0x0D, 0xC0, 0xD0, 0xAA, 0x09, 0x73, 0x0E, 0xFD, 0x0E, 0x72, 0x03, 0xD8, 0x2E, 0x55, 0xED, 0x03,
  0x71, 0x08, 0xC0, 0xC0, 0x22, 0x02, 0x0C, 0xC0, 0x87, 0x10, 0xCB, 0x09, 0x60, 0x9B, 0x0C, 0x71,
  0x82, 0xBF, 0xE5, 0x71, 0x82, 0x6E, 0xFB, 0x71, 0x81, 0x16, 0x27, 0x38, 0x12, 0x61, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_star_purple500() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(6, 6, 29, 30), Box(0, 0, 35, 35),
      ic_round_36_toggle_star_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_toggle_off 36x36, 4-bit Alpha,  RLE, 109 bytes.
static const uint8_t ic_round_36_toggle_toggle_off_data[] PROGMEM = {
  0x50, 0x30, 0x68, 0x09, 0x47, 0x06, 0x03, 0x71, 0x04, 0x0D, 0xFF, 0xE0, 0xD0, 0x45, 0x08, 0xFF,
  0xFB, 0x08, 0x30, 0x7B, 0x83, 0xEA, 0x8A, 0xEF, 0xFC, 0x81, 0x70, 0x1B, 0x0A, 0x01, 0x30, 0x10,
  0xAF, 0xFC, 0x01, 0x08, 0xA0, 0xC7, 0x0C, 0xFF, 0xB0, 0x80, 0xCA, 0x04, 0x70, 0x4F, 0xFB, 0x0C,
  0x0E, 0xA0, 0x17, 0x01, 0xFF, 0xB0, 0x0E, 0xA0, 0x17, 0x01, 0xFF, 0xB0, 0xE0, 0xCA, 0x04, 0x70,
  0x4F, 0xFB, 0x0C, 0x08, 0xA0, 0xC7, 0x0C, 0xFF, 0xB0, 0x80, 0x1B, 0x0A, 0x01, 0x30, 0x10, 0xAF,
  0xFC, 0x81, 0x10, 0x7B, 0x83, 0xEA, 0x8A, 0xEF, 0xFC, 0x07, 0x30, 0x8F, 0xFF, 0xB0, 0x85, 0x04,
  0x0D, 0xFF, 0xE0, 0xD0, 0x47, 0x10, 0x30, 0x68, 0x09, 0x47, 0x06, 0x03, 0x50,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_toggle_off() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 10, 32, 25), Box(0, 0, 35, 35),
      ic_round_36_toggle_toggle_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_toggle_toggle_on 36x36, 4-bit Alpha,  RLE, 109 bytes.
static const uint8_t ic_round_36_toggle_toggle_on_data[] PROGMEM = {
  0x50, 0x30, 0x68, 0x09, 0x47, 0x06, 0x03, 0x71, 0x04, 0x0D, 0xFF, 0xE0, 0xD0, 0x45, 0x08, 0xFF,
  0xFB, 0x08, 0x30, 0x7F, 0xFC, 0x83, 0xEA, 0x8A, 0xEB, 0x81, 0x70, 0x1F, 0xFC, 0x0A, 0x01, 0x30,
  0x10, 0xAB, 0x01, 0x08, 0xFF, 0xB0, 0xC7, 0x0C, 0xA0, 0x80, 0xCF, 0xFB, 0x04, 0x70, 0x4A, 0x0C,
  0x0E, 0xFF, 0xB0, 0x17, 0x01, 0xA0, 0x0E, 0xFF, 0xB0, 0x17, 0x01, 0xA0, 0xE0, 0xCF, 0xFB, 0x04,
  0x70, 0x4A, 0x0C, 0x08, 0xFF, 0xB0, 0xC7, 0x0C, 0xA0, 0x80, 0x1F, 0xFC, 0x0A, 0x01, 0x30, 0x10,
  0xAB, 0x81, 0x10, 0x7F, 0xFC, 0x83, 0xEA, 0x8A, 0xEB, 0x07, 0x30, 0x8F, 0xFF, 0xB0, 0x85, 0x04,
  0x0D, 0xFF, 0xE0, 0xD0, 0x47, 0x10, 0x30, 0x68, 0x09, 0x47, 0x06, 0x03, 0x50,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_36_toggle_toggle_on() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 10, 32, 25), Box(0, 0, 35, 35),
      ic_round_36_toggle_toggle_on_data, Alpha4(color::Black));
  return value;
}
