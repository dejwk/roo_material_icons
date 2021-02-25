#include "toggle.h"

using namespace roo_display;

// Image file ic_outlined_18_toggle_check_box_outline_blank 18x18, 4-bit Alpha,  RLE, 76 bytes.
static const uint8_t ic_outlined_18_toggle_check_box_outline_blank_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x20, 0x98, 0x06, 0xB0, 0x80, 0x14, 0x0A, 0x0E, 0x80, 0x6B, 0x0E, 0x08, 0x40,
  0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x30, 0x0B, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x30,
  0x0B, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x30, 0x0B, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x00,
  0xB7, 0x30, 0x0B, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x30, 0x0B, 0x40, 0xA0, 0xE8, 0x06,
  0xB0, 0xE0, 0x94, 0x03, 0x0A, 0x80, 0x6B, 0x0A, 0x02, 0x80, 0xC2, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_check_box_outline_blank() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_check_box_outline_blank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_check_box 18x18, 4-bit Alpha,  RLE, 94 bytes.
static const uint8_t ic_outlined_18_toggle_check_box_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x20, 0x98, 0x06, 0xB0, 0x80, 0x14, 0x0A, 0x0E, 0x80, 0x6B, 0x0E, 0x08, 0x40,
  0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x18, 0x21, 0x0B, 0xB4, 0x00, 0xB7, 0x83, 0x6E, 0x1B, 0xB4,
  0x00, 0xB6, 0x84, 0x6F, 0xA0, 0xBB, 0x40, 0x0B, 0x58, 0x16, 0xFA, 0x20, 0x0B, 0x48, 0x7B, 0xB3,
  0xE3, 0x06, 0xFA, 0x30, 0x0B, 0x48, 0x6B, 0xB1, 0xDE, 0x8F, 0xA4, 0x00, 0xB4, 0x85, 0xBB, 0x01,
  0xDF, 0xA5, 0x00, 0xB4, 0x00, 0xB2, 0x01, 0x08, 0x60, 0x0B, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x0A,
  0x0E, 0x80, 0x6B, 0x0E, 0x09, 0x40, 0x30, 0xA8, 0x06, 0xB0, 0xA0, 0x28, 0x0C, 0x20,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_check_box() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_indeterminate_check_box 18x18, 4-bit Alpha,  RLE, 84 bytes.
static const uint8_t ic_outlined_18_toggle_indeterminate_check_box_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x20, 0x98, 0x06, 0xB0, 0x80, 0x14, 0x0A, 0x0E, 0x80, 0x6B, 0x0E, 0x08, 0x40,
  0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x30, 0x0B, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x30,
  0x0B, 0x48, 0x2B, 0xB0, 0x88, 0x02, 0xB8, 0x28, 0x0B, 0xB4, 0x82, 0xBB, 0x08, 0x80, 0x2B, 0x82,
  0x80, 0xBB, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x00, 0xB7, 0x30, 0x0B, 0x40, 0x0B, 0x73, 0x00, 0xB4,
  0x00, 0xB7, 0x30, 0x0B, 0x40, 0xA0, 0xE8, 0x06, 0xB0, 0xE0, 0x94, 0x03, 0x0A, 0x80, 0x6B, 0x0A,
  0x02, 0x80, 0xC2, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_indeterminate_check_box() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_indeterminate_check_box_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_radio_button_checked 18x18, 4-bit Alpha,  RLE, 119 bytes.
