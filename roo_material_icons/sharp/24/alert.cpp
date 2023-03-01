#include "alert.h"

using namespace roo_display;

// Image file ic_sharp_24_alert_add_alert 24x24, 4-bit Alpha,  RLE, 88 bytes.
static const uint8_t ic_sharp_24_alert_add_alert_data[] PROGMEM = {
  0x77, 0x77, 0x68, 0x23, 0x77, 0x37, 0x76, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x74, 0x81,
  0x17, 0xDA, 0x81, 0xD7, 0x17, 0x71, 0x05, 0x0E, 0xE0, 0xE0, 0x57, 0x60, 0x5F, 0xB0, 0x57, 0x40,
  0x10, 0xEF, 0xB0, 0xE0, 0x17, 0x30, 0x7D, 0x2D, 0x07, 0x73, 0x0C, 0xD2, 0xD0, 0xC7, 0x30, 0xED,
  0x2D, 0x0E, 0x73, 0xB7, 0x1B, 0x73, 0xB7, 0x1B, 0x73, 0xE2, 0xE7, 0x3E, 0x2E, 0x73, 0xE2, 0xE7,
  0x3F, 0xF7, 0x20, 0x7F, 0xF0, 0x77, 0x07, 0xFF, 0xA0, 0x76, 0xFF, 0xC8, 0x0C, 0x10, 0x0D, 0xA0,
  0xD7, 0x76, 0x82, 0x4D, 0xD4, 0x77, 0x77, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_alert_add_alert() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_alert_add_alert_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_alert_auto_delete 24x24, 4-bit Alpha,  RLE, 118 bytes.
static const uint8_t ic_sharp_24_alert_auto_delete_data[] PROGMEM = {
  0x77, 0x77, 0x01, 0x0D, 0xC0, 0xD0, 0x17, 0x6F, 0xF7, 0x3F, 0xF7, 0x77, 0x77, 0xFD, 0x75, 0xFD,
  0x75, 0xFD, 0x75, 0xFD, 0x75, 0xFD, 0x84, 0xCE, 0xEC, 0x71, 0x6F, 0xFB, 0x0E, 0x05, 0x5F, 0xC0,
  0xA0, 0x32, 0x03, 0x0A, 0xA0, 0x54, 0xFB, 0x07, 0x29, 0x07, 0x28, 0x27, 0xFE, 0x13, 0xFA, 0x0A,
  0x39, 0x07, 0x38, 0x1A, 0xF7, 0x3F, 0xA0, 0x33, 0x90, 0x73, 0x81, 0x3F, 0xC3, 0xFA, 0x49, 0x07,
  0x49, 0x0E, 0x3F, 0xA4, 0x90, 0xC0, 0x33, 0x90, 0xE3, 0xFA, 0x03, 0x38, 0x64, 0xDF, 0x91, 0x3F,
  0xC3, 0xFA, 0x0A, 0x58, 0x47, 0xD1, 0xAF, 0x77, 0x38, 0x21, 0xEF, 0x76, 0x82, 0x7F, 0xE1, 0x74,
  0x04, 0xA0, 0xA0, 0x32, 0x03, 0x0A, 0xA0, 0x57, 0x60, 0x40, 0xEE, 0x0E, 0x05, 0x77, 0x18, 0x61,
  0x7C, 0xEE, 0xC7, 0x17, 0x77, 0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_alert_auto_delete() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_alert_auto_delete_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_alert_error_outline 24x24, 4-bit Alpha,  RLE, 139 bytes.
static const uint8_t ic_sharp_24_alert_error_outline_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x70, 0x50, 0xDF, 0x90, 0xD0, 0x47, 0x40, 0x8A,
  0x81, 0xC6, 0x22, 0x81, 0x26, 0xCA, 0x08, 0x72, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x70, 0x4A,
  0x04, 0x73, 0x04, 0xA0, 0x46, 0x81, 0xDF, 0x65, 0xA5, 0x81, 0x6F, 0xD5, 0x81, 0x5F, 0xC6, 0xA6,
  0x81, 0xCF, 0x54, 0x81, 0xAF, 0x66, 0xA6, 0x81, 0x6F, 0x94, 0x81, 0xDF, 0x26, 0xA6, 0x81, 0x2F,
  0xD4, 0x0E, 0x97, 0xA7, 0x90, 0xE4, 0x0E, 0x97, 0xA7, 0x90, 0xE4, 0x81, 0xDF, 0x27, 0x78, 0x12,
  0xFD, 0x48, 0x1A, 0xF6, 0x77, 0x81, 0x6F, 0x94, 0x81, 0x5F, 0xC6, 0xA6, 0x81, 0xCF, 0x55, 0x81,
  0xDF, 0x65, 0xA5, 0x81, 0x6F, 0xD6, 0x04, 0xA0, 0x47, 0x30, 0x4A, 0x04, 0x70, 0x8A, 0x06, 0x71,
  0x06, 0xA0, 0x87, 0x20, 0x8A, 0x81, 0xC6, 0x22, 0x81, 0x26, 0xCA, 0x08, 0x74, 0x05, 0x0D, 0xF9,
  0x0D, 0x04, 0x77, 0x86, 0x59, 0xDE, 0xED, 0x95, 0x80, 0xE4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_alert_error_outline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_alert_error_outline_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_alert_error 24x24, 4-bit Alpha,  RLE, 98 bytes.
static const uint8_t ic_sharp_24_alert_error_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x70, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x40, 0x8F,
  0xD0, 0x87, 0x20, 0x8F, 0xF0, 0x87, 0x04, 0xFF, 0xA0, 0x46, 0x0D, 0xF2, 0xF0, 0xD5, 0x05, 0xF9,
  0x2F, 0x90, 0x54, 0x09, 0xF9, 0x2F, 0x90, 0x94, 0x0D, 0xF9, 0x2F, 0x90, 0xD4, 0x0E, 0xF9, 0x2F,
  0x90, 0xE4, 0x0E, 0xF9, 0x2F, 0x90, 0xE4, 0x0D, 0xFF, 0xC0, 0xD4, 0x09, 0xFF, 0xC0, 0x94, 0x05,
  0xF9, 0x2F, 0x90, 0x55, 0x0D, 0xF2, 0xF0, 0xD6, 0x04, 0xFF, 0xA0, 0x47, 0x08, 0xFF, 0x08, 0x72,
  0x08, 0xFD, 0x08, 0x74, 0x04, 0x0D, 0xF9, 0x0D, 0x04, 0x77, 0x86, 0x59, 0xDE, 0xED, 0x95, 0x80,
  0xE4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_alert_error() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_alert_error_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_alert_notification_important 24x24, 4-bit Alpha,  RLE, 86 bytes.
static const uint8_t ic_sharp_24_alert_notification_important_data[] PROGMEM = {
  0x77, 0x77, 0x68, 0x23, 0x77, 0x37, 0x76, 0x07, 0xA0, 0x77, 0x76, 0x07, 0xA0, 0x77, 0x74, 0x81,
  0x17, 0xDA, 0x81, 0xD7, 0x17, 0x71, 0x05, 0x0E, 0xE0, 0xE0, 0x57, 0x60, 0x5F, 0xB0, 0x57, 0x40,
  0x10, 0xEF, 0xB0, 0xE0, 0x17, 0x30, 0x7D, 0x2D, 0x07, 0x73, 0x0C, 0xD2, 0xD0, 0xC7, 0x30, 0xED,
  0x2D, 0x0E, 0x73, 0xE2, 0xE7, 0x3F, 0xF7, 0x3F, 0xF7, 0x3E, 0x2E, 0x73, 0xE2, 0xE7, 0x3F, 0xF7,
  0x20, 0x7F, 0xF0, 0x77, 0x07, 0xFF, 0xA0, 0x76, 0xFF, 0xC8, 0x0C, 0x10, 0x0D, 0xA0, 0xD7, 0x76,
  0x82, 0x4D, 0xD4, 0x77, 0x77, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_alert_notification_important() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_alert_notification_important_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_alert_warning_amber 24x24, 4-bit Alpha,  RLE, 121 bytes.
static const uint8_t ic_sharp_24_alert_warning_amber_data[] PROGMEM = {
  0x80, 0xE7, 0x00, 0x04, 0x77, 0x71, 0x00, 0xD7, 0x77, 0x06, 0xA0, 0x67, 0x75, 0x01, 0x0E, 0xA0,
  0xE0, 0x17, 0x74, 0x84, 0x9F, 0xAA, 0xF9, 0x77, 0x30, 0x3A, 0x00, 0x2A, 0x03, 0x77, 0x28, 0x1B,
  0xF8, 0x28, 0x18, 0xFB, 0x77, 0x18, 0x15, 0xFE, 0x48, 0x1E, 0xF5, 0x77, 0x81, 0xDF, 0x61, 0xA1,
  0x81, 0x6F, 0xD7, 0x68, 0x17, 0xFC, 0x2A, 0x28, 0x1C, 0xF7, 0x74, 0x82, 0x1E, 0xF3, 0x2A, 0x28,
  0x23, 0xFE, 0x17, 0x38, 0x1A, 0xFA, 0x3A, 0x38, 0x1A, 0xFA, 0x72, 0x82, 0x3F, 0xE1, 0x71, 0x82,
  0x1E, 0xF3, 0x71, 0x81, 0xCF, 0x77, 0x38, 0x17, 0xFC, 0x78, 0x16, 0xFD, 0x5A, 0x58, 0x1D, 0xF6,
  0x68, 0x1E, 0xF5, 0x5A, 0x58, 0x15, 0xFE, 0x58, 0x18, 0xFB, 0x77, 0x81, 0xBF, 0x83, 0x02, 0xFF,
  0xE0, 0x22, 0x0B, 0xFF, 0xE0, 0xB8, 0x09, 0x85, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_alert_warning_amber() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_alert_warning_amber_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_alert_warning 24x24, 4-bit Alpha,  RLE, 85 bytes.
static const uint8_t ic_sharp_24_alert_warning_data[] PROGMEM = {
  0x80, 0xE7, 0x00, 0x04, 0x77, 0x71, 0x00, 0xD7, 0x77, 0x06, 0xA0, 0x67, 0x75, 0x01, 0x0E, 0xA0,
  0xE0, 0x17, 0x74, 0x09, 0xC0, 0x97, 0x73, 0x03, 0xE0, 0x37, 0x72, 0x0B, 0xE0, 0xB7, 0x71, 0x05,
  0xF9, 0x05, 0x77, 0x0D, 0xB2, 0xB0, 0xD7, 0x60, 0x7C, 0x2C, 0x07, 0x74, 0x01, 0x0E, 0xC2, 0xC0,
  0xE0, 0x17, 0x30, 0xAD, 0x2D, 0x0A, 0x72, 0x03, 0xFF, 0x03, 0x71, 0x0C, 0xFF, 0x0C, 0x70, 0x6F,
  0x2F, 0x06, 0x60, 0xEF, 0x2F, 0x0E, 0x50, 0x8F, 0xFC, 0x08, 0x30, 0x2F, 0xFE, 0x02, 0x20, 0xBF,
  0xFE, 0x0B, 0x80, 0x98, 0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_alert_warning() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_alert_warning_data, Alpha4(color::Black));
  return value;
}
