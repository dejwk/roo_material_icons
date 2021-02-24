#include "file.h"

using namespace roo_display;

// Image file ic_sharp_18_file_topic 18x18, 4-bit Alpha,  RLE, 64 bytes.
static const uint8_t ic_sharp_18_file_topic_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x7D, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x03, 0x70, 0x32, 0x07, 0xFF, 0x07,
  0x20, 0x7F, 0xF0, 0x72, 0x07, 0xA0, 0xB8, 0x04, 0x70, 0xBA, 0x07, 0x20, 0x7A, 0x07, 0x71, 0x07,
  0xA0, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7A, 0x0B, 0x80, 0x17, 0x0B, 0xD0, 0x72, 0x07, 0xA0, 0x75,
  0x07, 0xD0, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7F, 0xF0, 0x72, 0x07, 0xFF, 0x07, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_topic() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_topic_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_snippet_folder 18x18, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_sharp_18_file_snippet_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x7D, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x03, 0x70, 0x32, 0x07, 0xFF, 0x07,
  0x20, 0x7F, 0x82, 0xEB, 0xBD, 0xB0, 0x72, 0x07, 0xF8, 0x3B, 0x01, 0x1D, 0xA0, 0x72, 0x07, 0xF8,
  0x6B, 0x1F, 0x61, 0xDF, 0x72, 0x07, 0xF0, 0xB0, 0x1A, 0x82, 0x1B, 0xF7, 0x20, 0x7F, 0x0B, 0x01,
  0xA8, 0x21, 0xBF, 0x72, 0x07, 0xF8, 0x6B, 0x19, 0x91, 0xBF, 0x72, 0x07, 0xF8, 0x6C, 0x33, 0x33,
  0xCF, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7F, 0xF0, 0x78, 0x0E, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_snippet_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_snippet_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_folder_open 18x18, 4-bit Alpha,  RLE, 60 bytes.
static const uint8_t ic_sharp_18_file_folder_open_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x7D, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x03, 0x70, 0x32, 0x07, 0xFF, 0x07,
  0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x59, 0x07, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97,
  0x59, 0x07, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x59, 0x07, 0x20, 0x79, 0x75, 0x90, 0x72,
  0x07, 0x98, 0x09, 0x07, 0x90, 0x72, 0x07, 0xFF, 0x07, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_folder_open() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_folder_open_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_cloud_queue 18x18, 4-bit Alpha,  RLE, 74 bytes.
static const uint8_t ic_sharp_18_file_cloud_queue_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBD, 0xCA, 0x37, 0x48, 0x6A, 0xFD, 0xAA, 0xEF, 0x97, 0x28, 0x19, 0xF6,
  0x48, 0x18, 0xF7, 0x68, 0x27, 0xBF, 0x86, 0x81, 0xAF, 0x14, 0x83, 0xBF, 0xE8, 0x16, 0x82, 0x2F,
  0x81, 0x28, 0x17, 0xF6, 0x73, 0x0E, 0xA8, 0x28, 0x0D, 0xA7, 0x58, 0x42, 0x9F, 0x6F, 0x77, 0x78,
  0x2D, 0xCD, 0xC7, 0x78, 0x3A, 0xD8, 0xF4, 0x75, 0x85, 0x1F, 0xA0, 0xDF, 0xA8, 0x06, 0x78, 0x29,
  0xEF, 0x22, 0x08, 0x0D, 0xFC, 0x0B, 0x03, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_cloud_queue() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_cloud_queue_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_download 18x18, 4-bit Alpha,  RLE, 54 bytes.
