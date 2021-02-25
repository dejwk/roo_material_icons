#include "alert.h"

using namespace roo_display;

// Image file ic_round_36_alert_add_alert 36x36, 4-bit Alpha,  RLE, 209 bytes.
static const uint8_t ic_round_36_alert_add_alert_data[] PROGMEM = {
  0x80, 0x9A, 0x40, 0x82, 0x17, 0x71, 0x77, 0x77, 0x40, 0xDA, 0x0B, 0x77, 0x77, 0x30, 0x3C, 0x02,
  0x77, 0x77, 0x20, 0x3C, 0x03, 0x77, 0x77, 0x10, 0x40, 0xAC, 0x0A, 0x04, 0x77, 0x75, 0x05, 0x0E,
  0xF9, 0x0D, 0x04, 0x77, 0x72, 0x0A, 0xFD, 0x09, 0x77, 0x70, 0xBF, 0xF0, 0xA7, 0x75, 0x08, 0xFF,
  0xA0, 0x77, 0x73, 0x03, 0xFF, 0xC0, 0x27, 0x72, 0x0A, 0xF8, 0x2D, 0x34, 0xEF, 0x08, 0x77, 0x10,
  0x1F, 0x90, 0x82, 0x09, 0xF0, 0xE7, 0x71, 0x05, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x37, 0x70, 0x7F,
  0x90, 0x72, 0x07, 0xF9, 0x05, 0x77, 0x07, 0xC8, 0x3E, 0x87, 0x73, 0x28, 0x33, 0x77, 0x9E, 0xC0,
  0x67, 0x70, 0x7C, 0x02, 0x73, 0x04, 0xC0, 0x77, 0x70, 0x7C, 0x01, 0x73, 0x03, 0xC0, 0x77, 0x70,
  0x7C, 0x83, 0xC6, 0x55, 0x22, 0x83, 0x25, 0x57, 0xDC, 0x07, 0x77, 0x07, 0xF9, 0x07, 0x20, 0x7F,
  0x90, 0x77, 0x70, 0x7F, 0x90, 0x72, 0x07, 0xF9, 0x07, 0x77, 0x07, 0xF9, 0x07, 0x20, 0x8F, 0x90,
  0x77, 0x70, 0x7F, 0x98, 0x2D, 0x12, 0xEF, 0x90, 0x77, 0x70, 0x7F, 0xFE, 0x07, 0x77, 0x09, 0xFF,
  0xE0, 0x97, 0x60, 0x6F, 0xFF, 0x90, 0x67, 0x40, 0x5F, 0xFF, 0xB0, 0x47, 0x30, 0xAF, 0xFF, 0xB0,
  0x87, 0x30, 0x50, 0xEF, 0xFF, 0x90, 0xD0, 0x38, 0x0E, 0x40, 0x80, 0x15, 0x04, 0x77, 0x77, 0x20,
  0xDC, 0x08, 0x77, 0x77, 0x20, 0x40, 0xEA, 0x0E, 0x01, 0x77, 0x77, 0x48, 0x15, 0x61, 0x80, 0xE0,
  0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_round_36_alert_add_alert() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_add_alert_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_alert_auto_delete 36x36, 4-bit Alpha,  RLE, 250 bytes.
static const uint8_t ic_round_36_alert_auto_delete_data[] PROGMEM = {
  0x80, 0xD0, 0x00, 0x48, 0x02, 0x70, 0x47, 0x77, 0x60, 0xAF, 0x90, 0xA7, 0x76, 0x01, 0x0B, 0xFF,
  0xC0, 0xA7, 0x71, 0x07, 0xFF, 0xE0, 0x57, 0x70, 0x20, 0xDF, 0xFC, 0x0C, 0x01, 0x80, 0xE1, 0x00,
  0x10, 0x58, 0x09, 0x07, 0x03, 0x77, 0x60, 0x20, 0xEF, 0xF0, 0xC0, 0x17, 0x74, 0x09, 0xFF, 0xA0,
  0xA7, 0x74, 0xFF, 0xB0, 0xE7, 0x74, 0xFF, 0xC7, 0x74, 0xFF, 0xC7, 0x74, 0xFF, 0xC8, 0x41, 0x55,
  0x54, 0x17, 0x5F, 0xFF, 0xB0, 0xB0, 0x57, 0x3F, 0xFF, 0xD0, 0xC0, 0x27, 0x1F, 0xFD, 0x82, 0xB9,
  0x9B, 0xC0, 0xE0, 0x37, 0xFF, 0xA0, 0xE0, 0x65, 0x81, 0x17, 0xEA, 0x0E, 0x02, 0x6F, 0xF9, 0x0D,
  0x01, 0x30, 0xA0, 0x23, 0x02, 0x0E, 0xA0, 0xC6, 0xFF, 0x0E, 0x01, 0x38, 0x17, 0xFB, 0x40, 0x20,
  0xEA, 0x05, 0x5F, 0xF0, 0x54, 0x81, 0x7F, 0xB5, 0x07, 0xA0, 0xB5, 0xFE, 0x0E, 0x58, 0x17, 0xFB,
  0x50, 0x1B, 0x01, 0x4F, 0xE0, 0x95, 0x81, 0x7F, 0xB6, 0x0B, 0xA0, 0x44, 0xFE, 0x07, 0x58, 0x17,
  0xFB, 0x60, 0x9A, 0x05, 0x4F, 0xE0, 0x75, 0x82, 0x7F, 0xD2, 0x50, 0x9A, 0x06, 0x4F, 0xE0, 0x95,
  0x02, 0xB0, 0x80, 0x13, 0x0B, 0xA0, 0x44, 0x0D, 0xFD, 0x0D, 0x60, 0x20, 0xBA, 0x0E, 0x01, 0x2B,
  0x01, 0x40, 0x40, 0xEF, 0xD0, 0x47, 0x84, 0x5D, 0xF4, 0x06, 0xA0, 0xC7, 0x05, 0x80, 0x47, 0x0B,
  0xA0, 0xD0, 0x17, 0x18, 0x21, 0x01, 0xEA, 0x06, 0x77, 0x20, 0x10, 0xEA, 0x0B, 0x01, 0x71, 0x01,
  0x0D, 0xA0, 0xD7, 0x74, 0x04, 0xB0, 0xD0, 0x46, 0x05, 0x0E, 0xB0, 0x37, 0x75, 0x06, 0xC8, 0x4D,
  0x97, 0x79, 0xEC, 0x05, 0x77, 0x70, 0x40, 0xEF, 0xB0, 0xD0, 0x37, 0x77, 0x28, 0x11, 0x8E, 0xE0,
  0xD0, 0x77, 0x77, 0x78, 0x43, 0x77, 0x76, 0x38, 0x0D, 0x10,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_round_36_alert_auto_delete() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_auto_delete_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_alert_error_outline 36x36, 4-bit Alpha,  RLE, 272 bytes.
static const uint8_t ic_round_36_alert_error_outline_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x02, 0x7A, 0xCD, 0xDB, 0xA7, 0x27, 0x77, 0x30, 0x60, 0xDF, 0xB0, 0xD0,
  0x57, 0x76, 0x04, 0x0D, 0xFF, 0x0C, 0x03, 0x77, 0x30, 0x7C, 0x89, 0x0E, 0x95, 0x31, 0x13, 0x5A,
  0xEC, 0x06, 0x77, 0x10, 0xAB, 0x0E, 0x06, 0x73, 0x07, 0x0E, 0xB0, 0x87, 0x60, 0x8B, 0x0A, 0x01,
  0x75, 0x01, 0x0C, 0xB0, 0x67, 0x40, 0x5B, 0x08, 0x77, 0x20, 0xAB, 0x03, 0x73, 0x0E, 0xA0, 0xA7,
  0x10, 0x03, 0x71, 0x0C, 0xA0, 0xC7, 0x20, 0x7A, 0x0D, 0x71, 0x05, 0xA0, 0x37, 0x01, 0x0E, 0xA0,
  0x57, 0x10, 0xEA, 0x05, 0x71, 0x07, 0xA0, 0x77, 0x10, 0x7A, 0x0D, 0x70, 0x4A, 0x0D, 0x72, 0x07,
  0xA0, 0x77, 0x20, 0xEA, 0x02, 0x60, 0x9A, 0x08, 0x72, 0x07, 0xA0, 0x77, 0x20, 0xAA, 0x07, 0x60,
  0xCA, 0x03, 0x72, 0x07, 0xA0, 0x77, 0x20, 0x5A, 0x0A, 0x60, 0xDA, 0x01, 0x72, 0x07, 0xA0, 0x77,
  0x20, 0x3A, 0x0B, 0x6B, 0x73, 0x07, 0xA0, 0x77, 0x20, 0x1A, 0x0D, 0x6B, 0x73, 0x05, 0xA0, 0x47,
  0x20, 0x1A, 0x0D, 0x60, 0xEA, 0x01, 0x73, 0x00, 0x57, 0x30, 0x3A, 0x0C, 0x60, 0xCA, 0x03, 0x77,
  0x71, 0x05, 0xA0, 0xA6, 0x09, 0xA0, 0x77, 0x77, 0x10, 0x9A, 0x07, 0x60, 0x4A, 0x0C, 0x72, 0x82,
  0x37, 0x73, 0x72, 0x0E, 0xA0, 0x27, 0xB0, 0x47, 0x10, 0x7A, 0x07, 0x71, 0x06, 0xA0, 0xD7, 0x10,
  0x8A, 0x0C, 0x71, 0x07, 0xA0, 0x77, 0x01, 0x0E, 0xA0, 0x67, 0x10, 0x10, 0xEA, 0x09, 0x78, 0x23,
  0x77, 0x37, 0x0A, 0xA0, 0xD7, 0x30, 0x6B, 0x06, 0x77, 0x20, 0x8B, 0x04, 0x74, 0x09, 0xB0, 0x97,
  0x70, 0xAB, 0x07, 0x76, 0x0B, 0xB0, 0xC0, 0x47, 0x30, 0x50, 0xDB, 0x0A, 0x77, 0x10, 0x9C, 0x82,
  0xC7, 0x31, 0x28, 0x21, 0x38, 0xDC, 0x07, 0x77, 0x30, 0x60, 0xEF, 0xF0, 0xE0, 0x57, 0x75, 0x01,
  0x08, 0xFC, 0x0E, 0x07, 0x77, 0x73, 0x82, 0x49, 0xCE, 0xA8, 0x2D, 0xC9, 0x48, 0x09, 0xE5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_round_36_alert_error_outline() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_error_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_alert_error 36x36, 4-bit Alpha,  RLE, 195 bytes.
static const uint8_t ic_round_36_alert_error_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x02, 0x7A, 0xCD, 0xDB, 0xA7, 0x27, 0x77, 0x30, 0x60, 0xDF, 0xB0, 0xD0,
  0x57, 0x76, 0x04, 0x0D, 0xFF, 0x0C, 0x03, 0x77, 0x30, 0x7F, 0xFC, 0x06, 0x77, 0x10, 0xAF, 0xFE,
  0x08, 0x76, 0x07, 0xFF, 0xF9, 0x06, 0x74, 0x05, 0xFF, 0xFB, 0x03, 0x73, 0x0E, 0xFC, 0x0B, 0x0C,
  0xFC, 0x0C, 0x72, 0x07, 0xFC, 0x0A, 0x20, 0xCF, 0xC0, 0x57, 0x10, 0xEF, 0xC0, 0x72, 0x07, 0xFC,
  0x0D, 0x70, 0x4F, 0xD0, 0x72, 0x07, 0xFD, 0x02, 0x60, 0x9F, 0xD0, 0x72, 0x07, 0xFD, 0x07, 0x60,
  0xCF, 0xD0, 0x72, 0x07, 0xFD, 0x0A, 0x60, 0xDF, 0xD0, 0x72, 0x07, 0xFD, 0x0B, 0x6F, 0xE0, 0x72,
  0x07, 0xFD, 0x0D, 0x6F, 0xE0, 0x92, 0x0B, 0xFD, 0x0D, 0x60, 0xEF, 0xE0, 0x90, 0xAF, 0xE0, 0xC6,
  0x0C, 0xFF, 0xFF, 0x0A, 0x60, 0x9F, 0xFF, 0xF0, 0x76, 0x04, 0xFD, 0x82, 0xB7, 0x7B, 0xFD, 0x02,
  0x7F, 0xD0, 0x72, 0x07, 0xFC, 0x0D, 0x71, 0x08, 0xFC, 0x07, 0x20, 0x7F, 0xC0, 0x67, 0x10, 0x10,
  0xEF, 0xB8, 0x2B, 0x77, 0xBF, 0xB0, 0xD7, 0x30, 0x6F, 0xFF, 0xB0, 0x47, 0x40, 0x9F, 0xFF, 0x90,
  0x77, 0x60, 0xBF, 0xFE, 0x0A, 0x77, 0x10, 0x9F, 0xFC, 0x07, 0x77, 0x30, 0x60, 0xEF, 0xF0, 0xE0,
  0x57, 0x75, 0x01, 0x08, 0xFC, 0x0E, 0x07, 0x77, 0x73, 0x82, 0x49, 0xCE, 0xA8, 0x2D, 0xC9, 0x48,
  0x09, 0xE5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_round_36_alert_error() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_error_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_alert_notification_important 36x36, 4-bit Alpha,  RLE, 193 bytes.
static const uint8_t ic_round_36_alert_notification_important_data[] PROGMEM = {
  0x80, 0x9A, 0x40, 0x82, 0x17, 0x71, 0x77, 0x77, 0x40, 0xDA, 0x0B, 0x77, 0x77, 0x30, 0x3C, 0x02,
  0x77, 0x77, 0x20, 0x3C, 0x03, 0x77, 0x77, 0x10, 0x40, 0xAC, 0x0A, 0x04, 0x77, 0x75, 0x05, 0x0E,
  0xF9, 0x0D, 0x04, 0x77, 0x72, 0x0A, 0xFD, 0x09, 0x77, 0x70, 0xBF, 0xF0, 0xA7, 0x75, 0x08, 0xFF,
  0xA0, 0x77, 0x73, 0x03, 0xFF, 0xC0, 0x27, 0x72, 0x0A, 0xF8, 0x2D, 0x34, 0xEF, 0x08, 0x77, 0x10,
  0x1F, 0x90, 0x82, 0x09, 0xF0, 0xE7, 0x71, 0x05, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x37, 0x70, 0x7F,
  0x90, 0x72, 0x07, 0xF9, 0x05, 0x77, 0x07, 0xF9, 0x07, 0x20, 0x8F, 0x90, 0x67, 0x70, 0x7F, 0x98,
  0x2D, 0x12, 0xEF, 0x90, 0x77, 0x70, 0x7F, 0xFE, 0x07, 0x77, 0x07, 0xFF, 0xE0, 0x77, 0x70, 0x7F,
  0xFE, 0x07, 0x77, 0x07, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x77, 0x70, 0x7F, 0x90, 0x72, 0x07, 0xF9,
  0x07, 0x77, 0x07, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x77, 0x70, 0x7F, 0xFE, 0x07, 0x77, 0x09, 0xFF,
  0xE0, 0x97, 0x60, 0x6F, 0xFF, 0x90, 0x67, 0x40, 0x5F, 0xFF, 0xB0, 0x47, 0x30, 0xAF, 0xFF, 0xB0,
  0x87, 0x30, 0x50, 0xEF, 0xFF, 0x90, 0xD0, 0x38, 0x0E, 0x40, 0x80, 0x15, 0x04, 0x77, 0x77, 0x20,
  0xDC, 0x08, 0x77, 0x77, 0x20, 0x40, 0xEA, 0x0E, 0x01, 0x77, 0x77, 0x48, 0x15, 0x61, 0x80, 0xE0,
  0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_round_36_alert_notification_important() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_notification_important_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_alert_warning_amber 36x36, 4-bit Alpha,  RLE, 212 bytes.
static const uint8_t ic_round_36_alert_warning_amber_data[] PROGMEM = {
  0x80, 0xBC, 0x40, 0x82, 0x7D, 0xC6, 0x77, 0x77, 0x30, 0x8C, 0x06, 0x77, 0x77, 0x10, 0x3E, 0x01,
  0x77, 0x77, 0x0C, 0xA0, 0xA0, 0xCA, 0x0A, 0x77, 0x76, 0x05, 0xB0, 0x10, 0x3B, 0x03, 0x77, 0x75,
  0x0E, 0xA0, 0x72, 0x09, 0xA0, 0xC7, 0x77, 0x40, 0x7A, 0x0D, 0x30, 0x10, 0xEA, 0x06, 0x77, 0x72,
  0x02, 0xB0, 0x54, 0x07, 0xA0, 0xE0, 0x17, 0x77, 0x10, 0xAA, 0x0C, 0x60, 0xDA, 0x08, 0x77, 0x70,
  0x4B, 0x83, 0x30, 0x1B, 0xA2, 0x05, 0xB0, 0x27, 0x76, 0x0C, 0xA0, 0x92, 0x07, 0xA0, 0x62, 0x0B,
  0xA0, 0xB7, 0x75, 0x06, 0xA0, 0xE0, 0x12, 0x07, 0xA0, 0x72, 0x02, 0xB0, 0x47, 0x73, 0x01, 0x0E,
  0xA0, 0x73, 0x07, 0xA0, 0x73, 0x09, 0xA0, 0xD7, 0x73, 0x08, 0xA0, 0xD4, 0x07, 0xA0, 0x63, 0x01,
  0x0E, 0xA0, 0x77, 0x71, 0x02, 0xB0, 0x44, 0x82, 0x2D, 0xC1, 0x40, 0x6A, 0x0E, 0x01, 0x77, 0x0B,
  0xA0, 0xB7, 0x70, 0xDA, 0x09, 0x76, 0x04, 0xB0, 0x27, 0x70, 0x4B, 0x03, 0x75, 0x0D, 0xA0, 0x87,
  0x72, 0x0A, 0xA0, 0xB7, 0x40, 0x7A, 0x0E, 0x01, 0x60, 0x7A, 0x07, 0x60, 0x2B, 0x05, 0x72, 0x01,
  0x0E, 0xA0, 0x67, 0x07, 0xA0, 0x77, 0x08, 0xA0, 0xD7, 0x20, 0x9A, 0x0C, 0x71, 0x07, 0xA0, 0x77,
  0x01, 0x0E, 0xA0, 0x77, 0x01, 0xB0, 0x47, 0x76, 0x06, 0xA0, 0xE7, 0x04, 0xA0, 0xE8, 0x0A, 0x27,
  0xB0, 0x26, 0x01, 0xFF, 0xFE, 0x0E, 0x71, 0x08, 0xFF, 0xFD, 0x06, 0x72, 0x03, 0x80, 0xA4, 0x70,
  0x38, 0x0A, 0xA1, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_round_36_alert_warning_amber() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_warning_amber_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_36_alert_warning 36x36, 4-bit Alpha,  RLE, 157 bytes.
static const uint8_t ic_round_36_alert_warning_data[] PROGMEM = {
  0x80, 0xBC, 0x40, 0x82, 0x7D, 0xC6, 0x77, 0x77, 0x30, 0x8C, 0x06, 0x77, 0x77, 0x10, 0x3E, 0x01,
  0x77, 0x77, 0x0C, 0xE0, 0xA7, 0x77, 0x60, 0x5F, 0x90, 0x37, 0x77, 0x50, 0xEF, 0x90, 0xC7, 0x77,
  0x40, 0x7F, 0xB0, 0x67, 0x77, 0x20, 0x2F, 0xC0, 0xE0, 0x17, 0x77, 0x10, 0xAF, 0xD0, 0x87, 0x77,
  0x04, 0xD8, 0x2D, 0x34, 0xED, 0x02, 0x77, 0x60, 0xCD, 0x08, 0x20, 0x9D, 0x0B, 0x77, 0x50, 0x6E,
  0x07, 0x20, 0x7E, 0x04, 0x77, 0x30, 0x10, 0xEE, 0x07, 0x20, 0x7E, 0x0D, 0x77, 0x30, 0x8F, 0x07,
  0x20, 0x8F, 0x07, 0x77, 0x10, 0x2F, 0x98, 0x2D, 0x12, 0xEF, 0x0E, 0x01, 0x77, 0x0B, 0xFF, 0xE0,
  0x97, 0x60, 0x4F, 0xFF, 0x90, 0x37, 0x50, 0xDF, 0xFF, 0x90, 0xB7, 0x40, 0x7F, 0xB0, 0x72, 0x07,
  0xFB, 0x05, 0x72, 0x01, 0x0E, 0xFB, 0x07, 0x20, 0x7F, 0xB0, 0xD7, 0x20, 0x9F, 0xC0, 0x72, 0x07,
  0xFC, 0x07, 0x70, 0x1F, 0xFF, 0xE0, 0xE7, 0x04, 0xFF, 0xFF, 0x02, 0x60, 0x1F, 0xFF, 0xE0, 0xE7,
  0x10, 0x8F, 0xFF, 0xD0, 0x67, 0x20, 0x38, 0x0A, 0x47, 0x03, 0x80, 0xAA, 0x10,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_round_36_alert_warning() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_warning_data, Alpha4(color::Black));
  return value;
}

