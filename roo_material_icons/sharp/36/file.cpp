#include "file.h"

using namespace roo_display;

// Image file ic_sharp_36_file_attach_email 36x36, 4-bit Alpha,  RLE, 271 bytes.
static const uint8_t ic_sharp_36_file_attach_email_data[] PROGMEM = {
  0x80, 0x9D, 0x10, 0x07, 0xFF, 0xFF, 0x90, 0x75, 0x07, 0xFF, 0xFF, 0x90, 0x75, 0x07, 0xFF, 0xFF,
  0x90, 0x75, 0x07, 0xA0, 0x90, 0xBF, 0xFF, 0x00, 0x9A, 0x07, 0x50, 0x7A, 0x82, 0x70, 0x5E, 0xFF,
  0xB8, 0x2D, 0x40, 0x7A, 0x07, 0x50, 0x7A, 0x07, 0x20, 0x10, 0x9F, 0xF9, 0x07, 0x30, 0x7A, 0x07,
  0x50, 0x7A, 0x0D, 0x04, 0x30, 0x30, 0xDF, 0xC0, 0xB0, 0x23, 0x05, 0x0E, 0xA0, 0x75, 0x07, 0xC0,
  0x90, 0x13, 0x07, 0xF9, 0x0E, 0x06, 0x30, 0x20, 0xBC, 0x07, 0x50, 0x7D, 0x0E, 0x06, 0x30, 0x20,
  0xBD, 0x09, 0x01, 0x30, 0x7E, 0x07, 0x50, 0x7F, 0x0B, 0x02, 0x38, 0x35, 0xEF, 0xD4, 0x30, 0x30,
  0xDF, 0x07, 0x50, 0x7F, 0xA0, 0x73, 0x01, 0x06, 0x30, 0x10, 0x9F, 0xA0, 0x75, 0x07, 0xFB, 0x0D,
  0x04, 0x50, 0x50, 0xEF, 0xB0, 0x75, 0x07, 0xFD, 0x83, 0x91, 0x02, 0xBC, 0x81, 0x84, 0x17, 0x40,
  0x7F, 0xE0, 0xE0, 0x9D, 0x03, 0x28, 0x14, 0x52, 0x72, 0x07, 0xFF, 0xD8, 0x27, 0x04, 0xEB, 0x08,
  0x71, 0x07, 0xFF, 0xD8, 0x12, 0x1E, 0xD0, 0x67, 0x07, 0xFF, 0xD1, 0x06, 0xB0, 0xCA, 0x0B, 0x70,
  0x7F, 0xFD, 0x10, 0x7A, 0x08, 0x1B, 0x70, 0x7F, 0xFD, 0x10, 0x7A, 0x07, 0x1B, 0x10, 0x7A, 0x07,
  0x20, 0x7F, 0xFD, 0x10, 0x7A, 0x07, 0x1B, 0x10, 0x7A, 0x07, 0x20, 0x7F, 0xFD, 0x10, 0x7A, 0x07,
  0x1B, 0x10, 0x7A, 0x07, 0x20, 0x7F, 0xFD, 0x10, 0x7A, 0x07, 0x1B, 0x10, 0x7A, 0x07, 0x20, 0x7F,
  0xFD, 0x10, 0x7A, 0x07, 0x1B, 0x10, 0x7A, 0x07, 0x20, 0x7F, 0xFD, 0x10, 0x7A, 0x07, 0x1B, 0x10,
  0x7A, 0x07, 0x77, 0x72, 0x07, 0xA0, 0x95, 0x0A, 0xA0, 0x57, 0x77, 0x20, 0x5B, 0x01, 0x30, 0x10,
  0xEA, 0x02, 0x77, 0x72, 0x01, 0x0E, 0xA8, 0x3B, 0x20, 0x5C, 0xA0, 0xD7, 0x77, 0x40, 0x7F, 0xA0,
  0x37, 0x77, 0x50, 0x7F, 0x06, 0x77, 0x77, 0x85, 0x2A, 0xDF, 0xEA, 0x28, 0x09, 0xD4, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_attach_email() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_attach_email_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_attachment 36x36, 4-bit Alpha,  RLE, 157 bytes.
static const uint8_t ic_sharp_36_file_attachment_data[] PROGMEM = {
  0x80, 0xD9, 0x10, 0x01, 0x02, 0x80, 0x96, 0x30, 0x17, 0x58, 0x12, 0x9E, 0xFF, 0xF8, 0x1E, 0xA1,
  0x71, 0x07, 0xFF, 0xFD, 0x0E, 0x04, 0x60, 0x9A, 0x82, 0xD7, 0x41, 0x77, 0x48, 0x11, 0x5D, 0xA0,
  0x24, 0x06, 0xA0, 0x90, 0x17, 0x77, 0x38, 0x1D, 0xFA, 0x38, 0x21, 0xEF, 0x95, 0x81, 0x17, 0xA8,
  0x09, 0x1B, 0x08, 0x40, 0x5A, 0x38, 0x25, 0xFE, 0x14, 0x04, 0x0E, 0xFF, 0x90, 0xB4, 0x02, 0xA0,
  0x22, 0x81, 0x9F, 0xA5, 0x82, 0xDF, 0xE8, 0x80, 0x91, 0x70, 0x54, 0x03, 0xA3, 0x81, 0xBF, 0x74,
  0x02, 0xA0, 0x27, 0x75, 0x81, 0x8F, 0xC3, 0x81, 0xBF, 0x84, 0x03, 0xA0, 0x17, 0x74, 0x04, 0xA0,
  0x73, 0x81, 0xAF, 0xB5, 0x81, 0xEF, 0xD8, 0x09, 0x47, 0x08, 0x0B, 0xA0, 0xC4, 0x82, 0x6F, 0xE1,
  0x40, 0x5F, 0xFF, 0x0C, 0x01, 0x48, 0x21, 0xEF, 0xA5, 0x03, 0x09, 0x80, 0x95, 0xB0, 0x90, 0x57,
  0x07, 0xA0, 0x77, 0x77, 0x75, 0x0B, 0xA0, 0xB0, 0x47, 0x77, 0x74, 0x09, 0xFF, 0xF0, 0xB7, 0x70,
  0x40, 0xBF, 0xFD, 0x0B, 0x77, 0x20, 0x18, 0x09, 0x63, 0x02, 0x80, 0xD9, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_attachment() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_attachment_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_cloud_circle 36x36, 4-bit Alpha,  RLE, 206 bytes.
static const uint8_t ic_sharp_36_file_cloud_circle_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x89, 0x02, 0x7A, 0xCD, 0xDB, 0xA7, 0x27, 0x77, 0x30, 0x60, 0xDF, 0xB0, 0xD0,
  0x57, 0x76, 0x04, 0x0D, 0xFF, 0x0C, 0x03, 0x77, 0x30, 0x7F, 0xFC, 0x06, 0x77, 0x10, 0xAF, 0xFE,
  0x08, 0x76, 0x07, 0xFF, 0xF9, 0x06, 0x74, 0x05, 0xFF, 0xFB, 0x03, 0x73, 0x0E, 0xFB, 0x82, 0xCA,
  0x9C, 0xFB, 0x0C, 0x72, 0x07, 0xFA, 0x0A, 0x02, 0x40, 0x20, 0xBF, 0xA0, 0x57, 0x10, 0xEF, 0x90,
  0x97, 0x10, 0xBF, 0x90, 0xD7, 0x04, 0xF9, 0x0C, 0x72, 0x01, 0x0E, 0xF9, 0x02, 0x60, 0x9F, 0x90,
  0x67, 0x30, 0x7F, 0x90, 0x76, 0x0C, 0xD8, 0x1D, 0x52, 0x74, 0x04, 0xF9, 0x0A, 0x60, 0xDC, 0x0A,
  0x77, 0x81, 0x18, 0xBE, 0x0B, 0x6C, 0x0E, 0x01, 0x77, 0x30, 0x10, 0xCC, 0x0D, 0x6C, 0x0A, 0x77,
  0x50, 0x1C, 0x0D, 0x60, 0xEB, 0x07, 0x77, 0x60, 0xBB, 0x0C, 0x60, 0xCB, 0x09, 0x77, 0x60, 0x9B,
  0x0A, 0x60, 0x9B, 0x0D, 0x77, 0x60, 0xCB, 0x07, 0x60, 0x4C, 0x09, 0x77, 0x40, 0x5C, 0x02, 0x7D,
  0x0B, 0x03, 0x77, 0x01, 0x07, 0xC0, 0xD7, 0x10, 0x8F, 0xFF, 0xD0, 0x67, 0x10, 0x10, 0xEF, 0xFF,
  0xB0, 0xD7, 0x30, 0x6F, 0xFF, 0xB0, 0x47, 0x40, 0x9F, 0xFF, 0x90, 0x77, 0x60, 0xBF, 0xFE, 0x0A,
  0x77, 0x10, 0x9F, 0xFC, 0x07, 0x77, 0x30, 0x60, 0xEF, 0xF0, 0xE0, 0x57, 0x75, 0x01, 0x08, 0xFC,
  0x0E, 0x07, 0x77, 0x73, 0x82, 0x49, 0xCE, 0xA8, 0x2D, 0xC9, 0x48, 0x09, 0xE5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_cloud_circle() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_cloud_circle_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_cloud_done 36x36, 4-bit Alpha,  RLE, 191 bytes.
static const uint8_t ic_sharp_36_file_cloud_done_data[] PROGMEM = {
  0x80, 0xBC, 0x20, 0x86, 0x69, 0xDD, 0xDC, 0x95, 0x77, 0x75, 0x07, 0x0E, 0xF9, 0x0E, 0x06, 0x77,
  0x71, 0x02, 0x0D, 0xFD, 0x0B, 0x01, 0x77, 0x50, 0x30, 0xEF, 0xF0, 0xD0, 0x17, 0x73, 0x01, 0x0D,
  0xFF, 0xA0, 0xC7, 0x73, 0x0A, 0xFF, 0xC0, 0x87, 0x68, 0x13, 0x8C, 0xFF, 0xE0, 0x17, 0x30, 0x10,
  0xBF, 0xFB, 0x0C, 0xD0, 0x77, 0x20, 0x30, 0xEF, 0xFB, 0x81, 0xB0, 0x5C, 0x0C, 0x71, 0x02, 0x0E,
  0xFF, 0xB0, 0xB3, 0x06, 0xC8, 0x1C, 0x93, 0x50, 0xCF, 0xFB, 0x0B, 0x30, 0x10, 0xDF, 0x0A, 0x01,
  0x20, 0x4F, 0xFB, 0x0B, 0x30, 0x10, 0xDF, 0xA8, 0x2D, 0x10, 0x9F, 0xB0, 0x90, 0xDC, 0x0B, 0x30,
  0x10, 0xDF, 0xC8, 0x1A, 0x0E, 0xFA, 0x82, 0x80, 0x1D, 0xA0, 0xB3, 0x01, 0x0D, 0xFE, 0x03, 0xFA,
  0x0E, 0x01, 0x28, 0x11, 0xDB, 0x30, 0x10, 0xDF, 0xF0, 0x9F, 0xB0, 0xD0, 0x12, 0x01, 0x30, 0x10,
  0xDF, 0xF9, 0x0D, 0x0E, 0xFB, 0x0D, 0x01, 0x40, 0x10, 0xDF, 0xFA, 0x0D, 0x0A, 0xFC, 0x0D, 0x01,
  0x20, 0x10, 0xDF, 0xFB, 0x0D, 0x05, 0xFD, 0x82, 0xD1, 0x1D, 0xFF, 0xC8, 0x19, 0x0C, 0xFD, 0x00,
  0xDF, 0xFD, 0x81, 0x40, 0x3F, 0xFF, 0xFC, 0x0C, 0x30, 0x5F, 0xFF, 0xFA, 0x0E, 0x01, 0x40, 0x30,
  0xCF, 0xFF, 0xE0, 0xC0, 0x27, 0x81, 0x5A, 0xEF, 0xFF, 0x81, 0xEB, 0x58, 0x0B, 0xB0, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_cloud_done() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_cloud_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_cloud_download 36x36, 4-bit Alpha,  RLE, 164 bytes.
static const uint8_t ic_sharp_36_file_cloud_download_data[] PROGMEM = {
  0x80, 0xBC, 0x20, 0x86, 0x69, 0xDD, 0xDC, 0x95, 0x77, 0x75, 0x07, 0x0E, 0xF9, 0x0E, 0x06, 0x77,
  0x71, 0x02, 0x0D, 0xFD, 0x0B, 0x01, 0x77, 0x50, 0x30, 0xEF, 0xF0, 0xD0, 0x17, 0x73, 0x01, 0x0D,
  0xFF, 0xA0, 0xC7, 0x73, 0x0A, 0xFF, 0xC0, 0x87, 0x68, 0x13, 0x8C, 0xFF, 0xE0, 0x17, 0x30, 0x10,
  0xBF, 0xB8, 0x02, 0x7F, 0x07, 0x72, 0x03, 0x0E, 0xFC, 0x6F, 0x0C, 0x71, 0x02, 0x0E, 0xFD, 0x6F,
  0x98, 0x1C, 0x93, 0x50, 0xCF, 0xE6, 0xFC, 0x0A, 0x01, 0x20, 0x4F, 0xF6, 0xFD, 0x82, 0xD1, 0x09,
  0xFF, 0x6F, 0xE8, 0x1A, 0x0E, 0xFA, 0x0D, 0x80, 0x07, 0x68, 0x00, 0x70, 0xDF, 0xA0, 0x3F, 0xC0,
  0x67, 0x50, 0x6F, 0xB0, 0x9F, 0xD0, 0x67, 0x30, 0x6F, 0xC0, 0xD0, 0xEF, 0xD0, 0x67, 0x10, 0x6F,
  0xD0, 0xD0, 0xAF, 0xE0, 0x66, 0x06, 0xFE, 0x0D, 0x05, 0xFF, 0x06, 0x40, 0x6F, 0xF8, 0x19, 0x0C,
  0xFF, 0x06, 0x20, 0x6F, 0xF9, 0x81, 0x40, 0x3F, 0xF9, 0x00, 0x6F, 0xF9, 0x0C, 0x30, 0x5F, 0xFF,
  0xFA, 0x0E, 0x01, 0x40, 0x30, 0xCF, 0xFF, 0xE0, 0xC0, 0x27, 0x81, 0x5A, 0xEF, 0xFF, 0x81, 0xEB,
  0x58, 0x0B, 0xB0, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_cloud_download() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_cloud_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_cloud_off 36x36, 4-bit Alpha,  RLE, 284 bytes.
static const uint8_t ic_sharp_36_file_cloud_off_data[] PROGMEM = {
  0x80, 0xBB, 0x10, 0x81, 0x2D, 0x36, 0x86, 0x59, 0xCD, 0xDC, 0x95, 0x77, 0x48, 0x32, 0xEF, 0xE3,
  0x30, 0x30, 0xEF, 0x90, 0xE0, 0x67, 0x72, 0x02, 0x0E, 0xA0, 0xE0, 0x33, 0x08, 0xFB, 0x0B, 0x01,
  0x77, 0x10, 0x20, 0xEA, 0x0E, 0x03, 0x38, 0x67, 0x73, 0x11, 0x37, 0xDB, 0x0D, 0x01, 0x77, 0x10,
  0x20, 0xEA, 0x0E, 0x03, 0x73, 0x07, 0xB0, 0xC7, 0x72, 0x02, 0x0E, 0xA0, 0xE0, 0x37, 0x30, 0x4B,
  0x08, 0x76, 0x82, 0x38, 0xCE, 0xB0, 0xE0, 0x37, 0x30, 0x6B, 0x01, 0x73, 0x01, 0x0B, 0xF9, 0x0E,
  0x03, 0x73, 0x0C, 0xA0, 0x77, 0x20, 0x30, 0xEF, 0xB0, 0xE0, 0x37, 0x20, 0x5A, 0x0C, 0x71, 0x02,
  0x0E, 0xB8, 0x19, 0x52, 0x20, 0x20, 0xEA, 0x0E, 0x03, 0x72, 0xB8, 0x1C, 0x93, 0x50, 0xCA, 0x0E,
  0x04, 0x60, 0x20, 0xEA, 0x0E, 0x03, 0x71, 0x0D, 0xD0, 0xA0, 0x12, 0x04, 0xB0, 0x27, 0x10, 0x20,
  0xEA, 0x0E, 0x03, 0x70, 0xCE, 0x82, 0xD1, 0x09, 0xA0, 0x87, 0x30, 0x20, 0xEA, 0x0E, 0x03, 0x71,
  0x81, 0x14, 0x9B, 0x81, 0xA0, 0xEA, 0x02, 0x74, 0x02, 0x0E, 0xA0, 0xE0, 0x37, 0x30, 0x5B, 0x03,
  0xB7, 0x60, 0x20, 0xEA, 0x0E, 0x03, 0x73, 0x09, 0xA0, 0x9B, 0x77, 0x02, 0x0E, 0xA0, 0xE0, 0x37,
  0x20, 0x4A, 0x0D, 0x0E, 0xA0, 0x37, 0x70, 0x20, 0xEA, 0x0E, 0x03, 0x71, 0x01, 0xA0, 0xD0, 0xAA,
  0x07, 0x77, 0x10, 0x20, 0xEA, 0x0E, 0x03, 0x70, 0x2A, 0x0C, 0x05, 0xB0, 0x27, 0x71, 0x02, 0x0E,
  0xA0, 0xE0, 0x36, 0x08, 0xA8, 0x19, 0x0C, 0xA0, 0xD0, 0x17, 0x71, 0x02, 0x0E, 0xA0, 0xE0, 0x34,
  0x04, 0xB8, 0x14, 0x03, 0xB8, 0x1E, 0x72, 0x77, 0x02, 0x0E, 0xA0, 0xE0, 0x33, 0x08, 0xA0, 0xB3,
  0x05, 0xFF, 0xFB, 0x0E, 0x03, 0x38, 0x18, 0xD1, 0x40, 0x30, 0xCF, 0xFF, 0xA0, 0xE0, 0x33, 0x01,
  0x78, 0x15, 0xAE, 0xFF, 0xF0, 0xE0, 0x37, 0x77, 0x73, 0x02, 0x0E, 0xA0, 0xE0, 0x37, 0x77, 0x73,
  0x83, 0x2E, 0xFE, 0x27, 0x77, 0x74, 0x81, 0x2C, 0x28, 0x09, 0xD5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_cloud_off() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_cloud_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_cloud 36x36, 4-bit Alpha,  RLE, 140 bytes.
static const uint8_t ic_sharp_36_file_cloud_data[] PROGMEM = {
  0x80, 0xBC, 0x20, 0x86, 0x69, 0xDD, 0xDC, 0x95, 0x77, 0x75, 0x07, 0x0E, 0xF9, 0x0E, 0x06, 0x77,
  0x71, 0x02, 0x0D, 0xFD, 0x0B, 0x01, 0x77, 0x50, 0x30, 0xEF, 0xF0, 0xD0, 0x17, 0x73, 0x01, 0x0D,
  0xFF, 0xA0, 0xC7, 0x73, 0x0A, 0xFF, 0xC0, 0x87, 0x68, 0x13, 0x8C, 0xFF, 0xE0, 0x17, 0x30, 0x10,
  0xBF, 0xFF, 0xA0, 0x77, 0x20, 0x30, 0xEF, 0xFF, 0xB0, 0xC7, 0x10, 0x20, 0xEF, 0xFF, 0xD8, 0x1C,
  0x93, 0x50, 0xCF, 0xFF, 0xFA, 0x0A, 0x01, 0x20, 0x4F, 0xFF, 0xFC, 0x82, 0xD1, 0x09, 0xFF, 0xFF,
  0xD8, 0x1A, 0x0E, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0x09, 0xFF, 0xFF, 0xF0, 0xD0, 0xEF, 0xFF,
  0xFE, 0x0D, 0x0A, 0xFF, 0xFF, 0xE0, 0xD0, 0x5F, 0xFF, 0xFE, 0x81, 0x90, 0xCF, 0xFF, 0xFD, 0x81,
  0x40, 0x3F, 0xFF, 0xFC, 0x0C, 0x30, 0x5F, 0xFF, 0xFA, 0x0E, 0x01, 0x40, 0x30, 0xCF, 0xFF, 0xE0,
  0xC0, 0x27, 0x81, 0x5A, 0xEF, 0xFF, 0x81, 0xEB, 0x58, 0x0B, 0xB0, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_cloud() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_cloud_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_cloud_queue 36x36, 4-bit Alpha,  RLE, 192 bytes.
static const uint8_t ic_sharp_36_file_cloud_queue_data[] PROGMEM = {
  0x80, 0xBC, 0x20, 0x86, 0x69, 0xDD, 0xDC, 0x95, 0x77, 0x75, 0x07, 0x0E, 0xF9, 0x0E, 0x06, 0x77,
  0x71, 0x02, 0x0D, 0xFD, 0x0B, 0x01, 0x77, 0x50, 0x30, 0xEB, 0x86, 0xC7, 0x21, 0x13, 0x7D, 0xB0,
  0xD0, 0x17, 0x73, 0x01, 0x0D, 0xA0, 0xE0, 0x57, 0x10, 0x7B, 0x0C, 0x77, 0x30, 0xAA, 0x0E, 0x03,
  0x73, 0x04, 0xB0, 0x87, 0x68, 0x13, 0x8C, 0xB0, 0x47, 0x50, 0x6B, 0x01, 0x73, 0x01, 0x0B, 0xD0,
  0x97, 0x70, 0xCA, 0x07, 0x72, 0x03, 0x0E, 0xE0, 0x37, 0x70, 0x5A, 0x0C, 0x71, 0x02, 0x0E, 0xB8,
  0x19, 0x52, 0x77, 0x3B, 0x81, 0xC9, 0x35, 0x0C, 0xA0, 0xE0, 0x47, 0x76, 0x0D, 0xD0, 0xA0, 0x12,
  0x04, 0xB0, 0x27, 0x77, 0x0C, 0xE8, 0x2D, 0x10, 0x9A, 0x08, 0x77, 0x73, 0x81, 0x14, 0x9B, 0x81,
  0xA0, 0xEA, 0x02, 0x77, 0x76, 0x05, 0xB0, 0x3B, 0x77, 0x77, 0x10, 0x9A, 0x09, 0xB7, 0x77, 0x71,
  0x04, 0xA0, 0xD0, 0xEA, 0x03, 0x77, 0x77, 0x01, 0xA0, 0xD0, 0xAA, 0x07, 0x77, 0x77, 0x04, 0xA0,
  0xD0, 0x5B, 0x02, 0x77, 0x76, 0x08, 0xA8, 0x19, 0x0C, 0xA0, 0xD0, 0x17, 0x77, 0x40, 0x3B, 0x81,
  0x40, 0x3B, 0x81, 0xE7, 0x27, 0x77, 0x02, 0x07, 0xB0, 0xC3, 0x05, 0xFF, 0xFF, 0xA0, 0xE0, 0x14,
  0x03, 0x0C, 0xFF, 0xFE, 0x0C, 0x02, 0x78, 0x15, 0xAE, 0xFF, 0xF8, 0x1E, 0xB5, 0x80, 0xBB, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_cloud_queue() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_cloud_queue_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_cloud_upload 36x36, 4-bit Alpha,  RLE, 164 bytes.
static const uint8_t ic_sharp_36_file_cloud_upload_data[] PROGMEM = {
  0x80, 0xBC, 0x20, 0x86, 0x69, 0xDD, 0xDC, 0x95, 0x77, 0x75, 0x07, 0x0E, 0xF9, 0x0E, 0x06, 0x77,
  0x71, 0x02, 0x0D, 0xFD, 0x0B, 0x01, 0x77, 0x50, 0x30, 0xEF, 0xF0, 0xD0, 0x17, 0x73, 0x01, 0x0D,
  0xFF, 0xA0, 0xC7, 0x73, 0x0A, 0xFF, 0xC0, 0x87, 0x68, 0x13, 0x8C, 0xFA, 0x00, 0x8F, 0xA0, 0x17,
  0x30, 0x10, 0xBF, 0xC0, 0x82, 0x08, 0xF9, 0x07, 0x72, 0x03, 0x0E, 0xFC, 0x08, 0x40, 0x8F, 0x0C,
  0x71, 0x02, 0x0E, 0xFC, 0x08, 0x60, 0x8F, 0x81, 0xC9, 0x35, 0x0C, 0xFC, 0x08, 0x71, 0x08, 0xFA,
  0x0A, 0x01, 0x20, 0x4F, 0xC0, 0x87, 0x30, 0x8F, 0xA8, 0x2D, 0x10, 0x9F, 0xB0, 0x87, 0x50, 0x8F,
  0xA8, 0x1A, 0x0E, 0xFA, 0x0E, 0x80, 0x07, 0x68, 0x00, 0x70, 0xEF, 0xA0, 0x3F, 0xF9, 0x6F, 0xF0,
  0x9F, 0xF9, 0x6F, 0xF0, 0xD0, 0xEF, 0xF6, 0xFF, 0x0D, 0x0A, 0xFF, 0x6F, 0xF0, 0xD0, 0x5F, 0xF6,
  0xFF, 0x81, 0x90, 0xCF, 0xE8, 0x02, 0x7F, 0xF8, 0x14, 0x03, 0xFF, 0xFF, 0xC0, 0xC3, 0x05, 0xFF,
  0xFF, 0xA0, 0xE0, 0x14, 0x03, 0x0C, 0xFF, 0xFE, 0x0C, 0x02, 0x78, 0x15, 0xAE, 0xFF, 0xF8, 0x1E,
  0xB5, 0x80, 0xBB, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_cloud_upload() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_cloud_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_create_new_folder 36x36, 4-bit Alpha,  RLE, 93 bytes.
static const uint8_t ic_sharp_36_file_create_new_folder_data[] PROGMEM = {
  0x80, 0xBA, 0x70, 0xFD, 0x06, 0x77, 0x72, 0xFE, 0x06, 0x77, 0x71, 0xFF, 0x06, 0x77, 0x7F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFC, 0x0F, 0x7F, 0xA6, 0xFF,
  0xC3, 0xFA, 0x6F, 0xFC, 0x3F, 0xA6, 0xFF, 0xC3, 0xFA, 0x6F, 0xFC, 0x3F, 0xA6, 0xFE, 0x07, 0x74,
  0x07, 0xC6, 0xFE, 0x07, 0x74, 0x07, 0xC6, 0xFE, 0x07, 0x74, 0x07, 0xC6, 0xFF, 0xC3, 0xFA, 0x6F,
  0xFC, 0x3F, 0xA6, 0xFF, 0xC3, 0xFA, 0x6F, 0xFC, 0x3F, 0xA6, 0xFF, 0xC0, 0xF7, 0xFA, 0x6F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x80, 0xBA, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_create_new_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_create_new_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_download_done 36x36, 4-bit Alpha,  RLE, 136 bytes.
static const uint8_t ic_sharp_36_file_download_done_data[] PROGMEM = {
  0x80, 0xBD, 0x40, 0x81, 0x1A, 0x17, 0x77, 0x74, 0x83, 0x1D, 0xFD, 0x17, 0x77, 0x72, 0x01, 0x0D,
  0xB0, 0xD0, 0x17, 0x77, 0x70, 0x10, 0xDC, 0x0D, 0x01, 0x77, 0x76, 0x01, 0x0D, 0xC0, 0xD0, 0x17,
  0x77, 0x60, 0x10, 0xDC, 0x0D, 0x01, 0x77, 0x76, 0x01, 0x0D, 0xC0, 0xD0, 0x17, 0x76, 0x07, 0x60,
  0x10, 0xDC, 0x0D, 0x01, 0x77, 0x58, 0x21, 0xBF, 0xA4, 0x01, 0x0D, 0xC0, 0xD0, 0x17, 0x75, 0x01,
  0x0D, 0xB0, 0xA2, 0x01, 0x0D, 0xC0, 0xD0, 0x17, 0x76, 0x03, 0x0E, 0xC8, 0x1A, 0x1D, 0xC0, 0xD0,
  0x17, 0x77, 0x10, 0x30, 0xEF, 0xA0, 0xD0, 0x17, 0x77, 0x30, 0x30, 0xEF, 0x0D, 0x01, 0x77, 0x75,
  0x03, 0x0E, 0xD0, 0xD0, 0x17, 0x77, 0x70, 0x30, 0xEB, 0x0C, 0x01, 0x77, 0x77, 0x28, 0x23, 0xEF,
  0xB7, 0x77, 0x75, 0x03, 0x0B, 0x80, 0xAD, 0x00, 0x07, 0xFF, 0xE0, 0x77, 0x70, 0x7F, 0xFE, 0x07,
  0x77, 0x07, 0xFF, 0xE0, 0x78, 0x0B, 0xB3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_download_done() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_download_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_download 36x36, 4-bit Alpha,  RLE, 124 bytes.
static const uint8_t ic_sharp_36_file_download_data[] PROGMEM = {
  0x80, 0xAB, 0x10, 0x03, 0x80, 0x47, 0x03, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9,
  0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07,
  0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77,
  0x60, 0x28, 0x01, 0x70, 0xBF, 0x90, 0xB8, 0x01, 0x70, 0x27, 0x71, 0x08, 0xFF, 0xC0, 0x87, 0x73,
  0x08, 0xFF, 0xA0, 0x87, 0x75, 0x08, 0xFF, 0x08, 0x77, 0x70, 0x8F, 0xD0, 0x87, 0x77, 0x20, 0x8F,
  0xB0, 0x87, 0x77, 0x40, 0x8F, 0x90, 0x87, 0x77, 0x60, 0x8E, 0x08, 0x77, 0x77, 0x10, 0x8C, 0x08,
  0x77, 0x77, 0x30, 0x8A, 0x08, 0x77, 0x77, 0x50, 0x08, 0x80, 0xA8, 0x00, 0x07, 0xFF, 0xE0, 0x77,
  0x70, 0x7F, 0xFE, 0x07, 0x77, 0x07, 0xFF, 0xE0, 0x78, 0x0B, 0xB3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_download() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_folder_open 36x36, 4-bit Alpha,  RLE, 88 bytes.
static const uint8_t ic_sharp_36_file_folder_open_data[] PROGMEM = {
  0x80, 0xBA, 0x70, 0xFD, 0x06, 0x77, 0x72, 0xFE, 0x06, 0x77, 0x71, 0xFF, 0x06, 0x77, 0x7F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6B, 0x77, 0x73, 0xB6, 0xB7, 0x77, 0x3B, 0x6B, 0x77,
  0x73, 0xB6, 0xB7, 0x77, 0x3B, 0x6B, 0x77, 0x73, 0xB6, 0xB7, 0x77, 0x3B, 0x6B, 0x77, 0x73, 0xB6,
  0xB7, 0x77, 0x3B, 0x6B, 0x77, 0x73, 0xB6, 0xB7, 0x77, 0x3B, 0x6B, 0x77, 0x73, 0xB6, 0xB7, 0x77,
  0x3B, 0x6B, 0x77, 0x73, 0xB6, 0xB7, 0x77, 0x3B, 0x6B, 0x77, 0x73, 0xB6, 0xFF, 0xFF, 0xA6, 0xFF,
  0xFF, 0xA6, 0xFF, 0xFF, 0xA8, 0x0B, 0xA7, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_folder_open() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_folder_open_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_folder 36x36, 4-bit Alpha,  RLE, 80 bytes.
static const uint8_t ic_sharp_36_file_folder_data[] PROGMEM = {
  0x80, 0xBA, 0x70, 0xFD, 0x06, 0x77, 0x72, 0xFE, 0x06, 0x77, 0x71, 0xFF, 0x06, 0x77, 0x7F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA,
  0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F,
  0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x80, 0xBA, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_folder_shared 36x36, 4-bit Alpha,  RLE, 111 bytes.
static const uint8_t ic_sharp_36_file_folder_shared_data[] PROGMEM = {
  0x80, 0xBA, 0x70, 0xFD, 0x06, 0x77, 0x72, 0xFE, 0x06, 0x77, 0x71, 0xFF, 0x06, 0x77, 0x7F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFC, 0x81, 0xE9, 0xCF, 0xA6,
  0xFF, 0xB0, 0x63, 0x08, 0xF9, 0x6F, 0xFA, 0x0A, 0x50, 0xEF, 0x6F, 0xFA, 0x07, 0x50, 0x9F, 0x6F,
  0xFA, 0x0C, 0x50, 0xCF, 0x6F, 0xFB, 0x04, 0x30, 0x6F, 0x96, 0xFF, 0xC8, 0x1A, 0x8D, 0xFA, 0x6F,
  0xFF, 0xFA, 0x6F, 0xF9, 0x87, 0xE9, 0x42, 0x12, 0x59, 0xEE, 0x6F, 0xF0, 0x87, 0x10, 0x10, 0x9D,
  0x6F, 0xE0, 0xB7, 0x40, 0xDC, 0x6F, 0xE0, 0x77, 0x40, 0x7C, 0x6F, 0xE0, 0xB8, 0x07, 0x70, 0xBC,
  0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x80, 0xBA, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_folder_shared() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_folder_shared_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_request_quote 36x36, 4-bit Alpha,  RLE, 158 bytes.
static const uint8_t ic_sharp_36_file_request_quote_data[] PROGMEM = {
  0x80, 0x9D, 0x60, 0xFF, 0x90, 0x67, 0x76, 0xFF, 0xA0, 0x67, 0x75, 0xFE, 0x0C, 0xB0, 0x67, 0x74,
  0xFE, 0x07, 0x05, 0xB0, 0x67, 0x73, 0xFE, 0x81, 0x70, 0x5B, 0x06, 0x77, 0x2F, 0xE0, 0x72, 0x05,
  0xB0, 0x67, 0x71, 0xFE, 0x07, 0x30, 0x5B, 0x06, 0x77, 0xFE, 0x07, 0x40, 0x5B, 0x06, 0x76, 0xFE,
  0x07, 0x50, 0x5B, 0x06, 0x75, 0xFF, 0xFB, 0x75, 0xFB, 0x82, 0xB7, 0x7B, 0xFB, 0x75, 0xFB, 0x07,
  0x20, 0x7F, 0xB7, 0x5F, 0x07, 0x71, 0x07, 0xF7, 0x5F, 0x07, 0x71, 0x07, 0xF7, 0x5F, 0x07, 0x71,
  0x07, 0xF7, 0x5F, 0x07, 0x20, 0x7F, 0xE7, 0x5F, 0x07, 0x20, 0x38, 0x01, 0x70, 0xBF, 0x75, 0xF0,
  0x77, 0x10, 0x7F, 0x75, 0xF0, 0x77, 0x10, 0x7F, 0x75, 0xF0, 0xB8, 0x01, 0x70, 0x32, 0x07, 0xF7,
  0x5F, 0xE0, 0x72, 0x07, 0xF7, 0x5F, 0x07, 0x71, 0x07, 0xF7, 0x5F, 0x07, 0x71, 0x07, 0xF7, 0x5F,
  0x07, 0x71, 0x07, 0xF7, 0x5F, 0xB0, 0x72, 0x07, 0xFB, 0x75, 0xFB, 0x82, 0xB7, 0x7B, 0xFB, 0x75,
  0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x75, 0xFF, 0xFB, 0x80, 0x9D, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_request_quote() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_request_quote_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_rule_folder 36x36, 4-bit Alpha,  RLE, 153 bytes.
static const uint8_t ic_sharp_36_file_rule_folder_data[] PROGMEM = {
  0x80, 0xBA, 0x70, 0xFD, 0x06, 0x77, 0x72, 0xFE, 0x06, 0x77, 0x71, 0xFF, 0x06, 0x77, 0x7F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xE0, 0xD0,
  0xEF, 0xF9, 0x6F, 0xD8, 0x6D, 0x12, 0xEF, 0xE4, 0xEA, 0x81, 0xD5, 0xED, 0x6F, 0xC0, 0xD0, 0x12,
  0x89, 0x13, 0xE2, 0x02, 0xED, 0x10, 0x3E, 0xC6, 0xE0, 0xEB, 0x0D, 0x01, 0x30, 0xB0, 0xC3, 0x02,
  0x01, 0x20, 0x10, 0xDC, 0x6D, 0x84, 0xB1, 0xAF, 0xD1, 0x30, 0xBA, 0x0B, 0x50, 0x10, 0xDD, 0x6C,
  0x0C, 0x30, 0x80, 0x13, 0x0B, 0xC0, 0x94, 0x0B, 0xE6, 0xC0, 0xE0, 0x26, 0x0B, 0xC0, 0xD0, 0x14,
  0x02, 0x0E, 0xD6, 0xD0, 0xE0, 0x24, 0x0B, 0xC0, 0xD0, 0x12, 0x01, 0x30, 0x20, 0xEC, 0x6E, 0x0E,
  0x02, 0x20, 0xBD, 0x84, 0xD1, 0x01, 0xDB, 0x20, 0x20, 0xEC, 0x6F, 0x81, 0xE3, 0xBF, 0x81, 0xD2,
  0xDA, 0x81, 0xB3, 0xED, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA,
  0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x80, 0xBA, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_rule_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_rule_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_snippet_folder 36x36, 4-bit Alpha,  RLE, 138 bytes.
static const uint8_t ic_sharp_36_file_snippet_folder_data[] PROGMEM = {
  0x80, 0xBA, 0x70, 0xFD, 0x06, 0x77, 0x72, 0xFE, 0x06, 0x77, 0x71, 0xFF, 0x06, 0x77, 0x7F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFA, 0x84, 0xB7, 0x77, 0x78,
  0xF9, 0x6F, 0xFA, 0x07, 0x50, 0x5F, 0x6F, 0xFA, 0x83, 0x70, 0x13, 0x32, 0x05, 0xE6, 0xFF, 0xA8,
  0x17, 0x03, 0xA0, 0x62, 0x05, 0xD6, 0xFF, 0xA8, 0x17, 0x03, 0xB0, 0x62, 0x08, 0xC6, 0xFF, 0xA8,
  0x17, 0x03, 0xC8, 0x13, 0x07, 0xC6, 0xFF, 0xA8, 0x17, 0x03, 0xC8, 0x13, 0x07, 0xC6, 0xFF, 0xA8,
  0x17, 0x03, 0xC8, 0x13, 0x07, 0xC6, 0xFF, 0xA8, 0x17, 0x03, 0xC8, 0x13, 0x07, 0xC6, 0xFF, 0xA8,
  0x17, 0x03, 0xC8, 0x13, 0x07, 0xC6, 0xFF, 0xA8, 0x90, 0x70, 0x13, 0x33, 0x31, 0x07, 0xC6, 0xFF,
  0xA0, 0x77, 0x10, 0x7C, 0x6F, 0xFA, 0x0B, 0x80, 0x47, 0x0B, 0xC6, 0xFF, 0xFF, 0xA6, 0xFF, 0xFF,
  0xA6, 0xFF, 0xFF, 0xA6, 0xFF, 0xFF, 0xA8, 0x0B, 0xA7, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_snippet_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_snippet_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_text_snippet 36x36, 4-bit Alpha,  RLE, 175 bytes.
static const uint8_t ic_sharp_36_file_text_snippet_data[] PROGMEM = {
  0x80, 0xAA, 0x00, 0x03, 0x80, 0x95, 0x70, 0x57, 0x73, 0x07, 0xFF, 0xC0, 0x67, 0x72, 0x07, 0xFF,
  0xD0, 0x67, 0x71, 0x07, 0xFF, 0xE0, 0x67, 0x70, 0x7F, 0xFF, 0x06, 0x76, 0x07, 0xFF, 0xF9, 0x06,
  0x75, 0x07, 0xD0, 0xB8, 0x06, 0x7F, 0x06, 0x74, 0x07, 0xD0, 0x77, 0x3F, 0x90, 0x67, 0x30, 0x7D,
  0x07, 0x73, 0xFA, 0x06, 0x72, 0x07, 0xD0, 0xB8, 0x06, 0x7F, 0xB0, 0x57, 0x10, 0x7F, 0xFF, 0xD0,
  0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7D, 0x0B, 0x80, 0x92, 0x70, 0xBD, 0x07, 0x71, 0x07,
  0xD0, 0x77, 0x70, 0x7D, 0x07, 0x71, 0x07, 0xD0, 0x77, 0x70, 0x7D, 0x07, 0x71, 0x07, 0xD0, 0xB8,
  0x09, 0x27, 0x0B, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10,
  0x7D, 0x0B, 0x80, 0x92, 0x70, 0xBD, 0x07, 0x71, 0x07, 0xD0, 0x77, 0x70, 0x7D, 0x07, 0x71, 0x07,
  0xD0, 0x77, 0x70, 0x7D, 0x07, 0x71, 0x07, 0xD0, 0xB8, 0x09, 0x27, 0x0B, 0xD0, 0x77, 0x10, 0x7F,
  0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x7F, 0xFF,
  0xD0, 0x77, 0x10, 0x7F, 0xFF, 0xD0, 0x77, 0x10, 0x38, 0x0A, 0x67, 0x03, 0x80, 0xAA, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_text_snippet() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_text_snippet_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_topic 36x36, 4-bit Alpha,  RLE, 80 bytes.
static const uint8_t ic_sharp_36_file_topic_data[] PROGMEM = {
  0x80, 0xBA, 0x70, 0xFD, 0x06, 0x77, 0x72, 0xFE, 0x06, 0x77, 0x71, 0xFF, 0x06, 0x77, 0x7F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA,
  0x6E, 0x77, 0x4E, 0x6E, 0x77, 0x4E, 0x6E, 0x77, 0x4E, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F,
  0xFF, 0xFA, 0x6E, 0x75, 0xFD, 0x6E, 0x75, 0xFD, 0x6E, 0x75, 0xFD, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF,
  0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x6F, 0xFF, 0xFA, 0x80, 0xBA, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_topic() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_topic_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_36_file_upload 36x36, 4-bit Alpha,  RLE, 135 bytes.
static const uint8_t ic_sharp_36_file_upload_data[] PROGMEM = {
  0x80, 0xAB, 0x50, 0x00, 0x17, 0x77, 0x75, 0x82, 0x1D, 0xD1, 0x77, 0x77, 0x30, 0x10, 0xDA, 0x0D,
  0x01, 0x77, 0x77, 0x10, 0x10, 0xDC, 0x0D, 0x01, 0x77, 0x76, 0x01, 0x0D, 0xE0, 0xD0, 0x17, 0x77,
  0x40, 0x10, 0xDF, 0x90, 0xD0, 0x17, 0x77, 0x20, 0x10, 0xDF, 0xB0, 0xD0, 0x17, 0x77, 0x01, 0x0D,
  0xFD, 0x0D, 0x01, 0x77, 0x50, 0x10, 0xDF, 0xF0, 0xD0, 0x17, 0x73, 0x01, 0x0D, 0xFF, 0xA0, 0xD0,
  0x17, 0x71, 0x01, 0x0D, 0xFF, 0xC0, 0xD0, 0x17, 0x76, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9,
  0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07,
  0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77, 0x75, 0x07, 0xF9, 0x07, 0x77,
  0x75, 0x07, 0xF9, 0x07, 0x80, 0x9F, 0x40, 0x07, 0xFF, 0xE0, 0x77, 0x70, 0x7F, 0xFE, 0x07, 0x77,
  0x07, 0xFF, 0xE0, 0x78, 0x0B, 0xB3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_36_file_upload() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      36, 36, ic_sharp_36_file_upload_data, Alpha4(color::Black));
  return value;
}
