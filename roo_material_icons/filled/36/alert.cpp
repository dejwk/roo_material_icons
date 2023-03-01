#include "alert.h"

using namespace roo_display;

// Image file ic_filled_36_alert_add_alert 36x36, 4-bit Alpha,  RLE, 196 bytes.
static const uint8_t ic_filled_36_alert_add_alert_data[] PROGMEM = {
  0x80, 0x9F, 0x00, 0x82, 0x6E, 0xE6, 0x77, 0x77, 0x30, 0x2C, 0x02, 0x77, 0x77, 0x20, 0x5C, 0x05,
  0x77, 0x77, 0x10, 0x20, 0xAC, 0x0A, 0x02, 0x77, 0x75, 0x03, 0x0B, 0xF9, 0x0B, 0x03, 0x77, 0x72,
  0x07, 0xFD, 0x07, 0x77, 0x70, 0x8F, 0xF0, 0x87, 0x75, 0x05, 0xFF, 0xA0, 0x57, 0x73, 0x01, 0x0E,
  0xFF, 0xA0, 0xE0, 0x17, 0x72, 0x07, 0xF0, 0x72, 0x07, 0xF0, 0x77, 0x72, 0x0D, 0xF0, 0x72, 0x07,
  0xF0, 0xD7, 0x71, 0x01, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x17, 0x70, 0x3F, 0x90, 0x72, 0x07, 0xF9,
  0x03, 0x77, 0x04, 0xC8, 0x00, 0x70, 0x32, 0x03, 0x80, 0x07, 0xC0, 0x47, 0x70, 0x4C, 0x75, 0xC0,
  0x47, 0x70, 0x4C, 0x75, 0xC0, 0x47, 0x70, 0x4C, 0x80, 0x07, 0x03, 0x20, 0x38, 0x00, 0x7C, 0x04,
  0x77, 0x04, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x47, 0x70, 0x4F, 0x90, 0x72, 0x07, 0xF9, 0x04, 0x77,
  0x04, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x47, 0x70, 0x4F, 0x90, 0x72, 0x07, 0xF9, 0x04, 0x77, 0x04,
  0xFF, 0xE0, 0x47, 0x70, 0x9F, 0xFE, 0x09, 0x76, 0x09, 0xFF, 0xF9, 0x09, 0x74, 0x09, 0xFF, 0xFB,
  0x09, 0x72, 0x06, 0xFF, 0xFD, 0x06, 0x71, 0x07, 0xFF, 0xFD, 0x07, 0x80, 0xE3, 0x08, 0x02, 0x77,
  0x77, 0x72, 0x0B, 0xC0, 0xB7, 0x77, 0x72, 0x03, 0x0E, 0xA0, 0xE0, 0x37, 0x77, 0x73, 0x82, 0x16,
  0x61, 0x80, 0xE0, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_36_alert_add_alert() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_alert_add_alert_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_36_alert_auto_delete 36x36, 4-bit Alpha,  RLE, 236 bytes.
static const uint8_t ic_filled_36_alert_auto_delete_data[] PROGMEM = {
  0x80, 0xD0, 0x08, 0x04, 0x77, 0x77, 0x60, 0xBF, 0x90, 0xB7, 0x76, 0x07, 0xFF, 0xE0, 0x77, 0x70,
  0x7F, 0xFE, 0x07, 0x77, 0x07, 0xFF, 0xE0, 0x78, 0x0E, 0x00, 0x80, 0x96, 0x77, 0x74, 0xFF, 0xC7,
  0x74, 0xFF, 0xC7, 0x74, 0xFF, 0xC7, 0x74, 0xFF, 0xC7, 0x74, 0xFF, 0xC7, 0x74, 0xFF, 0xC8, 0x42,
  0x57, 0x75, 0x27, 0x5F, 0xFF, 0xB0, 0xD0, 0x77, 0x3F, 0xFF, 0xD0, 0xD0, 0x37, 0x1F, 0xFC, 0x84,
  0xEA, 0x88, 0xAE, 0xC0, 0x57, 0xFF, 0xA0, 0xE0, 0x66, 0x06, 0x0E, 0xB0, 0x36, 0xFF, 0x90, 0xC0,
  0x12, 0x81, 0x7F, 0xB3, 0x01, 0x0C, 0xA0, 0xD6, 0xFF, 0x0E, 0x01, 0x38, 0x17, 0xFB, 0x40, 0x10,
  0xEA, 0x07, 0x5F, 0xF0, 0x64, 0x81, 0x7F, 0xB5, 0x06, 0xA0, 0xD5, 0xFE, 0x0E, 0x58, 0x17, 0xFB,
  0x60, 0xEA, 0x02, 0x4F, 0xE0, 0xA5, 0x81, 0x7F, 0xB6, 0x0A, 0xA0, 0x54, 0xFE, 0x08, 0x58, 0x17,
  0xFB, 0x60, 0x8A, 0x06, 0x4F, 0xE0, 0x85, 0x82, 0x7F, 0xE4, 0x50, 0x8A, 0x06, 0x4F, 0xE0, 0xA5,
  0x05, 0x0E, 0xA0, 0xA0, 0x13, 0x0A, 0xA0, 0x54, 0x0B, 0xFD, 0x0E, 0x60, 0x10, 0xAA, 0x0E, 0x07,
  0x20, 0xEA, 0x02, 0x40, 0x30, 0xEF, 0xD0, 0x67, 0x84, 0x3C, 0xFA, 0x06, 0xA0, 0xD6, 0x01, 0x06,
  0x80, 0x47, 0x0A, 0xA0, 0xE0, 0x17, 0x18, 0x26, 0x11, 0xEA, 0x07, 0x77, 0x30, 0xDA, 0x0C, 0x01,
  0x71, 0x01, 0x0C, 0xA0, 0xD7, 0x74, 0x03, 0xB0, 0xE0, 0x66, 0x06, 0x0E, 0xB0, 0x37, 0x75, 0x05,
  0xC8, 0x4E, 0xA8, 0x8A, 0xEC, 0x05, 0x77, 0x70, 0x30, 0xDF, 0xB0, 0xD0, 0x37, 0x77, 0x30, 0x70,
  0xDE, 0x0D, 0x07, 0x77, 0x77, 0x84, 0x25, 0x77, 0x52, 0x80, 0xD1, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_36_alert_auto_delete() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_alert_auto_delete_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_36_alert_error_outline 36x36, 4-bit Alpha,  RLE, 271 bytes.
static const uint8_t ic_filled_36_alert_error_outline_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37, 0x77, 0x30, 0x70, 0xEF, 0xB0, 0xE0,
  0x77, 0x76, 0x05, 0x0D, 0xFF, 0x0D, 0x05, 0x77, 0x30, 0x8C, 0x82, 0xD9, 0x42, 0x28, 0x22, 0x49,
  0xDC, 0x07, 0x77, 0x10, 0xAB, 0x0D, 0x06, 0x73, 0x06, 0x0D, 0xB0, 0xA7, 0x60, 0x8B, 0x0A, 0x77,
  0x0A, 0xB0, 0x77, 0x40, 0x5B, 0x08, 0x77, 0x20, 0x8B, 0x05, 0x73, 0x0D, 0xA0, 0xA7, 0x82, 0x37,
  0x73, 0x70, 0xAA, 0x0D, 0x72, 0x07, 0xA0, 0xD7, 0x10, 0x7A, 0x07, 0x71, 0x0D, 0xA0, 0x77, 0x10,
  0xEA, 0x06, 0x71, 0x07, 0xA0, 0x77, 0x10, 0x6A, 0x0E, 0x70, 0x3A, 0x0D, 0x72, 0x07, 0xA0, 0x77,
  0x20, 0xDA, 0x03, 0x60, 0x8A, 0x08, 0x72, 0x07, 0xA0, 0x77, 0x20, 0x8A, 0x08, 0x60, 0xBA, 0x04,
  0x72, 0x07, 0xA0, 0x77, 0x20, 0x4A, 0x0B, 0x60, 0xDA, 0x02, 0x72, 0x07, 0xA0, 0x77, 0x20, 0x2A,
  0x0D, 0x60, 0xEA, 0x73, 0x07, 0xA0, 0x77, 0x3A, 0x0E, 0x60, 0xEA, 0x73, 0x07, 0xA0, 0x77, 0x3A,
  0x0E, 0x60, 0xDA, 0x02, 0x72, 0x82, 0x37, 0x73, 0x72, 0x02, 0xA0, 0xD6, 0x0B, 0xA0, 0x47, 0x77,
  0x10, 0x4A, 0x0B, 0x60, 0x8A, 0x08, 0x77, 0x71, 0x08, 0xA0, 0x86, 0x03, 0xA0, 0xD7, 0x28, 0x23,
  0x77, 0x37, 0x20, 0xDA, 0x03, 0x70, 0xEA, 0x06, 0x71, 0x07, 0xA0, 0x77, 0x10, 0x6A, 0x0E, 0x71,
  0x07, 0xA0, 0xD7, 0x10, 0x7A, 0x07, 0x71, 0x0D, 0xA0, 0x77, 0x20, 0xDA, 0x0A, 0x78, 0x23, 0x77,
  0x37, 0x0A, 0xA0, 0xD7, 0x30, 0x5B, 0x08, 0x77, 0x20, 0x8B, 0x05, 0x74, 0x08, 0xB0, 0xA7, 0x70,
  0xAB, 0x07, 0x76, 0x0A, 0xB0, 0xD0, 0x67, 0x30, 0x60, 0xDB, 0x0A, 0x77, 0x10, 0x8C, 0x82, 0xD9,
  0x42, 0x28, 0x22, 0x49, 0xDC, 0x07, 0x77, 0x30, 0x50, 0xDF, 0xF0, 0xD0, 0x57, 0x76, 0x07, 0x0E,
  0xFB, 0x0E, 0x07, 0x77, 0x73, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x38, 0x09, 0xE5, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_36_alert_error_outline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_alert_error_outline_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_36_alert_error 36x36, 4-bit Alpha,  RLE, 167 bytes.
static const uint8_t ic_filled_36_alert_error_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37, 0x77, 0x30, 0x70, 0xEF, 0xB0, 0xE0,
  0x77, 0x76, 0x05, 0x0D, 0xFF, 0x0D, 0x05, 0x77, 0x30, 0x7F, 0xFC, 0x07, 0x77, 0x10, 0xAF, 0xFE,
  0x0A, 0x76, 0x08, 0xFF, 0xF9, 0x08, 0x74, 0x05, 0xFF, 0xFB, 0x05, 0x73, 0x0D, 0xFF, 0xFB, 0x0D,
  0x72, 0x07, 0xFD, 0x2F, 0xD0, 0x77, 0x10, 0xEF, 0xD2, 0xFD, 0x0E, 0x70, 0x3F, 0xE2, 0xFE, 0x03,
  0x60, 0x8F, 0xE2, 0xFE, 0x08, 0x60, 0xBF, 0xE2, 0xFE, 0x0B, 0x60, 0xDF, 0xE2, 0xFE, 0x0D, 0x60,
  0xEF, 0xE2, 0xFE, 0x0E, 0x60, 0xEF, 0xE2, 0xFE, 0x0E, 0x60, 0xDF, 0xE2, 0xFE, 0x0D, 0x60, 0xBF,
  0xFF, 0xF0, 0xB6, 0x08, 0xFF, 0xFF, 0x08, 0x60, 0x3F, 0xFF, 0xF0, 0x37, 0x0E, 0xFD, 0x2F, 0xD0,
  0xE7, 0x10, 0x7F, 0xD2, 0xFD, 0x07, 0x72, 0x0D, 0xFF, 0xFB, 0x0D, 0x73, 0x05, 0xFF, 0xFB, 0x05,
  0x74, 0x08, 0xFF, 0xF9, 0x08, 0x76, 0x0A, 0xFF, 0xE0, 0xA7, 0x71, 0x07, 0xFF, 0xC0, 0x77, 0x73,
  0x05, 0x0D, 0xFF, 0x0D, 0x05, 0x77, 0x60, 0x70, 0xEF, 0xB0, 0xE0, 0x77, 0x77, 0x38, 0x90, 0x38,
  0xBD, 0xEE, 0xDB, 0x83, 0x80, 0x9E, 0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_36_alert_error() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_alert_error_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_36_alert_notification_important 36x36, 4-bit Alpha,  RLE, 150 bytes.
static const uint8_t ic_filled_36_alert_notification_important_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x00, 0x27, 0x77, 0x75, 0x09, 0xA0, 0x97, 0x77, 0x73, 0x02, 0xC0, 0x27, 0x77,
  0x72, 0x03, 0xC0, 0x37, 0x77, 0x78, 0x11, 0x8D, 0xC8, 0x1D, 0x81, 0x77, 0x74, 0x06, 0x0E, 0xF9,
  0x0E, 0x06, 0x77, 0x72, 0x07, 0xFD, 0x07, 0x77, 0x70, 0x4F, 0xF0, 0x47, 0x76, 0x0D, 0xFF, 0x0C,
  0x77, 0x50, 0x4E, 0x07, 0x20, 0x7E, 0x04, 0x77, 0x40, 0x9E, 0x07, 0x20, 0x7E, 0x09, 0x77, 0x40,
  0xCE, 0x07, 0x20, 0x7E, 0x0C, 0x77, 0x40, 0xEE, 0x07, 0x20, 0x7E, 0x0E, 0x77, 0x4F, 0x07, 0x20,
  0x7F, 0x77, 0x4F, 0x07, 0x20, 0x7F, 0x77, 0x4F, 0xFC, 0x77, 0x4F, 0xFC, 0x77, 0x4F, 0xFC, 0x77,
  0x4F, 0x07, 0x20, 0x7F, 0x77, 0x4F, 0x07, 0x20, 0x7F, 0x77, 0x4F, 0x07, 0x20, 0x7F, 0x77, 0x30,
  0x7F, 0xFC, 0x07, 0x77, 0x10, 0x7F, 0xFE, 0x07, 0x76, 0x07, 0xFF, 0xF9, 0x07, 0x75, 0xFF, 0xFB,
  0x75, 0x80, 0xA4, 0x78, 0x0E, 0x50, 0x0D, 0xC0, 0xD7, 0x77, 0x72, 0x08, 0xC0, 0x87, 0x77, 0x73,
  0x82, 0x8D, 0xD8, 0x80, 0x9F, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_36_alert_notification_important() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_alert_notification_important_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_36_alert_warning_amber 36x36, 4-bit Alpha,  RLE, 231 bytes.
static const uint8_t ic_filled_36_alert_warning_amber_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x00, 0x47, 0x77, 0x76, 0x00, 0xD7, 0x77, 0x75, 0x06, 0xA0, 0x67, 0x77, 0x73,
  0x01, 0x0E, 0xA0, 0xE0, 0x17, 0x77, 0x72, 0x09, 0xC0, 0x97, 0x77, 0x71, 0x03, 0xE0, 0x37, 0x77,
  0x70, 0xBA, 0x00, 0xAA, 0x0B, 0x77, 0x76, 0x05, 0xB0, 0x02, 0xB0, 0x57, 0x77, 0x50, 0xDA, 0x08,
  0x20, 0x8A, 0x0D, 0x77, 0x74, 0x07, 0xA0, 0xE4, 0x0E, 0xA0, 0x77, 0x77, 0x20, 0x10, 0xEA, 0x05,
  0x40, 0x5A, 0x0E, 0x01, 0x77, 0x71, 0x0A, 0xA0, 0xC6, 0x0C, 0xA0, 0xA7, 0x77, 0x03, 0xB8, 0x13,
  0x07, 0xA8, 0x17, 0x03, 0xB0, 0x37, 0x76, 0x0C, 0xA0, 0xA2, 0x07, 0xA0, 0x72, 0x0A, 0xA0, 0xC7,
  0x75, 0x06, 0xA0, 0xE0, 0x12, 0x07, 0xA0, 0x72, 0x01, 0x0E, 0xA0, 0x67, 0x74, 0x0E, 0xA0, 0x73,
  0x07, 0xA0, 0x73, 0x07, 0xA0, 0xE7, 0x73, 0x08, 0xA0, 0xD4, 0x07, 0xA0, 0x74, 0x0D, 0xA0, 0x87,
  0x71, 0x02, 0xB0, 0x54, 0x07, 0xA0, 0x74, 0x05, 0xB0, 0x27, 0x70, 0xBA, 0x0B, 0x50, 0x7A, 0x07,
  0x50, 0xBA, 0x0B, 0x76, 0x04, 0xB0, 0x25, 0x82, 0x37, 0x73, 0x50, 0x2B, 0x04, 0x75, 0x0D, 0xA0,
  0x97, 0x72, 0x09, 0xA0, 0xD7, 0x40, 0x6A, 0x0E, 0x01, 0x60, 0x7A, 0x07, 0x60, 0x10, 0xEA, 0x06,
  0x72, 0x01, 0x0E, 0xA0, 0x67, 0x07, 0xA0, 0x77, 0x06, 0xA0, 0xE0, 0x17, 0x10, 0x9A, 0x0D, 0x71,
  0x07, 0xA0, 0x77, 0x10, 0xDA, 0x09, 0x70, 0x3B, 0x04, 0x77, 0x60, 0x4B, 0x03, 0x60, 0xBA, 0x0E,
  0x80, 0xA2, 0x70, 0xEA, 0x0B, 0x50, 0x5F, 0xFF, 0xFA, 0x05, 0x40, 0xDF, 0xFF, 0xFA, 0x0D, 0x30,
  0x28, 0x0B, 0x47, 0x02, 0x80, 0xA9, 0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_36_alert_warning_amber() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_alert_warning_amber_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_36_alert_warning 36x36, 4-bit Alpha,  RLE, 157 bytes.
static const uint8_t ic_filled_36_alert_warning_data[] PROGMEM = {
  0x80, 0x9F, 0x10, 0x00, 0x47, 0x77, 0x76, 0x00, 0xD7, 0x77, 0x75, 0x07, 0xA0, 0x77, 0x77, 0x73,
  0x01, 0x0E, 0xA0, 0xE0, 0x17, 0x77, 0x72, 0x09, 0xC0, 0x97, 0x77, 0x71, 0x03, 0xE0, 0x37, 0x77,
  0x70, 0xCE, 0x0C, 0x77, 0x76, 0x06, 0xF9, 0x06, 0x77, 0x74, 0x01, 0x0E, 0xF9, 0x0E, 0x01, 0x77,
  0x73, 0x08, 0xFB, 0x08, 0x77, 0x72, 0x02, 0xFD, 0x02, 0x77, 0x71, 0x0B, 0xFD, 0x0B, 0x77, 0x70,
  0x5E, 0x2E, 0x05, 0x77, 0x60, 0xDE, 0x2E, 0x0D, 0x77, 0x50, 0x7F, 0x2F, 0x07, 0x77, 0x30, 0x10,
  0xEF, 0x2F, 0x0E, 0x01, 0x77, 0x20, 0xAF, 0x92, 0xF9, 0x0A, 0x77, 0x10, 0x4F, 0xA2, 0xFA, 0x04,
  0x77, 0x0C, 0xFA, 0x2F, 0xA0, 0xC7, 0x60, 0x6F, 0xFF, 0x90, 0x67, 0x40, 0x10, 0xEF, 0xFF, 0x90,
  0xE0, 0x17, 0x30, 0x9F, 0xFF, 0xB0, 0x97, 0x20, 0x3F, 0xD2, 0xFD, 0x03, 0x71, 0x0B, 0xFD, 0x2F,
  0xD0, 0xB7, 0x05, 0xFF, 0xFF, 0x05, 0x60, 0xDF, 0xFF, 0xF0, 0xD5, 0x08, 0xFF, 0xFF, 0xA0, 0x83,
  0x02, 0xFF, 0xFF, 0xC0, 0x22, 0x0A, 0xFF, 0xFF, 0xC0, 0xA8, 0x0A, 0x95, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_36_alert_warning() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_filled_36_alert_warning_data, Alpha4(color::Black));
  return value;
}
