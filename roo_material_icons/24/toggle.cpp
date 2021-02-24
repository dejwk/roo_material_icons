#include "toggle.h"

using namespace roo_display;

// Image file ic_24_toggle_radio_button_checked 24x24, 4-bit Alpha,  RLE, 162 bytes 
static const uint8_t ic_24_toggle_radio_button_checked_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x15, 0xAD, 0xA8, 0x1D, 0xA5, 0x77, 0x05, 0x0D, 0xF9, 0x0D, 0x05, 0x74, 0x09,
  0xA8, 0x1C, 0x62, 0x28, 0x12, 0x6C, 0xA0, 0x97, 0x28, 0x29, 0xFE, 0x67, 0x10, 0x6A, 0x09, 0x78,
  0x25, 0xFE, 0x37, 0x30, 0x3A, 0x05, 0x68, 0x1D, 0xF6, 0x30, 0x50, 0xBA, 0x0B, 0x04, 0x38, 0x16,
  0xFD, 0x58, 0x15, 0xFC, 0x30, 0x8E, 0x08, 0x38, 0x1C, 0xF5, 0x48, 0x1A, 0xF6, 0x20, 0x5F, 0x90,
  0x42, 0x81, 0x6F, 0xA4, 0x81, 0xDF, 0x22, 0x0B, 0xF9, 0x0B, 0x28, 0x12, 0xFD, 0x4A, 0x3F, 0xA0,
  0xE3, 0xA4, 0xA3, 0xFA, 0x0E, 0x3A, 0x48, 0x1D, 0xF2, 0x20, 0xBF, 0x90, 0xB2, 0x81, 0x2F, 0xD4,
  0x81, 0xAF, 0x62, 0x04, 0xF9, 0x04, 0x28, 0x16, 0xFA, 0x48, 0x15, 0xFC, 0x30, 0x8E, 0x08, 0x38,
  0x1C, 0xF5, 0x58, 0x1D, 0xF6, 0x38, 0x44, 0xBE, 0xEB, 0x43, 0x81, 0x6F, 0xD6, 0x05, 0xA0, 0x37,
  0x30, 0x3A, 0x05, 0x70, 0x9A, 0x06, 0x71, 0x06, 0xA0, 0x87, 0x20, 0x9A, 0x81, 0xC6, 0x22, 0x81,
  0x26, 0xCA, 0x08, 0x74, 0x05, 0x0D, 0xF9, 0x0D, 0x05, 0x77, 0x81, 0x5A, 0xDA, 0x81, 0xDA, 0x58,
  0x0E, 0x40,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_radio_button_checked() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_toggle_star 24x24, 4-bit Alpha,  RLE, 100 bytes 