static const uint8_t ic_sharp_18_file_download_data[] PROGMEM = {
  0x80, 0xC6, 0x08, 0x42, 0xBB, 0xBB, 0x27, 0x50, 0x3C, 0x03, 0x75, 0x03, 0xC0, 0x37, 0x50, 0x3C,
  0x03, 0x73, 0x81, 0x33, 0x6C, 0x81, 0x63, 0x37, 0x10, 0x8F, 0x90, 0x87, 0x20, 0x8E, 0x08, 0x74,
  0x08, 0xC0, 0x87, 0x60, 0x8A, 0x08, 0x77, 0x10, 0x08, 0x77, 0x77, 0x10, 0x18, 0x06, 0x70, 0x16,
  0x03, 0xFB, 0x03, 0x80, 0xE5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_download() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_cloud_off 18x18, 4-bit Alpha,  RLE, 98 bytes.
static const uint8_t ic_sharp_18_file_cloud_off_data[] PROGMEM = {
  0x80, 0xE4, 0x00, 0x50, 0xB2, 0x84, 0x4A, 0xDC, 0xA3, 0x71, 0x89, 0x15, 0xFB, 0x02, 0xCA, 0xAE,
  0xF9, 0x71, 0x81, 0x5F, 0xB5, 0x81, 0x8F, 0x76, 0x07, 0x0B, 0xA0, 0xB5, 0x81, 0xAF, 0x14, 0x85,
  0xBF, 0xE8, 0x8F, 0xB4, 0x82, 0x2F, 0x81, 0x28, 0x17, 0xF6, 0x38, 0x15, 0xFB, 0x40, 0xEA, 0x82,
  0x80, 0xDA, 0x58, 0x15, 0xFB, 0x48, 0x42, 0x9F, 0x6F, 0x76, 0x81, 0x5F, 0xB5, 0x82, 0xDC, 0xDC,
  0x78, 0x15, 0xFB, 0x48, 0x39, 0xD8, 0xF4, 0x78, 0x15, 0xFB, 0x28, 0x51, 0xDA, 0x0D, 0xFA, 0x80,
  0x37, 0x85, 0xCF, 0xB0, 0x2D, 0x22, 0x08, 0x0D, 0xFB, 0x0B, 0x77, 0x28, 0x15, 0xF8, 0x77, 0x20,
  0x47, 0x77,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_cloud_off() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_cloud_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_text_snippet 18x18, 4-bit Alpha,  RLE, 81 bytes.
static const uint8_t ic_sharp_18_file_text_snippet_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x88, 0x04, 0xB0, 0x67, 0x10, 0xBF, 0xA0, 0x67, 0x0B, 0xFB, 0x06, 0x60, 0xBA,
  0x84, 0x63, 0x33, 0x39, 0xB0, 0x65, 0x0B, 0xA8, 0x46, 0x33, 0x33, 0x9C, 0x06, 0x40, 0xBF, 0xD0,
  0xB4, 0x0B, 0xA0, 0x68, 0x02, 0x30, 0x6A, 0x0B, 0x40, 0xBA, 0x06, 0x80, 0x23, 0x06, 0xA0, 0xB4,
  0x0B, 0xFD, 0x0B, 0x40, 0xBA, 0x06, 0x80, 0x23, 0x06, 0xA0, 0xB4, 0x0B, 0xA0, 0x68, 0x02, 0x30,
  0x6A, 0x0B, 0x40, 0xBF, 0xD0, 0xB4, 0x0B, 0xFD, 0x0B, 0x40, 0x88, 0x09, 0x0B, 0x08, 0x80, 0xC2,
  0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_text_snippet() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_text_snippet_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_folder_shared 18x18, 4-bit Alpha,  RLE, 70 bytes.
static const uint8_t ic_sharp_18_file_folder_shared_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x7D, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x03, 0x70, 0x32, 0x07, 0xFF, 0x07,
  0x20, 0x7F, 0xA0, 0xEC, 0x07, 0x20, 0x7F, 0x98, 0x11, 0x0A, 0xB0, 0x72, 0x07, 0xF0, 0xC2, 0x06,
  0xB0, 0x72, 0x07, 0xF9, 0x81, 0x75, 0xDB, 0x07, 0x20, 0x7F, 0x82, 0xEA, 0xAC, 0xB0, 0x72, 0x07,
  0xE0, 0xB4, 0x06, 0xA0, 0x72, 0x07, 0xE0, 0x68, 0x01, 0x38, 0x1C, 0xF7, 0x20, 0x7F, 0xF0, 0x72,
  0x07, 0xFF, 0x07, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_folder_shared() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_folder_shared_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_rule_folder 18x18, 4-bit Alpha,  RLE, 79 bytes.
static const uint8_t ic_sharp_18_file_rule_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x7D, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x03, 0x70, 0x32, 0x07, 0xFF, 0x07,
  0x20, 0x7F, 0xF0, 0x72, 0x07, 0xD8, 0x5E, 0x7F, 0xCF, 0xED, 0xA0, 0x72, 0x07, 0xC8, 0x6E, 0x30,
  0xA0, 0x53, 0x1A, 0x07, 0x28, 0x90, 0x7F, 0xE3, 0x93, 0x0A, 0xF8, 0x20, 0xAA, 0x07, 0x28, 0x27,
  0xFE, 0x32, 0x82, 0xAF, 0xE3, 0x20, 0x5A, 0x07, 0x20, 0x7A, 0x81, 0xE3, 0xAA, 0x83, 0xE3, 0xA8,
  0x5A, 0x07, 0x20, 0x7F, 0xF0, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7F, 0xF0, 0x78, 0x0E, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_rule_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_rule_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_create_new_folder 18x18, 4-bit Alpha,  RLE, 68 bytes.
static const uint8_t ic_sharp_18_file_create_new_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x7D, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x03, 0x70, 0x32, 0x07, 0xFF, 0x07,
  0x20, 0x7F, 0x90, 0xD0, 0xBC, 0x07, 0x20, 0x7F, 0x90, 0x71, 0xC0, 0x72, 0x07, 0xF9, 0x07, 0x1C,
  0x07, 0x20, 0x7E, 0x03, 0x58, 0x1B, 0xF7, 0x20, 0x7E, 0x87, 0x97, 0x30, 0x77, 0xDF, 0x72, 0x07,
  0xF9, 0x07, 0x1C, 0x07, 0x20, 0x7F, 0x90, 0x90, 0x3C, 0x07, 0x20, 0x7F, 0xF0, 0x72, 0x07, 0xFF,
  0x07, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_create_new_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_create_new_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_download_done 18x18, 4-bit Alpha,  RLE, 56 bytes.
static const uint8_t ic_sharp_18_file_download_done_data[] PROGMEM = {
  0x80, 0xF6, 0x00, 0x90, 0x37, 0x71, 0x81, 0xAF, 0xE7, 0x78, 0x2A, 0xFE, 0x37, 0x20, 0x13, 0x82,
  0xAF, 0xE3, 0x72, 0x86, 0xAE, 0x20, 0xAF, 0xE3, 0x72, 0x86, 0x1D, 0xFE, 0xAF, 0xE3, 0x74, 0x01,
  0x0D, 0xA0, 0xE0, 0x37, 0x68, 0x21, 0xDE, 0x37, 0x71, 0x01, 0x03, 0x77, 0x77, 0x30, 0x18, 0x06,
  0x70, 0x16, 0x03, 0xFB, 0x03, 0x80, 0xE5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_download_done() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_download_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_request_quote 18x18, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_sharp_18_file_request_quote_data[] PROGMEM = {
  0x77, 0x78, 0x03, 0x70, 0x57, 0x3E, 0x81, 0xEF, 0x67, 0x2E, 0x82, 0xB6, 0xF6, 0x71, 0xE8, 0x3B,
  0x06, 0xF6, 0x7E, 0x0B, 0x28, 0x16, 0xF6, 0x6D, 0x00, 0xCD, 0x6B, 0x84, 0xD7, 0x11, 0x7D, 0xB6,
  0xB0, 0xB4, 0x0B, 0xB6, 0xB8, 0x4B, 0x08, 0xBB, 0xEB, 0x6B, 0x0B, 0x40, 0xBB, 0x6B, 0x84, 0xEB,
  0xB8, 0x0B, 0xB6, 0xB0, 0xB4, 0x0B, 0xB6, 0xB8, 0x4D, 0x71, 0x17, 0xDB, 0x6D, 0x00, 0xCD, 0x6F,
  0xD6, 0x80, 0x90, 0x77, 0x77,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_request_quote() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_request_quote_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_folder 18x18, 4-bit Alpha,  RLE, 50 bytes.
static const uint8_t ic_sharp_18_file_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x7D, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x03, 0x70, 0x32, 0x07, 0xFF, 0x07,
  0x20, 0x7F, 0xF0, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7F, 0xF0, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7F,
  0xF0, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7F, 0xF0, 0x72, 0x07, 0xFF, 0x07, 0x20, 0x7F, 0xF0, 0x78,
  0x0E, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_folder() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_folder_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_attach_email 18x18, 4-bit Alpha,  RLE, 94 bytes.
static const uint8_t ic_sharp_18_file_attach_email_data[] PROGMEM = {
  0x80, 0xC1, 0x00, 0x18, 0x09, 0x03, 0x01, 0x40, 0x30, 0xEF, 0xB0, 0xD0, 0x54, 0x82, 0x3A, 0x3C,
  0xE8, 0x2D, 0x38, 0x54, 0x84, 0x3F, 0xB2, 0x7E, 0xB8, 0x37, 0x2A, 0xF5, 0x40, 0x3B, 0x85, 0x72,
  0xAB, 0x26, 0xEA, 0x05, 0x40, 0x3C, 0x87, 0xD3, 0x3C, 0xFB, 0x43, 0x14, 0x03, 0xF9, 0x82, 0xE0,
  0x55, 0x50, 0x3F, 0x98, 0x3B, 0x39, 0x93, 0x40, 0x3F, 0x98, 0x5B, 0x57, 0x75, 0xB1, 0x20, 0x3F,
  0x98, 0x5B, 0x57, 0x75, 0xB1, 0x20, 0x3F, 0x98, 0x5B, 0x57, 0x43, 0xB1, 0x20, 0x18, 0x04, 0x78,
  0x45, 0x3D, 0x13, 0xD7, 0x78, 0x2B, 0xDE, 0x77, 0x71, 0x03, 0x01, 0x80, 0xC3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_attach_email() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_attach_email_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_cloud_done 18x18, 4-bit Alpha,  RLE, 71 bytes.
static const uint8_t ic_sharp_18_file_cloud_done_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBD, 0xCA, 0x37, 0x40, 0xAE, 0x09, 0x72, 0x09, 0xF9, 0x07, 0x60, 0x70,
  0xBF, 0xB0, 0x14, 0x0B, 0xF9, 0x84, 0xA1, 0xDF, 0x81, 0x20, 0x7F, 0x98, 0x2A, 0x03, 0xEB, 0x81,
  0x80, 0xDC, 0x85, 0x8B, 0xFA, 0x03, 0xED, 0x06, 0xD8, 0x43, 0x07, 0x03, 0xEE, 0x0C, 0x0D, 0xC8,
  0x3E, 0x30, 0x3E, 0xF0, 0xD0, 0x8D, 0x81, 0xE6, 0xEF, 0x98, 0x1A, 0x0D, 0xFF, 0x90, 0x22, 0x08,
  0x0D, 0xFC, 0x0B, 0x03, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_cloud_done() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_cloud_done_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_attachment 18x18, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_sharp_18_file_attachment_data[] PROGMEM = {
  0x80, 0x99, 0x10, 0x80, 0x61, 0x58, 0x11, 0x9E, 0xFB, 0x0A, 0x03, 0x28, 0x21, 0xDB, 0x57, 0x28,
  0x51, 0x7F, 0x20, 0x8A, 0x20, 0x40, 0xB8, 0x02, 0xD0, 0xB2, 0x83, 0xB7, 0x0C, 0x42, 0x0E, 0x08,
  0x80, 0x33, 0x28, 0x3C, 0x50, 0xC5, 0x20, 0xE0, 0x78, 0x03, 0x38, 0x14, 0x9E, 0x20, 0x90, 0xC2,
  0x05, 0x0C, 0x80, 0x4D, 0x0B, 0x02, 0x28, 0x21, 0xE8, 0x17, 0x71, 0x02, 0x0B, 0xFA, 0x0D, 0x72,
  0x80, 0x51, 0x80, 0x99, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_attachment() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_attachment_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_cloud_download 18x18, 4-bit Alpha,  RLE, 77 bytes.
static const uint8_t ic_sharp_18_file_cloud_download_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBD, 0xCA, 0x37, 0x40, 0xAE, 0x09, 0x72, 0x09, 0xF9, 0x07, 0x60, 0x70,
  0xBB, 0x82, 0xDB, 0xBD, 0xB0, 0x14, 0x0B, 0xD0, 0x72, 0x07, 0xB0, 0x80, 0x12, 0x07, 0xE0, 0x72,
  0x07, 0xD8, 0x18, 0x0D, 0xC8, 0x1C, 0xB5, 0x28, 0x15, 0xBC, 0xC0, 0x6D, 0x0D, 0x01, 0x40, 0x10,
  0xDC, 0x0C, 0x0D, 0xD0, 0xD0, 0x12, 0x01, 0x0D, 0xD0, 0xD0, 0x8E, 0x82, 0xD1, 0x1D, 0xE8, 0x1A,
  0x0D, 0xE0, 0x0D, 0xF0, 0x22, 0x08, 0x0D, 0xFC, 0x0B, 0x03, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_cloud_download() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_cloud_download_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_cloud_circle 18x18, 4-bit Alpha,  RLE, 94 bytes.
static const uint8_t ic_sharp_18_file_cloud_circle_data[] PROGMEM = {
  0x77, 0x74, 0x82, 0x45, 0x53, 0x74, 0x01, 0x08, 0xD0, 0xE0, 0x77, 0x10, 0x20, 0xDF, 0x90, 0xC0,
  0x15, 0x01, 0x0D, 0xFB, 0x0C, 0x50, 0x9C, 0x82, 0xC7, 0x6C, 0xC0, 0x73, 0x01, 0xC0, 0xB4, 0x0C,
  0xB0, 0xE3, 0x05, 0xB0, 0xB0, 0x14, 0x06, 0xC0, 0x32, 0x07, 0xA0, 0x47, 0x06, 0x0C, 0xA0, 0x52,
  0x81, 0x7F, 0xD7, 0x20, 0x1A, 0x06, 0x28, 0x16, 0xFE, 0x73, 0x81, 0xEF, 0x42, 0x01, 0xA0, 0x90,
  0x16, 0x01, 0x08, 0xA4, 0x0A, 0xFD, 0x08, 0x40, 0x20, 0xEF, 0xB0, 0xD0, 0x15, 0x03, 0x0E, 0xF9,
  0x0D, 0x02, 0x70, 0x20, 0xAE, 0x09, 0x01, 0x73, 0x84, 0x16, 0x77, 0x51, 0x77, 0x73,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_cloud_circle() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_cloud_circle_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_cloud_upload 18x18, 4-bit Alpha,  RLE, 70 bytes.
static const uint8_t ic_sharp_18_file_cloud_upload_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBD, 0xCA, 0x37, 0x40, 0xAE, 0x09, 0x72, 0x09, 0xF9, 0x07, 0x60, 0x70,
  0xBC, 0x00, 0x8C, 0x01, 0x40, 0xBD, 0x08, 0x20, 0x8B, 0x08, 0x01, 0x20, 0x7D, 0x08, 0x40, 0x8C,
  0x81, 0x80, 0xDC, 0x81, 0xB3, 0x12, 0x81, 0x13, 0xBC, 0x06, 0xF0, 0x72, 0x07, 0xE0, 0xC0, 0xDE,
  0x07, 0x20, 0x7E, 0x0D, 0x08, 0xE8, 0x29, 0x33, 0x9E, 0x81, 0xA0, 0xDF, 0xF9, 0x02, 0x20, 0x80,
  0xDF, 0xC0, 0xB0, 0x38, 0x0E, 0x30,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_cloud_upload() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_cloud_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_upload 18x18, 4-bit Alpha,  RLE, 58 bytes.
static const uint8_t ic_sharp_18_file_upload_data[] PROGMEM = {
  0x80, 0xD0, 0x00, 0x03, 0x77, 0x18, 0x23, 0xEE, 0x37, 0x60, 0x30, 0xEA, 0x0E, 0x03, 0x74, 0x03,
  0x0E, 0xC0, 0xE0, 0x37, 0x20, 0x30, 0xEE, 0x0E, 0x03, 0x71, 0x81, 0x77, 0x9C, 0x81, 0x97, 0x77,
  0x30, 0x3C, 0x03, 0x75, 0x03, 0xC0, 0x37, 0x50, 0x3C, 0x03, 0x75, 0x03, 0xC0, 0x37, 0x77, 0x60,
  0x18, 0x06, 0x70, 0x16, 0x03, 0xFB, 0x03, 0x80, 0xE5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_upload() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_upload_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_file_cloud 18x18, 4-bit Alpha,  RLE, 53 bytes.
static const uint8_t ic_sharp_18_file_cloud_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBD, 0xCA, 0x37, 0x40, 0xAE, 0x09, 0x72, 0x09, 0xF9, 0x07, 0x60, 0x70,
  0xBF, 0xB0, 0x14, 0x0B, 0xFD, 0x08, 0x01, 0x20, 0x7F, 0xF9, 0x81, 0x80, 0xDF, 0xFA, 0x06, 0xFF,
  0xB0, 0xC0, 0xDF, 0xFA, 0x0D, 0x08, 0xFF, 0xA8, 0x1A, 0x0D, 0xFF, 0x90, 0x22, 0x08, 0x0D, 0xFC,
  0x0B, 0x03, 0x80, 0xE3, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_sharp_18_file_cloud() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      18, 18, ic_sharp_18_file_cloud_data, Alpha4(color::Black));
  return value;
}

