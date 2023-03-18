#include "alert.h"

using namespace roo_display;

// Image file ic_round_24_alert_add_alert 24x24, 4-bit Alpha,  RLE, 67 bytes.
static const uint8_t ic_round_24_alert_add_alert_data[] PROGMEM = {
  0x68, 0x22, 0xDD, 0x27, 0x50, 0x7A, 0x07, 0x74, 0x05, 0x0D, 0xA0, 0xD0, 0x57, 0x10, 0x10, 0xCE,
  0x0C, 0x01, 0x60, 0xCF, 0x90, 0xC5, 0x05, 0xFB, 0x05, 0x40, 0xBF, 0xB0, 0xB4, 0x0E, 0xC0, 0x03,
  0xC0, 0xE4, 0xD2, 0xD4, 0xB0, 0x34, 0x03, 0xB4, 0xB0, 0x34, 0x03, 0xB4, 0xD2, 0xD4, 0xD0, 0x03,
  0xD4, 0xFD, 0x4F, 0xD2, 0x0B, 0xFF, 0x00, 0xBF, 0xF0, 0xB7, 0x77, 0x10, 0xDA, 0x0D, 0x75, 0x82,
  0x4D, 0xD4, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_alert_add_alert() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 19, 21), Box(0, 0, 23, 23),
      ic_round_24_alert_add_alert_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_alert_auto_delete 24x24, 4-bit Alpha,  RLE, 127 bytes.
static const uint8_t ic_round_24_alert_auto_delete_data[] PROGMEM = {
  0x30, 0x10, 0xCC, 0x0C, 0x01, 0x74, 0x0B, 0xFD, 0x0B, 0x71, 0x0B, 0xFD, 0x0B, 0x77, 0x77, 0x30,
  0x40, 0xDF, 0x90, 0xD0, 0x47, 0x30, 0xDF, 0xB0, 0xD7, 0x3F, 0xD7, 0x3F, 0xD7, 0x3F, 0xD8, 0x4C,
  0xEE, 0xC7, 0x14, 0xFF, 0xB0, 0xE0, 0x53, 0xFC, 0x0A, 0x03, 0x20, 0x30, 0xAA, 0x05, 0x2F, 0xB0,
  0x72, 0x0C, 0x05, 0x28, 0x27, 0xFE, 0x11, 0xFA, 0x0A, 0x39, 0x07, 0x38, 0x1A, 0xF7, 0x1F, 0xA0,
  0x33, 0x90, 0x73, 0x81, 0x3F, 0xC1, 0xFA, 0x49, 0x07, 0x49, 0x0E, 0x1F, 0xA4, 0x81, 0xEC, 0x33,
  0x98, 0x1E, 0x0D, 0xF9, 0x03, 0x38, 0x91, 0x4D, 0xF9, 0x03, 0xFC, 0x04, 0xDF, 0x0A, 0x58, 0x47,
  0xB0, 0xAF, 0x77, 0x18, 0x21, 0xEF, 0x76, 0x82, 0x7F, 0xE1, 0x72, 0x04, 0xA0, 0xA0, 0x32, 0x03,
  0x0A, 0xA0, 0x57, 0x40, 0x40, 0xEE, 0x0E, 0x05, 0x76, 0x86, 0x17, 0xCE, 0xEC, 0x71, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_alert_auto_delete() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 22, 22), Box(0, 0, 23, 23),
      ic_round_24_alert_auto_delete_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_alert_error_outline 24x24, 4-bit Alpha,  RLE, 124 bytes.
