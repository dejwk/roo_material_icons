#include "file.h"

using namespace roo_display;

// Image file ic_sharp_24_file_attach_email 24x24, 4-bit Alpha,  RLE, 120 bytes.
static const uint8_t ic_sharp_24_file_attach_email_data[] PROGMEM = {
  0x80, 0xD5, 0x0F, 0xFE, 0x4F, 0xFE, 0x4A, 0x06, 0x0E, 0xFD, 0x0D, 0x05, 0xA4, 0xA1, 0x01, 0x0A,
  0xFB, 0x08, 0x01, 0x1A, 0x4A, 0x83, 0x91, 0x04, 0xDE, 0x83, 0xC3, 0x01, 0xAA, 0x4B, 0x0E, 0x05,
  0x20, 0x8B, 0x0E, 0x07, 0x20, 0x60, 0xEB, 0x4D, 0x89, 0x0A, 0x10, 0x2C, 0xA1, 0x02, 0xCD, 0x4E,
  0x0E, 0x07, 0x40, 0x8F, 0x4F, 0x98, 0x2C, 0x34, 0xDA, 0x0A, 0x03, 0x71, 0xFE, 0x84, 0x61, 0x8C,
  0x71, 0x5F, 0xE0, 0x10, 0x9B, 0x07, 0x5F, 0xE1, 0xA8, 0x14, 0xFE, 0x5F, 0xE1, 0xA1, 0xA1, 0xA2,
  0xFE, 0x1A, 0x1A, 0x1A, 0x2F, 0xE1, 0xA1, 0xA1, 0xA2, 0xFE, 0x1A, 0x1A, 0x1A, 0x77, 0x28, 0x1E,
  0xF1, 0x28, 0x13, 0xFD, 0x77, 0x28, 0x6B, 0xFA, 0x12, 0xBF, 0x97, 0x72, 0x02, 0xD0, 0xE0, 0x17,
  0x73, 0x84, 0x2B, 0xEE, 0xA1, 0x80, 0xD6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_attach_email() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_attach_email_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_attachment 24x24, 4-bit Alpha,  RLE, 91 bytes.
static const uint8_t ic_sharp_24_file_attachment_data[] PROGMEM = {
  0x80, 0xAA, 0x10, 0x03, 0x05, 0x80, 0x90, 0x70, 0x60, 0x36, 0x02, 0x0C, 0xFF, 0xA0, 0xC0, 0x13,
  0x83, 0x2F, 0xD6, 0x27, 0x58, 0x21, 0x7E, 0xC3, 0x81, 0xCD, 0x13, 0x03, 0x80, 0x57, 0x03, 0x28,
  0x57, 0xF3, 0x03, 0xF4, 0x30, 0xCF, 0xB0, 0x72, 0x85, 0x2F, 0x60, 0x6F, 0x12, 0x81, 0x5F, 0x87,
  0x58, 0x37, 0xF3, 0x07, 0x93, 0x81, 0x5F, 0x67, 0x48, 0x15, 0xDD, 0x28, 0x15, 0xF4, 0x30, 0xEF,
  0xE0, 0xD0, 0x23, 0x0D, 0x0C, 0x40, 0x58, 0x07, 0x70, 0x55, 0x82, 0x3F, 0xC4, 0x77, 0x70, 0x30,
  0xDF, 0xE0, 0x77, 0x30, 0x48, 0x09, 0x07, 0x03, 0x80, 0xAA, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_attachment() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_attachment_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_circle 24x24, 4-bit Alpha,  RLE, 120 bytes.
static const uint8_t ic_sharp_24_file_cloud_circle_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x64, 0x9C, 0xDD, 0xB8, 0x37, 0x70, 0x40, 0xDF, 0x90, 0xC0, 0x37, 0x40, 0x7F,
  0xD0, 0x67, 0x20, 0x8F, 0xF0, 0x67, 0x05, 0xFF, 0xA0, 0x36, 0x0D, 0xD8, 0x4D, 0x62, 0x26, 0xED,
  0x0C, 0x50, 0x5D, 0x0D, 0x01, 0x40, 0x10, 0xED, 0x03, 0x40, 0xAD, 0x04, 0x60, 0x6D, 0x08, 0x40,
  0xDB, 0x0A, 0x03, 0x70, 0x2D, 0x0B, 0x4B, 0x06, 0x73, 0x81, 0x17, 0xEA, 0x0D, 0x4B, 0x01, 0x75,
  0x07, 0xA0, 0xD4, 0x0E, 0xA0, 0x17, 0x50, 0x2A, 0x0C, 0x40, 0xBA, 0x08, 0x75, 0x07, 0xA0, 0x94,
  0x06, 0xA0, 0xE0, 0x57, 0x30, 0x50, 0xDA, 0x04, 0x40, 0x10, 0xEF, 0xFA, 0x0D, 0x60, 0x6F, 0xFA,
  0x04, 0x70, 0x9F, 0xF0, 0x77, 0x20, 0x9F, 0xD0, 0x87, 0x40, 0x60, 0xEF, 0x90, 0xD0, 0x57, 0x68,
  0x21, 0x6B, 0xEA, 0x81, 0xDA, 0x58, 0x0E, 0x40,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_cloud_circle() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_cloud_circle_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_done 24x24, 4-bit Alpha,  RLE, 100 bytes.
static const uint8_t ic_sharp_24_file_cloud_done_data[] PROGMEM = {
  0x80, 0x9C, 0x40, 0x86, 0x17, 0xCD, 0xDB, 0x71, 0x77, 0x10, 0x6F, 0x0E, 0x05, 0x76, 0x08, 0xFB,
  0x06, 0x74, 0x04, 0xFD, 0x03, 0x71, 0x81, 0x6B, 0xEF, 0xD0, 0xB6, 0x01, 0x0B, 0xFC, 0x0A, 0x07,
  0xB0, 0x15, 0x0C, 0xFC, 0x0A, 0x20, 0xAA, 0x81, 0xD8, 0x22, 0x06, 0xFC, 0x0A, 0x20, 0x6E, 0x81,
  0x50, 0xBE, 0x08, 0x0B, 0xA0, 0xA2, 0x06, 0xF9, 0x02, 0x0E, 0xD0, 0xB2, 0x0B, 0x0A, 0x20, 0x6F,
  0xA0, 0x9F, 0x06, 0x40, 0x6F, 0xB0, 0xC0, 0xDF, 0x06, 0x20, 0x6F, 0xC0, 0xD0, 0x7F, 0x90, 0x06,
  0xFD, 0x81, 0x91, 0xDF, 0xFF, 0x82, 0x30, 0x2C, 0xFF, 0xD0, 0x74, 0x81, 0x7B, 0xEF, 0xF0, 0xC0,
  0x38, 0x09, 0xB6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_cloud_done() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_cloud_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_download 24x24, 4-bit Alpha,  RLE, 91 bytes.
static const uint8_t ic_sharp_24_file_cloud_download_data[] PROGMEM = {
  0x80, 0x9C, 0x40, 0x86, 0x17, 0xCD, 0xDB, 0x71, 0x77, 0x10, 0x6F, 0x0E, 0x05, 0x76, 0x08, 0xFB,
  0x06, 0x74, 0x04, 0xFD, 0x03, 0x71, 0x81, 0x6B, 0xEF, 0xD0, 0xB6, 0x01, 0x0B, 0xF4, 0xD0, 0x15,
  0x0C, 0xF9, 0x4D, 0x81, 0xD8, 0x22, 0x06, 0xFA, 0x4F, 0x98, 0x15, 0x0B, 0xFA, 0x4F, 0xA0, 0x20,
  0xEE, 0x06, 0x71, 0x06, 0xE0, 0x9F, 0x90, 0x66, 0x06, 0xF0, 0xC0, 0xDF, 0x90, 0x64, 0x06, 0xF9,
  0x0D, 0x07, 0xFA, 0x06, 0x20, 0x6F, 0xA8, 0x19, 0x1D, 0xFA, 0x00, 0x6F, 0xB8, 0x23, 0x02, 0xCF,
  0xFD, 0x07, 0x48, 0x17, 0xBE, 0xFF, 0x0C, 0x03, 0x80, 0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_cloud_download() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_cloud_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_off 24x24, 4-bit Alpha,  RLE, 155 bytes.
static const uint8_t ic_sharp_24_file_cloud_off_data[] PROGMEM = {
  0x80, 0x9B, 0x70, 0x81, 0x3C, 0x12, 0x86, 0x17, 0xBD, 0xDB, 0x71, 0x74, 0x85, 0xCF, 0xD1, 0x03,
  0xED, 0x0E, 0x05, 0x73, 0x89, 0x21, 0xDF, 0xD1, 0x03, 0x41, 0x14, 0xCA, 0x06, 0x73, 0x83, 0x1D,
  0xFD, 0x16, 0x07, 0xA0, 0x37, 0x18, 0x16, 0xBE, 0xA0, 0xD0, 0x16, 0x81, 0x9F, 0xB6, 0x01, 0x0B,
  0xE0, 0xD0, 0x15, 0x01, 0xA0, 0x15, 0x89, 0x1C, 0xFD, 0x62, 0x01, 0xDF, 0xD1, 0x58, 0x3C, 0xFD,
  0x82, 0x28, 0x26, 0xFD, 0x14, 0x83, 0x1D, 0xFD, 0x14, 0x08, 0xC8, 0x35, 0x0B, 0xF4, 0x68, 0x31,
  0xDF, 0xD1, 0x50, 0x20, 0x8A, 0x82, 0x2E, 0xF1, 0x78, 0x31, 0xDF, 0xD1, 0x68, 0x1A, 0xF9, 0xA7,
  0x28, 0x31, 0xDF, 0xD1, 0x58, 0x44, 0xFC, 0xDF, 0x47, 0x28, 0x31, 0xDF, 0xD1, 0x48, 0x42, 0xFD,
  0x7F, 0xC7, 0x38, 0x31, 0xDF, 0xD1, 0x38, 0x67, 0xF9, 0x1D, 0xFC, 0x47, 0x28, 0x93, 0x1D, 0xFD,
  0x10, 0x1E, 0xF3, 0x02, 0xCF, 0xF9, 0x83, 0xD1, 0x03, 0x64, 0x81, 0x7B, 0xEF, 0xE0, 0xD0, 0x17,
  0x76, 0x82, 0x1D, 0xFC, 0x77, 0x78, 0x11, 0xC3, 0x80, 0xD7, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_cloud_off() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_cloud_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud 24x24, 4-bit Alpha,  RLE, 78 bytes.
static const uint8_t ic_sharp_24_file_cloud_data[] PROGMEM = {
  0x80, 0x9C, 0x40, 0x86, 0x17, 0xCD, 0xDB, 0x71, 0x77, 0x10, 0x6F, 0x0E, 0x05, 0x76, 0x08, 0xFB,
  0x06, 0x74, 0x04, 0xFD, 0x03, 0x71, 0x81, 0x6B, 0xEF, 0xD0, 0xB6, 0x01, 0x0B, 0xFF, 0xA0, 0x15,
  0x0C, 0xFF, 0xB8, 0x1D, 0x82, 0x20, 0x6F, 0xFF, 0x81, 0x50, 0xBF, 0xFF, 0x90, 0x20, 0xEF, 0xFF,
  0x90, 0x9F, 0xFF, 0xA0, 0xC0, 0xDF, 0xFF, 0x90, 0xD0, 0x7F, 0xFF, 0x98, 0x19, 0x1D, 0xFF, 0xF8,
  0x23, 0x02, 0xCF, 0xFD, 0x07, 0x48, 0x17, 0xBE, 0xFF, 0x0C, 0x03, 0x80, 0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_cloud() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_cloud_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_queue 24x24, 4-bit Alpha,  RLE, 108 bytes.
static const uint8_t ic_sharp_24_file_cloud_queue_data[] PROGMEM = {
  0x80, 0x9C, 0x40, 0x86, 0x17, 0xCD, 0xDB, 0x71, 0x77, 0x10, 0x6F, 0x0E, 0x05, 0x76, 0x08, 0xA8,
  0x4A, 0x42, 0x14, 0xCA, 0x06, 0x74, 0x04, 0xA0, 0x56, 0x07, 0xA0, 0x37, 0x18, 0x36, 0xBE, 0xF6,
  0x71, 0x81, 0x9F, 0xB6, 0x01, 0x0B, 0xB0, 0xE7, 0x20, 0x1A, 0x01, 0x58, 0x3C, 0xFD, 0x62, 0x74,
  0x83, 0xCF, 0xD8, 0x22, 0x82, 0x6F, 0xD1, 0x76, 0x08, 0xC8, 0x35, 0x0B, 0xF4, 0x77, 0x20, 0x20,
  0x8A, 0x82, 0x2E, 0xF1, 0x77, 0x48, 0x1A, 0xF9, 0xA7, 0x75, 0x84, 0x4F, 0xCD, 0xF4, 0x77, 0x48,
  0x42, 0xFD, 0x7F, 0xC7, 0x74, 0x86, 0x7F, 0x91, 0xDF, 0xC4, 0x77, 0x02, 0x08, 0xA8, 0x23, 0x02,
  0xCF, 0xFD, 0x07, 0x48, 0x17, 0xBE, 0xFF, 0x0C, 0x03, 0x80, 0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_cloud_queue() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_cloud_queue_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_cloud_upload 24x24, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_sharp_24_file_cloud_upload_data[] PROGMEM = {
  0x80, 0x9C, 0x40, 0x86, 0x17, 0xCD, 0xDB, 0x71, 0x77, 0x10, 0x6F, 0x0E, 0x05, 0x76, 0x08, 0xFB,
  0x06, 0x74, 0x04, 0xFD, 0x03, 0x71, 0x81, 0x6B, 0xED, 0x00, 0x8D, 0x0B, 0x60, 0x10, 0xBF, 0x08,
  0x20, 0x8D, 0x01, 0x50, 0xCF, 0x08, 0x40, 0x8C, 0x81, 0xD8, 0x22, 0x06, 0xF0, 0x86, 0x08, 0xE8,
  0x15, 0x0B, 0xE0, 0x87, 0x10, 0x8E, 0x02, 0x0E, 0xFA, 0x4F, 0xA0, 0x9F, 0xB4, 0xFA, 0x0C, 0x0D,
  0xFA, 0x4F, 0xA0, 0xD0, 0x7F, 0xA4, 0xFA, 0x81, 0x91, 0xDF, 0xFF, 0x82, 0x30, 0x2C, 0xFF, 0xD0,
  0x74, 0x81, 0x7B, 0xEF, 0xF0, 0xC0, 0x38, 0x09, 0xB6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_cloud_upload() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_cloud_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_create_new_folder 24x24, 4-bit Alpha,  RLE, 45 bytes.
static const uint8_t ic_sharp_24_file_create_new_folder_data[] PROGMEM = {
  0x80, 0x9B, 0x60, 0xF9, 0x06, 0x77, 0x1F, 0xA0, 0x67, 0x7F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xD2, 0xE4, 0xFD, 0x2E, 0x4F, 0xD2, 0xE4, 0xFA, 0x71, 0xB4, 0xFA, 0x71, 0xB4, 0xFD, 0x2E, 0x4F,
  0xD2, 0xE4, 0xFD, 0x2E, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x80, 0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_create_new_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_create_new_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_download_done 24x24, 4-bit Alpha,  RLE, 62 bytes.
static const uint8_t ic_sharp_24_file_download_done_data[] PROGMEM = {
  0x80, 0x9D, 0x40, 0x00, 0x67, 0x77, 0x06, 0xA0, 0x67, 0x75, 0x06, 0xB0, 0x77, 0x74, 0x06, 0xB0,
  0x67, 0x74, 0x06, 0xB0, 0x67, 0x60, 0xA0, 0x83, 0x06, 0xB0, 0x67, 0x60, 0xBA, 0x81, 0x80, 0x6B,
  0x06, 0x77, 0x05, 0xB0, 0xBB, 0x06, 0x77, 0x20, 0x5D, 0x06, 0x77, 0x40, 0x5B, 0x06, 0x77, 0x68,
  0x15, 0xF6, 0x77, 0x71, 0x02, 0x80, 0xF7, 0x0F, 0xF7, 0x3F, 0xF8, 0x09, 0xC1, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_download_done() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_download_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_download 24x24, 4-bit Alpha,  RLE, 49 bytes.
static const uint8_t ic_sharp_24_file_download_data[] PROGMEM = {
  0x80, 0x99, 0x50, 0xE7, 0x74, 0xE7, 0x74, 0xE7, 0x74, 0xE7, 0x74, 0xE7, 0x74, 0xE7, 0x70, 0x8F,
  0xD0, 0x87, 0x40, 0x8F, 0xB0, 0x87, 0x60, 0x8F, 0x90, 0x87, 0x71, 0x08, 0xE0, 0x87, 0x73, 0x08,
  0xC0, 0x87, 0x75, 0x08, 0xA0, 0x87, 0x77, 0x00, 0x88, 0x0F, 0x40, 0xFF, 0x73, 0xFF, 0x80, 0x9C,
  0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_download() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_open 24x24, 4-bit Alpha,  RLE, 50 bytes.
static const uint8_t ic_sharp_24_file_folder_open_data[] PROGMEM = {
  0x80, 0x9B, 0x60, 0xF9, 0x06, 0x77, 0x1F, 0xA0, 0x67, 0x7F, 0xFE, 0x4F, 0xFE, 0x4A, 0x77, 0x2A,
  0x4A, 0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x4A,
  0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x4A, 0x77, 0x2A, 0x4F, 0xFE, 0x4F, 0xFE, 0x80,
  0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_folder_open() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_folder_open_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder 24x24, 4-bit Alpha,  RLE, 40 bytes.
static const uint8_t ic_sharp_24_file_folder_data[] PROGMEM = {
  0x80, 0x9B, 0x60, 0xF9, 0x06, 0x77, 0x1F, 0xA0, 0x67, 0x7F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x80, 0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_folder_shared 24x24, 4-bit Alpha,  RLE, 59 bytes.
static const uint8_t ic_sharp_24_file_folder_shared_data[] PROGMEM = {
  0x80, 0x9B, 0x60, 0xF9, 0x06, 0x77, 0x1F, 0xA0, 0x67, 0x7F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xC8, 0x2B, 0x34, 0xCD, 0x4F, 0xC0, 0x22, 0x04, 0xD4, 0xFC, 0x01, 0x20, 0x3D, 0x4F, 0xC8, 0x2A,
  0x12, 0xBD, 0x4F, 0xFE, 0x4F, 0xB8, 0x4A, 0x52, 0x14, 0x9C, 0x4F, 0xA0, 0x86, 0x06, 0xB4, 0xFA,
  0x71, 0xB4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE8, 0x09, 0xB6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_folder_shared() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_folder_shared_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_request_quote 24x24, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_sharp_24_file_request_quote_data[] PROGMEM = {
  0x80, 0xE0, 0x0F, 0xB0, 0x67, 0x6F, 0xA8, 0x1E, 0xF6, 0x75, 0xFA, 0x82, 0x2E, 0xF6, 0x74, 0xFA,
  0x18, 0x22, 0xEF, 0x67, 0x3F, 0xA2, 0x82, 0x2E, 0xF6, 0x72, 0xFA, 0x38, 0x22, 0xEF, 0x67, 0x1F,
  0xFA, 0x71, 0xF2, 0xF7, 0x1D, 0x6D, 0x71, 0xD6, 0xD7, 0x1D, 0x2F, 0xA7, 0x1D, 0x6D, 0x71, 0xD6,
  0xD7, 0x1F, 0xA2, 0xD7, 0x1D, 0x6D, 0x71, 0xD6, 0xD7, 0x1F, 0x2F, 0x71, 0xFF, 0xA7, 0x1F, 0xFA,
  0x71, 0xFF, 0xA8, 0x0E, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_request_quote() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_request_quote_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_rule_folder 24x24, 4-bit Alpha,  RLE, 82 bytes.
static const uint8_t ic_sharp_24_file_rule_folder_data[] PROGMEM = {
  0x80, 0x9B, 0x60, 0xF9, 0x06, 0x77, 0x1F, 0xA0, 0x67, 0x7F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xA0, 0xEF, 0xB4, 0xF9, 0x87, 0x61, 0xDD, 0x5E, 0xE4, 0xEB, 0x4F, 0x06, 0x28, 0x5A, 0x20, 0x32,
  0x04, 0xB4, 0xB8, 0x2A, 0x1D, 0x62, 0x82, 0xAF, 0xD1, 0x20, 0x20, 0xEB, 0x4B, 0x03, 0x40, 0xAA,
  0x0E, 0x02, 0x20, 0x30, 0xEB, 0x4B, 0x0E, 0x03, 0x20, 0xAB, 0x84, 0x30, 0x21, 0x05, 0xB4, 0xC8,
  0x1E, 0x3A, 0xC8, 0x4B, 0x3E, 0xD2, 0xDB, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x80,
  0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_rule_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_rule_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_snippet_folder 24x24, 4-bit Alpha,  RLE, 66 bytes.
static const uint8_t ic_sharp_24_file_snippet_folder_data[] PROGMEM = {
  0x80, 0x9B, 0x60, 0xF9, 0x06, 0x77, 0x1F, 0xA0, 0x67, 0x7F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xC3, 0x02, 0x0E, 0xC4, 0xFC, 0x18, 0x33, 0x70, 0x2E, 0xB4, 0xFC, 0x18, 0x37, 0xFB, 0x02, 0xB4,
  0xFC, 0x10, 0x7A, 0x07, 0x1B, 0x4F, 0xC1, 0x07, 0xA0, 0x71, 0xB4, 0xFC, 0x10, 0x7A, 0x07, 0x1B,
  0x4F, 0xC1, 0x82, 0x37, 0x73, 0x1B, 0x4F, 0xC6, 0xB4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE8, 0x09,
  0xB6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_snippet_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_snippet_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_text_snippet 24x24, 4-bit Alpha,  RLE, 50 bytes.
static const uint8_t ic_sharp_24_file_text_snippet_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0xFD, 0x06, 0x74, 0xFE, 0x06, 0x73, 0xFF, 0x06, 0x72, 0xFF, 0x90, 0x67, 0x1C,
  0x7D, 0x06, 0x7C, 0x7E, 0x06, 0x6F, 0xFC, 0x6F, 0xFC, 0x6C, 0x73, 0xC6, 0xC7, 0x3C, 0x6F, 0xFC,
  0x6F, 0xFC, 0x6C, 0x73, 0xC6, 0xC7, 0x3C, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x6F, 0xFC, 0x80,
  0x98, 0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_text_snippet() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_text_snippet_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_topic 24x24, 4-bit Alpha,  RLE, 43 bytes.
static const uint8_t ic_sharp_24_file_topic_data[] PROGMEM = {
  0x80, 0x9B, 0x60, 0xF9, 0x06, 0x77, 0x1F, 0xA0, 0x67, 0x7F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xFE, 0x4C, 0x75, 0xC4, 0xC7, 0x5C, 0x4F, 0xFE, 0x4F, 0xFE, 0x4C, 0x71, 0xF9, 0x4C, 0x71, 0xF9,
  0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x80, 0x9B, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_topic() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_topic_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_24_file_upload 24x24, 4-bit Alpha,  RLE, 49 bytes.
static const uint8_t ic_sharp_24_file_upload_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x00, 0x67, 0x77, 0x06, 0xA0, 0x67, 0x75, 0x06, 0xC0, 0x67, 0x73, 0x06, 0xE0,
  0x67, 0x71, 0x06, 0xF9, 0x06, 0x76, 0x06, 0xFB, 0x06, 0x74, 0x06, 0xFD, 0x06, 0x77, 0xE7, 0x74,
  0xE7, 0x74, 0xE7, 0x74, 0xE7, 0x74, 0xE7, 0x74, 0xE8, 0x0F, 0x20, 0xFF, 0x73, 0xFF, 0x80, 0x9C,
  0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_file_upload() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_file_upload_data, Alpha4(color::Black));
  return value;
}

