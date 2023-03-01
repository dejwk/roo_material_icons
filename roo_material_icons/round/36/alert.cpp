#include "alert.h"

using namespace roo_display;

// Image file ic_round_36_alert_add_alert 36x36, 4-bit Alpha,  RLE, 166 bytes.
static const uint8_t ic_round_36_alert_add_alert_data[] PROGMEM = {
  0x80, 0x9F, 0x00, 0x82, 0x5D, 0xD5, 0x77, 0x77, 0x30, 0x1C, 0x01, 0x77, 0x77, 0x20, 0x3C, 0x03,
  0x77, 0x77, 0x10, 0x30, 0xAC, 0x0A, 0x03, 0x77, 0x75, 0x02, 0x0B, 0xF9, 0x0B, 0x02, 0x77, 0x72,
  0x03, 0x0E, 0xFB, 0x0E, 0x03, 0x77, 0x70, 0x20, 0xEF, 0xD0, 0xE0, 0x27, 0x76, 0x0B, 0xFF, 0x0B,
  0x77, 0x50, 0x4F, 0xFA, 0x04, 0x77, 0x40, 0x9F, 0xFA, 0x09, 0x77, 0x40, 0xDF, 0x00, 0x9F, 0x0D,
  0x77, 0x40, 0xEE, 0x09, 0x20, 0x9E, 0x0E, 0x77, 0x4F, 0x07, 0x20, 0x7F, 0x77, 0x4D, 0x81, 0x97,
  0x32, 0x81, 0x37, 0x9D, 0x77, 0x4C, 0x09, 0x71, 0x09, 0xC7, 0x74, 0xC0, 0x97, 0x10, 0x9C, 0x77,
  0x4D, 0x81, 0x97, 0x32, 0x81, 0x37, 0x9D, 0x77, 0x4F, 0x07, 0x20, 0x7F, 0x77, 0x4F, 0x09, 0x20,
  0x9F, 0x77, 0x4F, 0x90, 0x09, 0xF9, 0x77, 0x4F, 0xFC, 0x77, 0x4F, 0xFC, 0x77, 0x18, 0x12, 0x77,
  0xFF, 0xC8, 0x17, 0x72, 0x75, 0x0D, 0xFF, 0xF9, 0x0D, 0x75, 0x0D, 0xFF, 0xF9, 0x0D, 0x75, 0x02,
  0x80, 0xA2, 0x70, 0x28, 0x0E, 0x50, 0x0D, 0xC0, 0xD7, 0x77, 0x72, 0x08, 0xC0, 0x87, 0x77, 0x73,
  0x82, 0x8D, 0xD8, 0x80, 0x9F, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_36_alert_add_alert() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_add_alert_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_36_alert_auto_delete 36x36, 4-bit Alpha,  RLE, 251 bytes.
static const uint8_t ic_round_36_alert_auto_delete_data[] PROGMEM = {
  0x80, 0xD0, 0x00, 0x68, 0x02, 0x70, 0x67, 0x77, 0x60, 0xBF, 0x90, 0xB7, 0x76, 0x02, 0x0D, 0xFF,
  0xC0, 0xD0, 0x27, 0x70, 0x6F, 0xFE, 0x06, 0x77, 0x02, 0x0D, 0xFF, 0xC0, 0xD0, 0x28, 0x0E, 0x10,
  0x01, 0x06, 0x80, 0x90, 0x70, 0x60, 0x17, 0x75, 0x03, 0x0E, 0xFF, 0x0E, 0x03, 0x77, 0x40, 0xBF,
  0xFA, 0x0B, 0x77, 0x4F, 0xFC, 0x77, 0x4F, 0xFC, 0x77, 0x4F, 0xFC, 0x77, 0x4F, 0xFC, 0x84, 0x25,
  0x77, 0x52, 0x75, 0xFF, 0xFB, 0x0D, 0x07, 0x73, 0xFF, 0xFD, 0x0D, 0x03, 0x71, 0xFF, 0xC8, 0x4E,
  0xA8, 0x8A, 0xEC, 0x05, 0x7F, 0xFA, 0x0E, 0x06, 0x60, 0x60, 0xEB, 0x03, 0x6F, 0xF9, 0x0C, 0x01,
  0x28, 0x13, 0xE7, 0x30, 0x10, 0xCA, 0x0D, 0x6F, 0xF0, 0xE0, 0x13, 0x81, 0x7F, 0xB4, 0x01, 0x0E,
  0xA0, 0x75, 0xFF, 0x06, 0x48, 0x17, 0xFB, 0x50, 0x6A, 0x0D, 0x5F, 0xE0, 0xE5, 0x81, 0x7F, 0xB6,
  0x0E, 0xA0, 0x24, 0xFE, 0x0A, 0x58, 0x17, 0xFB, 0x60, 0xAA, 0x05, 0x4F, 0xE0, 0x85, 0x81, 0x7F,
  0xB6, 0x08, 0xA0, 0x64, 0xFE, 0x08, 0x58, 0x27, 0xFE, 0x35, 0x08, 0xA0, 0x64, 0xFE, 0x0A, 0x50,
  0x20, 0xEA, 0x0A, 0x01, 0x30, 0xAA, 0x05, 0x40, 0xBF, 0xD0, 0xE6, 0x01, 0x0A, 0xA0, 0xE0, 0x42,
  0x0E, 0xA0, 0x24, 0x03, 0x0E, 0xFD, 0x06, 0x78, 0x43, 0xCF, 0x70, 0x6A, 0x0D, 0x60, 0x10, 0x68,
  0x04, 0x70, 0xAA, 0x0E, 0x01, 0x71, 0x82, 0x30, 0x1E, 0xA0, 0x77, 0x73, 0x0D, 0xA0, 0xC0, 0x17,
  0x10, 0x10, 0xCA, 0x0D, 0x77, 0x40, 0x3B, 0x0E, 0x06, 0x60, 0x60, 0xEB, 0x03, 0x77, 0x50, 0x5C,
  0x84, 0xEA, 0x88, 0xAE, 0xC0, 0x57, 0x77, 0x03, 0x0D, 0xFB, 0x0D, 0x03, 0x77, 0x73, 0x07, 0x0D,
  0xE0, 0xD0, 0x77, 0x77, 0x78, 0x42, 0x57, 0x75, 0x28, 0x0D, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_36_alert_auto_delete() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_auto_delete_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_36_alert_error_outline 36x36, 4-bit Alpha,  RLE, 269 bytes.
static const uint8_t ic_round_36_alert_error_outline_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37, 0x77, 0x30, 0x70, 0xEF, 0xB0, 0xE0,
  0x77, 0x76, 0x05, 0x0D, 0xFF, 0x0D, 0x05, 0x77, 0x30, 0x8C, 0x82, 0xD9, 0x42, 0x28, 0x22, 0x49,
  0xDC, 0x07, 0x77, 0x10, 0xAB, 0x0D, 0x06, 0x73, 0x06, 0x0D, 0xB0, 0xA7, 0x60, 0x8B, 0x0A, 0x77,
  0x0A, 0xB0, 0x77, 0x40, 0x5B, 0x08, 0x77, 0x20, 0x8B, 0x05, 0x73, 0x0D, 0xA0, 0xA7, 0x10, 0x05,
  0x71, 0x0A, 0xA0, 0xD7, 0x20, 0x7A, 0x0D, 0x71, 0x05, 0xA0, 0x57, 0x10, 0xDA, 0x07, 0x71, 0x0E,
  0xA0, 0x67, 0x10, 0x7A, 0x07, 0x71, 0x06, 0xA0, 0xE7, 0x03, 0xA0, 0xD7, 0x20, 0x7A, 0x07, 0x72,
  0x0D, 0xA0, 0x36, 0x08, 0xA0, 0x87, 0x20, 0x7A, 0x07, 0x72, 0x08, 0xA0, 0x86, 0x0B, 0xA0, 0x47,
  0x20, 0x7A, 0x07, 0x72, 0x04, 0xA0, 0xB6, 0x0D, 0xA0, 0x27, 0x20, 0x7A, 0x07, 0x72, 0x02, 0xA0,
  0xD6, 0x0E, 0xA7, 0x30, 0x7A, 0x07, 0x73, 0xA0, 0xE6, 0x0E, 0xA7, 0x30, 0x5A, 0x05, 0x73, 0xA0,
  0xE6, 0x0D, 0xA0, 0x27, 0x30, 0x05, 0x73, 0x02, 0xA0, 0xD6, 0x0B, 0xA0, 0x47, 0x77, 0x10, 0x4A,
  0x0B, 0x60, 0x8A, 0x08, 0x77, 0x71, 0x08, 0xA0, 0x86, 0x03, 0xA0, 0xD7, 0x28, 0x23, 0x77, 0x37,
  0x20, 0xDA, 0x03, 0x70, 0xEA, 0x06, 0x71, 0x07, 0xA0, 0x77, 0x10, 0x6A, 0x0E, 0x71, 0x07, 0xA0,
  0xD7, 0x10, 0x7A, 0x07, 0x71, 0x0D, 0xA0, 0x77, 0x20, 0xDA, 0x0A, 0x78, 0x23, 0x77, 0x37, 0x0A,
  0xA0, 0xD7, 0x30, 0x5B, 0x08, 0x77, 0x20, 0x8B, 0x05, 0x74, 0x08, 0xB0, 0xA7, 0x70, 0xAB, 0x07,
  0x76, 0x0A, 0xB0, 0xD0, 0x67, 0x30, 0x60, 0xDB, 0x0A, 0x77, 0x10, 0x8C, 0x82, 0xD9, 0x42, 0x28,
  0x22, 0x49, 0xDC, 0x07, 0x77, 0x30, 0x50, 0xDF, 0xF0, 0xD0, 0x57, 0x76, 0x07, 0x0E, 0xFB, 0x0E,
  0x07, 0x77, 0x73, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x38, 0x09, 0xE5, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_36_alert_error_outline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_error_outline_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_36_alert_error 36x36, 4-bit Alpha,  RLE, 196 bytes.
static const uint8_t ic_round_36_alert_error_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8, 0x37, 0x77, 0x30, 0x70, 0xEF, 0xB0, 0xE0,
  0x77, 0x76, 0x05, 0x0D, 0xFF, 0x0D, 0x05, 0x77, 0x30, 0x7F, 0xFC, 0x07, 0x77, 0x10, 0xAF, 0xFE,
  0x0A, 0x76, 0x08, 0xFF, 0xF9, 0x08, 0x74, 0x05, 0xFF, 0xFB, 0x05, 0x73, 0x0D, 0xFC, 0x00, 0x9F,
  0xC0, 0xD7, 0x20, 0x7F, 0xC0, 0x92, 0x09, 0xFC, 0x07, 0x71, 0x0E, 0xFC, 0x07, 0x20, 0x7F, 0xC0,
  0xE7, 0x03, 0xFD, 0x07, 0x20, 0x7F, 0xD0, 0x36, 0x08, 0xFD, 0x07, 0x20, 0x7F, 0xD0, 0x86, 0x0B,
  0xFD, 0x07, 0x20, 0x7F, 0xD0, 0xB6, 0x0D, 0xFD, 0x07, 0x20, 0x7F, 0xD0, 0xD6, 0x0E, 0xFD, 0x07,
  0x20, 0x7F, 0xD0, 0xE6, 0x0E, 0xFD, 0x09, 0x20, 0x9F, 0xD0, 0xE6, 0x0D, 0xFE, 0x00, 0x9F, 0xE0,
  0xD6, 0x0B, 0xFF, 0xFF, 0x0B, 0x60, 0x8F, 0xFF, 0xF0, 0x86, 0x03, 0xFD, 0x82, 0xB7, 0x7B, 0xFD,
  0x03, 0x70, 0xEF, 0xC0, 0x72, 0x07, 0xFC, 0x0E, 0x71, 0x07, 0xFC, 0x07, 0x20, 0x7F, 0xC0, 0x77,
  0x20, 0xDF, 0xB8, 0x2B, 0x77, 0xBF, 0xB0, 0xD7, 0x30, 0x5F, 0xFF, 0xB0, 0x57, 0x40, 0x8F, 0xFF,
  0x90, 0x87, 0x60, 0xAF, 0xFE, 0x0A, 0x77, 0x10, 0x7F, 0xFC, 0x07, 0x77, 0x30, 0x50, 0xDF, 0xF0,
  0xD0, 0x57, 0x76, 0x07, 0x0E, 0xFB, 0x0E, 0x07, 0x77, 0x73, 0x89, 0x03, 0x8B, 0xDE, 0xED, 0xB8,
  0x38, 0x09, 0xE5, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_36_alert_error() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_error_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_36_alert_notification_important 36x36, 4-bit Alpha,  RLE, 191 bytes.
static const uint8_t ic_round_36_alert_notification_important_data[] PROGMEM = {
  0x80, 0x9A, 0x40, 0x82, 0x2A, 0xA2, 0x77, 0x77, 0x40, 0xEA, 0x0E, 0x77, 0x77, 0x30, 0x3C, 0x03,
  0x77, 0x77, 0x20, 0x3C, 0x03, 0x77, 0x77, 0x10, 0x50, 0xBC, 0x0B, 0x05, 0x77, 0x75, 0x06, 0x0E,
  0xF9, 0x0E, 0x06, 0x77, 0x72, 0x0A, 0xFD, 0x0A, 0x77, 0x70, 0xBF, 0xF0, 0xB7, 0x75, 0x08, 0xFF,
  0xA0, 0x87, 0x73, 0x03, 0xFF, 0xC0, 0x37, 0x72, 0x0A, 0xF8, 0x2D, 0x22, 0xDF, 0x0A, 0x77, 0x2F,
  0x90, 0x82, 0x08, 0xF9, 0x77, 0x10, 0x4F, 0x90, 0x72, 0x07, 0xF9, 0x04, 0x77, 0x06, 0xF9, 0x07,
  0x20, 0x7F, 0x90, 0x67, 0x70, 0x7F, 0x90, 0x82, 0x08, 0xF9, 0x07, 0x77, 0x07, 0xF9, 0x82, 0xD2,
  0x2D, 0xF9, 0x07, 0x77, 0x07, 0xFF, 0xE0, 0x77, 0x70, 0x7F, 0xFE, 0x07, 0x77, 0x07, 0xFF, 0xE0,
  0x77, 0x70, 0x7F, 0x90, 0x72, 0x07, 0xF9, 0x07, 0x77, 0x07, 0xF9, 0x07, 0x20, 0x7F, 0x90, 0x77,
  0x70, 0x7F, 0x90, 0x72, 0x07, 0xF9, 0x07, 0x77, 0x07, 0xFF, 0xE0, 0x77, 0x70, 0x9F, 0xFE, 0x09,
  0x76, 0x07, 0xFF, 0xF9, 0x07, 0x74, 0x06, 0xFF, 0xFB, 0x06, 0x73, 0x0C, 0xFF, 0xFB, 0x0C, 0x73,
  0x06, 0x0E, 0xFF, 0xF9, 0x0E, 0x06, 0x80, 0xE4, 0x08, 0x02, 0x77, 0x77, 0x72, 0x0B, 0xC0, 0xB7,
  0x77, 0x72, 0x03, 0x0E, 0xA0, 0xE0, 0x37, 0x77, 0x73, 0x82, 0x16, 0x61, 0x80, 0xE0, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_36_alert_notification_important() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_notification_important_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_36_alert_warning_amber 36x36, 4-bit Alpha,  RLE, 210 bytes.
static const uint8_t ic_round_36_alert_warning_amber_data[] PROGMEM = {
  0x80, 0xBC, 0x40, 0x82, 0x8E, 0xE8, 0x77, 0x77, 0x30, 0x9C, 0x09, 0x77, 0x77, 0x10, 0x2E, 0x02,
  0x77, 0x77, 0x0B, 0xA0, 0x0A, 0xA0, 0xB7, 0x77, 0x60, 0x5B, 0x00, 0x2B, 0x05, 0x77, 0x75, 0x0D,
  0xA0, 0x82, 0x08, 0xA0, 0xD7, 0x77, 0x40, 0x7A, 0x0E, 0x40, 0xEA, 0x07, 0x77, 0x72, 0x01, 0x0E,
  0xA0, 0x54, 0x05, 0xA0, 0xE0, 0x17, 0x77, 0x10, 0xAA, 0x0C, 0x60, 0xCA, 0x0A, 0x77, 0x70, 0x3B,
  0x86, 0x30, 0x2D, 0xD2, 0x03, 0xB0, 0x37, 0x76, 0x0C, 0xA0, 0xA2, 0x07, 0xA0, 0x72, 0x0A, 0xA0,
  0xC7, 0x75, 0x06, 0xA0, 0xE0, 0x12, 0x07, 0xA0, 0x72, 0x01, 0x0E, 0xA0, 0x67, 0x74, 0x0E, 0xA0,
  0x73, 0x07, 0xA0, 0x73, 0x07, 0xA0, 0xE7, 0x73, 0x08, 0xA0, 0xD4, 0x07, 0xA0, 0x74, 0x0D, 0xA0,
  0x87, 0x71, 0x02, 0xB0, 0x54, 0x82, 0x2D, 0xD2, 0x40, 0x5B, 0x02, 0x77, 0x0A, 0xA0, 0xB7, 0x70,
  0xBA, 0x0A, 0x76, 0x04, 0xB0, 0x27, 0x70, 0x2B, 0x04, 0x75, 0x0D, 0xA0, 0x97, 0x72, 0x09, 0xA0,
  0xD7, 0x40, 0x6A, 0x0E, 0x01, 0x60, 0x7A, 0x07, 0x60, 0x10, 0xEA, 0x06, 0x72, 0x01, 0x0E, 0xA0,
  0x67, 0x07, 0xA0, 0x77, 0x06, 0xA0, 0xE0, 0x17, 0x10, 0x9A, 0x0D, 0x71, 0x07, 0xA0, 0x77, 0x10,
  0xDA, 0x09, 0x71, 0xB0, 0x47, 0x76, 0x04, 0xB0, 0x16, 0x03, 0xA0, 0xE8, 0x0A, 0x27, 0x0E, 0xA0,
  0x46, 0x01, 0xFF, 0xFF, 0x01, 0x70, 0x7F, 0xFF, 0xD0, 0x77, 0x20, 0x38, 0x0A, 0x47, 0x03, 0x80,
  0xAA, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_36_alert_warning_amber() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_warning_amber_data, Alpha4(color::Black));
  return value;
}
// Image file ic_round_36_alert_warning 36x36, 4-bit Alpha,  RLE, 157 bytes.
static const uint8_t ic_round_36_alert_warning_data[] PROGMEM = {
  0x80, 0xBC, 0x40, 0x82, 0x8E, 0xE8, 0x77, 0x77, 0x30, 0x9C, 0x09, 0x77, 0x77, 0x10, 0x2E, 0x02,
  0x77, 0x77, 0x0B, 0xE0, 0xB7, 0x77, 0x60, 0x5F, 0x90, 0x57, 0x77, 0x50, 0xDF, 0x90, 0xD7, 0x77,
  0x40, 0x7F, 0xB0, 0x77, 0x77, 0x20, 0x10, 0xEF, 0xB0, 0xE0, 0x17, 0x77, 0x10, 0xAF, 0xD0, 0xA7,
  0x77, 0x03, 0xD8, 0x2D, 0x22, 0xDD, 0x03, 0x77, 0x60, 0xCD, 0x08, 0x20, 0x8D, 0x0C, 0x77, 0x50,
  0x6E, 0x07, 0x20, 0x7E, 0x06, 0x77, 0x40, 0xEE, 0x07, 0x20, 0x7E, 0x0E, 0x77, 0x30, 0x8F, 0x08,
  0x20, 0x8F, 0x08, 0x77, 0x10, 0x2F, 0x98, 0x2D, 0x22, 0xDF, 0x90, 0x27, 0x70, 0xAF, 0xFE, 0x0A,
  0x76, 0x04, 0xFF, 0xF9, 0x04, 0x75, 0x0D, 0xFF, 0xF9, 0x0D, 0x74, 0x06, 0xFB, 0x07, 0x20, 0x7F,
  0xB0, 0x67, 0x20, 0x10, 0xEF, 0xB0, 0x72, 0x07, 0xFB, 0x0E, 0x01, 0x71, 0x09, 0xFC, 0x07, 0x20,
  0x7F, 0xC0, 0x97, 0x1F, 0xFF, 0xF0, 0x16, 0x03, 0xFF, 0xFF, 0x04, 0x60, 0x1F, 0xFF, 0xF0, 0x17,
  0x07, 0xFF, 0xFD, 0x07, 0x72, 0x03, 0x80, 0xA4, 0x70, 0x38, 0x0A, 0xA1, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_36_alert_warning() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      36, 36, ic_round_36_alert_warning_data, Alpha4(color::Black));
  return value;
}