static const uint8_t ic_outlined_18_toggle_radio_button_checked_data[] PROGMEM = {
  0x77, 0x74, 0x82, 0x45, 0x53, 0x74, 0x01, 0x08, 0xD0, 0xE0, 0x77, 0x18, 0x92, 0x2D, 0xF9, 0x52,
  0x14, 0xAF, 0xC1, 0x58, 0x21, 0xDE, 0x46, 0x81, 0x4E, 0xC5, 0x81, 0x9F, 0x22, 0x82, 0x58, 0x84,
  0x28, 0x15, 0xF7, 0x38, 0x11, 0xF8, 0x20, 0xBC, 0x09, 0x20, 0xA0, 0xE3, 0x83, 0x5F, 0x20, 0x6E,
  0x83, 0x40, 0x6F, 0x32, 0x07, 0x92, 0x0A, 0xE8, 0x38, 0x02, 0xF5, 0x20, 0x79, 0x20, 0xAE, 0x83,
  0x90, 0x1F, 0x62, 0x83, 0x6F, 0x30, 0x7E, 0x83, 0x50, 0x4F, 0x42, 0x81, 0x1F, 0x72, 0x0C, 0xC0,
  0xB2, 0x09, 0x94, 0x81, 0xAF, 0x22, 0x82, 0x7A, 0xA6, 0x28, 0x12, 0xF8, 0x48, 0x22, 0xED, 0x16,
  0x82, 0x3E, 0xD1, 0x58, 0x92, 0x3E, 0xE7, 0x20, 0x14, 0x8F, 0xD2, 0x70, 0x20, 0xAE, 0x09, 0x01,
  0x73, 0x84, 0x16, 0x77, 0x51, 0x77, 0x73,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_radio_button_checked() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_radio_button_checked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_radio_button_unchecked 18x18, 4-bit Alpha,  RLE, 101 bytes.
static const uint8_t ic_outlined_18_toggle_radio_button_unchecked_data[] PROGMEM = {
  0x77, 0x74, 0x82, 0x45, 0x53, 0x74, 0x01, 0x08, 0xD0, 0xE0, 0x77, 0x18, 0x92, 0x2D, 0xF9, 0x52,
  0x14, 0xAF, 0xC1, 0x58, 0x21, 0xDE, 0x46, 0x81, 0x4E, 0xC5, 0x81, 0x9F, 0x27, 0x18, 0x15, 0xF7,
  0x38, 0x11, 0xF8, 0x73, 0x0A, 0x0E, 0x38, 0x15, 0xF2, 0x73, 0x81, 0x6F, 0x32, 0x07, 0x97, 0x48,
  0x12, 0xF5, 0x20, 0x79, 0x74, 0x81, 0x1F, 0x62, 0x81, 0x6F, 0x37, 0x38, 0x14, 0xF4, 0x28, 0x11,
  0xF7, 0x73, 0x09, 0x94, 0x81, 0xAF, 0x27, 0x18, 0x12, 0xF8, 0x48, 0x22, 0xED, 0x16, 0x82, 0x3E,
  0xD1, 0x58, 0x92, 0x3E, 0xE7, 0x20, 0x14, 0x8F, 0xD2, 0x70, 0x20, 0xAE, 0x09, 0x01, 0x73, 0x84,
  0x16, 0x77, 0x51, 0x77, 0x73,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_radio_button_unchecked() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_radio_button_unchecked_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_star_border 18x18, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_outlined_18_toggle_star_border_data[] PROGMEM = {
  0x77, 0x75, 0x01, 0x77, 0x30, 0x70, 0x57, 0x72, 0x0D, 0x0B, 0x77, 0x18, 0x24, 0xEF, 0x27, 0x78,
  0x2B, 0x8A, 0x97, 0x28, 0x94, 0x12, 0x35, 0x7F, 0x24, 0xF6, 0x53, 0x21, 0x38, 0x52, 0xDF, 0xED,
  0xB8, 0x28, 0x59, 0xBD, 0xEF, 0xB1, 0x38, 0x21, 0xBD, 0x26, 0x81, 0x3E, 0xA7, 0x81, 0x9E, 0x34,
  0x81, 0x5E, 0x87, 0x20, 0xA0, 0xC4, 0x0D, 0x08, 0x73, 0x86, 0xA8, 0x02, 0x10, 0xA8, 0x73, 0x86,
  0xE5, 0x7F, 0xE6, 0x7C, 0x72, 0x86, 0x2F, 0xED, 0x45, 0xEE, 0x97, 0x28, 0x16, 0xF7, 0x38, 0x21,
  0x8F, 0x47, 0x10, 0x50, 0x16, 0x02, 0x04, 0x80, 0xC4, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_star_border() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_star_border_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_star_border_purple500 18x18, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_outlined_18_toggle_star_border_purple500_data[] PROGMEM = {
  0x77, 0x75, 0x01, 0x77, 0x30, 0x70, 0x57, 0x72, 0x0D, 0x0B, 0x77, 0x18, 0x24, 0xEF, 0x27, 0x78,
  0x2B, 0x8A, 0x97, 0x28, 0x94, 0x12, 0x35, 0x7F, 0x24, 0xF6, 0x53, 0x21, 0x38, 0x52, 0xDF, 0xED,
  0xB8, 0x28, 0x59, 0xBD, 0xEF, 0xB1, 0x38, 0x21, 0xBD, 0x26, 0x81, 0x3E, 0xA7, 0x81, 0x9E, 0x34,
  0x81, 0x5E, 0x87, 0x20, 0xA0, 0xC4, 0x0D, 0x08, 0x73, 0x86, 0xA8, 0x02, 0x10, 0xA8, 0x73, 0x86,
  0xE5, 0x7F, 0xE6, 0x7C, 0x72, 0x86, 0x2F, 0xED, 0x45, 0xEE, 0x97, 0x28, 0x16, 0xF7, 0x38, 0x21,
  0x8F, 0x47, 0x10, 0x50, 0x16, 0x02, 0x04, 0x80, 0xC4, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_star_border_purple500() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_star_border_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_star_half 18x18, 4-bit Alpha,  RLE, 84 bytes.
static const uint8_t ic_outlined_18_toggle_star_half_data[] PROGMEM = {
  0x77, 0x75, 0x01, 0x77, 0x30, 0x70, 0x57, 0x72, 0x0D, 0x0B, 0x77, 0x10, 0x4A, 0x02, 0x77, 0x82,
  0xBF, 0xA9, 0x72, 0x83, 0x12, 0x35, 0x7A, 0x85, 0x4F, 0x65, 0x32, 0x13, 0x02, 0x0D, 0xE1, 0x85,
  0x9B, 0xDE, 0xFB, 0x13, 0x01, 0x0B, 0xD3, 0x81, 0x3E, 0xA7, 0x09, 0xC2, 0x81, 0x5E, 0x87, 0x20,
  0xAB, 0x20, 0xD0, 0x87, 0x30, 0xAB, 0x82, 0x10, 0xA8, 0x73, 0x0E, 0xB8, 0x2E, 0x67, 0xC7, 0x20,
  0x2A, 0x83, 0xD4, 0x5E, 0xE9, 0x72, 0x81, 0x6F, 0x73, 0x82, 0x18, 0xF4, 0x71, 0x05, 0x01, 0x60,
  0x20, 0x48, 0x0C, 0x40,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_star_half() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_star_half_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_star_outline 18x18, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_outlined_18_toggle_star_outline_data[] PROGMEM = {
  0x77, 0x75, 0x01, 0x77, 0x30, 0x70, 0x57, 0x72, 0x0D, 0x0B, 0x77, 0x18, 0x24, 0xEF, 0x27, 0x78,
  0x2B, 0x8A, 0x97, 0x28, 0x94, 0x12, 0x35, 0x7F, 0x24, 0xF6, 0x53, 0x21, 0x38, 0x52, 0xDF, 0xED,
  0xB8, 0x28, 0x59, 0xBD, 0xEF, 0xB1, 0x38, 0x21, 0xBD, 0x26, 0x81, 0x3E, 0xA7, 0x81, 0x9E, 0x34,
  0x81, 0x5E, 0x87, 0x20, 0xA0, 0xC4, 0x0D, 0x08, 0x73, 0x86, 0xA8, 0x02, 0x10, 0xA8, 0x73, 0x86,
  0xE5, 0x7F, 0xE6, 0x7C, 0x72, 0x86, 0x2F, 0xED, 0x45, 0xEE, 0x97, 0x28, 0x16, 0xF7, 0x38, 0x21,
  0x8F, 0x47, 0x10, 0x50, 0x16, 0x02, 0x04, 0x80, 0xC4, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_star_outline() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_star_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_star 18x18, 4-bit Alpha,  RLE, 71 bytes.
static const uint8_t ic_outlined_18_toggle_star_data[] PROGMEM = {
  0x77, 0x75, 0x01, 0x77, 0x30, 0x70, 0x57, 0x72, 0x0D, 0x0B, 0x77, 0x10, 0x4A, 0x02, 0x77, 0x0B,
  0xA0, 0x97, 0x28, 0x31, 0x23, 0x57, 0xC8, 0x36, 0x53, 0x21, 0x30, 0x20, 0xDF, 0xD0, 0xB0, 0x13,
  0x01, 0x0B, 0xFB, 0x0A, 0x70, 0x9F, 0x90, 0x87, 0x20, 0xAE, 0x08, 0x73, 0x0A, 0xE0, 0x87, 0x30,
  0xEE, 0x0C, 0x72, 0x02, 0xA8, 0x2D, 0x45, 0xEA, 0x72, 0x81, 0x6F, 0x73, 0x82, 0x18, 0xF4, 0x71,
  0x05, 0x01, 0x60, 0x20, 0x48, 0x0C, 0x40,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_star() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_star_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_star_purple500 18x18, 4-bit Alpha,  RLE, 71 bytes.
static const uint8_t ic_outlined_18_toggle_star_purple500_data[] PROGMEM = {
  0x77, 0x75, 0x01, 0x77, 0x30, 0x70, 0x57, 0x72, 0x0D, 0x0B, 0x77, 0x10, 0x4A, 0x02, 0x77, 0x0B,
  0xA0, 0x97, 0x28, 0x31, 0x23, 0x57, 0xC8, 0x36, 0x53, 0x21, 0x30, 0x20, 0xDF, 0xD0, 0xB0, 0x13,
  0x01, 0x0B, 0xFB, 0x0A, 0x70, 0x9F, 0x90, 0x87, 0x20, 0xAE, 0x08, 0x73, 0x0A, 0xE0, 0x87, 0x30,
  0xEE, 0x0C, 0x72, 0x02, 0xA8, 0x2D, 0x45, 0xEA, 0x72, 0x81, 0x6F, 0x73, 0x82, 0x18, 0xF4, 0x71,
  0x05, 0x01, 0x60, 0x20, 0x48, 0x0C, 0x40,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_star_purple500() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_star_purple500_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_toggle_off 18x18, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_outlined_18_toggle_toggle_off_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x01, 0x04, 0x80, 0x47, 0x04, 0x01, 0x50, 0x7F, 0xC0, 0xE0, 0x53, 0x83, 0x6F,
  0xB5, 0x17, 0x82, 0x3B, 0xF4, 0x28, 0x4E, 0xA4, 0xDF, 0x97, 0x18, 0x5E, 0xD0, 0x2F, 0x4C, 0xB0,
  0x37, 0x85, 0x8F, 0x13, 0xF5, 0xDB, 0x04, 0x78, 0x56, 0xF1, 0x0F, 0xC6, 0xA0, 0xB7, 0x10, 0xB0,
  0xD2, 0x83, 0x7F, 0x82, 0x27, 0x82, 0x4A, 0xF5, 0x30, 0x8F, 0xD0, 0x75, 0x02, 0x06, 0x80, 0x47,
  0x06, 0x02, 0x80, 0x98, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_toggle_off() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_toggle_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_18_toggle_toggle_on 18x18, 4-bit Alpha,  RLE, 70 bytes.
static const uint8_t ic_outlined_18_toggle_toggle_on_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x01, 0x04, 0x80, 0x47, 0x04, 0x01, 0x50, 0x7F, 0xC0, 0xE0, 0x53, 0x82, 0x6F,
  0xB5, 0x78, 0x31, 0x3B, 0xF4, 0x20, 0xE0, 0xA7, 0x18, 0x90, 0xAF, 0xD4, 0xED, 0x02, 0xF4, 0x70,
  0x5B, 0x85, 0xA8, 0xF1, 0x3F, 0x57, 0x05, 0xB8, 0x5B, 0x6F, 0x10, 0xFC, 0x71, 0x84, 0xCF, 0xE4,
  0xBD, 0x28, 0x27, 0xF8, 0x17, 0x83, 0x24, 0xAF, 0x53, 0x08, 0xFD, 0x07, 0x50, 0x20, 0x68, 0x04,
  0x70, 0x60, 0x28, 0x09, 0x87, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_18_toggle_toggle_on() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_toggle_toggle_on_data, Alpha4(color::Black));
  return value;
}
