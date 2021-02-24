#include "file.h"

using namespace roo_display;

// Image file ic_outlined_48_file_create_new_folder 48x48, 4-bit Alpha,  RLE, 180 bytes.
static const uint8_t ic_outlined_48_file_create_new_folder_data[] PROGMEM = {
  0x80, 0xE8, 0x10, 0x81, 0x19, 0xCF, 0xD0, 0x67, 0x77, 0x73, 0x01, 0x0E, 0xFF, 0x90, 0x67, 0x77,
  0x72, 0x0A, 0xFF, 0xB0, 0x67, 0x77, 0x71, 0x0E, 0xFF, 0xC0, 0x67, 0x77, 0x7C, 0x73, 0x05, 0xFF,
  0xF8, 0x1C, 0x81, 0x72, 0xC7, 0x40, 0x5F, 0xFF, 0x90, 0xD0, 0x17, 0x1C, 0x75, 0x05, 0xFF, 0xF9,
  0x08, 0x71, 0xC7, 0x60, 0x5F, 0xFF, 0x0C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C,
  0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x76, 0xC7, 0x1C, 0x71, 0xC7,
  0x76, 0xC7, 0x1C, 0x71, 0xC7, 0x76, 0xC7, 0x1C, 0x71, 0xC7, 0x76, 0xC7, 0x1C, 0x71, 0xC7, 0x72,
  0xFD, 0x4C, 0x71, 0xC7, 0x72, 0xFD, 0x4C, 0x71, 0xC7, 0x72, 0xFD, 0x4C, 0x71, 0xC7, 0x72, 0xFD,
  0x4C, 0x71, 0xC7, 0x76, 0xC7, 0x1C, 0x71, 0xC7, 0x76, 0xC7, 0x1C, 0x71, 0xC7, 0x76, 0xC7, 0x1C,
  0x71, 0xC7, 0x76, 0xC7, 0x1C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7,
  0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0x0E, 0x80, 0xC2, 0xF0, 0xD7, 0x10, 0xB8, 0x0C,
  0x2F, 0x09, 0x71, 0x02, 0x80, 0xC1, 0xF0, 0xE0, 0x17, 0x28, 0x12, 0xBE, 0xFF, 0xFF, 0xC8, 0x1E,
  0xA1, 0x80, 0xE8, 0x10,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_create_new_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_create_new_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_cloud_download 48x48, 4-bit Alpha,  RLE, 301 bytes.
static const uint8_t ic_outlined_48_file_cloud_download_data[] PROGMEM = {
  0x80, 0xE9, 0x70, 0x89, 0x03, 0x7A, 0xDD, 0xDC, 0xA7, 0x28, 0x0C, 0x00, 0x06, 0x0D, 0xFB, 0x0C,
  0x05, 0x77, 0x77, 0x40, 0x40, 0xEF, 0xF0, 0xD0, 0x37, 0x77, 0x71, 0x08, 0xFF, 0xC0, 0x67, 0x77,
  0x60, 0xAD, 0x87, 0xE9, 0x52, 0x11, 0x36, 0xAE, 0x08, 0x77, 0x74, 0x08, 0xD0, 0x70, 0x17, 0x10,
  0x10, 0x9D, 0x07, 0x77, 0x72, 0x05, 0xC0, 0xE0, 0x37, 0x50, 0x40, 0xEC, 0x03, 0x77, 0x70, 0x10,
  0xEB, 0x0D, 0x01, 0x77, 0x03, 0x0E, 0xB0, 0xD7, 0x74, 0x82, 0x16, 0x9D, 0xC0, 0x27, 0x72, 0x04,
  0xC0, 0x57, 0x71, 0x01, 0x09, 0xF0, 0x77, 0x74, 0x09, 0xB0, 0xD7, 0x70, 0x40, 0xEF, 0x0E, 0x77,
  0x50, 0x2C, 0x02, 0x75, 0x06, 0xFA, 0x06, 0x77, 0x60, 0xAB, 0x07, 0x74, 0x05, 0xD8, 0x2D, 0x73,
  0x17, 0x2D, 0x0D, 0x70, 0x6B, 0x82, 0xEA, 0x82, 0x70, 0x10, 0xEC, 0x06, 0x76, 0xD0, 0xD7, 0x02,
  0xF0, 0xB0, 0x25, 0x09, 0xB0, 0xE0, 0x37, 0x7D, 0x0D, 0x71, 0x0E, 0xF9, 0x06, 0x30, 0x1C, 0x06,
  0x77, 0x1D, 0x0D, 0x71, 0x0B, 0xFA, 0x06, 0x20, 0x7B, 0x0C, 0x77, 0x2D, 0x0D, 0x73, 0x82, 0x12,
  0x5B, 0xD8, 0x13, 0x0B, 0xB0, 0x57, 0x72, 0xD0, 0xD7, 0x70, 0x6C, 0x81, 0xC0, 0xEB, 0x01, 0x74,
  0x08, 0xFF, 0x08, 0x73, 0x05, 0xC0, 0x4C, 0x76, 0x08, 0xFD, 0x08, 0x75, 0x0B, 0xB0, 0x8C, 0x77,
  0x08, 0xFB, 0x08, 0x76, 0x05, 0xB0, 0xC0, 0xEB, 0x01, 0x77, 0x08, 0xF9, 0x08, 0x77, 0x02, 0xB0,
  0xD0, 0xCB, 0x05, 0x77, 0x10, 0x8E, 0x08, 0x77, 0x10, 0x1B, 0x0D, 0x07, 0xB0, 0xB7, 0x72, 0x08,
  0xC0, 0x87, 0x72, 0x04, 0xB0, 0xC0, 0x2C, 0x04, 0x77, 0x20, 0x8A, 0x08, 0x77, 0x30, 0x9B, 0x81,
  0x90, 0xAB, 0x0E, 0x02, 0x77, 0x20, 0x08, 0x77, 0x30, 0x3C, 0x81, 0x40, 0x2C, 0x0E, 0x04, 0x77,
  0x77, 0x50, 0x30, 0xEB, 0x0D, 0x30, 0x6D, 0x81, 0xB5, 0x17, 0x77, 0x68, 0x11, 0x49, 0xD0, 0x44,
  0x08, 0x80, 0xC5, 0xF0, 0x76, 0x06, 0x80, 0xC3, 0xF0, 0x87, 0x10, 0x20, 0xAF, 0xFF, 0xFF, 0x0D,
  0x05, 0x74, 0x82, 0x27, 0xCE, 0xFF, 0xFF, 0x81, 0xDA, 0x58, 0x0E, 0x82, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_cloud_download() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_cloud_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_cloud_queue 48x48, 4-bit Alpha,  RLE, 270 bytes.
static const uint8_t ic_outlined_48_file_cloud_queue_data[] PROGMEM = {
  0x80, 0xE9, 0x70, 0x89, 0x03, 0x7A, 0xDD, 0xDC, 0xA7, 0x28, 0x0C, 0x00, 0x06, 0x0D, 0xFB, 0x0C,
  0x05, 0x77, 0x77, 0x40, 0x40, 0xEF, 0xF0, 0xD0, 0x37, 0x77, 0x71, 0x08, 0xFF, 0xC0, 0x67, 0x77,
  0x60, 0xAE, 0x86, 0x95, 0x21, 0x13, 0x6A, 0xE0, 0x87, 0x77, 0x40, 0x8D, 0x07, 0x01, 0x71, 0x01,
  0x09, 0xD0, 0x77, 0x77, 0x20, 0x5C, 0x0E, 0x02, 0x75, 0x04, 0x0E, 0xC0, 0x37, 0x77, 0x01, 0x0E,
  0xB0, 0xD0, 0x17, 0x70, 0x20, 0xEB, 0x0D, 0x77, 0x48, 0x21, 0x69, 0xDC, 0x02, 0x77, 0x20, 0x4C,
  0x05, 0x77, 0x10, 0x10, 0x9F, 0x07, 0x77, 0x40, 0x9B, 0x0D, 0x77, 0x04, 0x0E, 0xF0, 0xE7, 0x75,
  0x01, 0xC0, 0x27, 0x50, 0x6F, 0xA0, 0x87, 0x76, 0x0A, 0xB0, 0x77, 0x40, 0x5D, 0x82, 0xD7, 0x31,
  0x77, 0x71, 0x06, 0xB8, 0x2E, 0xA8, 0x27, 0x01, 0x0E, 0xC0, 0x67, 0x77, 0x50, 0x3F, 0x0B, 0x02,
  0x50, 0x9C, 0x03, 0x77, 0x76, 0x01, 0xFA, 0x06, 0x30, 0x1C, 0x06, 0x77, 0x77, 0x1F, 0xB0, 0x62,
  0x07, 0xB0, 0xC7, 0x77, 0x75, 0x81, 0x14, 0xAD, 0x81, 0x30, 0xBB, 0x06, 0x80, 0xC0, 0x00, 0x40,
  0xEB, 0x81, 0xC0, 0xEB, 0x01, 0x80, 0xC1, 0x00, 0x5C, 0x04, 0xC8, 0x0C, 0x30, 0x0A, 0xB0, 0x8C,
  0x80, 0xC3, 0x00, 0x6B, 0x0C, 0x0E, 0xB0, 0x18, 0x0C, 0x20, 0x02, 0xB0, 0xD0, 0xCB, 0x05, 0x80,
  0xC2, 0x00, 0x1B, 0x0D, 0x07, 0xB0, 0xB8, 0x0C, 0x20, 0x03, 0xB0, 0xC0, 0x2C, 0x04, 0x80, 0xC1,
  0x00, 0x9B, 0x81, 0x90, 0xAB, 0x0E, 0x02, 0x77, 0x77, 0x70, 0x2C, 0x81, 0x40, 0x2C, 0x0E, 0x04,
  0x77, 0x77, 0x50, 0x30, 0xEB, 0x0D, 0x30, 0x6D, 0x81, 0xB5, 0x17, 0x77, 0x68, 0x11, 0x48, 0xD0,
  0x44, 0x08, 0x80, 0xC5, 0xF0, 0x76, 0x06, 0x80, 0xC3, 0xF0, 0x87, 0x10, 0x20, 0xAF, 0xFF, 0xFF,
  0x0D, 0x05, 0x74, 0x82, 0x27, 0xCE, 0xFF, 0xFF, 0x81, 0xDA, 0x58, 0x0E, 0x82, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_cloud_queue() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_cloud_queue_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_folder 48x48, 4-bit Alpha,  RLE, 174 bytes.
static const uint8_t ic_outlined_48_file_folder_data[] PROGMEM = {
  0x80, 0xE8, 0x10, 0x81, 0x19, 0xCF, 0xD0, 0x67, 0x77, 0x73, 0x01, 0x0E, 0xFF, 0x90, 0x67, 0x77,
  0x72, 0x0A, 0xFF, 0xB0, 0x67, 0x77, 0x71, 0x0E, 0xFF, 0xC0, 0x67, 0x77, 0x7C, 0x73, 0x05, 0xFF,
  0xF8, 0x1C, 0x81, 0x72, 0xC7, 0x40, 0x5F, 0xFF, 0x90, 0xD0, 0x17, 0x1C, 0x75, 0x05, 0xFF, 0xF9,
  0x08, 0x71, 0xC7, 0x60, 0x5F, 0xFF, 0x0C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C,
  0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77,
  0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7,
  0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77,
  0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71,
  0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77,
  0x4C, 0x71, 0x0E, 0x80, 0xC2, 0xF0, 0xD7, 0x10, 0xB8, 0x0C, 0x2F, 0x09, 0x71, 0x02, 0x80, 0xC1,
  0xF0, 0xE0, 0x17, 0x28, 0x12, 0xBE, 0xFF, 0xFF, 0xC8, 0x1E, 0xA1, 0x80, 0xE8, 0x10,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_rule_folder 48x48, 4-bit Alpha,  RLE, 268 bytes.
static const uint8_t ic_outlined_48_file_rule_folder_data[] PROGMEM = {
  0x80, 0xE8, 0x10, 0x81, 0x19, 0xCF, 0xD0, 0x67, 0x77, 0x73, 0x01, 0x0E, 0xFF, 0x90, 0x67, 0x77,
  0x72, 0x0A, 0xFF, 0xB0, 0x67, 0x77, 0x71, 0x0E, 0xFF, 0xC0, 0x67, 0x77, 0x7C, 0x73, 0x05, 0xFF,
  0xF8, 0x1C, 0x81, 0x72, 0xC7, 0x40, 0x5F, 0xFF, 0x90, 0xD0, 0x17, 0x1C, 0x75, 0x05, 0xFF, 0xF9,
  0x08, 0x71, 0xC7, 0x60, 0x5F, 0xFF, 0x0C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C,
  0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x06, 0x77, 0x3C, 0x71, 0xC7, 0x68, 0x18, 0xFB, 0x40,
  0x90, 0x34, 0x05, 0x08, 0x4C, 0x71, 0xC7, 0x50, 0x8B, 0x0B, 0x28, 0x2A, 0xFE, 0x32, 0x05, 0xA0,
  0x83, 0xC7, 0x1C, 0x74, 0x08, 0xC8, 0x1E, 0x2A, 0xB8, 0x1E, 0x35, 0xC0, 0x82, 0xC7, 0x1C, 0x40,
  0x25, 0x08, 0xC8, 0x2E, 0x20, 0x6C, 0x0E, 0xD0, 0x52, 0xC7, 0x1C, 0x38, 0x13, 0xEA, 0x30, 0x8C,
  0x0E, 0x03, 0x30, 0x6F, 0x90, 0x53, 0xC7, 0x1C, 0x20, 0x30, 0xEA, 0x81, 0xA0, 0x8C, 0x0E, 0x03,
  0x50, 0x6E, 0x05, 0x4C, 0x71, 0xC2, 0x0C, 0xC0, 0xDC, 0x0E, 0x03, 0x60, 0x5D, 0x0E, 0x03, 0x4C,
  0x71, 0xC2, 0x01, 0x0D, 0xF0, 0xE0, 0x36, 0x05, 0xF0, 0xE0, 0x33, 0xC7, 0x1C, 0x30, 0x10, 0xDD,
  0x0E, 0x03, 0x60, 0x5F, 0xA0, 0xE0, 0x32, 0xC7, 0x1C, 0x40, 0x10, 0xDB, 0x0E, 0x03, 0x70, 0xBC,
  0x05, 0x06, 0xC0, 0x92, 0xC7, 0x1C, 0x58, 0x31, 0xDF, 0xE3, 0x72, 0x0B, 0xA0, 0x52, 0x06, 0xA0,
  0xA3, 0xC7, 0x1C, 0x68, 0x11, 0xC3, 0x74, 0x0B, 0x05, 0x40, 0x60, 0xA4, 0xC7, 0x1C, 0x77, 0x77,
  0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x10,
  0xE8, 0x0C, 0x2F, 0x0D, 0x71, 0x0B, 0x80, 0xC2, 0xF0, 0x97, 0x10, 0x28, 0x0C, 0x1F, 0x0E, 0x01,
  0x72, 0x81, 0x2B, 0xEF, 0xFF, 0xFC, 0x81, 0xEA, 0x18, 0x0E, 0x81, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_rule_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_rule_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_request_quote 48x48, 4-bit Alpha,  RLE, 219 bytes.
static const uint8_t ic_outlined_48_file_request_quote_data[] PROGMEM = {
  0x80, 0xB8, 0x50, 0x81, 0x19, 0xCF, 0xFA, 0x06, 0x77, 0x76, 0x01, 0x0E, 0xFF, 0xD0, 0x67, 0x77,
  0x50, 0xAF, 0xFF, 0x06, 0x77, 0x74, 0x0E, 0xFF, 0xF9, 0x06, 0x77, 0x73, 0xC7, 0x7E, 0x06, 0x77,
  0x72, 0xC7, 0x7F, 0x06, 0x77, 0x71, 0xC7, 0x7F, 0x90, 0x67, 0x77, 0xC7, 0x7F, 0xA0, 0x67, 0x76,
  0xC7, 0x7F, 0xB0, 0x67, 0x75, 0xC7, 0x7F, 0xC0, 0x67, 0x74, 0xC7, 0x7F, 0xD0, 0x67, 0x73, 0xC7,
  0x7F, 0xE0, 0x67, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0xC7, 0x3C, 0x73,
  0xC7, 0x72, 0xC7, 0x3C, 0x73, 0xC7, 0x72, 0xC6, 0x03, 0x0B, 0xFB, 0x6C, 0x77, 0x2C, 0x60, 0xCF,
  0xC6, 0xC7, 0x72, 0xC6, 0xFD, 0x6C, 0x77, 0x2C, 0x6F, 0xD6, 0xC7, 0x72, 0xC6, 0xC7, 0x7C, 0x77,
  0x2C, 0x6C, 0x77, 0xC7, 0x72, 0xC6, 0xFB, 0x0A, 0x02, 0x6C, 0x77, 0x2C, 0x6F, 0xC0, 0xA6, 0xC7,
  0x72, 0xC6, 0x0D, 0xFC, 0x6C, 0x77, 0x2C, 0x60, 0x40, 0xDF, 0xB6, 0xC7, 0x72, 0xC7, 0x7C, 0x6C,
  0x77, 0x2C, 0x77, 0xC6, 0xC7, 0x72, 0xC6, 0xFD, 0x6C, 0x77, 0x2C, 0x6F, 0xD6, 0xC7, 0x72, 0xC6,
  0xFC, 0x0B, 0x6C, 0x77, 0x2C, 0x6F, 0xB0, 0xC0, 0x36, 0xC7, 0x72, 0xC7, 0x3C, 0x73, 0xC7, 0x72,
  0xC7, 0x3C, 0x73, 0xC7, 0x72, 0xC7, 0x77, 0x3C, 0x77, 0x2C, 0x77, 0x73, 0xC7, 0x72, 0x0E, 0xFF,
  0xFF, 0xA0, 0xD7, 0x72, 0x0B, 0xFF, 0xFF, 0xA0, 0x97, 0x72, 0x02, 0xFF, 0xFF, 0x90, 0xE0, 0x17,
  0x73, 0x81, 0x2B, 0xEF, 0xFF, 0xB8, 0x1E, 0xA1, 0x80, 0xB8, 0x50,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_request_quote() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_request_quote_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_download_done 48x48, 4-bit Alpha,  RLE, 158 bytes.
static const uint8_t ic_outlined_48_file_download_done_data[] PROGMEM = {
  0x80, 0xEB, 0x50, 0x00, 0x68, 0x0D, 0x10, 0x06, 0xA0, 0x68, 0x0C, 0x70, 0x06, 0xC0, 0x68, 0x0C,
  0x50, 0x06, 0xE0, 0x68, 0x0C, 0x30, 0x06, 0xF0, 0x78, 0x0C, 0x20, 0x06, 0xF0, 0x68, 0x0C, 0x20,
  0x06, 0xF0, 0x68, 0x0C, 0x20, 0x06, 0xF0, 0x68, 0x0C, 0x20, 0x06, 0xF0, 0x67, 0x77, 0x60, 0x17,
  0x30, 0x6F, 0x06, 0x77, 0x76, 0x81, 0x1D, 0xB7, 0x10, 0x6F, 0x06, 0x77, 0x76, 0x02, 0x0D, 0xA0,
  0xB6, 0x06, 0xF0, 0x67, 0x77, 0x60, 0x20, 0xEC, 0x0B, 0x40, 0x6F, 0x06, 0x77, 0x77, 0x0C, 0xE0,
  0xB2, 0x06, 0xF0, 0x67, 0x77, 0x71, 0x02, 0x0E, 0xE0, 0xB0, 0x7F, 0x06, 0x77, 0x77, 0x30, 0x20,
  0xEF, 0xE0, 0x67, 0x77, 0x75, 0x02, 0x0E, 0xFC, 0x05, 0x77, 0x77, 0x70, 0x20, 0xEF, 0xA0, 0x58,
  0x0C, 0x10, 0x02, 0x0E, 0xF0, 0x58, 0x0C, 0x30, 0x02, 0x0E, 0xD0, 0x58, 0x0C, 0x50, 0x02, 0x0E,
  0xB0, 0x58, 0x0C, 0x70, 0x82, 0x2E, 0xF5, 0x80, 0xD1, 0x00, 0x20, 0x48, 0x0C, 0xA2, 0x0F, 0xFF,
  0xF7, 0x76, 0xFF, 0xFF, 0x77, 0x6F, 0xFF, 0xF7, 0x76, 0xFF, 0xFF, 0x80, 0xE8, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_download_done() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_download_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_attachment 48x48, 4-bit Alpha,  RLE, 191 bytes.
static const uint8_t ic_outlined_48_file_attachment_data[] PROGMEM = {
  0x80, 0x99, 0xE6, 0x08, 0x25, 0x9C, 0xDF, 0xFF, 0xC8, 0x2D, 0xB7, 0x17, 0x60, 0x60, 0xEF, 0xFF,
  0xFD, 0x07, 0x73, 0x01, 0x0C, 0x80, 0xC0, 0xF0, 0x97, 0x10, 0x10, 0xEB, 0x82, 0xD7, 0x31, 0x77,
  0x74, 0x81, 0x15, 0xDB, 0x07, 0x70, 0xCB, 0x06, 0x77, 0x77, 0x40, 0x9B, 0x01, 0x50, 0x7B, 0x03,
  0x77, 0x77, 0x60, 0xDA, 0x07, 0x40, 0x10, 0xEA, 0x06, 0x78, 0x13, 0xAD, 0xFF, 0xD6, 0x06, 0xA0,
  0xB4, 0x06, 0xA0, 0xC7, 0x07, 0xFF, 0xF9, 0x60, 0x2A, 0x0D, 0x40, 0xBA, 0x06, 0x60, 0x3F, 0xFF,
  0xA6, 0x01, 0xA0, 0xD4, 0x0D, 0xA0, 0x16, 0x0B, 0xA0, 0xB0, 0x37, 0x77, 0x40, 0x4A, 0x0C, 0x4B,
  0x70, 0xEA, 0x02, 0x77, 0x75, 0x0C, 0xA0, 0x74, 0xB7, 0xB0, 0x17, 0x77, 0x40, 0x7B, 0x02, 0x40,
  0xEA, 0x01, 0x60, 0xCA, 0x0A, 0x01, 0x77, 0x78, 0x11, 0x4B, 0xB0, 0x85, 0x0B, 0xA0, 0x56, 0x05,
  0xFF, 0xFF, 0xA0, 0xB6, 0x07, 0xA0, 0xB7, 0x09, 0xFF, 0xFF, 0x09, 0x70, 0x1B, 0x04, 0x78, 0x15,
  0xBE, 0xFF, 0xF9, 0x81, 0xD9, 0x27, 0x20, 0x8A, 0x0E, 0x02, 0x80, 0xC7, 0x00, 0x10, 0xDA, 0x0E,
  0x04, 0x80, 0xC7, 0x00, 0x20, 0xEB, 0x81, 0xB5, 0x18, 0x0C, 0x50, 0x02, 0x0D, 0xFF, 0xFF, 0x97,
  0x74, 0x01, 0x08, 0xFF, 0xFF, 0x77, 0x68, 0x21, 0x7B, 0xEF, 0xFF, 0xB8, 0x09, 0x9E, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_attachment() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_attachment_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_cloud_done 48x48, 4-bit Alpha,  RLE, 328 bytes.
static const uint8_t ic_outlined_48_file_cloud_done_data[] PROGMEM = {
  0x80, 0xE9, 0x70, 0x89, 0x03, 0x7A, 0xDD, 0xDC, 0xA7, 0x28, 0x0C, 0x00, 0x06, 0x0D, 0xFB, 0x0C,
  0x05, 0x77, 0x77, 0x40, 0x40, 0xEF, 0xF0, 0xD0, 0x37, 0x77, 0x71, 0x08, 0xFF, 0xC0, 0x67, 0x77,
  0x60, 0xAD, 0x87, 0xE9, 0x52, 0x11, 0x36, 0xAE, 0x08, 0x77, 0x74, 0x08, 0xD0, 0x70, 0x17, 0x10,
  0x10, 0x9D, 0x07, 0x77, 0x72, 0x05, 0xC0, 0xE0, 0x37, 0x50, 0x40, 0xEC, 0x03, 0x77, 0x70, 0x10,
  0xEB, 0x0D, 0x01, 0x77, 0x03, 0x0E, 0xB0, 0xD7, 0x74, 0x82, 0x16, 0x9D, 0xC0, 0x27, 0x72, 0x04,
  0xC0, 0x57, 0x71, 0x01, 0x09, 0xF0, 0x77, 0x74, 0x09, 0xB0, 0xD7, 0x70, 0x40, 0xEF, 0x0E, 0x77,
  0x50, 0x2C, 0x02, 0x75, 0x06, 0xFA, 0x06, 0x77, 0x03, 0x06, 0x40, 0xAB, 0x07, 0x74, 0x05, 0xD8,
  0x2D, 0x73, 0x17, 0x71, 0x82, 0x3E, 0xF6, 0x30, 0x6B, 0x82, 0xEA, 0x82, 0x70, 0x10, 0xEC, 0x06,
  0x77, 0x40, 0x30, 0xEB, 0x06, 0x20, 0x2F, 0x0B, 0x02, 0x50, 0x9B, 0x0E, 0x03, 0x77, 0x40, 0x30,
  0xEC, 0x08, 0x30, 0xEF, 0x90, 0x63, 0x01, 0xC0, 0x67, 0x74, 0x03, 0x0E, 0xC0, 0x84, 0x0B, 0xFA,
  0x06, 0x20, 0x7B, 0x0C, 0x73, 0x06, 0x02, 0x60, 0x30, 0xEC, 0x08, 0x78, 0x21, 0x25, 0xBD, 0x81,
  0x30, 0xBB, 0x05, 0x72, 0x82, 0x6F, 0xE2, 0x40, 0x30, 0xEC, 0x08, 0x75, 0x06, 0xC8, 0x1C, 0x0E,
  0xB0, 0x17, 0x10, 0x6B, 0x0E, 0x02, 0x20, 0x30, 0xEC, 0x08, 0x77, 0x05, 0xC0, 0x4C, 0x72, 0x08,
  0xC8, 0x2E, 0x23, 0xEC, 0x08, 0x77, 0x20, 0xBB, 0x08, 0xC7, 0x30, 0x8C, 0x00, 0xEC, 0x08, 0x77,
  0x30, 0x5B, 0x0C, 0x0E, 0xB0, 0x17, 0x30, 0x8F, 0x90, 0x87, 0x74, 0x02, 0xB0, 0xD0, 0xCB, 0x05,
  0x74, 0x08, 0xE0, 0x87, 0x75, 0x01, 0xB0, 0xD0, 0x7B, 0x0B, 0x75, 0x08, 0xC0, 0x87, 0x76, 0x04,
  0xB0, 0xC0, 0x2C, 0x04, 0x75, 0x08, 0xA0, 0x87, 0x77, 0x09, 0xB8, 0x19, 0x0A, 0xB0, 0xE0, 0x27,
  0x50, 0x08, 0x77, 0x70, 0x3C, 0x81, 0x40, 0x2C, 0x0E, 0x04, 0x77, 0x77, 0x50, 0x30, 0xEB, 0x0D,
  0x30, 0x6D, 0x81, 0xB5, 0x17, 0x77, 0x68, 0x11, 0x49, 0xD0, 0x44, 0x08, 0x80, 0xC5, 0xF0, 0x76,
  0x06, 0x80, 0xC3, 0xF0, 0x87, 0x10, 0x20, 0xAF, 0xFF, 0xFF, 0x0D, 0x05, 0x74, 0x82, 0x27, 0xCE,
  0xFF, 0xFF, 0x81, 0xDA, 0x58, 0x0E, 0x82, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_cloud_done() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_cloud_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_snippet_folder 48x48, 4-bit Alpha,  RLE, 195 bytes.
static const uint8_t ic_outlined_48_file_snippet_folder_data[] PROGMEM = {
  0x80, 0xE8, 0x10, 0x81, 0x19, 0xCF, 0xD0, 0x67, 0x77, 0x73, 0x01, 0x0E, 0xFF, 0x90, 0x67, 0x77,
  0x72, 0x0A, 0xFF, 0xB0, 0x67, 0x77, 0x71, 0x0E, 0xFF, 0xC0, 0x67, 0x77, 0x7C, 0x73, 0x05, 0xFF,
  0xF8, 0x1C, 0x81, 0x72, 0xC7, 0x40, 0x5F, 0xFF, 0x90, 0xD0, 0x17, 0x1C, 0x75, 0x05, 0xFF, 0xF9,
  0x08, 0x71, 0xC7, 0x60, 0x5F, 0xFF, 0x0C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C,
  0x71, 0xC7, 0x74, 0xF0, 0x66, 0xC7, 0x1C, 0x77, 0x4F, 0x90, 0x65, 0xC7, 0x1C, 0x77, 0x4F, 0xA0,
  0x64, 0xC7, 0x1C, 0x77, 0x4B, 0x30, 0xBB, 0x06, 0x3C, 0x71, 0xC7, 0x74, 0xB4, 0x0B, 0xB0, 0x62,
  0xC7, 0x1C, 0x77, 0x4B, 0x50, 0xBB, 0x2C, 0x71, 0xC7, 0x74, 0xB6, 0xB2, 0xC7, 0x1C, 0x77, 0x4B,
  0x6B, 0x2C, 0x71, 0xC7, 0x74, 0xB6, 0xB2, 0xC7, 0x1C, 0x77, 0x4B, 0x6B, 0x2C, 0x71, 0xC7, 0x74,
  0xB6, 0xB2, 0xC7, 0x1C, 0x77, 0x4B, 0x6B, 0x2C, 0x71, 0xC7, 0x74, 0xB6, 0xB2, 0xC7, 0x1C, 0x77,
  0x4F, 0xD2, 0xC7, 0x1C, 0x77, 0x4F, 0xD2, 0xC7, 0x1C, 0x77, 0x4F, 0xD2, 0xC7, 0x1C, 0x77, 0x77,
  0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x10, 0xE8, 0x0C, 0x2F, 0x0D, 0x71, 0x0B, 0x80, 0xC2, 0xF0,
  0x97, 0x10, 0x28, 0x0C, 0x1F, 0x0E, 0x01, 0x72, 0x81, 0x2B, 0xEF, 0xFF, 0xFC, 0x81, 0xEA, 0x18,
  0x0E, 0x81, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_snippet_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_snippet_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_cloud_off 48x48, 4-bit Alpha,  RLE, 359 bytes.
static const uint8_t ic_outlined_48_file_cloud_off_data[] PROGMEM = {
  0x80, 0xE8, 0x30, 0x81, 0x1D, 0x67, 0x28, 0x90, 0x37, 0xAD, 0xDD, 0xCA, 0x72, 0x77, 0x74, 0x01,
  0x0D, 0xA0, 0x66, 0x06, 0x0D, 0xFB, 0x0C, 0x05, 0x77, 0x72, 0x0C, 0xC0, 0x65, 0x0B, 0xFE, 0x0D,
  0x03, 0x77, 0x70, 0x30, 0xEC, 0x06, 0x50, 0xBF, 0xF0, 0x67, 0x77, 0x03, 0x0E, 0xC0, 0x65, 0x87,
  0xBA, 0x52, 0x11, 0x36, 0xAE, 0x08, 0x77, 0x70, 0x30, 0xEC, 0x06, 0x76, 0x01, 0x09, 0xD0, 0x77,
  0x77, 0x03, 0x0E, 0xC0, 0x67, 0x70, 0x40, 0xEC, 0x03, 0x77, 0x70, 0x30, 0xEC, 0x06, 0x77, 0x02,
  0x0E, 0xB0, 0xD7, 0x74, 0x83, 0x16, 0x9C, 0xED, 0x06, 0x77, 0x04, 0xC0, 0x57, 0x71, 0x01, 0x09,
  0xFC, 0x06, 0x77, 0x09, 0xB0, 0xD7, 0x70, 0x40, 0xEF, 0xE0, 0x67, 0x60, 0x1C, 0x02, 0x75, 0x06,
  0xFF, 0xA0, 0x67, 0x60, 0xAB, 0x07, 0x74, 0x05, 0xD8, 0x2D, 0x73, 0x13, 0x03, 0x0E, 0xC0, 0x67,
  0x50, 0x6B, 0x82, 0xEA, 0x82, 0x70, 0x10, 0xEC, 0x06, 0x71, 0x03, 0x0E, 0xC0, 0x67, 0x40, 0x3F,
  0x0B, 0x02, 0x50, 0x9C, 0x03, 0x73, 0x03, 0x0E, 0xC0, 0x67, 0x30, 0x1F, 0xA0, 0x63, 0x01, 0xC0,
  0x67, 0x50, 0x30, 0xEC, 0x06, 0x73, 0xFB, 0x06, 0x20, 0x7B, 0x0C, 0x77, 0x03, 0x0E, 0xC0, 0x67,
  0x58, 0x11, 0x4A, 0xD8, 0x13, 0x0B, 0xB0, 0x67, 0x71, 0x03, 0x0E, 0xC0, 0x67, 0x70, 0x40, 0xEB,
  0x81, 0xC0, 0xEB, 0x01, 0x77, 0x20, 0x30, 0xEC, 0x06, 0x77, 0x05, 0xC0, 0x4C, 0x77, 0x40, 0x30,
  0xEC, 0x06, 0x77, 0x0A, 0xB0, 0x8C, 0x77, 0x50, 0x30, 0xEC, 0x06, 0x76, 0x06, 0xB0, 0xC0, 0xEB,
  0x01, 0x77, 0x50, 0x30, 0xEC, 0x06, 0x75, 0x02, 0xB0, 0xD0, 0xCB, 0x05, 0x77, 0x60, 0x30, 0xEC,
  0x06, 0x74, 0x01, 0xB0, 0xD0, 0x7B, 0x0B, 0x77, 0x70, 0x30, 0xEC, 0x06, 0x73, 0x04, 0xB0, 0xB0,
  0x2C, 0x04, 0x77, 0x70, 0x30, 0xEC, 0x06, 0x72, 0x09, 0xB8, 0x19, 0x0A, 0xB0, 0xE0, 0x27, 0x77,
  0x03, 0x0E, 0xC0, 0x67, 0x03, 0xC8, 0x13, 0x02, 0xC0, 0xE0, 0x47, 0x77, 0x03, 0x0E, 0xC0, 0x65,
  0x02, 0x0E, 0xB0, 0xD3, 0x06, 0xD8, 0x1B, 0x51, 0x77, 0x50, 0x30, 0xEC, 0x06, 0x50, 0xBB, 0x03,
  0x40, 0x8F, 0xFF, 0xFD, 0x06, 0x58, 0x1B, 0xF6, 0x60, 0x6F, 0xFF, 0xFD, 0x06, 0x50, 0x67, 0x10,
  0x20, 0xAF, 0xFF, 0xFC, 0x06, 0x77, 0x18, 0x22, 0x7C, 0xEF, 0xFF, 0xF9, 0x06, 0x80, 0xC6, 0x00,
  0x30, 0xEC, 0x06, 0x80, 0xC6, 0x00, 0x30, 0xEB, 0x0D, 0x80, 0xC7, 0x08, 0x33, 0xEF, 0xD1, 0x80,
  0xD0, 0x08, 0x13, 0xC1, 0x80, 0xB8, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_cloud_off() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_cloud_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_topic 48x48, 4-bit Alpha,  RLE, 176 bytes.
static const uint8_t ic_outlined_48_file_topic_data[] PROGMEM = {
  0x80, 0xE8, 0x10, 0x81, 0x19, 0xCF, 0xD0, 0x67, 0x77, 0x73, 0x01, 0x0E, 0xFF, 0x90, 0x67, 0x77,
  0x72, 0x0A, 0xFF, 0xB0, 0x67, 0x77, 0x71, 0x0E, 0xFF, 0xC0, 0x67, 0x77, 0x7C, 0x73, 0x05, 0xFF,
  0xF8, 0x1C, 0x81, 0x72, 0xC7, 0x40, 0x5F, 0xFF, 0x90, 0xD0, 0x17, 0x1C, 0x75, 0x05, 0xFF, 0xF9,
  0x08, 0x71, 0xC7, 0x60, 0x5F, 0xFF, 0x0C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C,
  0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC4, 0xFF, 0xFB, 0x4C, 0x71, 0xC4,
  0xFF, 0xFB, 0x4C, 0x71, 0xC4, 0xFF, 0xFB, 0x4C, 0x71, 0xC4, 0xFF, 0xFB, 0x4C, 0x71, 0xC7, 0x77,
  0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71,
  0xC4, 0xFF, 0xA7, 0x5C, 0x71, 0xC4, 0xFF, 0xA7, 0x5C, 0x71, 0xC4, 0xFF, 0xA7, 0x5C, 0x71, 0xC4,
  0xFF, 0xA7, 0x5C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74,
  0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0x0E, 0x80, 0xC3, 0xF7, 0x10, 0xB8, 0x0C, 0x2F, 0x0E, 0x71,
  0x02, 0x80, 0xC2, 0xF0, 0x87, 0x28, 0x12, 0xBE, 0xFF, 0xFF, 0xE0, 0x90, 0x18, 0x0E, 0x80, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_topic() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_topic_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_attach_email 48x48, 4-bit Alpha,  RLE, 313 bytes.
static const uint8_t ic_outlined_48_file_attach_email_data[] PROGMEM = {
  0x80, 0xAF, 0x70, 0x81, 0x19, 0xCF, 0xFF, 0xFC, 0x81, 0xC8, 0x17, 0x20, 0x10, 0xE8, 0x0C, 0x0F,
  0x0D, 0x01, 0x71, 0x0A, 0x80, 0xC2, 0xF0, 0x87, 0x10, 0xE8, 0x0C, 0x2F, 0x0C, 0x71, 0xC0, 0x80,
  0x17, 0x77, 0x70, 0x10, 0xAC, 0x71, 0xD0, 0xD0, 0x57, 0x77, 0x50, 0x60, 0xED, 0x71, 0xF0, 0xA0,
  0x17, 0x77, 0x10, 0x20, 0xCF, 0x71, 0xF9, 0x0E, 0x07, 0x77, 0x60, 0x8F, 0xA7, 0x1C, 0x06, 0x0E,
  0xC0, 0xC0, 0x37, 0x72, 0x04, 0x0D, 0xC0, 0xD0, 0x5C, 0x71, 0xC1, 0x01, 0x0A, 0xD0, 0x80, 0x17,
  0x50, 0x10, 0xAD, 0x08, 0x01, 0x1C, 0x71, 0xC3, 0x04, 0x0D, 0xC0, 0xD0, 0x57, 0x30, 0x60, 0xEC,
  0x0C, 0x03, 0x3C, 0x71, 0xC5, 0x08, 0xD0, 0xA0, 0x16, 0x02, 0x0C, 0xC0, 0xE0, 0x75, 0xC7, 0x1C,
  0x60, 0x20, 0xCC, 0x0E, 0x07, 0x40, 0x8D, 0x0A, 0x01, 0x6C, 0x71, 0xC7, 0x10, 0x60, 0xEC, 0x82,
  0xC3, 0x4D, 0xC0, 0xD0, 0x57, 0x1C, 0x71, 0xC7, 0x20, 0x10, 0xAF, 0xB0, 0x80, 0x17, 0x77, 0xC7,
  0x40, 0x40, 0xDE, 0x0C, 0x03, 0x77, 0x72, 0xC7, 0x60, 0x8B, 0x0E, 0x07, 0x77, 0x74, 0xC7, 0x78,
  0x22, 0xCA, 0x17, 0x77, 0x5C, 0x77, 0x75, 0x84, 0x3A, 0xDC, 0x92, 0x75, 0xC7, 0x77, 0x40, 0x7E,
  0x05, 0x74, 0xC7, 0x77, 0x30, 0x3F, 0x90, 0x27, 0x3C, 0x77, 0x73, 0x0B, 0xF9, 0x0A, 0x73, 0xC7,
  0x77, 0x30, 0xEB, 0x00, 0x8B, 0x0D, 0x73, 0xC7, 0x77, 0x3C, 0x2C, 0x73, 0xC7, 0x77, 0x3C, 0x2C,
  0x2C, 0x4C, 0x77, 0x73, 0xC2, 0xC2, 0xC4, 0xC7, 0x77, 0x3C, 0x2C, 0x2C, 0x4C, 0x77, 0x73, 0xC2,
  0xC2, 0xC4, 0x0E, 0xFF, 0xFA, 0x4C, 0x2C, 0x2C, 0x40, 0xBF, 0xFF, 0xA4, 0xC2, 0xC2, 0xC4, 0x02,
  0xFF, 0xFA, 0x4C, 0x2C, 0x2C, 0x58, 0x12, 0xBE, 0xFF, 0xE4, 0xC2, 0xC2, 0xC7, 0x77, 0x74, 0xC7,
  0x02, 0xB0, 0xD7, 0x77, 0x74, 0x0E, 0xB0, 0x46, 0x06, 0xB0, 0xC7, 0x77, 0x74, 0x09, 0xB0, 0xC5,
  0x01, 0x0D, 0xB0, 0x77, 0x77, 0x74, 0x03, 0xC8, 0x4C, 0x40, 0x14, 0xDC, 0x02, 0x77, 0x77, 0x50,
  0xAF, 0xD0, 0x87, 0x77, 0x77, 0x0D, 0xFB, 0x0B, 0x80, 0xC1, 0x00, 0xAF, 0x90, 0x98, 0x0C, 0x30,
  0x81, 0x39, 0xEA, 0x81, 0xD9, 0x28, 0x0B, 0x82, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_attach_email() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_attach_email_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_cloud_circle 48x48, 4-bit Alpha,  RLE, 446 bytes.
static const uint8_t ic_outlined_48_file_cloud_circle_data[] PROGMEM = {
  0x80, 0xB9, 0x60, 0x89, 0x21, 0x69, 0xAC, 0xDD, 0xBA, 0x85, 0x17, 0x77, 0x75, 0x81, 0x17, 0xBF,
  0xD0, 0xB0, 0x67, 0x77, 0x72, 0x07, 0x0E, 0xFF, 0xA0, 0xE0, 0x67, 0x77, 0x50, 0x40, 0xDF, 0xFE,
  0x0D, 0x03, 0x77, 0x72, 0x07, 0xF8, 0x90, 0xB7, 0x43, 0x11, 0x35, 0x7C, 0xF0, 0x57, 0x77, 0x09,
  0xD8, 0x1E, 0x61, 0x73, 0x01, 0x07, 0xE0, 0x87, 0x75, 0x0A, 0xD0, 0x70, 0x17, 0x70, 0x10, 0x9D,
  0x08, 0x77, 0x30, 0x7C, 0x0E, 0x03, 0x77, 0x40, 0x40, 0xEC, 0x05, 0x77, 0x10, 0x5C, 0x0D, 0x01,
  0x77, 0x60, 0x20, 0xEC, 0x03, 0x76, 0x01, 0x0E, 0xB0, 0xE0, 0x17, 0x18, 0x43, 0x78, 0x87, 0x27,
  0x10, 0x20, 0xEB, 0x0D, 0x76, 0x07, 0xC0, 0x37, 0x05, 0x0D, 0xE0, 0xC0, 0x47, 0x04, 0xC0, 0x67,
  0x40, 0x1C, 0x07, 0x70, 0x9F, 0xB0, 0x87, 0x09, 0xB0, 0xE7, 0x40, 0x8B, 0x0E, 0x70, 0xAF, 0xD0,
  0x86, 0x01, 0xC0, 0x67, 0x30, 0xDB, 0x05, 0x60, 0x6D, 0x82, 0xA7, 0x7B, 0xD0, 0x56, 0x07, 0xB0,
  0xB7, 0x20, 0x2B, 0x0E, 0x48, 0x11, 0x7B, 0xC0, 0xD0, 0x24, 0x03, 0x0E, 0xB0, 0xD6, 0x01, 0xC0,
  0x17, 0x10, 0x7B, 0x0A, 0x30, 0x40, 0xED, 0x0E, 0x01, 0x60, 0x3C, 0x03, 0x60, 0xCB, 0x05, 0x71,
  0x0A, 0xB0, 0x52, 0x05, 0xF0, 0x77, 0x10, 0xAB, 0x0B, 0x04, 0x50, 0x7B, 0x08, 0x71, 0x0C, 0xB8,
  0x23, 0x01, 0xEE, 0x0E, 0x01, 0x71, 0x05, 0xD0, 0xE0, 0x53, 0x05, 0xB0, 0xA7, 0x10, 0xDB, 0x81,
  0x10, 0x8C, 0x0A, 0x03, 0x74, 0x02, 0xF0, 0x72, 0x03, 0xB0, 0xB7, 0x1C, 0x20, 0xDB, 0x06, 0x77,
  0x0E, 0xF8, 0x12, 0x01, 0xB0, 0xD7, 0x1C, 0x2C, 0x01, 0x77, 0x30, 0x40, 0xCB, 0x81, 0x90, 0x1B,
  0x0D, 0x71, 0x0E, 0xB0, 0x11, 0xC0, 0x17, 0x74, 0x04, 0xB8, 0x1D, 0x03, 0xB0, 0xC7, 0x10, 0xCB,
  0x81, 0x20, 0xDB, 0x08, 0x77, 0x40, 0x3B, 0x81, 0xD0, 0x4B, 0x0A, 0x71, 0x0B, 0xB8, 0x15, 0x09,
  0xB0, 0xE0, 0x57, 0x72, 0x02, 0x0B, 0xB8, 0x1A, 0x07, 0xB0, 0x97, 0x10, 0x7B, 0x81, 0x90, 0x2F,
  0xFF, 0xD8, 0x16, 0x0B, 0xB0, 0x67, 0x10, 0x3B, 0x0E, 0x20, 0x6F, 0xFF, 0xB8, 0x1C, 0x01, 0xC0,
  0x17, 0x20, 0xDB, 0x04, 0x20, 0x6F, 0xFF, 0x98, 0x2C, 0x20, 0x6B, 0x0B, 0x73, 0x09, 0xB0, 0xD3,
  0x81, 0x29, 0xDF, 0xFB, 0x0D, 0x07, 0x20, 0x10, 0xEB, 0x07, 0x73, 0x02, 0xC0, 0x67, 0x77, 0x50,
  0x7B, 0x0E, 0x01, 0x74, 0x09, 0xB0, 0xE0, 0x27, 0x77, 0x30, 0x3C, 0x07, 0x75, 0x01, 0x0E, 0xB0,
  0xD0, 0x17, 0x77, 0x10, 0x10, 0xEB, 0x0D, 0x77, 0x06, 0xC0, 0xB0, 0x17, 0x76, 0x01, 0x0D, 0xC0,
  0x47, 0x71, 0x09, 0xC0, 0xD0, 0x27, 0x74, 0x03, 0x0E, 0xC0, 0x77, 0x73, 0x0B, 0xC0, 0xE0, 0x67,
  0x72, 0x07, 0xD0, 0x97, 0x74, 0x01, 0x0B, 0xD0, 0xD0, 0x47, 0x50, 0x50, 0xED, 0x0A, 0x77, 0x70,
  0x9E, 0x83, 0xE9, 0x52, 0x12, 0x83, 0x13, 0x5A, 0xEE, 0x07, 0x77, 0x72, 0x06, 0x0E, 0xFF, 0xE0,
  0xE0, 0x57, 0x77, 0x40, 0x10, 0x9F, 0xFC, 0x07, 0x01, 0x77, 0x77, 0x81, 0x29, 0xDF, 0xD8, 0x1D,
  0x81, 0x77, 0x77, 0x58, 0x33, 0x7B, 0xCE, 0xA8, 0x3D, 0xCA, 0x72, 0x80, 0xB9, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_cloud_circle() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_cloud_circle_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_upload 48x48, 4-bit Alpha,  RLE, 156 bytes.
static const uint8_t ic_outlined_48_file_upload_data[] PROGMEM = {
  0x80, 0xCE, 0x30, 0x00, 0x68, 0x0D, 0x10, 0x06, 0xA0, 0x68, 0x0C, 0x70, 0x06, 0xC0, 0x68, 0x0C,
  0x50, 0x06, 0xE0, 0x68, 0x0C, 0x30, 0x06, 0xF9, 0x06, 0x80, 0xC1, 0x00, 0x6C, 0x0E, 0xD0, 0x67,
  0x77, 0x77, 0x06, 0xC8, 0x1E, 0x35, 0xD0, 0x67, 0x77, 0x75, 0x06, 0xC0, 0xE0, 0x32, 0x05, 0xD0,
  0x67, 0x77, 0x73, 0x06, 0xC0, 0xE0, 0x34, 0x05, 0xD0, 0x67, 0x77, 0x71, 0x06, 0xC0, 0xE0, 0x36,
  0x05, 0xD0, 0x67, 0x77, 0x60, 0x6F, 0x94, 0xF9, 0x06, 0x77, 0x74, 0x06, 0xFA, 0x4F, 0xA0, 0x67,
  0x77, 0x20, 0x6F, 0xB4, 0xFB, 0x06, 0x77, 0x70, 0x6F, 0xC4, 0xFC, 0x06, 0x77, 0x77, 0xC4, 0xC8,
  0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8,
  0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xFD, 0x80,
  0xC0, 0x0F, 0xD8, 0x0C, 0x00, 0xFD, 0x80, 0xC0, 0x0F, 0xD8, 0x0B, 0xB0, 0x0F, 0xFF, 0xF7, 0x76,
  0xFF, 0xFF, 0x77, 0x6F, 0xFF, 0xF7, 0x76, 0xFF, 0xFF, 0x80, 0xE8, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_upload() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_cloud_upload 48x48, 4-bit Alpha,  RLE, 302 bytes.
static const uint8_t ic_outlined_48_file_cloud_upload_data[] PROGMEM = {
  0x80, 0xE9, 0x70, 0x89, 0x03, 0x7A, 0xDD, 0xDC, 0xA7, 0x28, 0x0C, 0x00, 0x06, 0x0D, 0xFB, 0x0C,
  0x05, 0x77, 0x77, 0x40, 0x40, 0xEF, 0xF0, 0xD0, 0x37, 0x77, 0x71, 0x08, 0xFF, 0xC0, 0x67, 0x77,
  0x60, 0xAD, 0x87, 0xE9, 0x52, 0x11, 0x36, 0xAE, 0x08, 0x77, 0x74, 0x08, 0xD0, 0x70, 0x17, 0x10,
  0x10, 0x9D, 0x07, 0x77, 0x72, 0x05, 0xC0, 0xE0, 0x37, 0x50, 0x40, 0xEC, 0x03, 0x77, 0x70, 0x10,
  0xEB, 0x0D, 0x01, 0x77, 0x03, 0x0E, 0xB0, 0xD7, 0x74, 0x82, 0x16, 0x9D, 0xC0, 0x27, 0x72, 0x04,
  0xC0, 0x57, 0x71, 0x01, 0x09, 0xF0, 0x77, 0x74, 0x09, 0xB0, 0xD7, 0x70, 0x40, 0xEF, 0x0E, 0x72,
  0x00, 0x67, 0x10, 0x2C, 0x02, 0x75, 0x06, 0xFA, 0x06, 0x71, 0x06, 0xA0, 0x67, 0x10, 0xAB, 0x07,
  0x74, 0x05, 0xD8, 0x2D, 0x73, 0x17, 0x20, 0x6C, 0x06, 0x70, 0x6B, 0x82, 0xEA, 0x82, 0x70, 0x10,
  0xEC, 0x06, 0x75, 0x06, 0xE0, 0x66, 0x02, 0xF0, 0xB0, 0x25, 0x09, 0xB0, 0xE0, 0x37, 0x50, 0x6F,
  0x90, 0x66, 0x0E, 0xF9, 0x06, 0x30, 0x1C, 0x06, 0x75, 0x06, 0xFB, 0x06, 0x50, 0xBF, 0xA0, 0x62,
  0x07, 0xB0, 0xC7, 0x50, 0x6F, 0xD0, 0x66, 0x82, 0x12, 0x5B, 0xD8, 0x13, 0x0B, 0xB0, 0x57, 0x40,
  0x6F, 0xF0, 0x67, 0x20, 0x6C, 0x81, 0xC0, 0xEB, 0x01, 0x77, 0x2D, 0x0D, 0x77, 0x10, 0x5C, 0x04,
  0xC7, 0x73, 0xD0, 0xD7, 0x72, 0x0B, 0xB0, 0x8C, 0x77, 0x3D, 0x0D, 0x77, 0x20, 0x5B, 0x0C, 0x0E,
  0xB0, 0x17, 0x72, 0xD0, 0xD7, 0x72, 0x02, 0xB0, 0xD0, 0xCB, 0x05, 0x77, 0x2D, 0x0D, 0x77, 0x20,
  0x1B, 0x0D, 0x07, 0xB0, 0xB7, 0x72, 0xD0, 0xD7, 0x72, 0x04, 0xB0, 0xC0, 0x2C, 0x04, 0x80, 0xC1,
  0x00, 0x9B, 0x81, 0x90, 0xAB, 0x0E, 0x02, 0x77, 0x77, 0x70, 0x3C, 0x81, 0x40, 0x2C, 0x0E, 0x04,
  0x77, 0x77, 0x50, 0x30, 0xEB, 0x0D, 0x30, 0x6D, 0x81, 0xB5, 0x17, 0x77, 0x68, 0x11, 0x49, 0xD0,
  0x44, 0x08, 0x80, 0xC5, 0xF0, 0x76, 0x06, 0x80, 0xC3, 0xF0, 0x87, 0x10, 0x20, 0xAF, 0xFF, 0xFF,
  0x0D, 0x05, 0x74, 0x82, 0x27, 0xCE, 0xFF, 0xFF, 0x81, 0xDA, 0x58, 0x0E, 0x82, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_cloud_upload() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_cloud_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_download 48x48, 4-bit Alpha,  RLE, 160 bytes.
static const uint8_t ic_outlined_48_file_download_data[] PROGMEM = {
  0x80, 0xCD, 0x60, 0xFD, 0x80, 0xC0, 0x0F, 0xD8, 0x0C, 0x00, 0xFD, 0x80, 0xC0, 0x0F, 0xD8, 0x0C,
  0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C,
  0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC8, 0x0C, 0x00, 0xC4, 0xC7, 0x77,
  0x70, 0x8F, 0xC4, 0xFC, 0x08, 0x77, 0x70, 0x8F, 0xB4, 0xFB, 0x08, 0x77, 0x72, 0x08, 0xFA, 0x4F,
  0xA0, 0x87, 0x77, 0x40, 0x8F, 0x94, 0xF9, 0x08, 0x77, 0x76, 0x08, 0xC0, 0xE0, 0x26, 0x03, 0x0E,
  0xC0, 0x87, 0x77, 0x71, 0x08, 0xC0, 0xE0, 0x24, 0x03, 0x0E, 0xC0, 0x87, 0x77, 0x73, 0x08, 0xC0,
  0xE0, 0x22, 0x03, 0x0E, 0xC0, 0x87, 0x77, 0x75, 0x08, 0xC8, 0x2E, 0x23, 0xEC, 0x08, 0x77, 0x77,
  0x70, 0x8C, 0x00, 0xEC, 0x08, 0x80, 0xC1, 0x00, 0x8F, 0x90, 0x88, 0x0C, 0x30, 0x08, 0xE0, 0x88,
  0x0C, 0x50, 0x08, 0xC0, 0x88, 0x0C, 0x70, 0x08, 0xA0, 0x88, 0x0D, 0x10, 0x00, 0x88, 0x0B, 0xB5,
  0x0F, 0xFF, 0xF7, 0x76, 0xFF, 0xFF, 0x77, 0x6F, 0xFF, 0xF7, 0x76, 0xFF, 0xFF, 0x80, 0xE8, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_download() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_folder_shared 48x48, 4-bit Alpha,  RLE, 213 bytes.
static const uint8_t ic_outlined_48_file_folder_shared_data[] PROGMEM = {
  0x80, 0xE8, 0x10, 0x81, 0x19, 0xCF, 0xD0, 0x67, 0x77, 0x73, 0x01, 0x0E, 0xFF, 0x90, 0x67, 0x77,
  0x72, 0x0A, 0xFF, 0xB0, 0x67, 0x77, 0x71, 0x0E, 0xFF, 0xC0, 0x67, 0x77, 0x7C, 0x73, 0x05, 0xFF,
  0xF8, 0x1C, 0x81, 0x72, 0xC7, 0x40, 0x5F, 0xFF, 0x90, 0xD0, 0x17, 0x1C, 0x75, 0x05, 0xFF, 0xF9,
  0x08, 0x71, 0xC7, 0x60, 0x5F, 0xFF, 0x0C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C,
  0x71, 0xC7, 0x75, 0x84, 0x19, 0xCC, 0x81, 0x7C, 0x71, 0xC7, 0x74, 0x01, 0x0E, 0xC0, 0xD0, 0x16,
  0xC7, 0x1C, 0x77, 0x40, 0xAE, 0x08, 0x6C, 0x71, 0xC7, 0x74, 0x0E, 0xE0, 0xC6, 0xC7, 0x1C, 0x77,
  0x40, 0xEE, 0x0D, 0x6C, 0x71, 0xC7, 0x74, 0x0B, 0xE0, 0x96, 0xC7, 0x1C, 0x77, 0x40, 0x2D, 0x0E,
  0x01, 0x6C, 0x71, 0xC7, 0x75, 0x84, 0x2B, 0xEE, 0xA1, 0x7C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C,
  0x77, 0x77, 0x4C, 0x71, 0xC7, 0x73, 0x89, 0x01, 0x6A, 0xCD, 0xDB, 0x95, 0x15, 0xC7, 0x1C, 0x77,
  0x10, 0x30, 0xBF, 0xB0, 0x90, 0x13, 0xC7, 0x1C, 0x77, 0x03, 0xFE, 0x0E, 0x02, 0x2C, 0x71, 0xC7,
  0x70, 0xBF, 0xF0, 0x92, 0xC7, 0x1C, 0x77, 0xFF, 0xA2, 0xC7, 0x1C, 0x77, 0xFF, 0xA2, 0xC7, 0x1C,
  0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x10, 0xE8, 0x0C, 0x2F, 0x0D, 0x71, 0x0B, 0x80,
  0xC2, 0xF0, 0x97, 0x10, 0x28, 0x0C, 0x1F, 0x0E, 0x01, 0x72, 0x81, 0x2B, 0xEF, 0xFF, 0xFC, 0x81,
  0xEA, 0x18, 0x0E, 0x81, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_folder_shared() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_folder_shared_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_cloud 48x48, 4-bit Alpha,  RLE, 272 bytes.
static const uint8_t ic_outlined_48_file_cloud_data[] PROGMEM = {
  0x80, 0xE9, 0x70, 0x89, 0x03, 0x7A, 0xDD, 0xDC, 0xA7, 0x28, 0x0C, 0x00, 0x06, 0x0D, 0xFB, 0x0C,
  0x05, 0x77, 0x77, 0x40, 0x40, 0xEF, 0xF0, 0xD0, 0x37, 0x77, 0x71, 0x08, 0xFF, 0xC0, 0x67, 0x77,
  0x60, 0xAD, 0x87, 0xE9, 0x52, 0x11, 0x36, 0xAE, 0x08, 0x77, 0x74, 0x08, 0xD0, 0x70, 0x17, 0x10,
  0x10, 0x9D, 0x07, 0x77, 0x72, 0x05, 0xC0, 0xE0, 0x37, 0x50, 0x40, 0xEC, 0x03, 0x77, 0x70, 0x10,
  0xEB, 0x0D, 0x01, 0x77, 0x03, 0x0E, 0xB0, 0xD7, 0x74, 0x82, 0x16, 0x9D, 0xC0, 0x27, 0x72, 0x04,
  0xC0, 0x57, 0x71, 0x01, 0x09, 0xF0, 0x77, 0x74, 0x09, 0xB0, 0xD7, 0x70, 0x40, 0xEF, 0x0E, 0x77,
  0x50, 0x2C, 0x02, 0x75, 0x06, 0xFA, 0x06, 0x77, 0x60, 0xAB, 0x07, 0x74, 0x05, 0xD8, 0x2D, 0x73,
  0x17, 0x77, 0x10, 0x6B, 0x82, 0xEA, 0x82, 0x70, 0x10, 0xEC, 0x06, 0x77, 0x75, 0x02, 0xF0, 0xB0,
  0x25, 0x09, 0xB0, 0xE0, 0x37, 0x77, 0x70, 0xEF, 0x90, 0x63, 0x01, 0xC0, 0x67, 0x77, 0x71, 0x0B,
  0xFA, 0x06, 0x20, 0x7B, 0x0C, 0x77, 0x77, 0x48, 0x21, 0x25, 0xBD, 0x81, 0x30, 0xBB, 0x05, 0x80,
  0xC0, 0x00, 0x6C, 0x81, 0xC0, 0xEB, 0x01, 0x80, 0xC1, 0x00, 0x5C, 0x04, 0xC8, 0x0C, 0x30, 0x0B,
  0xB0, 0x8C, 0x80, 0xC3, 0x00, 0x5B, 0x0C, 0x0E, 0xB0, 0x18, 0x0C, 0x20, 0x02, 0xB0, 0xD0, 0xCB,
  0x05, 0x80, 0xC2, 0x00, 0x1B, 0x0D, 0x07, 0xB0, 0xB8, 0x0C, 0x20, 0x04, 0xB0, 0xC0, 0x2C, 0x04,
  0x80, 0xC1, 0x00, 0x9B, 0x81, 0x90, 0xAB, 0x0E, 0x02, 0x77, 0x77, 0x70, 0x3C, 0x81, 0x40, 0x2C,
  0x0E, 0x04, 0x77, 0x77, 0x50, 0x30, 0xEB, 0x0D, 0x30, 0x6D, 0x81, 0xB5, 0x17, 0x77, 0x68, 0x11,
  0x49, 0xD0, 0x44, 0x08, 0x80, 0xC5, 0xF0, 0x76, 0x06, 0x80, 0xC3, 0xF0, 0x87, 0x10, 0x20, 0xAF,
  0xFF, 0xFF, 0x0D, 0x05, 0x74, 0x82, 0x27, 0xCE, 0xFF, 0xFF, 0x81, 0xDA, 0x58, 0x0E, 0x82, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_cloud() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_cloud_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_folder_open 48x48, 4-bit Alpha,  RLE, 167 bytes.
static const uint8_t ic_outlined_48_file_folder_open_data[] PROGMEM = {
  0x80, 0xE8, 0x10, 0x81, 0x19, 0xCF, 0xD0, 0x67, 0x77, 0x73, 0x01, 0x0E, 0xFF, 0x90, 0x67, 0x77,
  0x72, 0x0A, 0xFF, 0xB0, 0x67, 0x77, 0x71, 0x0E, 0xFF, 0xC0, 0x67, 0x77, 0x78, 0x0C, 0x0F, 0x81,
  0xC8, 0x17, 0x28, 0x0C, 0x2F, 0x0D, 0x01, 0x71, 0x80, 0xC3, 0xF0, 0x87, 0x18, 0x0C, 0x3F, 0x0C,
  0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77,
  0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7,
  0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77,
  0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71,
  0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77,
  0x4C, 0x71, 0xC7, 0x77, 0x74, 0xC7, 0x1C, 0x77, 0x77, 0x4C, 0x71, 0x0E, 0x80, 0xC2, 0xF0, 0xD7,
  0x10, 0xB8, 0x0C, 0x2F, 0x09, 0x71, 0x02, 0x80, 0xC1, 0xF0, 0xE0, 0x17, 0x28, 0x12, 0xBE, 0xFF,
  0xFF, 0xC8, 0x1E, 0xA1, 0x80, 0xE8, 0x10,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_folder_open() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_folder_open_data, Alpha4(color::Black));
  return value;
}

// Image file ic_outlined_48_file_text_snippet 48x48, 4-bit Alpha,  RLE, 194 bytes.
static const uint8_t ic_outlined_48_file_text_snippet_data[] PROGMEM = {
  0x80, 0xCC, 0x30, 0x81, 0x19, 0xCF, 0xFC, 0x81, 0xDA, 0x27, 0x77, 0x20, 0x10, 0xEF, 0xFF, 0xA0,
  0x57, 0x77, 0x10, 0xAF, 0xFF, 0xC0, 0x57, 0x77, 0x0E, 0xFF, 0xFD, 0x05, 0x77, 0x6C, 0x77, 0x40,
  0x5D, 0x05, 0x77, 0x5C, 0x77, 0x50, 0x5D, 0x05, 0x77, 0x4C, 0x77, 0x60, 0x5D, 0x05, 0x77, 0x3C,
  0x77, 0x70, 0x5D, 0x05, 0x77, 0x2C, 0x4F, 0xF4, 0x05, 0xD0, 0x57, 0x71, 0xC4, 0xFF, 0x50, 0x5D,
  0x05, 0x77, 0xC4, 0xFF, 0x60, 0x5D, 0x05, 0x76, 0xC4, 0xFF, 0x70, 0x5D, 0x02, 0x75, 0xC7, 0x77,
  0x50, 0x5C, 0x0A, 0x75, 0xC7, 0x77, 0x60, 0x5B, 0x0D, 0x75, 0xC7, 0x77, 0x7C, 0x75, 0xC7, 0x77,
  0x7C, 0x75, 0xC4, 0xFF, 0xE4, 0xC7, 0x5C, 0x4F, 0xFE, 0x4C, 0x75, 0xC4, 0xFF, 0xE4, 0xC7, 0x5C,
  0x4F, 0xFE, 0x4C, 0x75, 0xC7, 0x77, 0x7C, 0x75, 0xC7, 0x77, 0x7C, 0x75, 0xC7, 0x77, 0x7C, 0x75,
  0xC7, 0x77, 0x7C, 0x75, 0xC4, 0xFF, 0xE4, 0xC7, 0x5C, 0x4F, 0xFE, 0x4C, 0x75, 0xC4, 0xFF, 0xE4,
  0xC7, 0x5C, 0x4F, 0xFE, 0x4C, 0x75, 0xC7, 0x77, 0x7C, 0x75, 0xC7, 0x77, 0x7C, 0x75, 0xC7, 0x77,
  0x7C, 0x75, 0xC7, 0x77, 0x7C, 0x75, 0x0E, 0xFF, 0xFF, 0xE0, 0xD7, 0x50, 0xBF, 0xFF, 0xFE, 0x09,
  0x75, 0x02, 0xFF, 0xFF, 0xD0, 0xE0, 0x17, 0x68, 0x12, 0xBE, 0xFF, 0xFF, 0x81, 0xEA, 0x18, 0x0C,
  0xC3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_outlined_48_file_text_snippet() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      48, 48, ic_outlined_48_file_text_snippet_data, Alpha4(color::Black));
  return value;
}

