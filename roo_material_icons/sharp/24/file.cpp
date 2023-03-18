#include "file.h"

using namespace roo_display;

// Image file ic_sharp_24_file_approval 24x24, 4-bit Alpha,  RLE, 50 bytes.
static const uint8_t ic_sharp_24_file_approval_data[] PROGMEM = {
  0x58, 0x44, 0xBE, 0xEB, 0x47, 0x20, 0x8E, 0x08, 0x70, 0x4F, 0x90, 0x46, 0x0B, 0xF9, 0x0B, 0x60,
  0xEF, 0x90, 0xE6, 0x09, 0xF9, 0x09, 0x70, 0xDE, 0x0D, 0x71, 0x03, 0xE0, 0x37, 0x20, 0x7C, 0x07,
  0x74, 0x0B, 0xA0, 0xB7, 0x58, 0x21, 0xEE, 0x17, 0x60, 0x05, 0x7F, 0xFF, 0xFE, 0x75, 0xC7, 0x58,
  0x0F, 0x6F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_approval() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 19, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_approval_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_attach_email 24x24, 4-bit Alpha,  RLE, 110 bytes.
static const uint8_t ic_sharp_24_file_attach_email_data[] PROGMEM = {
  0xFF, 0xE2, 0xFF, 0xE2, 0xA0, 0x40, 0xDF, 0xD0, 0xD0, 0x4A, 0x2A, 0x20, 0x8F, 0xB0, 0x82, 0xA2,
  0xA8, 0x3A, 0x10, 0x3C, 0xE8, 0x3C, 0x30, 0x1A, 0xA2, 0xB0, 0xE0, 0x62, 0x06, 0x0E, 0xA0, 0xE0,
  0x62, 0x06, 0x0E, 0xB2, 0xD8, 0x90, 0xC3, 0x01, 0xAA, 0x10, 0x3C, 0xD2, 0xF0, 0x84, 0x08, 0xF2,
  0xF9, 0x82, 0xD4, 0x4D, 0xA0, 0x70, 0x16, 0xFE, 0x84, 0x71, 0xBE, 0xB1, 0x3F, 0xE0, 0x10, 0xBB,
  0x0B, 0x3F, 0xE1, 0xA0, 0x2A, 0x3F, 0xE1, 0xA1, 0xA1, 0xFF, 0x91, 0xA1, 0xA1, 0xFF, 0x91, 0xA1,
  0xA1, 0xFF, 0x91, 0xA1, 0xA1, 0xA7, 0x78, 0x1D, 0xF1, 0x28, 0x11, 0xFD, 0x77, 0x86, 0xAF, 0xB1,
  0x1B, 0xFA, 0x77, 0x01, 0x0E, 0xC0, 0xE0, 0x17, 0x71, 0x84, 0x1A, 0xDD, 0xA1, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_attach_email() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 2, 22, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_attach_email_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_attachment 24x24, 4-bit Alpha,  RLE, 82 bytes.
static const uint8_t ic_sharp_24_file_attachment_data[] PROGMEM = {
  0x40, 0x48, 0x09, 0x27, 0x04, 0x50, 0x30, 0xDF, 0xFA, 0x0D, 0x02, 0x28, 0x33, 0xFD, 0x51, 0x76,
  0x81, 0x4D, 0xD2, 0x81, 0xDD, 0x13, 0x06, 0x80, 0x57, 0x03, 0x28, 0x44, 0xF4, 0x4F, 0x53, 0x0D,
  0xFB, 0x07, 0x39, 0x82, 0x66, 0xF1, 0x28, 0x16, 0xF3, 0x75, 0x84, 0x4F, 0x46, 0xF1, 0x28, 0x16,
  0xF3, 0x74, 0x85, 0x4D, 0xD0, 0x4F, 0x53, 0x0D, 0xFE, 0x0D, 0x02, 0x28, 0x1D, 0xD1, 0x30, 0x68,
  0x07, 0x70, 0x44, 0x83, 0x3F, 0xD5, 0x17, 0x75, 0x03, 0x0D, 0xFE, 0x07, 0x72, 0x04, 0x80, 0x90,
  0x70, 0x35,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_attachment() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 6, 23, 17), Box(0, 0, 23, 23),
      ic_sharp_24_file_attachment_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_circle 24x24, 4-bit Alpha,  RLE, 109 bytes.
static const uint8_t ic_sharp_24_file_cloud_circle_data[] PROGMEM = {
  0x68, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x30, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x08, 0xFD, 0x08, 0x50,
  0x8F, 0xF0, 0x83, 0x04, 0xFF, 0xA0, 0x42, 0x0D, 0xD8, 0x4D, 0x51, 0x15, 0xDD, 0x81, 0xD0, 0x5D,
  0x0D, 0x01, 0x40, 0x10, 0xDD, 0x05, 0x09, 0xD0, 0x56, 0x05, 0xD0, 0x90, 0xDB, 0x07, 0x01, 0x70,
  0x1D, 0x0D, 0x0E, 0xA0, 0x77, 0x40, 0x40, 0xDA, 0x00, 0xEA, 0x01, 0x75, 0x04, 0xA0, 0xE0, 0xDA,
  0x01, 0x76, 0xA0, 0xD0, 0x9A, 0x07, 0x75, 0x04, 0xA0, 0x90, 0x5B, 0x07, 0x01, 0x72, 0x04, 0x0D,
  0xA8, 0x15, 0x0D, 0xFF, 0xA0, 0xD2, 0x04, 0xFF, 0xA0, 0x43, 0x08, 0xFF, 0x08, 0x50, 0x8F, 0xD0,
  0x87, 0x04, 0x0D, 0xF9, 0x0D, 0x04, 0x73, 0x86, 0x59, 0xDE, 0xED, 0x95, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud_circle() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_circle_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_done 24x24, 4-bit Alpha,  RLE, 95 bytes.
static const uint8_t ic_sharp_24_file_cloud_done_data[] PROGMEM = {
  0x71, 0x86, 0x18, 0xCE, 0xEC, 0x82, 0x77, 0x10, 0x6F, 0x90, 0x77, 0x60, 0x8F, 0xB0, 0x87, 0x40,
  0x4F, 0xD0, 0x47, 0x10, 0x60, 0xCF, 0xE0, 0xD6, 0x01, 0x0C, 0xFC, 0x0A, 0x05, 0xB0, 0x35, 0x0C,
  0xFC, 0x0A, 0x20, 0xAA, 0x81, 0xEA, 0x32, 0x06, 0xFC, 0x0A, 0x20, 0x7E, 0x81, 0x70, 0xCE, 0x07,
  0x0A, 0xA0, 0xA2, 0x07, 0xF9, 0x03, 0x0E, 0xD0, 0xB2, 0x00, 0xA2, 0x07, 0xFA, 0x0A, 0x0E, 0xE0,
  0x74, 0x07, 0xFB, 0x0D, 0x0C, 0xF0, 0x72, 0x07, 0xFC, 0x0E, 0x06, 0xF9, 0x00, 0x7F, 0xD8, 0x1B,
  0x0C, 0xFF, 0xF8, 0x24, 0x01, 0xCF, 0xFD, 0x08, 0x48, 0x16, 0xCE, 0xFE, 0x81, 0xEB, 0x42,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud_done() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 4, 23, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_download 24x24, 4-bit Alpha,  RLE, 87 bytes.
static const uint8_t ic_sharp_24_file_cloud_download_data[] PROGMEM = {
  0x71, 0x86, 0x18, 0xCE, 0xEC, 0x82, 0x77, 0x10, 0x6F, 0x90, 0x77, 0x60, 0x8F, 0xB0, 0x87, 0x40,
  0x4F, 0xD0, 0x47, 0x10, 0x60, 0xCF, 0xE0, 0xD6, 0x01, 0x0C, 0xF4, 0xD0, 0x35, 0x0C, 0xF9, 0x4D,
  0x81, 0xEA, 0x32, 0x06, 0xFA, 0x4F, 0x98, 0x17, 0x0C, 0xFA, 0x4F, 0xA0, 0x30, 0xEE, 0x07, 0x71,
  0x07, 0xE0, 0xA0, 0xEF, 0x07, 0x60, 0x7F, 0x0D, 0x0C, 0xF9, 0x07, 0x40, 0x7F, 0x90, 0xE0, 0x6F,
  0xA0, 0x72, 0x07, 0xFA, 0x81, 0xB0, 0xCF, 0xA0, 0x07, 0xFB, 0x82, 0x40, 0x1C, 0xFF, 0xD0, 0x84,
  0x81, 0x6C, 0xEF, 0xE8, 0x1E, 0xB4, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud_download() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 4, 23, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_off 24x24, 4-bit Alpha,  RLE, 146 bytes.
static const uint8_t ic_sharp_24_file_cloud_off_data[] PROGMEM = {
  0x38, 0x14, 0xD2, 0x28, 0x61, 0x7C, 0xEE, 0xC8, 0x27, 0x48, 0x5A, 0xFD, 0x20, 0x3E, 0xE0, 0x77,
  0x48, 0x5B, 0xFD, 0x20, 0x23, 0x20, 0x30, 0x9A, 0x08, 0x74, 0x82, 0xBF, 0xD2, 0x60, 0x4A, 0x04,
  0x71, 0x06, 0x0C, 0xB0, 0xD0, 0x26, 0x81, 0x6F, 0xD6, 0x01, 0x0C, 0xE0, 0xD0, 0x26, 0x81, 0xDF,
  0x35, 0x83, 0xCF, 0xD5, 0x12, 0x82, 0xBF, 0xD2, 0x58, 0x39, 0xFE, 0xA3, 0x28, 0x26, 0xFD, 0x15,
  0x82, 0xBF, 0xD2, 0x40, 0x7C, 0x83, 0x70, 0xCF, 0x57, 0x82, 0xBF, 0xD2, 0x50, 0x10, 0x7A, 0x82,
  0x3E, 0xF1, 0x71, 0x82, 0xBF, 0xD2, 0x68, 0x47, 0xFA, 0xEF, 0x17, 0x28, 0x2B, 0xFD, 0x25, 0x84,
  0x1F, 0xDC, 0xF5, 0x73, 0x82, 0xBF, 0xD2, 0x48, 0x51, 0xFE, 0x6F, 0xD1, 0x73, 0x82, 0xBF, 0xD2,
  0x38, 0x76, 0xFB, 0x0C, 0xFD, 0x51, 0x72, 0x82, 0xBF, 0xD2, 0x28, 0x4D, 0xF4, 0x01, 0xCF, 0xF9,
  0x83, 0xD2, 0x02, 0x74, 0x81, 0x6C, 0xEF, 0xE0, 0xD0, 0x27, 0x77, 0x81, 0xBF, 0xD7, 0x77, 0x10,
  0xA0, 0x43,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud_off() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 4, 23, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud 24x24, 4-bit Alpha,  RLE, 74 bytes.
static const uint8_t ic_sharp_24_file_cloud_data[] PROGMEM = {
  0x71, 0x86, 0x18, 0xCE, 0xEC, 0x82, 0x77, 0x10, 0x6F, 0x90, 0x77, 0x60, 0x8F, 0xB0, 0x87, 0x40,
  0x4F, 0xD0, 0x47, 0x10, 0x60, 0xCF, 0xE0, 0xD6, 0x01, 0x0C, 0xFF, 0xA0, 0x35, 0x0C, 0xFF, 0xB8,
  0x1E, 0xA3, 0x20, 0x6F, 0xFF, 0x81, 0x70, 0xCF, 0xFF, 0x90, 0x30, 0xEF, 0xFF, 0x90, 0xA0, 0xEF,
  0xFF, 0x90, 0xD0, 0xCF, 0xFF, 0x90, 0xE0, 0x6F, 0xFF, 0x98, 0x1B, 0x0C, 0xFF, 0xF8, 0x24, 0x01,
  0xCF, 0xFD, 0x08, 0x48, 0x16, 0xCE, 0xFE, 0x81, 0xEB, 0x42,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 4, 23, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_queue 24x24, 4-bit Alpha,  RLE, 106 bytes.
static const uint8_t ic_sharp_24_file_cloud_queue_data[] PROGMEM = {
  0x71, 0x86, 0x18, 0xCE, 0xEC, 0x82, 0x77, 0x10, 0x6F, 0x90, 0x77, 0x60, 0x8A, 0x84, 0xA3, 0x10,
  0x39, 0xA0, 0x87, 0x40, 0x4A, 0x05, 0x60, 0x4A, 0x04, 0x71, 0x06, 0x0C, 0xA0, 0x77, 0x18, 0x16,
  0xFD, 0x60, 0x10, 0xCB, 0x0E, 0x73, 0x81, 0xDF, 0x35, 0x83, 0xCF, 0xD5, 0x17, 0x48, 0x39, 0xFE,
  0xA3, 0x28, 0x26, 0xFD, 0x17, 0x60, 0x7C, 0x83, 0x70, 0xCF, 0x57, 0x72, 0x01, 0x07, 0xA8, 0x23,
  0xEF, 0x17, 0x74, 0x84, 0x7F, 0xAE, 0xF1, 0x77, 0x48, 0x41, 0xFD, 0xCF, 0x57, 0x74, 0x85, 0x1F,
  0xE6, 0xFD, 0x17, 0x73, 0x87, 0x7F, 0xB0, 0xCF, 0xD5, 0x17, 0x60, 0x10, 0x7A, 0x82, 0x40, 0x1C,
  0xFF, 0xD0, 0x84, 0x81, 0x6C, 0xEF, 0xE8, 0x1E, 0xB4, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud_queue() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 4, 23, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_queue_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_sync 24x24, 4-bit Alpha,  RLE, 94 bytes.
static const uint8_t ic_sharp_24_file_cloud_sync_data[] PROGMEM = {
  0x40, 0x20, 0x84, 0xE7, 0x09, 0xA4, 0xE6, 0x0B, 0xA0, 0x94, 0xB0, 0xB7, 0x82, 0x9F, 0xE3, 0x5A,
  0x81, 0xEF, 0x85, 0x02, 0xA0, 0x36, 0xA0, 0x3A, 0x02, 0x48, 0x18, 0xF9, 0x7A, 0x18, 0x19, 0xF8,
  0x48, 0x1C, 0xF3, 0x73, 0x81, 0x3F, 0xC4, 0x81, 0xEF, 0x17, 0x73, 0x0E, 0x97, 0x28, 0x41, 0x9E,
  0xE9, 0x13, 0x81, 0xCF, 0x37, 0x10, 0xCC, 0x0C, 0x38, 0x18, 0xF9, 0x1A, 0x30, 0x80, 0xDE, 0x04,
  0x20, 0x2A, 0x03, 0xA2, 0x08, 0xFA, 0x84, 0xB2, 0x08, 0xFE, 0xA2, 0x0D, 0xFB, 0x0B, 0x20, 0xBB,
  0x20, 0xDF, 0xB0, 0xEE, 0x20, 0x8F, 0xB0, 0xBE, 0x30, 0x80, 0xDE, 0x81, 0xEB, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud_sync() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 23, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_sync_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_upload 24x24, 4-bit Alpha,  RLE, 86 bytes.
static const uint8_t ic_sharp_24_file_cloud_upload_data[] PROGMEM = {
  0x71, 0x86, 0x18, 0xCE, 0xEC, 0x82, 0x77, 0x10, 0x6F, 0x90, 0x77, 0x60, 0x8F, 0xB0, 0x87, 0x40,
  0x4F, 0xD0, 0x47, 0x10, 0x60, 0xCE, 0x00, 0x7D, 0x0D, 0x60, 0x10, 0xCF, 0x07, 0x20, 0x7D, 0x03,
  0x50, 0xCF, 0x07, 0x40, 0x7C, 0x81, 0xEA, 0x32, 0x06, 0xF0, 0x76, 0x07, 0xE8, 0x17, 0x0C, 0xE0,
  0x77, 0x10, 0x7E, 0x03, 0x0E, 0xFA, 0x4F, 0xA0, 0xA0, 0xEF, 0xA4, 0xFA, 0x0D, 0x0C, 0xFA, 0x4F,
  0xA0, 0xE0, 0x6F, 0xA4, 0xFA, 0x81, 0xB0, 0xCF, 0xFF, 0x82, 0x40, 0x1C, 0xFF, 0xD0, 0x84, 0x81,
  0x6C, 0xEF, 0xE8, 0x1E, 0xB4, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_cloud_upload() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 4, 23, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_cloud_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_create_new_folder 24x24, 4-bit Alpha,  RLE, 27 bytes.
static const uint8_t ic_sharp_24_file_create_new_folder_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x4F, 0x2F, 0xFC, 0x2F, 0xFC, 0x2F, 0xF9, 0x71,
  0xFD, 0x71, 0xFF, 0x92, 0xFF, 0xC2, 0xFF, 0xC2, 0x80, 0xF6, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_create_new_folder() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_create_new_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_difference 24x24, 4-bit Alpha,  RLE, 66 bytes.
static const uint8_t ic_sharp_24_file_difference_data[] PROGMEM = {
  0x4F, 0xA0, 0x77, 0x2F, 0xB0, 0x77, 0x1F, 0xC0, 0x77, 0xFD, 0x07, 0x6E, 0x81, 0x70, 0x7C, 0x07,
  0x5E, 0x81, 0x70, 0x7D, 0x07, 0xA2, 0xC0, 0x75, 0x07, 0xE2, 0xC0, 0x75, 0x07, 0xE2, 0xE8, 0x17,
  0x07, 0xF9, 0x2E, 0x81, 0x70, 0x7F, 0x92, 0xFF, 0xB2, 0xFF, 0xB2, 0xC0, 0x75, 0x07, 0xE2, 0xC0,
  0x75, 0x07, 0xE2, 0xFF, 0xB2, 0xFF, 0xB2, 0xFF, 0xB2, 0xFF, 0xB7, 0x73, 0xA7, 0x73, 0xFF, 0xA3,
  0xFF, 0xA3,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_difference() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 1, 20, 22), Box(0, 0, 23, 23),
      ic_sharp_24_file_difference_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_download_done 24x24, 4-bit Alpha,  RLE, 52 bytes.
static const uint8_t ic_sharp_24_file_download_done_data[] PROGMEM = {
  0x74, 0x00, 0x77, 0x40, 0x7A, 0x07, 0x72, 0x07, 0xB0, 0x77, 0x10, 0x7B, 0x07, 0x71, 0x07, 0xB0,
  0x73, 0x00, 0xA3, 0x07, 0xB0, 0x73, 0x0A, 0xA8, 0x1A, 0x07, 0xB0, 0x74, 0x03, 0x0E, 0xA0, 0xDB,
  0x06, 0x60, 0x30, 0xEC, 0x06, 0x71, 0x03, 0x0E, 0xA0, 0x67, 0x38, 0x13, 0xE6, 0x75, 0x01, 0x80,
  0xC1, 0x0F, 0xFF, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_download_done() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 4, 18, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_download_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_download_for_offline 24x24, 4-bit Alpha,  RLE, 93 bytes.
static const uint8_t ic_sharp_24_file_download_for_offline_data[] PROGMEM = {
  0x68, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x30, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x08, 0xFD, 0x08, 0x50,
  0x8F, 0xF0, 0x83, 0x04, 0xF2, 0xF0, 0x42, 0x0D, 0xF2, 0xF8, 0x1D, 0x05, 0xF9, 0x2F, 0x90, 0x50,
  0x9F, 0x92, 0xF9, 0x09, 0x0D, 0xD0, 0x76, 0x07, 0xD0, 0xD0, 0xEE, 0x07, 0x40, 0x7E, 0x00, 0xEF,
  0x07, 0x20, 0x7F, 0x0E, 0x0D, 0xF9, 0x00, 0x7F, 0x90, 0xD0, 0x9F, 0xFC, 0x09, 0x05, 0xC7, 0x3C,
  0x81, 0x50, 0xDB, 0x73, 0xB0, 0xD2, 0x04, 0xFF, 0xA0, 0x43, 0x08, 0xFF, 0x08, 0x50, 0x8F, 0xD0,
  0x87, 0x04, 0x0D, 0xF9, 0x0D, 0x04, 0x73, 0x86, 0x59, 0xDE, 0xED, 0x95, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_download_for_offline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_download_for_offline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_downloading 24x24, 4-bit Alpha,  RLE, 134 bytes.
static const uint8_t ic_sharp_24_file_downloading_data[] PROGMEM = {
  0x68, 0x15, 0xAD, 0x28, 0x1D, 0xA5, 0x73, 0x04, 0x0D, 0xB2, 0xB0, 0xD0, 0x47, 0x08, 0xA8, 0x1C,
  0x62, 0x28, 0x43, 0x7D, 0xFE, 0x15, 0x08, 0xA0, 0x67, 0x18, 0x26, 0x20, 0x13, 0x04, 0xA0, 0x47,
  0x48, 0x12, 0xE4, 0x28, 0x1D, 0xF6, 0x5A, 0x58, 0x56, 0xFD, 0x05, 0xFC, 0x6A, 0x68, 0x4D, 0xF5,
  0x9F, 0x66, 0xA6, 0x84, 0x7F, 0xAD, 0xF2, 0x6A, 0x68, 0x23, 0xFD, 0xE9, 0x7A, 0x72, 0x0E, 0x93,
  0x07, 0xF9, 0x07, 0x58, 0x1D, 0xF2, 0x30, 0x7E, 0x07, 0x38, 0x43, 0xFD, 0x9F, 0x64, 0x07, 0xC0,
  0x74, 0x84, 0x7F, 0xA5, 0xFC, 0x50, 0x7A, 0x07, 0x58, 0x5D, 0xF5, 0x0D, 0xF6, 0x50, 0x07, 0x58,
  0x16, 0xFD, 0x20, 0x4A, 0x04, 0x74, 0x81, 0x2E, 0x53, 0x08, 0xA0, 0x67, 0x18, 0x26, 0x20, 0x15,
  0x08, 0xA8, 0x1C, 0x62, 0x28, 0x43, 0x7D, 0xFE, 0x17, 0x04, 0x0D, 0xB2, 0xB0, 0xD0, 0x47, 0x38,
  0x15, 0xAD, 0x28, 0x1D, 0xA5, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_downloading() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 21, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_downloading_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_download 24x24, 4-bit Alpha,  RLE, 36 bytes.
static const uint8_t ic_sharp_24_file_download_data[] PROGMEM = {
  0x4E, 0x71, 0xE7, 0x1E, 0x71, 0xE7, 0x1E, 0x71, 0xE4, 0x07, 0xFD, 0x81, 0x70, 0x7F, 0xB0, 0x73,
  0x07, 0xF9, 0x07, 0x50, 0x7E, 0x07, 0x70, 0x7C, 0x07, 0x72, 0x07, 0xA0, 0x77, 0x40, 0x07, 0x77,
  0x77, 0x6F, 0xFF, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_download() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 3, 18, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_drive_file_move 24x24, 4-bit Alpha,  RLE, 33 bytes.
static const uint8_t ic_sharp_24_file_drive_file_move_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x2F, 0x07, 0xFF, 0xD1, 0x07, 0xFF, 0xC2, 0x07,
  0xFE, 0x70, 0x7F, 0xD7, 0x07, 0xFF, 0xA2, 0x07, 0xFF, 0xB1, 0x07, 0xFF, 0xC0, 0x78, 0x09, 0x81,
  0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_drive_file_move() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_drive_file_move_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_drive_file_move_rtl 24x24, 4-bit Alpha,  RLE, 33 bytes.
static const uint8_t ic_sharp_24_file_drive_file_move_rtl_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x1F, 0x07, 0xFF, 0xC0, 0x71, 0xFF, 0xB0, 0x72,
  0xFF, 0xA0, 0x77, 0xFD, 0x07, 0x7F, 0xE0, 0x72, 0xFF, 0xC0, 0x71, 0xFF, 0xD0, 0x78, 0x09, 0x82,
  0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_drive_file_move_rtl() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_drive_file_move_rtl_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_drive_file_rename_outline 24x24, 4-bit Alpha,  RLE, 67 bytes.
static const uint8_t ic_sharp_24_file_drive_file_rename_outline_data[] PROGMEM = {
  0x75, 0x02, 0x77, 0x28, 0x14, 0xF9, 0x77, 0x04, 0xB0, 0x97, 0x60, 0x7C, 0x09, 0x73, 0x82, 0x45,
  0x07, 0xC0, 0x27, 0x10, 0x4A, 0x81, 0x50, 0x7A, 0x04, 0x71, 0x04, 0xC8, 0x25, 0x07, 0x47, 0x10,
  0x4E, 0x05, 0x72, 0x04, 0xF0, 0x47, 0x10, 0x4F, 0x04, 0x71, 0x04, 0xF0, 0x47, 0x10, 0x4F, 0x04,
  0x71, 0x04, 0xF0, 0x47, 0x2F, 0x04, 0x30, 0x7F, 0xD0, 0x43, 0x07, 0xFD, 0x04, 0x30, 0x7F, 0xD0,
  0x43, 0x07, 0xFA,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_drive_file_rename_outline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_drive_file_rename_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_drive_folder_upload 24x24, 4-bit Alpha,  RLE, 33 bytes.
static const uint8_t ic_sharp_24_file_drive_folder_upload_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x1F, 0x00, 0x7F, 0xFB, 0x07, 0x20, 0x7F, 0xF9,
  0x07, 0x40, 0x7F, 0xE0, 0x76, 0x07, 0xFF, 0x92, 0xFF, 0xC2, 0xFF, 0xC2, 0xFF, 0xC2, 0x80, 0x98,
  0x1F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_drive_folder_upload() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_drive_folder_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_file_download_done 24x24, 4-bit Alpha,  RLE, 63 bytes.
static const uint8_t ic_sharp_24_file_file_download_done_data[] PROGMEM = {
  0x77, 0x0A, 0x03, 0x76, 0x81, 0xBF, 0xD7, 0x58, 0x2B, 0xFD, 0x27, 0x48, 0x2B, 0xFD, 0x27, 0x48,
  0x2B, 0xFD, 0x22, 0x04, 0x0B, 0x78, 0x2B, 0xFD, 0x23, 0x81, 0xDF, 0xC5, 0x82, 0xBF, 0xD2, 0x48,
  0x21, 0xDF, 0xC3, 0x82, 0xBF, 0xD2, 0x68, 0x71, 0xDF, 0xC1, 0xBF, 0xD2, 0x71, 0x01, 0x0D, 0xB0,
  0xD0, 0x27, 0x38, 0x31, 0xDF, 0xD2, 0x75, 0x81, 0x1B, 0x28, 0x0C, 0x60, 0xFF, 0x2F, 0xF1,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_file_download_done() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 4, 19, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_file_download_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_file_download_off 24x24, 4-bit Alpha,  RLE, 89 bytes.
static const uint8_t ic_sharp_24_file_file_download_off_data[] PROGMEM = {
  0x81, 0x1C, 0x75, 0xE6, 0x04, 0xA0, 0x74, 0xE7, 0x05, 0xA0, 0x73, 0xE7, 0x10, 0x5A, 0x07, 0x20,
  0xAD, 0x72, 0x05, 0xA0, 0x72, 0x0A, 0xC7, 0x30, 0x5A, 0x07, 0x20, 0xAB, 0x73, 0x07, 0xB0, 0x72,
  0x0A, 0xD0, 0x77, 0x07, 0xB0, 0x72, 0x0A, 0xB0, 0x77, 0x20, 0x7B, 0x07, 0x28, 0x1A, 0xF7, 0x74,
  0x07, 0xB0, 0x72, 0x05, 0x76, 0x07, 0xB0, 0x77, 0x72, 0x07, 0xB0, 0x77, 0x72, 0x07, 0x0A, 0xA0,
  0x77, 0x73, 0x05, 0xA0, 0x77, 0x73, 0x05, 0xA0, 0x77, 0xFE, 0x07, 0x6F, 0xF0, 0x77, 0x73, 0x05,
  0xA0, 0x77, 0x73, 0x81, 0x5F, 0xC7, 0x74, 0x04, 0x01,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_file_download_off() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 3, 20, 22), Box(0, 0, 23, 23),
      ic_sharp_24_file_file_download_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_file_download 24x24, 4-bit Alpha,  RLE, 36 bytes.
static const uint8_t ic_sharp_24_file_file_download_data[] PROGMEM = {
  0x4E, 0x71, 0xE7, 0x1E, 0x71, 0xE7, 0x1E, 0x71, 0xE4, 0x07, 0xFD, 0x81, 0x70, 0x7F, 0xB0, 0x73,
  0x07, 0xF9, 0x07, 0x50, 0x7E, 0x07, 0x70, 0x7C, 0x07, 0x72, 0x07, 0xA0, 0x77, 0x40, 0x07, 0x77,
  0x77, 0x6F, 0xFF, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_file_download() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 3, 18, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_file_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_file_open 24x24, 4-bit Alpha,  RLE, 77 bytes.
static const uint8_t ic_sharp_24_file_file_open_data[] PROGMEM = {
  0xFB, 0x07, 0x72, 0xFA, 0x81, 0xDF, 0x77, 0x1F, 0xA8, 0x21, 0xDF, 0x77, 0xFA, 0x18, 0x21, 0xDF,
  0x76, 0xFA, 0x28, 0x21, 0xDF, 0x75, 0xFA, 0x38, 0x21, 0xDF, 0x74, 0xFA, 0x40, 0x10, 0xD9, 0x4F,
  0xFA, 0x4F, 0xFA, 0x4F, 0xFA, 0x4F, 0xFA, 0x4F, 0xFA, 0x4F, 0xC7, 0x2F, 0xC7, 0x2F, 0xC2, 0xD0,
  0xA1, 0xFC, 0x2D, 0x0A, 0x1F, 0xC2, 0xB0, 0xC0, 0x12, 0xFC, 0x2A, 0x82, 0xCF, 0xC1, 0x1F, 0xC2,
  0xA8, 0x31, 0xCF, 0xC1, 0xFC, 0x28, 0x49, 0x90, 0x1C, 0xB7, 0x74, 0x01, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_file_open() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 23, 22), Box(0, 0, 23, 23),
      ic_sharp_24_file_file_open_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_file_upload 24x24, 4-bit Alpha,  RLE, 36 bytes.
static const uint8_t ic_sharp_24_file_file_upload_data[] PROGMEM = {
  0x60, 0x07, 0x74, 0x07, 0xA0, 0x77, 0x20, 0x7C, 0x07, 0x70, 0x7E, 0x07, 0x50, 0x7F, 0x90, 0x73,
  0x07, 0xFB, 0x81, 0x70, 0x7F, 0xD0, 0x74, 0xE7, 0x1E, 0x71, 0xE7, 0x1E, 0x71, 0xE7, 0x1E, 0x77,
  0x77, 0x4F, 0xFF, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_file_upload() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 3, 18, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_file_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_copy 24x24, 4-bit Alpha,  RLE, 39 bytes.
static const uint8_t ic_sharp_24_file_folder_copy_data[] PROGMEM = {
  0x4F, 0x07, 0x77, 0xF9, 0x07, 0x76, 0xFF, 0xC4, 0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE2,
  0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE2, 0xFF, 0xE7,
  0x76, 0xA7, 0x76, 0xFF, 0xD3, 0xFF, 0xD3,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_folder_copy() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 2, 22, 20), Box(0, 0, 23, 23),
      ic_sharp_24_file_folder_copy_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_delete 24x24, 4-bit Alpha,  RLE, 43 bytes.
static const uint8_t ic_sharp_24_file_folder_delete_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x4F, 0x81, 0x70, 0x7F, 0xF9, 0x7F, 0xE8, 0x57,
  0x03, 0x73, 0x07, 0xFF, 0x18, 0x17, 0xF7, 0x1F, 0xF9, 0x18, 0x17, 0xF7, 0x1F, 0xF9, 0x18, 0x17,
  0xF7, 0x1F, 0xF9, 0x18, 0x13, 0x73, 0x1F, 0xF9, 0x58, 0x0F, 0x4F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_folder_delete() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_folder_delete_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_off 24x24, 4-bit Alpha,  RLE, 98 bytes.
static const uint8_t ic_sharp_24_file_folder_off_data[] PROGMEM = {
  0x10, 0x40, 0x77, 0x75, 0x82, 0x1E, 0xF7, 0x77, 0x50, 0x5A, 0x07, 0x20, 0xAA, 0x07, 0x76, 0xB0,
  0x72, 0x0A, 0xA0, 0x77, 0x5C, 0x07, 0x20, 0xAF, 0xD2, 0xD0, 0x72, 0x0A, 0xFC, 0x2E, 0x07, 0x20,
  0xAF, 0xB2, 0xF0, 0x72, 0x0A, 0xFA, 0x2F, 0x90, 0x72, 0x0A, 0xF9, 0x2F, 0xA0, 0x72, 0x0A, 0xF2,
  0xFB, 0x07, 0x20, 0xAE, 0x2F, 0xC0, 0x72, 0x0A, 0xD2, 0xFD, 0x07, 0x20, 0xAC, 0x2F, 0xE0, 0x72,
  0x0A, 0xB2, 0xFF, 0x07, 0x20, 0xAA, 0x2F, 0xF9, 0x07, 0x20, 0xA9, 0x2F, 0xFA, 0x07, 0x20, 0xA2,
  0xFF, 0xB0, 0x77, 0x75, 0x05, 0xA0, 0x77, 0x75, 0x05, 0xA0, 0x77, 0x75, 0x81, 0x5E, 0x47, 0x76,
  0x01, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_folder_off() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 2, 21, 23), Box(0, 0, 23, 23),
      ic_sharp_24_file_folder_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_open 24x24, 4-bit Alpha,  RLE, 31 bytes.
static const uint8_t ic_sharp_24_file_folder_open_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0xC6, 0xF7, 0x72, 0xC7, 0x72, 0xC7, 0x72, 0xC7, 0x72,
  0xC7, 0x72, 0xC7, 0x72, 0xC7, 0x72, 0xC7, 0x72, 0xC7, 0x72, 0xC7, 0x72, 0x80, 0xC6, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_folder_open() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_folder_open_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder 24x24, 4-bit Alpha,  RLE, 9 bytes.
static const uint8_t ic_sharp_24_file_folder_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0xCA, 0x4F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_folder() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_shared 24x24, 4-bit Alpha,  RLE, 41 bytes.
static const uint8_t ic_sharp_24_file_folder_shared_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x3F, 0x82, 0xB1, 0x1B, 0xFF, 0xA0, 0x12, 0x01,
  0xFF, 0xA0, 0x12, 0x01, 0xFF, 0xA8, 0x2B, 0x11, 0xBF, 0xFF, 0xFE, 0x81, 0xE8, 0x32, 0x81, 0x38,
  0xEF, 0xD0, 0x46, 0x03, 0xFD, 0x71, 0x80, 0xF3, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_folder_shared() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_folder_shared_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_zip 24x24, 4-bit Alpha,  RLE, 30 bytes.
static const uint8_t ic_sharp_24_file_folder_zip_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0xE0, 0xF2, 0xFF, 0xC2, 0xFF, 0xE2, 0xFF, 0xC2, 0xFF,
  0xA2, 0xFF, 0xC2, 0xFF, 0xE2, 0xFF, 0xC2, 0xFF, 0xA2, 0xFF, 0xC2, 0x80, 0xD2, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_folder_zip() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_folder_zip_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_format_overline 24x24, 4-bit Alpha,  RLE, 83 bytes.
static const uint8_t ic_sharp_24_file_format_overline_data[] PROGMEM = {
  0xFF, 0xFF, 0x77, 0x77, 0x38, 0x61, 0x7C, 0xEE, 0xC7, 0x15, 0x05, 0x0E, 0xE0, 0xE0, 0x53, 0x05,
  0xB8, 0x2C, 0x99, 0xCB, 0x85, 0x50, 0x1E, 0xFE, 0x54, 0x84, 0x5E, 0xFE, 0x17, 0xA0, 0x56, 0x05,
  0xA8, 0x27, 0xCF, 0xC7, 0x18, 0x4C, 0xFC, 0xEF, 0x97, 0x18, 0x49, 0xFE, 0xEF, 0x97, 0x18, 0x49,
  0xFE, 0xCF, 0xC7, 0x18, 0x2C, 0xFC, 0x7A, 0x05, 0x60, 0x5A, 0x84, 0x71, 0xEF, 0xE5, 0x48, 0x55,
  0xEF, 0xE1, 0x05, 0xB8, 0x2C, 0x99, 0xCB, 0x05, 0x30, 0x50, 0xEE, 0x0E, 0x05, 0x58, 0x61, 0x7C,
  0xEE, 0xC7, 0x13,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_format_overline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 3, 18, 20), Box(0, 0, 23, 23),
      ic_sharp_24_file_format_overline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_grid_view 24x24, 4-bit Alpha,  RLE, 36 bytes.
static const uint8_t ic_sharp_24_file_grid_view_data[] PROGMEM = {
  0xF9, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F,
  0x98, 0x0C, 0x00, 0xF9, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA, 0x2F, 0xFA,
  0x2F, 0xFA, 0x2F, 0x90,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_grid_view() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_sharp_24_file_grid_view_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_newspaper 24x24, 4-bit Alpha,  RLE, 46 bytes.
static const uint8_t ic_sharp_24_file_newspaper_data[] PROGMEM = {
  0x82, 0x70, 0x3B, 0x28, 0x6B, 0x30, 0x77, 0x03, 0xB2, 0x89, 0x3B, 0x30, 0x7F, 0x9E, 0xFB, 0xBF,
  0xE9, 0xA8, 0x69, 0xEF, 0xBB, 0xFE, 0x98, 0x0F, 0x3F, 0x77, 0x2C, 0x77, 0x2C, 0x77, 0x28, 0x0D,
  0x0F, 0x7A, 0x7C, 0x7A, 0x7C, 0x7F, 0xE7, 0xFE, 0x7A, 0x7C, 0x7A, 0x78, 0x0C, 0x6F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_newspaper() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 3, 21, 20), Box(0, 0, 23, 23),
      ic_sharp_24_file_newspaper_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_request_quote 24x24, 4-bit Alpha,  RLE, 44 bytes.
static const uint8_t ic_sharp_24_file_request_quote_data[] PROGMEM = {
  0xFB, 0x07, 0x5F, 0xA8, 0x1D, 0xF7, 0x4F, 0xA8, 0x21, 0xDF, 0x73, 0xFA, 0x18, 0x21, 0xDF, 0x72,
  0xFA, 0x28, 0x21, 0xDF, 0x71, 0xFA, 0x38, 0x21, 0xDF, 0x7F, 0xFF, 0xA2, 0xFD, 0x6F, 0xB6, 0xFB,
  0x2F, 0xF6, 0xFB, 0x6F, 0xF2, 0xFB, 0x6F, 0xB6, 0xFD, 0x28, 0x0E, 0x3F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_request_quote() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 19, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_request_quote_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_rule_folder 24x24, 4-bit Alpha,  RLE, 61 bytes.
static const uint8_t ic_sharp_24_file_rule_folder_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x1F, 0x0D, 0xFF, 0xC8, 0x77, 0x0B, 0xC3, 0xEE,
  0x3C, 0xF0, 0xEA, 0x07, 0x28, 0x5A, 0x30, 0x22, 0x03, 0xE8, 0x2A, 0x1C, 0x72, 0x82, 0xAF, 0xE2,
  0x20, 0x20, 0xEE, 0x05, 0x40, 0xAA, 0x0E, 0x02, 0x20, 0x20, 0xEF, 0x05, 0x20, 0xAB, 0x84, 0x30,
  0x22, 0x03, 0xF9, 0x05, 0x0A, 0xC8, 0x4C, 0x3E, 0xE3, 0xC8, 0x09, 0x97, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_rule_folder() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_rule_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_snippet_folder 24x24, 4-bit Alpha,  RLE, 45 bytes.
static const uint8_t ic_sharp_24_file_snippet_folder_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x98, 0x3F, 0x30, 0x10, 0xDF, 0xF9, 0x18, 0x33, 0x71,
  0x1D, 0xFF, 0x18, 0x37, 0xFC, 0x11, 0xFF, 0x10, 0x7A, 0x07, 0x1F, 0xF1, 0x07, 0xA0, 0x71, 0xFF,
  0x10, 0x7A, 0x07, 0x1F, 0xF1, 0x82, 0x37, 0x73, 0x1F, 0xF6, 0x80, 0xF3, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_snippet_folder() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_snippet_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_text_snippet 24x24, 4-bit Alpha,  RLE, 30 bytes.
static const uint8_t ic_sharp_24_file_text_snippet_data[] PROGMEM = {
  0xFD, 0x07, 0x5F, 0xE0, 0x74, 0xFF, 0x07, 0x3F, 0xF9, 0x07, 0x2C, 0x7D, 0x07, 0x1C, 0x7E, 0x07,
  0x80, 0xC4, 0xF7, 0x3F, 0x97, 0x38, 0x0D, 0x0F, 0x73, 0xF9, 0x73, 0x80, 0x99, 0x0F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_text_snippet() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 20, 20), Box(0, 0, 23, 23),
      ic_sharp_24_file_text_snippet_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_topic 24x24, 4-bit Alpha,  RLE, 21 bytes.
static const uint8_t ic_sharp_24_file_topic_data[] PROGMEM = {
  0xF9, 0x07, 0x74, 0xFA, 0x07, 0x73, 0x80, 0x9A, 0x0F, 0x75, 0xF9, 0x75, 0x80, 0xD4, 0xF7, 0x1F,
  0xD7, 0x18, 0x09, 0xA4, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_topic() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 4, 21, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_topic_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_upload_file 24x24, 4-bit Alpha,  RLE, 52 bytes.
static const uint8_t ic_sharp_24_file_upload_file_data[] PROGMEM = {
  0xFB, 0x07, 0x5F, 0xA8, 0x1D, 0xF7, 0x4F, 0xA8, 0x21, 0xDF, 0x73, 0xFA, 0x18, 0x21, 0xDF, 0x72,
  0xFA, 0x28, 0x21, 0xDF, 0x71, 0xFA, 0x38, 0x21, 0xDF, 0x7F, 0xA4, 0x01, 0x0D, 0x80, 0xC4, 0xF0,
  0x07, 0xFE, 0x07, 0x20, 0x7F, 0xC0, 0x74, 0x07, 0xFA, 0x07, 0x60, 0x7F, 0xC2, 0xFF, 0x2F, 0xF2,
  0xFF, 0x28, 0x0E, 0x3F,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_upload_file() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 19, 21), Box(0, 0, 23, 23),
      ic_sharp_24_file_upload_file_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_upload 24x24, 4-bit Alpha,  RLE, 36 bytes.
static const uint8_t ic_sharp_24_file_upload_data[] PROGMEM = {
  0x60, 0x07, 0x74, 0x07, 0xA0, 0x77, 0x20, 0x7C, 0x07, 0x70, 0x7E, 0x07, 0x50, 0x7F, 0x90, 0x73,
  0x07, 0xFB, 0x81, 0x70, 0x7F, 0xD0, 0x74, 0xE7, 0x1E, 0x71, 0xE7, 0x1E, 0x71, 0xE7, 0x1E, 0x77,
  0x77, 0x4F, 0xFF, 0xF0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_upload() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(5, 3, 18, 19), Box(0, 0, 23, 23),
      ic_sharp_24_file_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_workspaces 24x24, 4-bit Alpha,  RLE, 93 bytes.
static const uint8_t ic_sharp_24_file_workspaces_data[] PROGMEM = {
  0x78, 0x41, 0xAD, 0xDA, 0x17, 0x60, 0x10, 0xEC, 0x0E, 0x01, 0x75, 0x0A, 0xE0, 0xA7, 0x50, 0xDE,
  0x0D, 0x75, 0x0D, 0xE0, 0xD7, 0x50, 0xAE, 0x0A, 0x75, 0x01, 0x0E, 0xC0, 0xE0, 0x17, 0x68, 0x41,
  0xAD, 0xDA, 0x18, 0x0D, 0x40, 0x84, 0x1A, 0xDD, 0xA1, 0x68, 0x71, 0xAD, 0xDA, 0x10, 0x1E, 0xC0,
  0xE0, 0x14, 0x01, 0x0E, 0xC8, 0x1E, 0x1A, 0xE0, 0xA4, 0x0A, 0xE0, 0xA0, 0xDE, 0x0D, 0x40, 0xDE,
  0x00, 0xDE, 0x0D, 0x40, 0xDE, 0x0D, 0x0A, 0xE0, 0xA4, 0x0A, 0xE8, 0x1A, 0x1E, 0xC0, 0xE0, 0x14,
  0x01, 0x0E, 0xC8, 0x7E, 0x10, 0x1A, 0xDD, 0xA1, 0x68, 0x41, 0xAD, 0xDA, 0x11,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_24_file_workspaces() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 3, 21, 20), Box(0, 0, 23, 23),
      ic_sharp_24_file_workspaces_data, Alpha4(color::Black));
  return value;
}
