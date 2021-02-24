#include "toggle.h"

using namespace roo_display;

// Image file ic_48_toggle_check_box 48x48, 4-bit Alpha,  RLE, 228 bytes.
static const uint8_t ic_48_toggle_check_box_data[] PROGMEM = {
  0x80, 0xCC, 0x30, 0x81, 0x19, 0xCF, 0xFF, 0xF8, 0x1C, 0x81, 0x76, 0x01, 0x0E, 0xFF, 0xFF, 0xC0,
  0xD0, 0x17, 0x50, 0xAF, 0xFF, 0xFE, 0x08, 0x75, 0x0E, 0xFF, 0xFF, 0xE0, 0xC7, 0x58, 0x0C, 0x0F,
  0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0xFF, 0xFF, 0x0B, 0x08, 0xE7, 0x5F, 0xFF, 0xE0,
  0xB2, 0x08, 0xD7, 0x5F, 0xFF, 0xD0, 0xB4, 0x08, 0xC7, 0x5F, 0xFF, 0xC0, 0xB5, 0x06, 0xC7, 0x5F,
  0xFF, 0xB0, 0xB5, 0x06, 0xD7, 0x5F, 0xFF, 0xA0, 0xB5, 0x06, 0xE7, 0x5F, 0xFF, 0x90, 0xB5, 0x06,
  0xF7, 0x5F, 0xFF, 0x0B, 0x50, 0x6F, 0x97, 0x5E, 0x09, 0x0D, 0xFD, 0x0B, 0x50, 0x6F, 0xA7, 0x5D,
  0x82, 0x80, 0x1D, 0xFB, 0x0B, 0x50, 0x6F, 0xB7, 0x5C, 0x08, 0x30, 0x10, 0xDF, 0x90, 0xB5, 0x06,
  0xFC, 0x75, 0xC0, 0x64, 0x01, 0x0D, 0xE0, 0xB5, 0x06, 0xFD, 0x75, 0xD0, 0x64, 0x01, 0x0D, 0xC0,
  0xB5, 0x06, 0xFE, 0x75, 0xE0, 0x64, 0x01, 0x0D, 0xA0, 0xB5, 0x06, 0xFF, 0x75, 0xF0, 0x64, 0x81,
  0x1D, 0xB5, 0x06, 0xFF, 0x97, 0x5F, 0x90, 0x64, 0x01, 0x50, 0x6F, 0xFA, 0x75, 0xFA, 0x06, 0x71,
  0x06, 0xFF, 0xB7, 0x5F, 0xB0, 0x66, 0x06, 0xFF, 0xC7, 0x5F, 0xC0, 0x64, 0x06, 0xFF, 0xD7, 0x5F,
  0xD0, 0x62, 0x06, 0xFF, 0xE7, 0x5F, 0xE0, 0x06, 0xFF, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0,
  0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x50, 0xEF, 0xFF, 0xFE, 0x0D, 0x75, 0x0B, 0xFF,
  0xFF, 0xE0, 0x97, 0x50, 0x2F, 0xFF, 0xFD, 0x0E, 0x01, 0x76, 0x81, 0x2B, 0xEF, 0xFF, 0xF8, 0x1E,
  0xA1, 0x80, 0xCC, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_check_box() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_star_half 48x48, 4-bit Alpha,  RLE, 303 bytes.
static const uint8_t ic_48_toggle_star_half_data[] PROGMEM = {
  0x80, 0xBA, 0x30, 0x03, 0x01, 0x80, 0xD2, 0x00, 0xA0, 0x88, 0x0D, 0x10, 0x81, 0x1F, 0xE8, 0x0D,
  0x10, 0x08, 0xA0, 0x68, 0x0D, 0x00, 0x0E, 0xA0, 0xC8, 0x0C, 0x70, 0x05, 0xC0, 0x38, 0x0C, 0x60,
  0x0C, 0xC0, 0xA8, 0x0C, 0x50, 0x03, 0xE0, 0x18, 0x0C, 0x40, 0x09, 0xB0, 0xEA, 0x08, 0x80, 0xC3,
  0x00, 0x1C, 0x08, 0xA0, 0xE8, 0x0C, 0x30, 0x07, 0xC0, 0x1B, 0x05, 0x80, 0xC2, 0x00, 0xDC, 0x10,
  0xAA, 0x0C, 0x80, 0xC1, 0x00, 0x5D, 0x10, 0x4B, 0x03, 0x77, 0x77, 0x18, 0x61, 0x23, 0x56, 0x79,
  0xDD, 0x20, 0xDA, 0x86, 0xC9, 0x77, 0x53, 0x21, 0x77, 0x18, 0x46, 0x9A, 0xBD, 0xEF, 0xF2, 0x06,
  0xFC, 0x84, 0xED, 0xBA, 0x95, 0x71, 0x01, 0x0D, 0xFF, 0xC3, 0x0E, 0xFF, 0x0B, 0x01, 0x73, 0x0B,
  0xFF, 0xB3, 0x85, 0x46, 0x79, 0xAC, 0xDF, 0x0A, 0x76, 0x09, 0xFF, 0xA7, 0x40, 0x6C, 0x08, 0x77,
  0x10, 0x7F, 0xF9, 0x73, 0x07, 0xC0, 0x67, 0x73, 0x05, 0xFF, 0x72, 0x09, 0xB0, 0xE0, 0x47, 0x75,
  0x03, 0x0E, 0xFD, 0x71, 0x0B, 0xB0, 0xE0, 0x27, 0x77, 0x02, 0x0D, 0xFC, 0x60, 0x10, 0xDB, 0x0C,
  0x01, 0x77, 0x72, 0x01, 0x0C, 0xFB, 0x50, 0x20, 0xEB, 0x0B, 0x77, 0x76, 0x0A, 0xFA, 0x50, 0x5B,
  0x09, 0x77, 0x77, 0x03, 0xFA, 0x50, 0x2B, 0x02, 0x77, 0x77, 0x07, 0xFA, 0x60, 0xEA, 0x05, 0x77,
  0x77, 0x0B, 0xFA, 0x60, 0xAA, 0x09, 0x77, 0x77, 0x0E, 0xFA, 0x0C, 0x03, 0x40, 0x6A, 0x0D, 0x77,
  0x76, 0x02, 0xFD, 0x09, 0x01, 0x20, 0x3B, 0x01, 0x77, 0x75, 0x06, 0xFE, 0x0E, 0x06, 0x20, 0xEA,
  0x04, 0x77, 0x75, 0x0A, 0xFA, 0x00, 0xDC, 0x81, 0xB2, 0xBA, 0x08, 0x77, 0x75, 0x0D, 0xF0, 0xE0,
  0x72, 0x08, 0xD0, 0xDA, 0x0C, 0x77, 0x74, 0x01, 0xF0, 0xA0, 0x14, 0x02, 0x0B, 0xF7, 0x77, 0x40,
  0x5D, 0x0D, 0x04, 0x71, 0x05, 0x0E, 0xD0, 0x37, 0x77, 0x30, 0x9C, 0x07, 0x74, 0x01, 0x08, 0xC0,
  0x77, 0x77, 0x30, 0xCA, 0x0A, 0x01, 0x77, 0x02, 0x0B, 0xA0, 0xA7, 0x77, 0x28, 0x21, 0xFD, 0x47,
  0x74, 0x81, 0x5E, 0xE7, 0x77, 0x20, 0x40, 0x77, 0x77, 0x81, 0x19, 0x28, 0x0C, 0xC7, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_star_half() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_star_half_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_star_outline 48x48, 4-bit Alpha,  RLE, 338 bytes.
static const uint8_t ic_48_toggle_star_outline_data[] PROGMEM = {
  0x80, 0xBA, 0x30, 0x03, 0x01, 0x80, 0xD2, 0x00, 0xA0, 0x88, 0x0D, 0x10, 0x81, 0x1F, 0xE8, 0x0D,
  0x10, 0x08, 0xA0, 0x68, 0x0D, 0x00, 0x0E, 0xA0, 0xC8, 0x0C, 0x70, 0x05, 0xC0, 0x38, 0x0C, 0x60,
  0x0C, 0xC0, 0xA8, 0x0C, 0x50, 0x03, 0xE0, 0x18, 0x0C, 0x40, 0x09, 0xA0, 0xC0, 0xEA, 0x08, 0x80,
  0xC3, 0x00, 0x1B, 0x06, 0x08, 0xA0, 0xE8, 0x0C, 0x30, 0x07, 0xA8, 0x1E, 0x01, 0xB0, 0x58, 0x0C,
  0x20, 0x0D, 0xA0, 0x82, 0x0A, 0xA0, 0xC8, 0x0C, 0x10, 0x05, 0xB0, 0x22, 0x04, 0xB0, 0x37, 0x77,
  0x71, 0x86, 0x12, 0x35, 0x67, 0x9D, 0xA0, 0xB4, 0x0D, 0xA8, 0x6C, 0x97, 0x75, 0x32, 0x17, 0x71,
  0x84, 0x69, 0xAB, 0xDE, 0xFC, 0x04, 0x40, 0x6F, 0xC8, 0x4E, 0xDB, 0xA9, 0x57, 0x10, 0x10, 0xDF,
  0xF0, 0xD6, 0x0E, 0xFF, 0x0B, 0x01, 0x73, 0x0B, 0xE8, 0x6E, 0xDB, 0xA9, 0x76, 0x36, 0x85, 0x46,
  0x79, 0xAC, 0xDF, 0x0A, 0x76, 0x09, 0xC0, 0x47, 0x77, 0x10, 0x6C, 0x08, 0x77, 0x10, 0x7C, 0x06,
  0x77, 0x60, 0x7C, 0x06, 0x77, 0x30, 0x5C, 0x08, 0x77, 0x40, 0x9B, 0x0E, 0x04, 0x77, 0x50, 0x30,
  0xEB, 0x0A, 0x77, 0x20, 0xBB, 0x0E, 0x02, 0x77, 0x70, 0x20, 0xDB, 0x0C, 0x01, 0x75, 0x01, 0x0D,
  0xB0, 0xC0, 0x17, 0x77, 0x20, 0x10, 0xCB, 0x0D, 0x02, 0x73, 0x02, 0x0E, 0xB0, 0xB7, 0x77, 0x60,
  0xAB, 0x04, 0x73, 0x05, 0xB0, 0x97, 0x77, 0x70, 0x3B, 0x74, 0x02, 0xB0, 0x27, 0x77, 0x70, 0x7A,
  0x0C, 0x75, 0x0E, 0xA0, 0x57, 0x77, 0x70, 0xBA, 0x08, 0x75, 0x0A, 0xA0, 0x97, 0x77, 0x70, 0xEA,
  0x05, 0x48, 0x24, 0xDC, 0x34, 0x06, 0xA0, 0xD7, 0x77, 0x60, 0x2B, 0x01, 0x20, 0x10, 0xAC, 0x09,
  0x01, 0x20, 0x3B, 0x01, 0x77, 0x75, 0x06, 0xA0, 0xD2, 0x07, 0x0E, 0xE0, 0xE0, 0x62, 0x0E, 0xA0,
  0x47, 0x77, 0x50, 0xAA, 0x81, 0x93, 0xDC, 0x00, 0xDC, 0x81, 0xB2, 0xBA, 0x08, 0x77, 0x75, 0x0D,
  0xA0, 0xDC, 0x0E, 0x07, 0x20, 0x8D, 0x0D, 0xA0, 0xC7, 0x77, 0x40, 0x1F, 0x0A, 0x01, 0x40, 0x20,
  0xBF, 0x77, 0x74, 0x05, 0xD0, 0xD0, 0x47, 0x10, 0x50, 0xED, 0x03, 0x77, 0x73, 0x09, 0xC0, 0x77,
  0x40, 0x10, 0x8C, 0x07, 0x77, 0x73, 0x0C, 0xA0, 0xA0, 0x17, 0x70, 0x20, 0xBA, 0x0A, 0x77, 0x72,
  0x82, 0x1F, 0xD4, 0x77, 0x48, 0x15, 0xEE, 0x77, 0x72, 0x04, 0x07, 0x77, 0x78, 0x11, 0x92, 0x80,
  0xCC, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_star_outline() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_star_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_check_box_outline_blank 48x48, 4-bit Alpha,  RLE, 169 bytes.
static const uint8_t ic_48_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x80, 0xCC, 0x30, 0x81, 0x19, 0xCF, 0xFF, 0xF8, 0x1C, 0x81, 0x76, 0x01, 0x0E, 0xFF, 0xFF, 0xC0,
  0xD0, 0x17, 0x50, 0xAF, 0xFF, 0xFE, 0x08, 0x75, 0x0E, 0xFF, 0xFF, 0xE0, 0xC7, 0x5C, 0x77, 0x77,
  0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77,
  0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77,
  0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77,
  0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77,
  0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77,
  0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77,
  0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x5C, 0x77, 0x77, 0xC7, 0x50, 0xEF, 0xFF,
  0xFE, 0x0D, 0x75, 0x0B, 0xFF, 0xFF, 0xE0, 0x97, 0x50, 0x2F, 0xFF, 0xFD, 0x0E, 0x01, 0x76, 0x81,
  0x2B, 0xEF, 0xFF, 0xF8, 0x1E, 0xA1, 0x80, 0xCC, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_check_box_outline_blank() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_indeterminate_check_box 48x48, 4-bit Alpha,  RLE, 159 bytes.
static const uint8_t ic_48_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x80, 0xCC, 0x30, 0x81, 0x19, 0xCF, 0xFF, 0xF8, 0x1C, 0x81, 0x76, 0x01, 0x0E, 0xFF, 0xFF, 0xC0,
  0xD0, 0x17, 0x50, 0xAF, 0xFF, 0xFE, 0x08, 0x75, 0x0E, 0xFF, 0xFF, 0xE0, 0xC7, 0x58, 0x0C, 0x0F,
  0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80,
  0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7,
  0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x5F, 0x97, 0x76, 0xF9, 0x75, 0xF9, 0x77, 0x6F, 0x97,
  0x5F, 0x97, 0x76, 0xF9, 0x75, 0xF9, 0x77, 0x6F, 0x97, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7,
  0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C,
  0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75, 0x80, 0xC0, 0xF7, 0x58, 0x0C, 0x0F, 0x75,
  0x80, 0xC0, 0xF7, 0x50, 0xEF, 0xFF, 0xFE, 0x0D, 0x75, 0x0B, 0xFF, 0xFF, 0xE0, 0x97, 0x50, 0x2F,
  0xFF, 0xFD, 0x0E, 0x01, 0x76, 0x81, 0x2B, 0xEF, 0xFF, 0xF8, 0x1E, 0xA1, 0x80, 0xCC, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_indeterminate_check_box() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_radio_button_checked 48x48, 4-bit Alpha,  RLE, 408 bytes.
static const uint8_t ic_48_toggle_radio_button_checked_data[] PROGMEM = {
  0x80, 0xB9, 0x60, 0x89, 0x21, 0x69, 0xAC, 0xDD, 0xBA, 0x85, 0x17, 0x77, 0x75, 0x81, 0x17, 0xBF,
  0xD0, 0xB0, 0x67, 0x77, 0x72, 0x07, 0x0E, 0xFF, 0xA0, 0xE0, 0x67, 0x77, 0x50, 0x40, 0xDF, 0xFE,
  0x0D, 0x03, 0x77, 0x72, 0x07, 0xF8, 0x90, 0xB7, 0x43, 0x11, 0x35, 0x7C, 0xF0, 0x57, 0x77, 0x09,
  0xD8, 0x1E, 0x61, 0x73, 0x81, 0x17, 0xED, 0x08, 0x77, 0x50, 0xAD, 0x07, 0x01, 0x77, 0x01, 0x08,
  0xD0, 0x87, 0x73, 0x07, 0xC0, 0xE0, 0x37, 0x74, 0x04, 0x0E, 0xC0, 0x57, 0x71, 0x05, 0xC0, 0xD0,
  0x17, 0x76, 0x02, 0x0E, 0xC0, 0x37, 0x60, 0x10, 0xEB, 0x0E, 0x01, 0x77, 0x71, 0x02, 0x0E, 0xB0,
  0xD7, 0x60, 0x7C, 0x03, 0x71, 0x86, 0x49, 0xCD, 0xDB, 0x83, 0x71, 0x04, 0xC0, 0x67, 0x40, 0x1C,
  0x07, 0x70, 0x40, 0xDF, 0x90, 0xC0, 0x37, 0x08, 0xB0, 0xE7, 0x40, 0x8B, 0x0D, 0x70, 0x7F, 0xD0,
  0x66, 0x01, 0x0E, 0xB0, 0x67, 0x30, 0xDB, 0x05, 0x60, 0x8F, 0xF0, 0x66, 0x07, 0xB0, 0xB7, 0x20,
  0x2B, 0x0E, 0x60, 0x5F, 0xFA, 0x03, 0x50, 0x1C, 0x01, 0x71, 0x07, 0xB0, 0xA6, 0x0D, 0xFF, 0xA0,
  0xC6, 0x0C, 0xB0, 0x57, 0x10, 0xAB, 0x05, 0x50, 0x5F, 0xFC, 0x03, 0x50, 0x7B, 0x08, 0x71, 0x0C,
  0xB0, 0x35, 0x0A, 0xFF, 0xC0, 0x85, 0x05, 0xB0, 0xA7, 0x10, 0xDB, 0x01, 0x50, 0xDF, 0xFC, 0x0B,
  0x50, 0x3B, 0x0B, 0x71, 0xC6, 0xFF, 0xD0, 0xD5, 0x01, 0xB0, 0xD7, 0x1C, 0x6F, 0xFD, 0x0D, 0x50,
  0x1B, 0x0D, 0x71, 0x0E, 0xB0, 0x15, 0x0E, 0xFF, 0xC0, 0xC5, 0x03, 0xB0, 0xC7, 0x10, 0xCB, 0x02,
  0x50, 0xBF, 0xFC, 0x09, 0x50, 0x4B, 0x0A, 0x71, 0x0B, 0xB0, 0x55, 0x06, 0xFF, 0xC0, 0x45, 0x07,
  0xB0, 0x97, 0x10, 0x7B, 0x09, 0x50, 0x10, 0xEF, 0xFA, 0x0D, 0x60, 0xBB, 0x06, 0x71, 0x03, 0xB0,
  0xE6, 0x06, 0xFF, 0xA0, 0x45, 0x01, 0xC0, 0x17, 0x20, 0xDB, 0x04, 0x60, 0x9F, 0xF0, 0x76, 0x06,
  0xB0, 0xB7, 0x30, 0x9B, 0x0D, 0x70, 0x9F, 0xD0, 0x86, 0x01, 0x0E, 0xB0, 0x77, 0x30, 0x2C, 0x05,
  0x70, 0x60, 0xEF, 0x90, 0xD0, 0x57, 0x07, 0xB0, 0xE0, 0x17, 0x40, 0x9B, 0x0E, 0x02, 0x78, 0x21,
  0x6B, 0xEA, 0x81, 0xDA, 0x57, 0x10, 0x3C, 0x07, 0x75, 0x01, 0x0E, 0xB0, 0xD7, 0x77, 0x20, 0x10,
  0xEB, 0x0D, 0x77, 0x06, 0xC0, 0xB7, 0x77, 0x01, 0x0D, 0xC0, 0x47, 0x71, 0x09, 0xC0, 0xD0, 0x27,
  0x74, 0x03, 0x0E, 0xC0, 0x77, 0x73, 0x0B, 0xC0, 0xE0, 0x57, 0x72, 0x07, 0xD0, 0x97, 0x74, 0x01,
  0x0B, 0xD0, 0xD0, 0x47, 0x50, 0x50, 0xDD, 0x0A, 0x77, 0x70, 0x9E, 0x83, 0xE9, 0x52, 0x12, 0x83,
  0x13, 0x5A, 0xEE, 0x07, 0x77, 0x72, 0x06, 0x0E, 0xFF, 0xE0, 0xE0, 0x57, 0x77, 0x40, 0x10, 0x9F,
  0xFC, 0x07, 0x01, 0x77, 0x77, 0x81, 0x29, 0xDF, 0xD8, 0x1D, 0x81, 0x77, 0x77, 0x58, 0x33, 0x7B,
  0xCE, 0xA8, 0x3D, 0xCA, 0x72, 0x80, 0xB9, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_radio_button_checked() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_toggle_off 48x48, 4-bit Alpha,  RLE, 166 bytes.
static const uint8_t ic_48_toggle_toggle_off_data[] PROGMEM = {
  0x80, 0x9A, 0xC6, 0x08, 0x24, 0x9C, 0xDF, 0xFE, 0x82, 0xDB, 0x83, 0x77, 0x40, 0x40, 0xDF, 0xFF,
  0xF0, 0xC0, 0x37, 0x71, 0x07, 0xFF, 0xFF, 0xC0, 0x67, 0x60, 0x8F, 0xFF, 0xFE, 0x06, 0x74, 0x05,
  0xD8, 0x49, 0x52, 0x14, 0xAF, 0xFF, 0xC0, 0x37, 0x30, 0xDB, 0x0E, 0x04, 0x60, 0x40, 0xEF, 0xFF,
  0xA0, 0xC7, 0x20, 0x5C, 0x02, 0x71, 0x05, 0xFF, 0xFB, 0x03, 0x71, 0x0A, 0xB0, 0x87, 0x30, 0xAF,
  0xFF, 0xA0, 0x87, 0x10, 0xDB, 0x02, 0x73, 0x06, 0xFF, 0xFA, 0x0B, 0x71, 0xC7, 0x40, 0x2F, 0xFF,
  0xA0, 0xD7, 0x1C, 0x74, 0x01, 0xFF, 0xFA, 0x0D, 0x71, 0x0E, 0xB0, 0x37, 0x30, 0x3F, 0xFF, 0xA0,
  0xC7, 0x10, 0xBB, 0x07, 0x73, 0x09, 0xFF, 0xFA, 0x09, 0x71, 0x06, 0xC0, 0x27, 0x10, 0x2F, 0xFF,
  0xB0, 0x47, 0x10, 0x10, 0xEB, 0x0D, 0x01, 0x60, 0x30, 0xEF, 0xFF, 0xA0, 0xD7, 0x30, 0x6C, 0x85,
  0xE7, 0x10, 0x14, 0x8F, 0xFF, 0xC0, 0x47, 0x40, 0x9F, 0xFF, 0xFE, 0x07, 0x76, 0x09, 0xFF, 0xFF,
  0xC0, 0x87, 0x71, 0x06, 0x0E, 0xFF, 0xFF, 0x0D, 0x05, 0x77, 0x38, 0x21, 0x6B, 0xEF, 0xFF, 0x98,
  0x1D, 0xA5, 0x80, 0x9A, 0xC6, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_toggle_off() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_toggle_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_radio_button_unchecked 48x48, 4-bit Alpha,  RLE, 359 bytes.
static const uint8_t ic_48_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x80, 0xB9, 0x60, 0x89, 0x21, 0x69, 0xAC, 0xDD, 0xBA, 0x85, 0x17, 0x77, 0x75, 0x81, 0x17, 0xBF,
  0xD0, 0xB0, 0x67, 0x77, 0x72, 0x07, 0x0E, 0xFF, 0xA0, 0xE0, 0x67, 0x77, 0x50, 0x40, 0xDF, 0xFE,
  0x0D, 0x03, 0x77, 0x72, 0x07, 0xF8, 0x90, 0xB7, 0x43, 0x11, 0x35, 0x7C, 0xF0, 0x57, 0x77, 0x09,
  0xD8, 0x1E, 0x61, 0x73, 0x81, 0x17, 0xED, 0x08, 0x77, 0x50, 0xAD, 0x07, 0x01, 0x77, 0x01, 0x08,
  0xD0, 0x87, 0x73, 0x07, 0xC0, 0xE0, 0x37, 0x74, 0x04, 0x0E, 0xC0, 0x57, 0x71, 0x05, 0xC0, 0xD0,
  0x17, 0x76, 0x02, 0x0E, 0xC0, 0x37, 0x60, 0x10, 0xEB, 0x0E, 0x01, 0x77, 0x71, 0x02, 0x0E, 0xB0,
  0xD7, 0x60, 0x7C, 0x03, 0x77, 0x73, 0x04, 0xC0, 0x67, 0x40, 0x1C, 0x07, 0x77, 0x75, 0x08, 0xB0,
  0xE7, 0x40, 0x8B, 0x0D, 0x77, 0x76, 0x01, 0x0E, 0xB0, 0x67, 0x30, 0xDB, 0x05, 0x77, 0x77, 0x07,
  0xB0, 0xB7, 0x20, 0x2B, 0x0E, 0x77, 0x77, 0x10, 0x1C, 0x01, 0x71, 0x07, 0xB0, 0xA7, 0x77, 0x72,
  0x0C, 0xB0, 0x57, 0x10, 0xAB, 0x05, 0x77, 0x77, 0x20, 0x7B, 0x08, 0x71, 0x0C, 0xB0, 0x37, 0x77,
  0x72, 0x05, 0xB0, 0xA7, 0x10, 0xDB, 0x01, 0x77, 0x77, 0x20, 0x3B, 0x0B, 0x71, 0xC7, 0x77, 0x73,
  0x01, 0xB0, 0xD7, 0x1C, 0x77, 0x77, 0x30, 0x1B, 0x0D, 0x71, 0x0E, 0xB0, 0x17, 0x77, 0x72, 0x03,
  0xB0, 0xC7, 0x10, 0xCB, 0x02, 0x77, 0x77, 0x20, 0x4B, 0x0A, 0x71, 0x0B, 0xB0, 0x57, 0x77, 0x72,
  0x07, 0xB0, 0x97, 0x10, 0x7B, 0x09, 0x77, 0x77, 0x20, 0xBB, 0x06, 0x71, 0x03, 0xB0, 0xE7, 0x77,
  0x71, 0x01, 0xC0, 0x17, 0x20, 0xDB, 0x04, 0x77, 0x77, 0x06, 0xB0, 0xB7, 0x30, 0x9B, 0x0D, 0x77,
  0x76, 0x01, 0x0E, 0xB0, 0x77, 0x30, 0x2C, 0x05, 0x77, 0x75, 0x07, 0xB0, 0xE0, 0x17, 0x40, 0x9B,
  0x0E, 0x02, 0x77, 0x73, 0x03, 0xC0, 0x77, 0x50, 0x10, 0xEB, 0x0D, 0x77, 0x72, 0x01, 0x0E, 0xB0,
  0xD7, 0x70, 0x6C, 0x0B, 0x77, 0x70, 0x10, 0xDC, 0x04, 0x77, 0x10, 0x9C, 0x0D, 0x02, 0x77, 0x40,
  0x30, 0xEC, 0x07, 0x77, 0x30, 0xBC, 0x0E, 0x05, 0x77, 0x20, 0x7D, 0x09, 0x77, 0x40, 0x10, 0xBD,
  0x0D, 0x04, 0x75, 0x05, 0x0D, 0xD0, 0xA7, 0x77, 0x09, 0xE8, 0x3E, 0x95, 0x21, 0x28, 0x31, 0x35,
  0xAE, 0xE0, 0x77, 0x77, 0x20, 0x60, 0xEF, 0xFE, 0x0E, 0x05, 0x77, 0x74, 0x01, 0x09, 0xFF, 0xC0,
  0x70, 0x17, 0x77, 0x78, 0x12, 0x9D, 0xFD, 0x81, 0xD8, 0x17, 0x77, 0x75, 0x83, 0x37, 0xBC, 0xEA,
  0x83, 0xDC, 0xA7, 0x28, 0x0B, 0x96, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_radio_button_unchecked() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_toggle_on 48x48, 4-bit Alpha,  RLE, 166 bytes.
static const uint8_t ic_48_toggle_toggle_on_data[] PROGMEM = {
  0x80, 0x9A, 0xC6, 0x08, 0x24, 0x9C, 0xDF, 0xFE, 0x82, 0xDB, 0x83, 0x77, 0x40, 0x40, 0xDF, 0xFF,
  0xF0, 0xC0, 0x37, 0x71, 0x07, 0xFF, 0xFF, 0xC0, 0x67, 0x60, 0x8F, 0xFF, 0xFE, 0x06, 0x74, 0x05,
  0xFF, 0xFC, 0x84, 0x95, 0x21, 0x4A, 0xD0, 0x37, 0x30, 0xDF, 0xFF, 0xA0, 0xE0, 0x46, 0x04, 0x0E,
  0xB0, 0xC7, 0x20, 0x5F, 0xFF, 0xB0, 0x27, 0x10, 0x5C, 0x03, 0x71, 0x0A, 0xFF, 0xFA, 0x08, 0x73,
  0x0A, 0xB0, 0x87, 0x10, 0xDF, 0xFF, 0xA0, 0x27, 0x30, 0x6B, 0x0B, 0x71, 0xFF, 0xFB, 0x74, 0x02,
  0xB0, 0xD7, 0x1F, 0xFF, 0xB7, 0x40, 0x1B, 0x0D, 0x71, 0x0E, 0xFF, 0xFA, 0x03, 0x73, 0x03, 0xB0,
  0xC7, 0x10, 0xBF, 0xFF, 0xA0, 0x77, 0x30, 0x9B, 0x09, 0x71, 0x06, 0xFF, 0xFB, 0x02, 0x71, 0x02,
  0xC0, 0x47, 0x10, 0x10, 0xEF, 0xFF, 0xA0, 0xD0, 0x16, 0x03, 0x0E, 0xB0, 0xD7, 0x30, 0x6F, 0xFF,
  0xB8, 0x5E, 0x71, 0x01, 0x48, 0xD0, 0x47, 0x40, 0x9F, 0xFF, 0xFE, 0x07, 0x76, 0x09, 0xFF, 0xFF,
  0xC0, 0x87, 0x71, 0x06, 0x0E, 0xFF, 0xFF, 0x0D, 0x05, 0x77, 0x38, 0x21, 0x6B, 0xEF, 0xFF, 0x98,
  0x1D, 0xA5, 0x80, 0x9A, 0xC6, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_toggle_on() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_toggle_on_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_star_border 48x48, 4-bit Alpha,  RLE, 338 bytes.
static const uint8_t ic_48_toggle_star_border_data[] PROGMEM = {
  0x80, 0xBA, 0x30, 0x03, 0x01, 0x80, 0xD2, 0x00, 0xA0, 0x88, 0x0D, 0x10, 0x81, 0x1F, 0xE8, 0x0D,
  0x10, 0x08, 0xA0, 0x68, 0x0D, 0x00, 0x0E, 0xA0, 0xC8, 0x0C, 0x70, 0x05, 0xC0, 0x38, 0x0C, 0x60,
  0x0C, 0xC0, 0xA8, 0x0C, 0x50, 0x03, 0xE0, 0x18, 0x0C, 0x40, 0x09, 0xA0, 0xC0, 0xEA, 0x08, 0x80,
  0xC3, 0x00, 0x1B, 0x06, 0x08, 0xA0, 0xE8, 0x0C, 0x30, 0x07, 0xA8, 0x1E, 0x01, 0xB0, 0x58, 0x0C,
  0x20, 0x0D, 0xA0, 0x82, 0x0A, 0xA0, 0xC8, 0x0C, 0x10, 0x05, 0xB0, 0x22, 0x04, 0xB0, 0x37, 0x77,
  0x71, 0x86, 0x12, 0x35, 0x67, 0x9D, 0xA0, 0xB4, 0x0D, 0xA8, 0x6C, 0x97, 0x75, 0x32, 0x17, 0x71,
  0x84, 0x69, 0xAB, 0xDE, 0xFC, 0x04, 0x40, 0x6F, 0xC8, 0x4E, 0xDB, 0xA9, 0x57, 0x10, 0x10, 0xDF,
  0xF0, 0xD6, 0x0E, 0xFF, 0x0B, 0x01, 0x73, 0x0B, 0xE8, 0x6E, 0xDB, 0xA9, 0x76, 0x36, 0x85, 0x46,
  0x79, 0xAC, 0xDF, 0x0A, 0x76, 0x09, 0xC0, 0x47, 0x77, 0x10, 0x6C, 0x08, 0x77, 0x10, 0x7C, 0x06,
  0x77, 0x60, 0x7C, 0x06, 0x77, 0x30, 0x5C, 0x08, 0x77, 0x40, 0x9B, 0x0E, 0x04, 0x77, 0x50, 0x30,
  0xEB, 0x0A, 0x77, 0x20, 0xBB, 0x0E, 0x02, 0x77, 0x70, 0x20, 0xDB, 0x0C, 0x01, 0x75, 0x01, 0x0D,
  0xB0, 0xC0, 0x17, 0x77, 0x20, 0x10, 0xCB, 0x0D, 0x02, 0x73, 0x02, 0x0E, 0xB0, 0xB7, 0x77, 0x60,
  0xAB, 0x04, 0x73, 0x05, 0xB0, 0x97, 0x77, 0x70, 0x3B, 0x74, 0x02, 0xB0, 0x27, 0x77, 0x70, 0x7A,
  0x0C, 0x75, 0x0E, 0xA0, 0x57, 0x77, 0x70, 0xBA, 0x08, 0x75, 0x0A, 0xA0, 0x97, 0x77, 0x70, 0xEA,
  0x05, 0x48, 0x24, 0xDC, 0x34, 0x06, 0xA0, 0xD7, 0x77, 0x60, 0x2B, 0x01, 0x20, 0x10, 0xAC, 0x09,
  0x01, 0x20, 0x3B, 0x01, 0x77, 0x75, 0x06, 0xA0, 0xD2, 0x07, 0x0E, 0xE0, 0xE0, 0x62, 0x0E, 0xA0,
  0x47, 0x77, 0x50, 0xAA, 0x81, 0x93, 0xDC, 0x00, 0xDC, 0x81, 0xB2, 0xBA, 0x08, 0x77, 0x75, 0x0D,
  0xA0, 0xDC, 0x0E, 0x07, 0x20, 0x8D, 0x0D, 0xA0, 0xC7, 0x77, 0x40, 0x1F, 0x0A, 0x01, 0x40, 0x20,
  0xBF, 0x77, 0x74, 0x05, 0xD0, 0xD0, 0x47, 0x10, 0x50, 0xED, 0x03, 0x77, 0x73, 0x09, 0xC0, 0x77,
  0x40, 0x10, 0x8C, 0x07, 0x77, 0x73, 0x0C, 0xA0, 0xA0, 0x17, 0x70, 0x20, 0xBA, 0x0A, 0x77, 0x72,
  0x82, 0x1F, 0xD4, 0x77, 0x48, 0x15, 0xEE, 0x77, 0x72, 0x04, 0x07, 0x77, 0x78, 0x11, 0x92, 0x80,
  0xCC, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_star_border() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_star_border_data, Alpha4(color::Black));
  return value;
}

// Image file ic_48_toggle_star 48x48, 4-bit Alpha,  RLE, 256 bytes.
static const uint8_t ic_48_toggle_star_data[] PROGMEM = {
  0x80, 0xBA, 0x30, 0x03, 0x01, 0x80, 0xD2, 0x00, 0xA0, 0x88, 0x0D, 0x10, 0x81, 0x1F, 0xE8, 0x0D,
  0x10, 0x08, 0xA0, 0x68, 0x0D, 0x00, 0x0E, 0xA0, 0xC8, 0x0C, 0x70, 0x05, 0xC0, 0x38, 0x0C, 0x60,
  0x0C, 0xC0, 0xA8, 0x0C, 0x50, 0x03, 0xE0, 0x18, 0x0C, 0x40, 0x09, 0xE0, 0x78, 0x0C, 0x30, 0x01,
  0xF0, 0xE8, 0x0C, 0x30, 0x07, 0xF9, 0x05, 0x80, 0xC2, 0x00, 0xDF, 0x90, 0xC8, 0x0C, 0x10, 0x05,
  0xFB, 0x03, 0x77, 0x77, 0x18, 0x61, 0x23, 0x56, 0x79, 0xDF, 0xB8, 0x6C, 0x97, 0x65, 0x32, 0x17,
  0x71, 0x84, 0x69, 0xAB, 0xDE, 0xFF, 0xFF, 0x84, 0xED, 0xBA, 0x95, 0x71, 0x01, 0x0D, 0x80, 0xC0,
  0xF0, 0xB0, 0x17, 0x30, 0xBF, 0xFF, 0xFE, 0x0A, 0x76, 0x09, 0xFF, 0xFF, 0xC0, 0x77, 0x71, 0x07,
  0xFF, 0xFF, 0xA0, 0x67, 0x73, 0x05, 0xFF, 0xFE, 0x0E, 0x04, 0x77, 0x50, 0x30, 0xEF, 0xFF, 0xB0,
  0xD0, 0x27, 0x77, 0x02, 0x0D, 0xFF, 0xF9, 0x0C, 0x01, 0x77, 0x72, 0x01, 0x0C, 0xFF, 0xE0, 0xA7,
  0x77, 0x60, 0xAF, 0xFC, 0x09, 0x77, 0x77, 0x03, 0xFF, 0xC0, 0x17, 0x77, 0x70, 0x7F, 0xFC, 0x05,
  0x77, 0x77, 0x0B, 0xFF, 0xC0, 0x97, 0x77, 0x70, 0xEF, 0xFC, 0x0C, 0x77, 0x76, 0x02, 0xFF, 0xE0,
  0x17, 0x77, 0x50, 0x6F, 0xFE, 0x04, 0x77, 0x75, 0x0A, 0xFA, 0x00, 0xDF, 0xA0, 0x87, 0x77, 0x50,
  0xDF, 0x0E, 0x07, 0x20, 0x8F, 0x90, 0xB7, 0x77, 0x40, 0x1F, 0x0A, 0x01, 0x40, 0x20, 0xBF, 0x77,
  0x74, 0x05, 0xD0, 0xD0, 0x47, 0x10, 0x50, 0xED, 0x03, 0x77, 0x73, 0x09, 0xC0, 0x77, 0x40, 0x10,
  0x8C, 0x07, 0x77, 0x73, 0x0C, 0xA0, 0xA0, 0x17, 0x70, 0x20, 0xBA, 0x0A, 0x77, 0x72, 0x82, 0x1F,
  0xD4, 0x77, 0x48, 0x15, 0xEE, 0x77, 0x72, 0x04, 0x07, 0x77, 0x78, 0x11, 0x92, 0x80, 0xCC, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_48_toggle_star() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_48_toggle_star_data, Alpha4(color::Black));
  return value;
}