static const uint8_t ic_round_24_alert_error_outline_data[] PROGMEM = {
  0x68, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x30, 0x50, 0xDF, 0x90, 0xD0, 0x47, 0x08, 0xA8, 0x1C, 0x62,
  0x28, 0x12, 0x6C, 0xA0, 0x85, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x30, 0x4A, 0x04, 0x73, 0x04,
  0xA0, 0x42, 0x81, 0xDF, 0x65, 0x00, 0xB5, 0x85, 0x6F, 0xD0, 0x5F, 0xC6, 0xA6, 0x84, 0xCF, 0x5A,
  0xF6, 0x6A, 0x68, 0x46, 0xF9, 0xDF, 0x26, 0xA6, 0x82, 0x2F, 0xDE, 0x97, 0xA7, 0x90, 0x0E, 0x97,
  0x00, 0xB7, 0x98, 0x2E, 0xDF, 0x27, 0x78, 0x42, 0xFD, 0xAF, 0x67, 0x78, 0x46, 0xF9, 0x5F, 0xC6,
  0xA6, 0x85, 0xCF, 0x50, 0xDF, 0x65, 0xA5, 0x81, 0x6F, 0xD2, 0x04, 0xA0, 0x47, 0x30, 0x4A, 0x04,
  0x30, 0x8A, 0x06, 0x71, 0x06, 0xA0, 0x85, 0x08, 0xA8, 0x1C, 0x62, 0x28, 0x12, 0x6C, 0xA0, 0x87,
  0x05, 0x0D, 0xF9, 0x0D, 0x04, 0x73, 0x86, 0x59, 0xDE, 0xED, 0x95, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_alert_error_outline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_round_24_alert_error_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_alert_error 24x24, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_round_24_alert_error_data[] PROGMEM = {
  0x68, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x30, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x08, 0xFD, 0x08, 0x50,
  0x8F, 0xF0, 0x83, 0x04, 0xFF, 0xA0, 0x42, 0x0D, 0xF0, 0x03, 0xF8, 0x1D, 0x05, 0xF9, 0x2F, 0x90,
  0x50, 0x9F, 0x92, 0xF9, 0x09, 0x0D, 0xF9, 0x2F, 0x90, 0xD0, 0xEF, 0x92, 0xF9, 0x00, 0xEF, 0x90,
  0x03, 0xF9, 0x0E, 0x0D, 0xFF, 0xC0, 0xD0, 0x9F, 0xFC, 0x09, 0x05, 0xF9, 0x2F, 0x98, 0x15, 0x0D,
  0xF2, 0xF0, 0xD2, 0x04, 0xFF, 0xA0, 0x43, 0x08, 0xFF, 0x08, 0x50, 0x8F, 0xD0, 0x87, 0x04, 0x0D,
  0xF9, 0x0D, 0x04, 0x73, 0x86, 0x59, 0xDE, 0xED, 0x95, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_alert_error() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_round_24_alert_error_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_alert_notification_important 24x24, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_round_24_alert_notification_important_data[] PROGMEM = {
  0x71, 0x00, 0x57, 0x71, 0x05, 0xA0, 0x57, 0x70, 0x7A, 0x07, 0x75, 0x81, 0x17, 0xDA, 0x81, 0xD7,
  0x17, 0x20, 0x50, 0xEE, 0x0E, 0x05, 0x70, 0x5F, 0xB0, 0x55, 0x01, 0x0E, 0xFB, 0x0E, 0x01, 0x40,
  0x7D, 0x00, 0x3D, 0x07, 0x40, 0xCD, 0x2D, 0x0C, 0x40, 0xED, 0x2D, 0x0E, 0x4E, 0x00, 0x3E, 0x4F,
  0xF4, 0xFF, 0x4E, 0x2E, 0x4E, 0x2E, 0x4F, 0xF3, 0x07, 0xFF, 0x81, 0x70, 0x5F, 0xFA, 0x00, 0x5F,
  0xFA, 0x05, 0x77, 0x74, 0x0D, 0xA0, 0xD7, 0x78, 0x24, 0xDD, 0x47,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_alert_notification_important() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 1, 20, 22), Box(0, 0, 23, 23),
      ic_round_24_alert_notification_important_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_alert_warning_amber 24x24, 4-bit Alpha,  RLE, 106 bytes.
static const uint8_t ic_round_24_alert_warning_amber_data[] PROGMEM = {
  0x71, 0x82, 0x4D, 0xD4, 0x77, 0x10, 0x10, 0xEA, 0x0E, 0x01, 0x77, 0x84, 0x9F, 0xAA, 0xF9, 0x76,
  0x03, 0xA0, 0x02, 0xA0, 0x37, 0x58, 0x1B, 0xF8, 0x28, 0x18, 0xFB, 0x74, 0x81, 0x5F, 0xE4, 0x81,
  0xEF, 0x57, 0x38, 0x90, 0xDF, 0x60, 0xBB, 0x06, 0xFD, 0x72, 0x81, 0x7F, 0xC2, 0xA2, 0x81, 0xCF,
  0x77, 0x82, 0x1E, 0xF3, 0x2A, 0x28, 0x23, 0xFE, 0x16, 0x81, 0xAF, 0xA3, 0x00, 0xB3, 0x81, 0xAF,
  0xA5, 0x82, 0x3F, 0xE1, 0x71, 0x82, 0x1E, 0xF3, 0x48, 0x1C, 0xF7, 0x73, 0x81, 0x7F, 0xC3, 0x81,
  0x6F, 0xD5, 0xA5, 0x81, 0xDF, 0x62, 0x81, 0xEF, 0x55, 0xA5, 0x85, 0x5F, 0xE0, 0x6F, 0xB7, 0x78,
  0x2B, 0xF6, 0x6F, 0xFC, 0x81, 0x60, 0xAF, 0xFA, 0x0A, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_alert_warning_amber() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 20), Box(0, 0, 23, 23),
      ic_round_24_alert_warning_amber_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_24_alert_warning 24x24, 4-bit Alpha,  RLE, 72 bytes.
static const uint8_t ic_round_24_alert_warning_data[] PROGMEM = {
  0x71, 0x82, 0x4D, 0xD4, 0x77, 0x10, 0x10, 0xEA, 0x0E, 0x01, 0x77, 0x09, 0xC0, 0x97, 0x60, 0x3E,
  0x03, 0x75, 0x0B, 0xE0, 0xB7, 0x40, 0x5F, 0x90, 0x57, 0x30, 0xDB, 0x00, 0x3B, 0x0D, 0x72, 0x07,
  0xC2, 0xC0, 0x77, 0x01, 0x0E, 0xC2, 0xC0, 0xE0, 0x16, 0x0A, 0xD0, 0x03, 0xD0, 0xA5, 0x03, 0xFF,
  0x03, 0x40, 0xCF, 0xF0, 0xC3, 0x06, 0xF2, 0xF0, 0x62, 0x0E, 0xF2, 0xF8, 0x1E, 0x06, 0xFF, 0xC0,
  0x06, 0xFF, 0xC8, 0x16, 0x0A, 0xFF, 0xA0, 0xA1,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_round_24_alert_warning() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 20), Box(0, 0, 23, 23),
      ic_round_24_alert_warning_data, Alpha4(color::Black));
  return value;
}
