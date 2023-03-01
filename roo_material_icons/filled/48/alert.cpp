#include "alert.h"

using namespace roo_display;

// Image file ic_filled_48_alert_add_alert 48x48, 4-bit Alpha,  RLE, 238 bytes.
static const uint8_t ic_filled_48_alert_add_alert_data[] PROGMEM = {
  0x80, 0xBA, 0x20, 0x82, 0x8E, 0xE8, 0x80, 0xC7, 0x00, 0x9C, 0x09, 0x80, 0xC6, 0x0E, 0x80, 0xC5,
  0x00, 0x2E, 0x02, 0x80, 0xC4, 0x00, 0x5E, 0x05, 0x80, 0xC1, 0x08, 0x11, 0x9E, 0xF9, 0x81, 0xE9,
  0x17, 0x77, 0x75, 0x07, 0x0E, 0xFD, 0x0E, 0x07, 0x77, 0x77, 0x20, 0x10, 0xBF, 0xFA, 0x0B, 0x01,
  0x77, 0x76, 0x01, 0x0C, 0xFF, 0xC0, 0xC0, 0x17, 0x77, 0x50, 0xBF, 0xFE, 0x0B, 0x77, 0x74, 0x07,
  0xFF, 0xF9, 0x07, 0x77, 0x72, 0x01, 0xFF, 0xFB, 0x01, 0x77, 0x71, 0x08, 0xFB, 0x4F, 0xB0, 0x87,
  0x77, 0x10, 0xEF, 0xB4, 0xFB, 0x0E, 0x77, 0x70, 0x4F, 0xC4, 0xFC, 0x04, 0x77, 0x60, 0x7F, 0xC4,
  0xFC, 0x07, 0x77, 0x60, 0x9F, 0xC4, 0xFC, 0x09, 0x77, 0x60, 0xBF, 0xC4, 0xFC, 0x0B, 0x77, 0x60,
  0xBD, 0x77, 0x2D, 0x0B, 0x77, 0x60, 0xBD, 0x77, 0x2D, 0x0B, 0x77, 0x60, 0xBD, 0x77, 0x2D, 0x0B,
  0x77, 0x60, 0xBD, 0x77, 0x2D, 0x0B, 0x77, 0x60, 0xBF, 0xC4, 0xFC, 0x0B, 0x77, 0x60, 0xBF, 0xC4,
  0xFC, 0x0B, 0x77, 0x60, 0xBF, 0xC4, 0xFC, 0x0B, 0x77, 0x60, 0xBF, 0xC4, 0xFC, 0x0B, 0x77, 0x60,
  0xBF, 0xC4, 0xFC, 0x0B, 0x77, 0x60, 0xBF, 0xC4, 0xFC, 0x0B, 0x77, 0x60, 0xBF, 0xFF, 0xD0, 0xB7,
  0x76, 0x0C, 0xFF, 0xFD, 0x0C, 0x77, 0x50, 0x9F, 0xFF, 0xF0, 0x97, 0x73, 0x09, 0xFF, 0xFF, 0xA0,
  0x97, 0x71, 0x09, 0xFF, 0xFF, 0xC0, 0x97, 0x60, 0x9F, 0xFF, 0xFE, 0x09, 0x75, 0x80, 0xC0, 0xF7,
  0x58, 0x0C, 0x0F, 0x80, 0x9E, 0x60, 0x0D, 0xE0, 0xD8, 0x0C, 0x40, 0x09, 0xE0, 0x98, 0x0C, 0x40,
  0x01, 0x0E, 0xC0, 0xE0, 0x18, 0x0C, 0x50, 0x84, 0x1A, 0xDD, 0xA1, 0x80, 0x9E, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_48_alert_add_alert() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      48, 48, ic_filled_48_alert_add_alert_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_48_alert_auto_delete 48x48, 4-bit Alpha,  RLE, 302 bytes.
static const uint8_t ic_filled_48_alert_auto_delete_data[] PROGMEM = {
  0x80, 0x9C, 0x60, 0x07, 0xFB, 0x07, 0x77, 0x77, 0x70, 0x7F, 0xD0, 0x77, 0x77, 0x6F, 0xFF, 0xF7,
  0x76, 0xFF, 0xFF, 0x77, 0x6F, 0xFF, 0xF7, 0x76, 0xFF, 0xFF, 0x80, 0x9E, 0x20, 0xFF, 0xFB, 0x77,
  0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x77,
  0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x87,
  0x8B, 0xDF, 0xED, 0xB7, 0x37, 0x71, 0xFF, 0xFF, 0xD0, 0xD0, 0x57, 0x6F, 0xFF, 0xFF, 0x0C, 0x02,
  0x74, 0x80, 0xC0, 0xF0, 0xE0, 0x37, 0x3F, 0xFF, 0xB8, 0x1A, 0x52, 0x28, 0x12, 0x5A, 0xE0, 0x37,
  0x2F, 0xFF, 0x90, 0xA0, 0x27, 0x10, 0x20, 0xAC, 0x0E, 0x02, 0x71, 0xFF, 0xF0, 0x74, 0xB5, 0x07,
  0xC0, 0xC7, 0x1F, 0xFE, 0x07, 0x5B, 0x60, 0x7C, 0x05, 0x7F, 0xFD, 0x0A, 0x6B, 0x70, 0xAB, 0x0D,
  0x7F, 0xFD, 0x02, 0x6B, 0x70, 0x2C, 0x03, 0x6F, 0xFC, 0x0A, 0x7B, 0x71, 0x0A, 0xB0, 0x76, 0xFF,
  0xC0, 0x57, 0xB7, 0x10, 0x5B, 0x0B, 0x6F, 0xFC, 0x02, 0x7B, 0x71, 0x02, 0xB0, 0xD6, 0xFF, 0xC7,
  0x1B, 0x72, 0xB0, 0xE6, 0xFF, 0xC7, 0x1B, 0x04, 0x71, 0xB0, 0xE6, 0xFF, 0xC0, 0x27, 0xC0, 0xB0,
  0x25, 0x02, 0xB0, 0xD6, 0x0D, 0xFF, 0xB0, 0x57, 0x04, 0x0D, 0xC0, 0x84, 0x05, 0xB0, 0xB6, 0x0A,
  0xFF, 0xB0, 0xA7, 0x20, 0x70, 0xEB, 0x0E, 0x05, 0x20, 0xAB, 0x07, 0x60, 0x10, 0xEF, 0xFB, 0x02,
  0x72, 0x01, 0x09, 0xB8, 0x15, 0x02, 0xC0, 0x37, 0x81, 0x1A, 0xDF, 0xF9, 0x0A, 0x74, 0x81, 0x3C,
  0xA2, 0x0A, 0xB0, 0xD7, 0x77, 0x10, 0x5C, 0x07, 0x77, 0x07, 0xC0, 0x57, 0x77, 0x20, 0xCC, 0x07,
  0x75, 0x07, 0xC0, 0xC7, 0x77, 0x30, 0x20, 0xEC, 0x0A, 0x02, 0x71, 0x02, 0x0A, 0xC0, 0xE0, 0x27,
  0x77, 0x40, 0x40, 0xED, 0x81, 0xA5, 0x22, 0x81, 0x25, 0xAE, 0x03, 0x77, 0x76, 0x04, 0x0E, 0xFF,
  0xA0, 0xE0, 0x37, 0x77, 0x71, 0x02, 0x0C, 0xFF, 0x0C, 0x02, 0x77, 0x77, 0x40, 0x50, 0xDF, 0xB0,
  0xD0, 0x58, 0x0C, 0x00, 0x89, 0x03, 0x8B, 0xDF, 0xED, 0xB7, 0x38, 0x09, 0xC7, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_48_alert_auto_delete() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      48, 48, ic_filled_48_alert_auto_delete_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_48_alert_error_outline 48x48, 4-bit Alpha,  RLE, 349 bytes.
static const uint8_t ic_filled_48_alert_error_outline_data[] PROGMEM = {
  0x80, 0xB9, 0x60, 0x83, 0x37, 0xAC, 0xEA, 0x83, 0xDC, 0xA7, 0x37, 0x77, 0x75, 0x81, 0x18, 0xDF,
  0xD8, 0x1D, 0x81, 0x77, 0x77, 0x01, 0x09, 0xFF, 0xC0, 0x90, 0x17, 0x77, 0x40, 0x50, 0xEF, 0xFE,
  0x0E, 0x05, 0x77, 0x72, 0x09, 0xF8, 0x2B, 0x63, 0x22, 0x82, 0x23, 0x6B, 0xF0, 0x97, 0x77, 0x0B,
  0xD0, 0xD0, 0x67, 0x50, 0x60, 0xDD, 0x0A, 0x77, 0x50, 0xBD, 0x07, 0x77, 0x20, 0x7D, 0x0A, 0x77,
  0x30, 0x9C, 0x0D, 0x03, 0x77, 0x40, 0x30, 0xDC, 0x09, 0x77, 0x10, 0x5C, 0x0C, 0x01, 0x77, 0x60,
  0x10, 0xCC, 0x05, 0x76, 0x01, 0x0E, 0xB0, 0xD0, 0x17, 0x77, 0x10, 0x10, 0xDB, 0x0E, 0x01, 0x75,
  0x09, 0xC0, 0x37, 0x3C, 0x73, 0x03, 0xC0, 0x97, 0x40, 0x1C, 0x07, 0x74, 0xC7, 0x40, 0x7C, 0x01,
  0x73, 0x08, 0xB0, 0xD7, 0x5C, 0x75, 0x0D, 0xB0, 0x87, 0x30, 0xDB, 0x06, 0x75, 0xC7, 0x50, 0x6B,
  0x0D, 0x72, 0x03, 0xC7, 0x6C, 0x76, 0xC0, 0x37, 0x10, 0x7B, 0x0B, 0x76, 0xC7, 0x60, 0xBB, 0x07,
  0x71, 0x0A, 0xB0, 0x67, 0x6C, 0x76, 0x06, 0xB0, 0xA7, 0x10, 0xCB, 0x03, 0x76, 0xC7, 0x60, 0x3B,
  0x0C, 0x71, 0x0E, 0xB0, 0x27, 0x6C, 0x76, 0x02, 0xB0, 0xE7, 0x1C, 0x77, 0xC7, 0x7C, 0x71, 0xC7,
  0x7C, 0x77, 0xC7, 0x10, 0xEB, 0x02, 0x76, 0xC7, 0x60, 0x2B, 0x0E, 0x71, 0x0C, 0xB0, 0x37, 0x77,
  0x72, 0x03, 0xB0, 0xC7, 0x10, 0xAB, 0x06, 0x77, 0x77, 0x20, 0x6B, 0x0A, 0x71, 0x07, 0xB0, 0xB7,
  0x77, 0x72, 0x0B, 0xB0, 0x77, 0x10, 0x3C, 0x77, 0x77, 0x2C, 0x03, 0x72, 0x0D, 0xB0, 0x67, 0x5C,
  0x75, 0x06, 0xB0, 0xD7, 0x30, 0x8B, 0x0D, 0x75, 0xC7, 0x50, 0xDB, 0x08, 0x73, 0x01, 0xC0, 0x77,
  0x4C, 0x74, 0x07, 0xC0, 0x17, 0x40, 0x9C, 0x03, 0x73, 0xC7, 0x30, 0x3C, 0x09, 0x75, 0x01, 0x0E,
  0xB0, 0xD0, 0x17, 0x77, 0x10, 0x10, 0xDB, 0x0E, 0x01, 0x76, 0x05, 0xC0, 0xC0, 0x17, 0x76, 0x01,
  0x0C, 0xC0, 0x57, 0x71, 0x09, 0xC0, 0xD0, 0x37, 0x74, 0x03, 0x0D, 0xC0, 0x97, 0x73, 0x0B, 0xD0,
  0x77, 0x72, 0x07, 0xD0, 0xA7, 0x75, 0x0B, 0xD0, 0xD0, 0x67, 0x50, 0x60, 0xDD, 0x0A, 0x77, 0x70,
  0x9F, 0x82, 0xB6, 0x32, 0x28, 0x22, 0x36, 0xBF, 0x09, 0x77, 0x72, 0x05, 0x0E, 0xFF, 0xE0, 0xE0,
  0x57, 0x77, 0x40, 0x10, 0x9F, 0xFC, 0x09, 0x01, 0x77, 0x77, 0x81, 0x18, 0xDF, 0xD8, 0x1D, 0x81,
  0x77, 0x77, 0x58, 0x33, 0x7A, 0xCE, 0xA8, 0x3D, 0xCA, 0x73, 0x80, 0xB9, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_48_alert_error_outline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      48, 48, ic_filled_48_alert_error_outline_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_48_alert_error 48x48, 4-bit Alpha,  RLE, 264 bytes.
static const uint8_t ic_filled_48_alert_error_data[] PROGMEM = {
  0x80, 0xB9, 0x60, 0x83, 0x37, 0xAC, 0xDA, 0x83, 0xDC, 0xA7, 0x37, 0x77, 0x75, 0x81, 0x18, 0xDF,
  0xD8, 0x1D, 0x81, 0x77, 0x77, 0x01, 0x09, 0xFF, 0xC0, 0x90, 0x17, 0x77, 0x40, 0x50, 0xEF, 0xFE,
  0x0E, 0x05, 0x77, 0x72, 0x09, 0xFF, 0xFB, 0x09, 0x77, 0x70, 0xAF, 0xFF, 0xD0, 0xA7, 0x75, 0x0A,
  0xFF, 0xFF, 0x0A, 0x77, 0x30, 0x9F, 0xFF, 0xFA, 0x09, 0x77, 0x10, 0x5F, 0xFF, 0xFC, 0x05, 0x76,
  0x01, 0x0E, 0xFF, 0xFF, 0xC0, 0xE0, 0x17, 0x50, 0x9F, 0xF9, 0x4F, 0xF9, 0x09, 0x74, 0x01, 0xFF,
  0xA4, 0xFF, 0xA0, 0x17, 0x30, 0x8F, 0xFA, 0x4F, 0xFA, 0x08, 0x73, 0x0D, 0xFF, 0xA4, 0xFF, 0xA0,
  0xD7, 0x20, 0x3F, 0xFB, 0x4F, 0xFB, 0x03, 0x71, 0x07, 0xFF, 0xB4, 0xFF, 0xB0, 0x77, 0x10, 0xAF,
  0xFB, 0x4F, 0xFB, 0x0A, 0x71, 0x0C, 0xFF, 0xB4, 0xFF, 0xB0, 0xC7, 0x10, 0xEF, 0xFB, 0x4F, 0xFB,
  0x0E, 0x71, 0xFF, 0xC4, 0xFF, 0xC7, 0x1F, 0xFC, 0x4F, 0xFC, 0x71, 0x0E, 0xFF, 0xB4, 0xFF, 0xB0,
  0xE7, 0x10, 0xC8, 0x0C, 0x2F, 0x0C, 0x71, 0x0A, 0x80, 0xC2, 0xF0, 0xA7, 0x10, 0x78, 0x0C, 0x2F,
  0x07, 0x71, 0x03, 0x80, 0xC2, 0xF0, 0x37, 0x20, 0xDF, 0xFA, 0x4F, 0xFA, 0x0D, 0x73, 0x08, 0xFF,
  0xA4, 0xFF, 0xA0, 0x87, 0x30, 0x1F, 0xFA, 0x4F, 0xFA, 0x01, 0x74, 0x09, 0xFF, 0x94, 0xFF, 0x90,
  0x97, 0x50, 0x10, 0xEF, 0xFF, 0xFC, 0x0E, 0x01, 0x76, 0x05, 0xFF, 0xFF, 0xC0, 0x57, 0x71, 0x09,
  0xFF, 0xFF, 0xA0, 0x97, 0x73, 0x0A, 0xFF, 0xFF, 0x0A, 0x77, 0x50, 0xAF, 0xFF, 0xD0, 0xA7, 0x77,
  0x09, 0xFF, 0xFB, 0x09, 0x77, 0x72, 0x05, 0x0E, 0xFF, 0xE0, 0xE0, 0x57, 0x77, 0x40, 0x10, 0x9F,
  0xFC, 0x09, 0x01, 0x77, 0x77, 0x81, 0x18, 0xDF, 0xD8, 0x1D, 0x81, 0x77, 0x77, 0x58, 0x33, 0x7A,
  0xCD, 0xA8, 0x3D, 0xCA, 0x73, 0x80, 0xB9, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_48_alert_error() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      48, 48, ic_filled_48_alert_error_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_48_alert_notification_important 48x48, 4-bit Alpha,  RLE, 204 bytes.
static const uint8_t ic_filled_48_alert_notification_important_data[] PROGMEM = {
  0x80, 0xC8, 0x20, 0x82, 0x8D, 0xD8, 0x80, 0xC7, 0x00, 0x8C, 0x08, 0x80, 0xC6, 0x00, 0xDC, 0x0D,
  0x80, 0xC6, 0x0E, 0x80, 0xC4, 0x00, 0x20, 0x7E, 0x07, 0x02, 0x80, 0xC0, 0x00, 0x20, 0xAF, 0xB0,
  0xA0, 0x27, 0x77, 0x75, 0x06, 0xFF, 0x05, 0x77, 0x77, 0x30, 0x7F, 0xFA, 0x07, 0x77, 0x77, 0x10,
  0x5F, 0xFC, 0x05, 0x77, 0x76, 0x01, 0x0E, 0xFF, 0xC0, 0xE0, 0x17, 0x77, 0x50, 0x8F, 0xFE, 0x08,
  0x77, 0x75, 0x0E, 0xF9, 0x4F, 0x90, 0xE7, 0x77, 0x40, 0x5F, 0xA4, 0xFA, 0x05, 0x77, 0x73, 0x09,
  0xFA, 0x4F, 0xA0, 0x97, 0x77, 0x30, 0xCF, 0xA4, 0xFA, 0x0C, 0x77, 0x73, 0x0D, 0xFA, 0x4F, 0xA0,
  0xD7, 0x77, 0x30, 0xEF, 0xA4, 0xFA, 0x0E, 0x77, 0x73, 0xFB, 0x4F, 0xB7, 0x77, 0x3F, 0xB4, 0xFB,
  0x77, 0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB, 0x77, 0x73, 0xFF, 0xFB,
  0x77, 0x73, 0xFB, 0x4F, 0xB7, 0x77, 0x3F, 0xB4, 0xFB, 0x77, 0x73, 0xFB, 0x4F, 0xB7, 0x77, 0x3F,
  0xB4, 0xFB, 0x77, 0x72, 0x07, 0xFF, 0xFB, 0x07, 0x77, 0x70, 0x7F, 0xFF, 0xD0, 0x77, 0x75, 0x07,
  0xFF, 0xFF, 0x07, 0x77, 0x30, 0x7F, 0xFF, 0xFA, 0x07, 0x77, 0x2F, 0xFF, 0xFC, 0x77, 0x2F, 0xFF,
  0xFC, 0x80, 0x9F, 0x00, 0x0D, 0xE0, 0xD8, 0x0C, 0x40, 0x0A, 0xE0, 0xA8, 0x0C, 0x40, 0x01, 0x0E,
  0xC0, 0xE0, 0x18, 0x0C, 0x50, 0x84, 0x1A, 0xDD, 0xA1, 0x80, 0xBA, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_48_alert_notification_important() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      48, 48, ic_filled_48_alert_notification_important_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_48_alert_warning_amber 48x48, 4-bit Alpha,  RLE, 289 bytes.
static const uint8_t ic_filled_48_alert_warning_amber_data[] PROGMEM = {
  0x80, 0xBA, 0x30, 0x00, 0x48, 0x0D, 0x20, 0x00, 0xD8, 0x0D, 0x10, 0x06, 0xA0, 0x68, 0x0C, 0x70,
  0x01, 0x0E, 0xA0, 0xE0, 0x18, 0x0C, 0x60, 0x09, 0xC0, 0x98, 0x0C, 0x50, 0x03, 0xE0, 0x38, 0x0C,
  0x40, 0x0B, 0xE0, 0xB8, 0x0C, 0x30, 0x05, 0xF9, 0x05, 0x80, 0xC2, 0x00, 0xDB, 0x00, 0xAB, 0x0D,
  0x80, 0xC1, 0x00, 0x7C, 0x00, 0x2C, 0x07, 0x77, 0x77, 0x70, 0x10, 0xEB, 0x08, 0x20, 0x8B, 0x0E,
  0x01, 0x77, 0x77, 0x60, 0xAB, 0x0E, 0x40, 0xEB, 0x0A, 0x77, 0x77, 0x50, 0x3C, 0x05, 0x40, 0x5C,
  0x03, 0x77, 0x77, 0x40, 0xCB, 0x0C, 0x60, 0xCB, 0x0C, 0x77, 0x77, 0x30, 0x6C, 0x03, 0x60, 0x3C,
  0x06, 0x77, 0x77, 0x20, 0xEB, 0x0A, 0x71, 0x0A, 0xB0, 0xE7, 0x77, 0x71, 0x08, 0xB0, 0xE0, 0x12,
  0xC2, 0x01, 0x0E, 0xB0, 0x87, 0x77, 0x60, 0x2C, 0x07, 0x3C, 0x30, 0x7C, 0x02, 0x77, 0x75, 0x0B,
  0xB0, 0xD4, 0xC4, 0x0D, 0xB0, 0xB7, 0x77, 0x40, 0x4C, 0x05, 0x4C, 0x40, 0x5C, 0x04, 0x77, 0x73,
  0x0D, 0xB0, 0xB5, 0xC5, 0x0B, 0xB0, 0xD7, 0x77, 0x20, 0x6C, 0x02, 0x5C, 0x50, 0x2C, 0x06, 0x77,
  0x70, 0x10, 0xEB, 0x09, 0x6C, 0x60, 0x9B, 0x0E, 0x01, 0x77, 0x60, 0x9B, 0x0E, 0x01, 0x6C, 0x60,
  0x10, 0xEB, 0x09, 0x77, 0x50, 0x3C, 0x06, 0x7C, 0x70, 0x6C, 0x03, 0x77, 0x40, 0xBB, 0x0D, 0x71,
  0xC7, 0x10, 0xDB, 0x0B, 0x77, 0x30, 0x5C, 0x04, 0x77, 0x60, 0x4C, 0x05, 0x77, 0x20, 0xDB, 0x0A,
  0x77, 0x71, 0x0A, 0xB0, 0xD7, 0x71, 0x07, 0xC0, 0x27, 0x2C, 0x72, 0x02, 0xC0, 0x77, 0x60, 0x10,
  0xEB, 0x08, 0x73, 0xC7, 0x30, 0x8B, 0x0E, 0x01, 0x75, 0x0A, 0xB0, 0xE7, 0x4C, 0x74, 0x0E, 0xB0,
  0xA7, 0x40, 0x3C, 0x05, 0x74, 0xC7, 0x40, 0x5C, 0x03, 0x73, 0x0C, 0xB0, 0xC7, 0x77, 0x70, 0xCB,
  0x0C, 0x72, 0x06, 0xC0, 0x37, 0x77, 0x70, 0x3C, 0x06, 0x71, 0x0E, 0x80, 0xC2, 0xF0, 0xE7, 0x08,
  0x80, 0xC4, 0xF0, 0x85, 0x02, 0x80, 0xC6, 0xF0, 0x24, 0x0B, 0x80, 0xC6, 0xF0, 0xB8, 0x0C, 0xB6,
  0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_48_alert_warning_amber() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      48, 48, ic_filled_48_alert_warning_amber_data, Alpha4(color::Black));
  return value;
}
// Image file ic_filled_48_alert_warning 48x48, 4-bit Alpha,  RLE, 225 bytes.
static const uint8_t ic_filled_48_alert_warning_data[] PROGMEM = {
  0x80, 0xBA, 0x30, 0x00, 0x48, 0x0D, 0x20, 0x00, 0xD8, 0x0D, 0x10, 0x06, 0xA0, 0x68, 0x0C, 0x70,
  0x01, 0x0E, 0xA0, 0xE0, 0x18, 0x0C, 0x60, 0x09, 0xC0, 0x98, 0x0C, 0x50, 0x03, 0xE0, 0x38, 0x0C,
  0x40, 0x0B, 0xE0, 0xB8, 0x0C, 0x30, 0x05, 0xF9, 0x05, 0x80, 0xC2, 0x00, 0xDF, 0x90, 0xD8, 0x0C,
  0x10, 0x07, 0xFB, 0x07, 0x77, 0x77, 0x70, 0x10, 0xEF, 0xB0, 0xE0, 0x17, 0x77, 0x76, 0x0A, 0xFD,
  0x0A, 0x77, 0x77, 0x50, 0x3F, 0xF0, 0x37, 0x77, 0x74, 0x0C, 0xFF, 0x0C, 0x77, 0x77, 0x30, 0x6F,
  0xFA, 0x06, 0x77, 0x77, 0x20, 0xEF, 0xFA, 0x0E, 0x77, 0x77, 0x10, 0x8F, 0x4F, 0x08, 0x77, 0x76,
  0x02, 0xF9, 0x4F, 0x90, 0x27, 0x77, 0x50, 0xBF, 0x94, 0xF9, 0x0B, 0x77, 0x74, 0x04, 0xFA, 0x4F,
  0xA0, 0x47, 0x77, 0x30, 0xDF, 0xA4, 0xFA, 0x0D, 0x77, 0x72, 0x06, 0xFB, 0x4F, 0xB0, 0x67, 0x77,
  0x01, 0x0E, 0xFB, 0x4F, 0xB0, 0xE0, 0x17, 0x76, 0x09, 0xFC, 0x4F, 0xC0, 0x97, 0x75, 0x03, 0xFF,
  0xFF, 0x03, 0x77, 0x40, 0xBF, 0xFF, 0xF0, 0xB7, 0x73, 0x05, 0xFF, 0xFF, 0xA0, 0x57, 0x72, 0x0D,
  0xFF, 0xFF, 0xA0, 0xD7, 0x71, 0x07, 0xFF, 0x4F, 0xF0, 0x77, 0x60, 0x10, 0xEF, 0xF4, 0xFF, 0x0E,
  0x01, 0x75, 0x0A, 0xFF, 0x94, 0xFF, 0x90, 0xA7, 0x40, 0x3F, 0xFA, 0x4F, 0xFA, 0x03, 0x73, 0x0C,
  0x80, 0xC0, 0xF0, 0xC7, 0x20, 0x68, 0x0C, 0x2F, 0x06, 0x71, 0x0E, 0x80, 0xC2, 0xF0, 0xE7, 0x08,
  0x80, 0xC4, 0xF0, 0x85, 0x02, 0x80, 0xC6, 0xF0, 0x24, 0x0B, 0x80, 0xC6, 0xF0, 0xB8, 0x0C, 0xB6,
  0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_filled_48_alert_warning() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      48, 48, ic_filled_48_alert_warning_data, Alpha4(color::Black));
  return value;
}