static const uint8_t ic_24_toggle_star_data[] PROGMEM = {
  0x80, 0xE7, 0x00, 0x03, 0x77, 0x71, 0x00, 0x97, 0x77, 0x01, 0xA0, 0x17, 0x76, 0x07, 0xA0, 0x77,
  0x76, 0x0D, 0xA0, 0xD7, 0x75, 0x05, 0xC0, 0x57, 0x78, 0x31, 0x23, 0x4C, 0xC8, 0x3C, 0x43, 0x21,
  0x70, 0x70, 0xDF, 0xFA, 0x0D, 0x07, 0x50, 0x8F, 0xFA, 0x08, 0x70, 0x6F, 0xF0, 0x67, 0x20, 0x40,
  0xEF, 0xB0, 0xE0, 0x47, 0x40, 0x20, 0xDF, 0x90, 0xD0, 0x27, 0x60, 0xAF, 0x90, 0xA7, 0x70, 0xEF,
  0x90, 0xD7, 0x60, 0x2F, 0xB0, 0x17, 0x50, 0x5C, 0x00, 0x8C, 0x05, 0x75, 0x09, 0xA0, 0xB0, 0x22,
  0x02, 0x0C, 0xA0, 0x97, 0x58, 0x1D, 0xE5, 0x68, 0x15, 0xEC, 0x74, 0x81, 0x19, 0x17, 0x10, 0x10,
  0x98, 0x09, 0x92, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_star() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_star_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_toggle_star_half 24x24, 4-bit Alpha,  RLE, 119 bytes 
static const uint8_t ic_24_toggle_star_half_data[] PROGMEM = {
  0x80, 0xE7, 0x00, 0x03, 0x77, 0x71, 0x00, 0x97, 0x77, 0x01, 0xA0, 0x17, 0x76, 0x07, 0xA0, 0x77,
  0x76, 0x82, 0xDF, 0xCD, 0x77, 0x50, 0x5A, 0x81, 0x6F, 0x57, 0x78, 0x31, 0x23, 0x4C, 0xA1, 0x84,
  0xEC, 0x43, 0x21, 0x70, 0x70, 0xDF, 0x91, 0x08, 0xE0, 0xD0, 0x75, 0x08, 0xF9, 0x28, 0x23, 0x45,
  0x8A, 0x08, 0x70, 0x6F, 0x48, 0x22, 0xDF, 0x67, 0x20, 0x40, 0xED, 0x38, 0x23, 0xEE, 0x47, 0x40,
  0x20, 0xDC, 0x28, 0x21, 0xFD, 0x27, 0x60, 0xAC, 0x30, 0xE0, 0xA7, 0x70, 0xEC, 0x04, 0x20, 0xB0,
  0xD7, 0x60, 0x2E, 0x83, 0xA1, 0x7F, 0x27, 0x50, 0x5C, 0x85, 0x88, 0xFE, 0xBF, 0x57, 0x50, 0x9A,
  0x0B, 0x02, 0x20, 0x20, 0xBA, 0x09, 0x75, 0x81, 0xDE, 0x56, 0x81, 0x5E, 0xD7, 0x48, 0x11, 0x91,
  0x71, 0x81, 0x19, 0x18, 0x09, 0x91, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_star_half() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_star_half_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_toggle_check_box_outline_blank 24x24, 4-bit Alpha,  RLE, 60 bytes 
static const uint8_t ic_24_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x04, 0x0E, 0xFF, 0x0E, 0x04, 0x60, 0xEF, 0xFA, 0x0E, 0x6A, 0x77, 0xA6, 0xA7,
  0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A,
  0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x6A, 0x77, 0xA6, 0xA7, 0x7A, 0x60,
  0xEF, 0xFA, 0x0E, 0x60, 0x40, 0xEF, 0xF0, 0xE0, 0x48, 0x09, 0x87, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_check_box_outline_blank() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_toggle_check_box 24x24, 4-bit Alpha,  RLE, 86 bytes 
static const uint8_t ic_24_toggle_check_box_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x04, 0x0E, 0xFF, 0x0E, 0x04, 0x60, 0xEF, 0xFA, 0x0E, 0x6F, 0xFC, 0x6F, 0xF0,
  0xCB, 0x6F, 0xE8, 0x19, 0x07, 0xA6, 0xFD, 0x09, 0x20, 0x7A, 0x6F, 0xC0, 0x92, 0x07, 0xB6, 0xB0,
  0xCE, 0x09, 0x20, 0x7C, 0x6A, 0x81, 0x70, 0xAC, 0x09, 0x20, 0x7D, 0x6A, 0x07, 0x20, 0xAA, 0x09,
  0x20, 0x7E, 0x6B, 0x07, 0x20, 0xA0, 0x92, 0x07, 0xF6, 0xC0, 0x74, 0x07, 0xF9, 0x6D, 0x07, 0x20,
  0x7F, 0xA6, 0xE0, 0x07, 0xFB, 0x6F, 0xFC, 0x6F, 0xFC, 0x60, 0xEF, 0xFA, 0x0E, 0x60, 0x40, 0xEF,
  0xF0, 0xE0, 0x48, 0x09, 0x87, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_check_box() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_toggle_radio_button_unchecked 24x24, 4-bit Alpha,  RLE, 134 bytes 
static const uint8_t ic_24_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x15, 0xAD, 0xA8, 0x1D, 0xA5, 0x77, 0x05, 0x0D, 0xF9, 0x0D, 0x05, 0x74, 0x09,
  0xA8, 0x1C, 0x62, 0x28, 0x12, 0x6C, 0xA0, 0x97, 0x28, 0x29, 0xFE, 0x67, 0x10, 0x6A, 0x09, 0x78,
  0x25, 0xFE, 0x37, 0x30, 0x3A, 0x05, 0x68, 0x1D, 0xF6, 0x75, 0x81, 0x6F, 0xD5, 0x81, 0x5F, 0xC7,
  0x78, 0x1C, 0xF5, 0x48, 0x1A, 0xF6, 0x77, 0x81, 0x6F, 0xA4, 0x81, 0xDF, 0x27, 0x78, 0x12, 0xFD,
  0x4A, 0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x48, 0x1D, 0xF2, 0x77, 0x81, 0x2F, 0xD4, 0x81, 0xAF, 0x67,
  0x78, 0x16, 0xFA, 0x48, 0x15, 0xFC, 0x77, 0x81, 0xCF, 0x55, 0x81, 0xDF, 0x67, 0x58, 0x16, 0xFD,
  0x60, 0x5A, 0x03, 0x73, 0x03, 0xA0, 0x57, 0x09, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x72, 0x09, 0xA8,
  0x1C, 0x62, 0x28, 0x12, 0x6C, 0xA0, 0x87, 0x40, 0x50, 0xDF, 0x90, 0xD0, 0x57, 0x78, 0x15, 0xAD,
  0xA8, 0x1D, 0xA5, 0x80, 0xE4, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_radio_button_unchecked() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_toggle_indeterminate_check_box 24x24, 4-bit Alpha,  RLE, 54 bytes 
static const uint8_t ic_24_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x04, 0x0E, 0xFF, 0x0E, 0x04, 0x60, 0xEF, 0xFA, 0x0E, 0x6F, 0xFC, 0x6F, 0xFC,
  0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6C, 0x73, 0xC6, 0xC7, 0x3C, 0x6F, 0xFC, 0x6F,
  0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x60, 0xEF, 0xFA, 0x0E, 0x60, 0x40, 0xEF,
  0xF0, 0xE0, 0x48, 0x09, 0x87, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_indeterminate_check_box() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_toggle_star_border 24x24, 4-bit Alpha,  RLE, 130 bytes 
static const uint8_t ic_24_toggle_star_border_data[] PROGMEM = {
  0x80, 0xE7, 0x00, 0x03, 0x77, 0x71, 0x00, 0x97, 0x77, 0x01, 0xA0, 0x17, 0x76, 0x07, 0xA0, 0x77,
  0x76, 0x82, 0xDC, 0xCD, 0x77, 0x58, 0x45, 0xF6, 0x6F, 0x57, 0x78, 0x41, 0x23, 0x4C, 0xE2, 0x84,
  0xEC, 0x53, 0x21, 0x70, 0x70, 0xDE, 0x08, 0x20, 0x8E, 0x0D, 0x07, 0x50, 0x8A, 0x82, 0x85, 0x43,
  0x48, 0x23, 0x45, 0x8A, 0x08, 0x78, 0x26, 0xFD, 0x27, 0x18, 0x22, 0xDF, 0x67, 0x28, 0x24, 0xEE,
  0x46, 0x82, 0x4E, 0xE4, 0x74, 0x82, 0x2D, 0xF1, 0x48, 0x21, 0xFD, 0x27, 0x60, 0xA0, 0xE6, 0x0E,
  0x0A, 0x77, 0x0E, 0x0B, 0x20, 0x04, 0x20, 0xB0, 0xD7, 0x68, 0x32, 0xF7, 0x2B, 0xA8, 0x3A, 0x27,
  0xF2, 0x75, 0x81, 0x5F, 0xBA, 0x85, 0x88, 0xFE, 0xBF, 0x57, 0x50, 0x9A, 0x0B, 0x02, 0x20, 0x20,
  0xCA, 0x09, 0x75, 0x81, 0xDE, 0x56, 0x81, 0x5E, 0xC7, 0x48, 0x11, 0x91, 0x71, 0x01, 0x09, 0x80,
  0x99, 0x20,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_toggle_star_border() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_toggle_star_border_data, Alpha4(color::Black));
  return value;
}

