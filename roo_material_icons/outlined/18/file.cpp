#include "file.h"

using namespace roo_display;

// Image file ic_outlined_18_file_approval 18x18, 4-bit Alpha,  RLE, 82 bytes.
static const uint8_t ic_outlined_18_file_approval_data[] PROGMEM = {
  0x77, 0x75, 0x00, 0x17, 0x70, 0x30, 0xCA, 0x0C, 0x03, 0x74, 0x86, 0x1E, 0xB3, 0x3B, 0xE1, 0x73,
  0x08, 0x0D, 0x40, 0xD0, 0x87, 0x30, 0xA0, 0xC4, 0x0C, 0x0A, 0x73, 0x81, 0x2E, 0x82, 0x81, 0x8E,
  0x27, 0x48, 0x46, 0xF4, 0x4F, 0x67, 0x68, 0x2A, 0xEE, 0xA7, 0x78, 0x21, 0xDD, 0x17, 0x48, 0x90,
  0x13, 0x33, 0x66, 0x33, 0x31, 0x70, 0x2F, 0xB0, 0x26, 0x06, 0x0E, 0x80, 0x41, 0x0E, 0x06, 0x60,
  0x69, 0x80, 0x47, 0x90, 0x66, 0x06, 0xFB, 0x06, 0x60, 0x6F, 0xB0, 0x66, 0x01, 0x80, 0x63, 0x01,
  0x77, 0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_approval() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_approval_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_attach_email 18x18, 4-bit Alpha,  RLE, 99 bytes.
static const uint8_t ic_outlined_18_file_attach_email_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x18, 0x06, 0x30, 0x25, 0x01, 0x0D, 0x80, 0x69, 0x0D, 0x02, 0x48, 0x23, 0xEC,
  0x26, 0x82, 0x2B, 0xE5, 0x48, 0x33, 0x94, 0xD8, 0x48, 0x37, 0xD4, 0x75, 0x40, 0x30, 0x92, 0x84,
  0x7D, 0x43, 0xC8, 0x20, 0x70, 0x54, 0x03, 0x09, 0x38, 0x22, 0xBC, 0x33, 0x00, 0x14, 0x03, 0x09,
  0x72, 0x00, 0x55, 0x03, 0x09, 0x71, 0x82, 0x39, 0x93, 0x40, 0x30, 0x97, 0x18, 0x45, 0x77, 0x5B,
  0x12, 0x03, 0x09, 0x71, 0x84, 0x57, 0x75, 0xB1, 0x20, 0x30, 0xB8, 0x03, 0x58, 0x54, 0x57, 0x43,
  0xB1, 0x30, 0x58, 0x03, 0x78, 0x45, 0x3D, 0x13, 0xD7, 0x78, 0x2B, 0xDE, 0x77, 0x71, 0x03, 0x01,
  0x80, 0xC3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_attach_email() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_attach_email_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_attachment 18x18, 4-bit Alpha,  RLE, 67 bytes.
static const uint8_t ic_outlined_18_file_attachment_data[] PROGMEM = {
  0x80, 0x99, 0x10, 0x80, 0x61, 0x58, 0x11, 0xAE, 0xFB, 0x0E, 0x06, 0x38, 0x1D, 0x92, 0x73, 0x84,
  0x4E, 0x30, 0x8B, 0x20, 0x50, 0xC8, 0x02, 0xD0, 0xB2, 0x83, 0x98, 0x0B, 0x52, 0x90, 0x68, 0x03,
  0x32, 0x83, 0xA7, 0x0B, 0x52, 0x90, 0x68, 0x03, 0x38, 0x54, 0x8E, 0x20, 0x8B, 0x20, 0x50, 0xC8,
  0x04, 0xD0, 0xA0, 0x23, 0x81, 0xD9, 0x27, 0x71, 0x81, 0x1A, 0xEF, 0x90, 0xD7, 0x28, 0x05, 0x18,
  0x09, 0x90, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_attachment() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_attachment_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_cloud_circle 18x18, 4-bit Alpha,  RLE, 120 bytes.
static const uint8_t ic_outlined_18_file_cloud_circle_data[] PROGMEM = {
  0x77, 0x74, 0x82, 0x57, 0x75, 0x74, 0x01, 0x09, 0xE0, 0x90, 0x17, 0x83, 0x2D, 0xF8, 0x32, 0x83,
  0x38, 0xFD, 0x25, 0x82, 0x1D, 0xD2, 0x68, 0x22, 0xDD, 0x14, 0x81, 0x9F, 0x22, 0x82, 0x9E, 0xE9,
  0x28, 0x12, 0xF9, 0x49, 0x87, 0x80, 0x1B, 0xF9, 0x9F, 0xA2, 0x08, 0x93, 0x82, 0x5F, 0x36, 0xA0,
  0x72, 0x85, 0x7F, 0x50, 0x3F, 0x52, 0x84, 0x6F, 0x1F, 0xA4, 0x30, 0x2A, 0x82, 0xB0, 0xF6, 0x28,
  0x36, 0xF3, 0xF4, 0x68, 0x36, 0xF3, 0xF6, 0x28, 0x35, 0xF3, 0xDD, 0x80, 0x27, 0x83, 0xCF, 0x4F,
  0x53, 0x98, 0x18, 0x3C, 0xE8, 0x1E, 0x58, 0x94, 0x81, 0x9F, 0x27, 0x18, 0x12, 0xF9, 0x48, 0x21,
  0xDD, 0x26, 0x82, 0x2D, 0xD1, 0x58, 0x32, 0xDF, 0x83, 0x28, 0x33, 0x8F, 0xD2, 0x70, 0x10, 0x9E,
  0x09, 0x01, 0x74, 0x82, 0x57, 0x75, 0x77, 0x74,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_cloud_circle() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_cloud_circle_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_cloud_done 18x18, 4-bit Alpha,  RLE, 88 bytes.
static const uint8_t ic_outlined_18_file_cloud_done_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBE, 0xEB, 0x57, 0x48, 0x6A, 0xFC, 0x89, 0xCF, 0xA7, 0x28, 0x19, 0xF6,
  0x48, 0x16, 0xF9, 0x68, 0x27, 0xCF, 0x76, 0x81, 0x8F, 0x14, 0x82, 0xBF, 0xB7, 0x58, 0x45, 0x41,
  0xFA, 0x32, 0x81, 0x7F, 0x56, 0x83, 0x5F, 0xA0, 0xCA, 0x82, 0xA0, 0xCB, 0x38, 0x47, 0x50, 0x5F,
  0xB4, 0x83, 0x7F, 0x7E, 0x83, 0x83, 0xBF, 0x9F, 0xB6, 0x82, 0xAD, 0xCB, 0x48, 0x1B, 0xFB, 0x78,
  0x38, 0xE7, 0xF5, 0x40, 0x77, 0x86, 0x1D, 0xB0, 0xBF, 0xB8, 0x80, 0x57, 0x82, 0x8D, 0xF3, 0x20,
  0x70, 0xCF, 0xB8, 0x1E, 0xB3, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_cloud_done() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_cloud_done_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_cloud_download 18x18, 4-bit Alpha,  RLE, 89 bytes.
static const uint8_t ic_outlined_18_file_cloud_download_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBE, 0xEB, 0x57, 0x48, 0x6A, 0xFC, 0x89, 0xCF, 0xA7, 0x28, 0x19, 0xF6,
  0x48, 0x16, 0xF9, 0x68, 0x27, 0xCF, 0x76, 0x81, 0x8F, 0x14, 0x82, 0xBF, 0xB7, 0x30, 0x07, 0x28,
  0x21, 0xFA, 0x32, 0x81, 0x7F, 0x54, 0x01, 0xA0, 0x12, 0x0C, 0xA8, 0x2A, 0x0C, 0xB4, 0x03, 0x04,
  0xA0, 0x40, 0x33, 0x83, 0x7F, 0x7E, 0x84, 0x04, 0xC0, 0x44, 0x82, 0xAD, 0xCB, 0x50, 0x4A, 0x04,
  0x58, 0x38, 0xE7, 0xF5, 0x50, 0x04, 0x58, 0x61, 0xDB, 0x0B, 0xFB, 0x88, 0x05, 0x78, 0x28, 0xDF,
  0x32, 0x07, 0x0C, 0xFB, 0x81, 0xEB, 0x38, 0x0E, 0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_cloud_download() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_cloud_download_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_cloud_off 18x18, 4-bit Alpha,  RLE, 103 bytes.
static const uint8_t ic_outlined_18_file_cloud_off_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x90, 0x4C, 0x10, 0x4B, 0xEE, 0xB5, 0x71, 0x89, 0x13, 0xEC, 0x11, 0xB8, 0x9C,
  0xFA, 0x71, 0x82, 0x3E, 0xC1, 0x48, 0x16, 0xF9, 0x60, 0x70, 0xCA, 0x0C, 0x01, 0x48, 0x18, 0xF1,
  0x48, 0x6B, 0xFB, 0x88, 0xEC, 0x13, 0x82, 0x1F, 0xA3, 0x28, 0x17, 0xF5, 0x38, 0x23, 0xEC, 0x13,
  0x0E, 0xA8, 0x2A, 0x0C, 0xB5, 0x82, 0x3E, 0xC1, 0x48, 0x36, 0xF7, 0xE8, 0x68, 0x23, 0xEC, 0x14,
  0x82, 0xAD, 0xCB, 0x78, 0x23, 0xEC, 0x13, 0x83, 0x8E, 0x7F, 0x57, 0x89, 0x33, 0xEC, 0x10, 0x1D,
  0xB0, 0xBF, 0xB8, 0x80, 0x27, 0x85, 0xBF, 0xC1, 0x1C, 0x32, 0x07, 0x0C, 0xFB, 0x0C, 0x01, 0x77,
  0x18, 0x13, 0xE9, 0x77, 0x20, 0x37, 0x77,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_cloud_off() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_cloud_off_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_cloud 18x18, 4-bit Alpha,  RLE, 74 bytes.
static const uint8_t ic_outlined_18_file_cloud_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBE, 0xEB, 0x57, 0x48, 0x6A, 0xFC, 0x89, 0xCF, 0xA7, 0x28, 0x19, 0xF6,
  0x48, 0x16, 0xF9, 0x68, 0x27, 0xCF, 0x76, 0x81, 0x8F, 0x14, 0x82, 0xBF, 0xB7, 0x78, 0x21, 0xFA,
  0x32, 0x81, 0x7F, 0x57, 0x30, 0xCA, 0x82, 0xA0, 0xCB, 0x76, 0x83, 0x7F, 0x7E, 0x87, 0x78, 0x2A,
  0xDC, 0xB7, 0x78, 0x38, 0xE7, 0xF5, 0x75, 0x86, 0x1D, 0xB0, 0xBF, 0xB8, 0x80, 0x57, 0x82, 0x8D,
  0xF3, 0x20, 0x70, 0xCF, 0xB8, 0x1E, 0xB3, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_cloud() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_cloud_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_cloud_queue 18x18, 4-bit Alpha,  RLE, 74 bytes.
static const uint8_t ic_outlined_18_file_cloud_queue_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBE, 0xEB, 0x57, 0x48, 0x6A, 0xFC, 0x89, 0xCF, 0xA7, 0x28, 0x19, 0xF6,
  0x48, 0x16, 0xF9, 0x68, 0x27, 0xCF, 0x86, 0x81, 0x8F, 0x14, 0x83, 0xBF, 0xB8, 0x16, 0x82, 0x1F,
  0xA3, 0x28, 0x17, 0xF5, 0x73, 0x0E, 0xA8, 0x2A, 0x0C, 0xB7, 0x68, 0x36, 0xF7, 0xE8, 0x77, 0x82,
  0xAD, 0xCB, 0x77, 0x83, 0x8E, 0x7F, 0x57, 0x68, 0x5D, 0xB0, 0xBF, 0xB8, 0x80, 0x57, 0x82, 0x8D,
  0xF3, 0x20, 0x70, 0xCF, 0xB8, 0x1E, 0xB3, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_cloud_queue() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_cloud_queue_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_cloud_upload 18x18, 4-bit Alpha,  RLE, 88 bytes.
static const uint8_t ic_outlined_18_file_cloud_upload_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x45, 0xBE, 0xEB, 0x57, 0x48, 0x6A, 0xFC, 0x89, 0xCF, 0xA7, 0x28, 0x19, 0xF6,
  0x48, 0x16, 0xF9, 0x68, 0x27, 0xCF, 0x76, 0x81, 0x8F, 0x14, 0x82, 0xBF, 0xB7, 0x30, 0x0B, 0x28,
  0x21, 0xFA, 0x32, 0x81, 0x7F, 0x54, 0x0B, 0xA0, 0xB2, 0x0C, 0xA8, 0x2A, 0x0C, 0xB4, 0x07, 0x0B,
  0xA0, 0xB0, 0x73, 0x83, 0x7F, 0x7E, 0x85, 0x01, 0xA0, 0x15, 0x82, 0xAD, 0xCB, 0x50, 0x1A, 0x01,
  0x58, 0x38, 0xE7, 0xF5, 0x75, 0x86, 0x1D, 0xB0, 0xBF, 0xB8, 0x80, 0x57, 0x82, 0x8D, 0xF3, 0x20,
  0x70, 0xCF, 0xB8, 0x1E, 0xB3, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_cloud_upload() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_cloud_upload_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_create_new_folder 18x18, 4-bit Alpha,  RLE, 77 bytes.
static const uint8_t ic_outlined_18_file_create_new_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x20, 0xDC, 0x0D, 0x01, 0x73, 0x86, 0x7F, 0x77, 0x77, 0xED, 0x80, 0x27, 0x05,
  0x30, 0x79, 0x40, 0x30, 0xEF, 0x05, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x03, 0x07, 0x39,
  0x07, 0x20, 0x79, 0x70, 0x79, 0x39, 0x07, 0x20, 0x79, 0x6C, 0x82, 0x70, 0xF7, 0x20, 0x79, 0x68,
  0x67, 0xBF, 0x73, 0x0F, 0x72, 0x07, 0x97, 0x07, 0x93, 0x90, 0x72, 0x07, 0x97, 0x59, 0x07, 0x20,
  0x79, 0x80, 0x90, 0x79, 0x07, 0x20, 0x20, 0xDF, 0xD0, 0xD0, 0x28, 0x0E, 0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_create_new_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_create_new_folder_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_download_done 18x18, 4-bit Alpha,  RLE, 53 bytes.
static const uint8_t ic_outlined_18_file_download_done_data[] PROGMEM = {
  0x80, 0xF6, 0x00, 0xA0, 0x47, 0x71, 0x82, 0xBF, 0xE1, 0x76, 0x82, 0xBF, 0xE4, 0x72, 0x02, 0x38,
  0x2B, 0xFE, 0x47, 0x28, 0x6A, 0xE3, 0x0B, 0xFE, 0x47, 0x38, 0x5B, 0xFE, 0xBF, 0xE3, 0x75, 0x0B,
  0xA0, 0xE0, 0x37, 0x78, 0x1B, 0xE3, 0x77, 0x20, 0x27, 0x77, 0x73, 0x01, 0x80, 0x67, 0x01, 0x60,
  0x3F, 0xB0, 0x38, 0x0E, 0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_download_done() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_download_done_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_download_for_offline 18x18, 4-bit Alpha,  RLE, 108 bytes.
static const uint8_t ic_outlined_18_file_download_for_offline_data[] PROGMEM = {
  0x77, 0x75, 0x00, 0x27, 0x60, 0x30, 0xBC, 0x0B, 0x03, 0x72, 0x89, 0x09, 0xFB, 0x53, 0x35, 0xBF,
  0x97, 0x81, 0x9F, 0x56, 0x81, 0x5F, 0x95, 0x81, 0x3F, 0x53, 0x00, 0xA3, 0x81, 0x5F, 0x34, 0x00,
  0xB3, 0x82, 0x1A, 0xA1, 0x30, 0x0B, 0x49, 0x05, 0x28, 0x46, 0xDC, 0xCD, 0x62, 0x05, 0x93, 0x81,
  0x2F, 0x33, 0x0C, 0xA0, 0xC3, 0x81, 0x3F, 0x22, 0x81, 0x2F, 0x34, 0x00, 0xC4, 0x81, 0x3F, 0x23,
  0x90, 0x57, 0x30, 0x59, 0x48, 0x2B, 0xB0, 0x78, 0x02, 0xB8, 0x27, 0x0B, 0xB4, 0x82, 0x3F, 0x55,
  0x80, 0x29, 0x82, 0x55, 0xF3, 0x58, 0x19, 0xF5, 0x68, 0x15, 0xF9, 0x78, 0x90, 0x9F, 0xB5, 0x33,
  0x5B, 0xF9, 0x72, 0x03, 0x0B, 0xC0, 0xB0, 0x37, 0x60, 0x02, 0x77, 0x75,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_download_for_offline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_download_for_offline_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_downloading 18x18, 4-bit Alpha,  RLE, 115 bytes.
static const uint8_t ic_outlined_18_file_downloading_data[] PROGMEM = {
  0x80, 0xC5, 0x08, 0x63, 0xAE, 0x35, 0xD9, 0x27, 0x28, 0x90, 0x8F, 0xC7, 0x11, 0x7D, 0xF3, 0x78,
  0x19, 0xF7, 0x68, 0x14, 0x03, 0x58, 0x14, 0xF6, 0x30, 0x50, 0x43, 0x81, 0x4F, 0x14, 0x00, 0xB4,
  0x0B, 0x09, 0x40, 0xD0, 0x93, 0x81, 0x1F, 0x54, 0x0B, 0x09, 0x40, 0x70, 0xE3, 0x89, 0x53, 0xF2,
  0x02, 0x90, 0xB9, 0x09, 0x10, 0x15, 0x38, 0x95, 0x3F, 0x20, 0x3E, 0xAB, 0xAB, 0xE2, 0x01, 0x33,
  0x81, 0x1F, 0x52, 0x03, 0x0E, 0xA0, 0xE0, 0x22, 0x07, 0x0E, 0x40, 0xC0, 0xA3, 0x82, 0x3E, 0xE2,
  0x30, 0xC0, 0xA4, 0x81, 0x5F, 0x43, 0x03, 0x02, 0x38, 0x14, 0xF2, 0x58, 0x1A, 0xE5, 0x68, 0x12,
  0x05, 0x78, 0x90, 0x8F, 0xA4, 0x01, 0x5B, 0xF3, 0x72, 0x86, 0x4A, 0xE3, 0x5F, 0xB3, 0x77, 0x00,
  0x17, 0x77, 0x40,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_downloading() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_downloading_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_download 18x18, 4-bit Alpha,  RLE, 65 bytes.
static const uint8_t ic_outlined_18_file_download_data[] PROGMEM = {
  0x80, 0xC6, 0x08, 0x42, 0xBB, 0xBB, 0x27, 0x58, 0x43, 0xFC, 0xCF, 0x37, 0x58, 0x43, 0xF3, 0x3F,
  0x37, 0x58, 0x43, 0xF3, 0x3F, 0x37, 0x38, 0x90, 0x33, 0x6F, 0x33, 0xF6, 0x33, 0x71, 0x07, 0xB0,
  0x03, 0xB0, 0x77, 0x28, 0x67, 0xFC, 0x11, 0xCF, 0x77, 0x48, 0x47, 0xF9, 0x9F, 0x77, 0x60, 0x7A,
  0x07, 0x77, 0x10, 0x07, 0x77, 0x77, 0x10, 0x18, 0x06, 0x70, 0x16, 0x03, 0xFB, 0x03, 0x80, 0xE5,
  0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_download() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_download_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_drive_file_move 18x18, 4-bit Alpha,  RLE, 95 bytes.
static const uint8_t ic_outlined_18_file_drive_file_move_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x43, 0x55, 0x55, 0x27, 0x40, 0x1D, 0x0E, 0x02, 0x73, 0x81, 0x3F, 0x23, 0x0B,
  0x0E, 0x80, 0x29, 0x05, 0x38, 0x13, 0xF2, 0x40, 0xA8, 0x01, 0xB8, 0x1C, 0xF2, 0x28, 0x13, 0xF2,
  0x40, 0x04, 0x48, 0x12, 0xF3, 0x28, 0x13, 0xF2, 0x48, 0x19, 0xF4, 0x38, 0x12, 0xF3, 0x28, 0x13,
  0xF2, 0x28, 0x18, 0xBB, 0xA0, 0x42, 0x81, 0x2F, 0x32, 0x81, 0x3F, 0x22, 0x84, 0x69, 0xAF, 0xE2,
  0x28, 0x12, 0xF3, 0x28, 0x13, 0xF2, 0x48, 0x1A, 0xE2, 0x38, 0x12, 0xF3, 0x28, 0x13, 0xF2, 0x40,
  0x02, 0x48, 0x12, 0xF3, 0x20, 0x1F, 0xF0, 0x13, 0x03, 0x80, 0x90, 0x50, 0x38, 0x0E, 0x40,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_drive_file_move() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_drive_file_move_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_drive_file_move_rtl 18x18, 4-bit Alpha,  RLE, 95 bytes.
static const uint8_t ic_outlined_18_file_drive_file_move_rtl_data[] PROGMEM = {
  0x80, 0xE5, 0x08, 0x00, 0x50, 0x17, 0x50, 0xBC, 0x0D, 0x01, 0x73, 0x81, 0x3F, 0x12, 0x81, 0x1D,
  0xD8, 0x02, 0x74, 0x81, 0x3F, 0x13, 0x01, 0x0A, 0x80, 0x1B, 0x0C, 0x0B, 0x38, 0x13, 0xF1, 0x40,
  0x50, 0x34, 0x81, 0x3F, 0x12, 0x81, 0x3F, 0x13, 0x81, 0x5F, 0x84, 0x81, 0x3F, 0x12, 0x81, 0x3F,
  0x12, 0x05, 0xA8, 0x1B, 0xB7, 0x28, 0x13, 0xF1, 0x28, 0x13, 0xF1, 0x28, 0x43, 0xEF, 0x99, 0x62,
  0x81, 0x3F, 0x12, 0x81, 0x3F, 0x13, 0x81, 0x3E, 0x94, 0x81, 0x3F, 0x12, 0x81, 0x3F, 0x14, 0x03,
  0x02, 0x48, 0x13, 0xF1, 0x30, 0xB8, 0x07, 0xD0, 0xE0, 0xA5, 0x80, 0x90, 0x78, 0x0E, 0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_drive_file_move_rtl() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_drive_file_move_rtl_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_drive_file_rename_outline 18x18, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_outlined_18_file_drive_file_rename_outline_data[] PROGMEM = {
  0x80, 0xF4, 0x00, 0x01, 0x77, 0x18, 0x22, 0xEF, 0x57, 0x71, 0x0B, 0xA0, 0x17, 0x48, 0x52, 0xD5,
  0x0B, 0xF1, 0x73, 0x85, 0x2E, 0xEF, 0x50, 0x47, 0x38, 0x52, 0xEB, 0x0C, 0xF1, 0x73, 0x85, 0x2E,
  0xB0, 0x8F, 0x57, 0x38, 0x52, 0xEB, 0x08, 0xF5, 0x73, 0x89, 0x42, 0xEB, 0x08, 0xF5, 0x01, 0x33,
  0x33, 0x14, 0x87, 0x5F, 0x08, 0xF5, 0x02, 0xEC, 0x03, 0x48, 0x65, 0xFD, 0xF5, 0x02, 0xED, 0x03,
  0x48, 0x22, 0x77, 0x42, 0x06, 0x80, 0x27, 0x01, 0x80, 0xE4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_drive_file_rename_outline() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_drive_file_rename_outline_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_drive_folder_upload 18x18, 4-bit Alpha,  RLE, 93 bytes.
static const uint8_t ic_outlined_18_file_drive_folder_upload_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x43, 0x55, 0x55, 0x27, 0x40, 0x1D, 0x0E, 0x02, 0x73, 0x81, 0x3F, 0x23, 0x0B,
  0x0E, 0x80, 0x29, 0x05, 0x38, 0x13, 0xF2, 0x40, 0xA8, 0x01, 0xB8, 0x1C, 0xF2, 0x28, 0x13, 0xF2,
  0x40, 0x04, 0x48, 0x12, 0xF3, 0x28, 0x13, 0xF2, 0x30, 0x4A, 0x04, 0x38, 0x12, 0xF3, 0x28, 0x13,
  0xF2, 0x20, 0x4C, 0x04, 0x28, 0x12, 0xF3, 0x28, 0x13, 0xF2, 0x28, 0x42, 0x8A, 0xA8, 0x22, 0x81,
  0x2F, 0x32, 0x81, 0x3F, 0x24, 0x00, 0xA4, 0x81, 0x2F, 0x32, 0x81, 0x3F, 0x24, 0x00, 0x64, 0x81,
  0x2F, 0x32, 0x01, 0xFF, 0x01, 0x30, 0x38, 0x09, 0x05, 0x03, 0x80, 0xE4, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_drive_folder_upload() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_drive_folder_upload_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_file_download_done 18x18, 4-bit Alpha,  RLE, 53 bytes.
static const uint8_t ic_outlined_18_file_file_download_done_data[] PROGMEM = {
  0x80, 0xF7, 0x00, 0x27, 0x72, 0x81, 0x7F, 0x27, 0x78, 0x17, 0xF7, 0x77, 0x81, 0x7F, 0x77, 0x20,
  0x80, 0x13, 0x81, 0x7F, 0x77, 0x28, 0x62, 0xDC, 0x10, 0x7F, 0x77, 0x48, 0x42, 0xDC, 0x7F, 0x77,
  0x68, 0x22, 0xDF, 0x77, 0x71, 0x02, 0x06, 0x77, 0x77, 0x40, 0x38, 0x04, 0x70, 0x37, 0x10, 0x68,
  0x04, 0xD0, 0x68, 0x0E, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_file_download_done() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_file_download_done_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_file_download_off 18x18, 4-bit Alpha,  RLE, 81 bytes.
static const uint8_t ic_outlined_18_file_file_download_off_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x25, 0x00, 0x27, 0x28, 0x11, 0xE7, 0x40, 0x0A, 0x73, 0x81, 0x6F, 0x73, 0x00,
  0xA7, 0x48, 0x16, 0xF7, 0x20, 0x0A, 0x75, 0x84, 0x6F, 0x70, 0x7A, 0x76, 0x86, 0x7F, 0x70, 0x40,
  0x91, 0x73, 0x86, 0x3E, 0xF7, 0x06, 0xE3, 0x74, 0x84, 0x3E, 0xF7, 0x02, 0x76, 0x82, 0x3E, 0xF7,
  0x73, 0x01, 0x03, 0x38, 0x23, 0x8F, 0x72, 0x01, 0x60, 0x60, 0xE5, 0x83, 0x6F, 0x70, 0x16, 0x04,
  0xFA, 0x07, 0x71, 0x04, 0x80, 0x35, 0x81, 0x7F, 0x77, 0x72, 0x81, 0x6E, 0x27, 0x72, 0x01, 0x77,
  0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_file_download_off() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_file_download_off_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_file_download 18x18, 4-bit Alpha,  RLE, 61 bytes.
static const uint8_t ic_outlined_18_file_file_download_data[] PROGMEM = {
  0x80, 0xD0, 0x00, 0x02, 0x77, 0x20, 0x0A, 0x77, 0x20, 0x0A, 0x77, 0x20, 0x0A, 0x77, 0x20, 0x0A,
  0x76, 0x86, 0x19, 0x0A, 0xA0, 0x91, 0x73, 0x86, 0x3E, 0xAA, 0xAA, 0xE3, 0x74, 0x03, 0x0E, 0xA0,
  0xE0, 0x37, 0x68, 0x23, 0xEE, 0x37, 0x30, 0x10, 0x33, 0x00, 0x33, 0x03, 0x01, 0x60, 0x60, 0xE7,
  0x10, 0xE0, 0x66, 0x04, 0xFB, 0x04, 0x70, 0x48, 0x04, 0x50, 0x48, 0x0E, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_file_download() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_file_download_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_file_upload 18x18, 4-bit Alpha,  RLE, 56 bytes.
static const uint8_t ic_outlined_18_file_file_upload_data[] PROGMEM = {
  0x80, 0xF2, 0x00, 0x0B, 0x77, 0x10, 0xBA, 0x0B, 0x76, 0x84, 0xBE, 0xCC, 0xEB, 0x74, 0x86, 0x4E,
  0x2A, 0xA2, 0xE4, 0x74, 0x84, 0x10, 0xAA, 0x01, 0x77, 0x00, 0xA7, 0x72, 0x00, 0xA7, 0x72, 0x00,
  0xA7, 0x40, 0x10, 0x33, 0x00, 0x73, 0x03, 0x01, 0x60, 0x60, 0xE7, 0x10, 0xE0, 0x66, 0x04, 0xFB,
  0x04, 0x70, 0x48, 0x04, 0x50, 0x48, 0x0E, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_file_upload() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_file_upload_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_folder_open 18x18, 4-bit Alpha,  RLE, 63 bytes.
static const uint8_t ic_outlined_18_file_folder_open_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x20, 0xDC, 0x0D, 0x01, 0x73, 0x07, 0xE0, 0xD8, 0x02, 0x70, 0x53, 0x07, 0xFF,
  0x05, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x59, 0x07, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07,
  0x97, 0x59, 0x07, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x59, 0x07, 0x20, 0x79, 0x75, 0x90,
  0x72, 0x07, 0x98, 0x09, 0x07, 0x90, 0x72, 0x02, 0x0D, 0xFD, 0x0D, 0x02, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_folder_open() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_folder_open_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_folder 18x18, 4-bit Alpha,  RLE, 68 bytes.
static const uint8_t ic_outlined_18_file_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x20, 0xDC, 0x0D, 0x01, 0x73, 0x86, 0x7F, 0x77, 0x77, 0xED, 0x80, 0x27, 0x05,
  0x30, 0x79, 0x40, 0x30, 0xEF, 0x05, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x59, 0x07, 0x20,
  0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x59, 0x07, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x97, 0x59,
  0x07, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x98, 0x09, 0x07, 0x90, 0x72, 0x02, 0x0D, 0xFD, 0x0D,
  0x02, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_folder_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_folder_shared 18x18, 4-bit Alpha,  RLE, 86 bytes.
static const uint8_t ic_outlined_18_file_folder_shared_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x20, 0xDC, 0x0D, 0x01, 0x73, 0x86, 0x7F, 0x77, 0x77, 0xED, 0x80, 0x27, 0x05,
  0x30, 0x79, 0x40, 0x30, 0xEF, 0x05, 0x20, 0x79, 0x71, 0x02, 0x39, 0x07, 0x20, 0x79, 0x68, 0x21,
  0xEF, 0x72, 0x90, 0x72, 0x07, 0x96, 0x02, 0xA0, 0xA2, 0x90, 0x72, 0x07, 0x97, 0x81, 0x7A, 0x22,
  0x90, 0x72, 0x07, 0x96, 0x82, 0x26, 0x74, 0x29, 0x07, 0x20, 0x79, 0x50, 0x6C, 0x82, 0xD1, 0xF7,
  0x20, 0x79, 0x50, 0x88, 0x01, 0xB8, 0x12, 0xF7, 0x20, 0x79, 0x80, 0x90, 0x79, 0x07, 0x20, 0x20,
  0xDF, 0xD0, 0xD0, 0x28, 0x0E, 0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_folder_shared() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_folder_shared_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_grid_view 18x18, 4-bit Alpha,  RLE, 101 bytes.
static const uint8_t ic_outlined_18_file_grid_view_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x18, 0x01, 0x32, 0x80, 0x13, 0x01, 0x40, 0x4D, 0x00, 0x1D, 0x04, 0x40, 0x49,
  0x28, 0x43, 0xF1, 0x1F, 0x32, 0x90, 0x44, 0x04, 0x92, 0x84, 0x3F, 0x11, 0xF3, 0x29, 0x04, 0x48,
  0x94, 0x4F, 0x43, 0x6F, 0x11, 0xF6, 0x34, 0xF4, 0x40, 0x4D, 0x00, 0x1D, 0x04, 0x58, 0x01, 0x12,
  0x80, 0x11, 0x68, 0x01, 0x12, 0x80, 0x11, 0x50, 0x4D, 0x00, 0x1D, 0x04, 0x48, 0x94, 0x4F, 0x43,
  0x6F, 0x11, 0xF6, 0x34, 0xF4, 0x40, 0x49, 0x28, 0x43, 0xF1, 0x1F, 0x32, 0x90, 0x44, 0x04, 0x92,
  0x84, 0x3F, 0x11, 0xF3, 0x29, 0x04, 0x40, 0x4D, 0x00, 0x1D, 0x04, 0x40, 0x18, 0x01, 0x32, 0x80,
  0x13, 0x01, 0x80, 0xC2, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_grid_view() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_grid_view_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_request_quote 18x18, 4-bit Alpha,  RLE, 98 bytes.
static const uint8_t ic_outlined_18_file_request_quote_data[] PROGMEM = {
  0x77, 0x70, 0x28, 0x02, 0x70, 0x57, 0x30, 0xDF, 0x07, 0x72, 0x90, 0x74, 0x03, 0xA0, 0x77, 0x19,
  0x07, 0x40, 0x3B, 0x07, 0x79, 0x07, 0x40, 0x3C, 0x07, 0x69, 0x07, 0x30, 0x02, 0x30, 0x79, 0x69,
  0x07, 0x28, 0x56, 0xDD, 0x71, 0x07, 0x96, 0x98, 0x17, 0x03, 0xC8, 0x13, 0x07, 0x96, 0x98, 0x57,
  0x03, 0xF6, 0x33, 0x20, 0x79, 0x69, 0x81, 0x70, 0x3C, 0x81, 0x30, 0x79, 0x69, 0x07, 0x28, 0x53,
  0x36, 0xF3, 0x07, 0x96, 0x98, 0x17, 0x03, 0xC8, 0x13, 0x07, 0x96, 0x98, 0x57, 0x01, 0x7D, 0xD6,
  0x20, 0x79, 0x69, 0x07, 0x30, 0x02, 0x30, 0x79, 0x60, 0xDF, 0xB0, 0xD6, 0x02, 0x80, 0x67, 0x02,
  0x77, 0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_request_quote() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_request_quote_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_rule_folder 18x18, 4-bit Alpha,  RLE, 93 bytes.
static const uint8_t ic_outlined_18_file_rule_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x20, 0xDC, 0x0D, 0x01, 0x73, 0x86, 0x7F, 0x77, 0x77, 0xED, 0x80, 0x27, 0x05,
  0x30, 0x79, 0x40, 0x30, 0xEF, 0x05, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07, 0x95, 0x81, 0x80, 0x32,
  0x82, 0x30, 0xF7, 0x20, 0x79, 0x48, 0x90, 0xBF, 0x5E, 0xBB, 0xE1, 0xF7, 0x28, 0x90, 0x7F, 0x0C,
  0x7B, 0xF5, 0x05, 0xA8, 0x25, 0x0F, 0x72, 0x82, 0x7F, 0x09, 0xA0, 0x52, 0x0B, 0xA8, 0x2B, 0x0F,
  0x72, 0x07, 0x92, 0x09, 0x05, 0x38, 0x5A, 0x55, 0xA0, 0xF7, 0x20, 0x79, 0x75, 0x90, 0x72, 0x07,
  0x98, 0x09, 0x07, 0x90, 0x72, 0x02, 0x0D, 0xFD, 0x0D, 0x02, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_rule_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_rule_folder_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_snippet_folder 18x18, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_outlined_18_file_snippet_folder_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x20, 0xDC, 0x0D, 0x01, 0x73, 0x86, 0x7F, 0x77, 0x77, 0xED, 0x80, 0x27, 0x05,
  0x30, 0x79, 0x40, 0x30, 0xEF, 0x05, 0x20, 0x79, 0x68, 0x21, 0x33, 0x12, 0x90, 0x72, 0x07, 0x96,
  0x86, 0x3F, 0xDE, 0x30, 0xF7, 0x20, 0x79, 0x68, 0x63, 0xD0, 0x7E, 0x1F, 0x72, 0x07, 0x96, 0x03,
  0x0D, 0x28, 0x2D, 0x3F, 0x72, 0x07, 0x96, 0x03, 0x0D, 0x28, 0x2D, 0x3F, 0x72, 0x07, 0x96, 0x86,
  0x3E, 0x55, 0xE3, 0xF7, 0x20, 0x79, 0x68, 0x62, 0xBB, 0xBB, 0x2F, 0x72, 0x07, 0x98, 0x09, 0x07,
  0x90, 0x72, 0x02, 0x0D, 0xFD, 0x0D, 0x02, 0x80, 0xE3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_snippet_folder() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_snippet_folder_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_text_snippet 18x18, 4-bit Alpha,  RLE, 101 bytes.
static const uint8_t ic_outlined_18_file_text_snippet_data[] PROGMEM = {
  0x80, 0xC2, 0x00, 0x20, 0xA8, 0x03, 0xB0, 0x67, 0x10, 0xA0, 0xE8, 0x02, 0xB8, 0x1C, 0xF7, 0x70,
  0x0B, 0x78, 0x19, 0xF7, 0x68, 0x93, 0xBB, 0x08, 0xBB, 0xBB, 0x50, 0x9F, 0x75, 0x87, 0xBB, 0x08,
  0xBB, 0xBB, 0x52, 0x81, 0x9F, 0x64, 0x00, 0xB7, 0x30, 0xC0, 0xB4, 0x82, 0xBB, 0x08, 0x80, 0x2B,
  0x82, 0x80, 0xBB, 0x48, 0x2B, 0xB0, 0x88, 0x02, 0xB8, 0x28, 0x0B, 0xB4, 0x00, 0xB7, 0x30, 0x0B,
  0x48, 0x2B, 0xB0, 0x88, 0x02, 0xB8, 0x28, 0x0B, 0xB4, 0x82, 0xBB, 0x08, 0x80, 0x2B, 0x82, 0x80,
  0xBB, 0x40, 0x0B, 0x73, 0x00, 0xB4, 0x0A, 0x0E, 0x80, 0x6B, 0x0E, 0x0A, 0x40, 0x20, 0xA8, 0x06,
  0xB0, 0xA0, 0x28, 0x0C, 0x20,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_text_snippet() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_text_snippet_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_topic 18x18, 4-bit Alpha,  RLE, 81 bytes.
static const uint8_t ic_outlined_18_file_topic_data[] PROGMEM = {
  0x80, 0xE3, 0x00, 0x20, 0xDC, 0x0D, 0x01, 0x73, 0x86, 0x7F, 0x77, 0x77, 0xED, 0x80, 0x27, 0x05,
  0x30, 0x79, 0x40, 0x30, 0xEF, 0x05, 0x20, 0x79, 0x75, 0x90, 0x72, 0x82, 0x7F, 0x03, 0x80, 0x47,
  0x82, 0x30, 0xF7, 0x28, 0x27, 0xF0, 0x7F, 0x98, 0x27, 0x0F, 0x72, 0x07, 0x97, 0x59, 0x07, 0x28,
  0x27, 0xF0, 0x38, 0x01, 0x70, 0x34, 0x90, 0x72, 0x82, 0x7F, 0x07, 0xD0, 0x74, 0x90, 0x72, 0x07,
  0x97, 0x59, 0x07, 0x20, 0x79, 0x80, 0x90, 0x79, 0x07, 0x20, 0x20, 0xDF, 0xD0, 0xE0, 0x48, 0x0E,
  0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_topic() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_topic_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_upload_file 18x18, 4-bit Alpha,  RLE, 95 bytes.
static const uint8_t ic_outlined_18_file_upload_file_data[] PROGMEM = {
  0x77, 0x72, 0x80, 0x21, 0x74, 0x0B, 0xE0, 0x67, 0x28, 0x57, 0xE3, 0x33, 0x35, 0xA0, 0x67, 0x10,
  0x70, 0xD4, 0x01, 0xB0, 0x67, 0x07, 0x0D, 0x40, 0x1C, 0x04, 0x60, 0x70, 0xD5, 0x0F, 0x59, 0x05,
  0x60, 0x70, 0xD7, 0x19, 0x05, 0x60, 0x70, 0xD3, 0x06, 0x05, 0x39, 0x05, 0x60, 0x70, 0xD2, 0x06,
  0xA0, 0x52, 0x90, 0x56, 0x82, 0x7D, 0x06, 0xC8, 0x24, 0x0F, 0x56, 0x89, 0x27, 0xD0, 0x27, 0xB9,
  0x81, 0x0F, 0x56, 0x07, 0x0D, 0x30, 0xB0, 0x93, 0x90, 0x56, 0x07, 0x0D, 0x30, 0x50, 0x43, 0x90,
  0x56, 0x07, 0x0D, 0x80, 0x41, 0x90, 0x57, 0x0B, 0xF9, 0x0A, 0x72, 0x80, 0x43, 0x77, 0x72,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_upload_file() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_upload_file_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_upload 18x18, 4-bit Alpha,  RLE, 63 bytes.
static const uint8_t ic_outlined_18_file_upload_data[] PROGMEM = {
  0x80, 0xD0, 0x00, 0x04, 0x77, 0x10, 0x4A, 0x04, 0x76, 0x84, 0x4F, 0xCC, 0xF4, 0x74, 0x86, 0x4F,
  0xC1, 0x1C, 0xF4, 0x72, 0x04, 0xB0, 0x03, 0xB0, 0x47, 0x18, 0x90, 0x77, 0x9F, 0x33, 0xF9, 0x77,
  0x73, 0x84, 0x3F, 0x33, 0xF3, 0x75, 0x84, 0x3F, 0x33, 0xF3, 0x75, 0x84, 0x3F, 0x99, 0xF3, 0x75,
  0x03, 0xC0, 0x37, 0x77, 0x60, 0x18, 0x06, 0x70, 0x16, 0x03, 0xFB, 0x03, 0x80, 0xE5, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_upload() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_upload_data, Alpha4(color::Black));
  return value;
}
// Image file ic_outlined_18_file_workspaces 18x18, 4-bit Alpha,  RLE, 80 bytes.
static const uint8_t ic_outlined_18_file_workspaces_data[] PROGMEM = {
  0x80, 0xD0, 0x00, 0x27, 0x72, 0x82, 0xBF, 0xE8, 0x76, 0x84, 0x5F, 0x8A, 0xF6, 0x75, 0x84, 0xAD,
  0x01, 0xE8, 0x75, 0x84, 0x7F, 0xAB, 0xF3, 0x76, 0x82, 0x8E, 0xF8, 0x80, 0xD1, 0x08, 0x32, 0xCE,
  0x91, 0x48, 0x32, 0xCE, 0x91, 0x48, 0x3C, 0xF8, 0xFC, 0x48, 0x3C, 0xF8, 0xFC, 0x38, 0x52, 0xF6,
  0x07, 0xF1, 0x28, 0x52, 0xF6, 0x07, 0xF1, 0x28, 0x41, 0xFD, 0x3E, 0xC3, 0x84, 0x1F, 0xD3, 0xEC,
  0x40, 0x60, 0xEA, 0x04, 0x40, 0x60, 0xEA, 0x04, 0x60, 0x40, 0x17, 0x04, 0x01, 0x80, 0xC3, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_outlined_18_file_workspaces() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      18, 18, ic_outlined_18_file_workspaces_data, Alpha4(color::Black));
  return value;
}
