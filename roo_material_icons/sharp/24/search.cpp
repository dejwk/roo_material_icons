#include "search.h"

using namespace roo_display;

// Image file ic_sharp_24_search_bathroom 24x24, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_sharp_24_search_bathroom_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0x84, 0xC5, 0x21, 0x5D, 0xF4,
  0xE0, 0x76, 0x09, 0xE4, 0xD0, 0xB7, 0x10, 0xDD, 0x4D, 0x03, 0x71, 0x06, 0xD4, 0xD7, 0x20, 0x2D,
  0x4D, 0x73, 0xD4, 0xFF, 0xE4, 0xE8, 0x68, 0x8F, 0x88, 0xF8, 0x8E, 0x4E, 0x86, 0x66, 0xF6, 0x6F,
  0x66, 0xE4, 0xFF, 0xE4, 0xE8, 0x68, 0x8F, 0x88, 0xF8, 0x8E, 0x4E, 0x86, 0x66, 0xF6, 0x6F, 0x66,
  0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE8, 0x0D, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_bathroom() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_bathroom_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_bed 24x24, 4-bit Alpha,  RLE, 42 bytes.
static const uint8_t ic_sharp_24_search_bed_data[] PROGMEM = {
  0x80, 0x9E, 0x70, 0xFF, 0xC6, 0xFF, 0xC6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA6, 0xA5,
  0xFF, 0xE4, 0xFF, 0xE4, 0xA7, 0x72, 0xA4, 0xA7, 0x72, 0xA4, 0xA7, 0x72, 0xA4, 0xFF, 0xE4, 0xFF,
  0xE4, 0xA7, 0x72, 0xA4, 0xA7, 0x72, 0xA8, 0x09, 0xE6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_bed() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_bed_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_bedroom_baby 24x24, 4-bit Alpha,  RLE, 85 bytes.
static const uint8_t ic_sharp_24_search_bedroom_baby_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4C, 0x09, 0x20, 0x10,
  0xEF, 0xC4, 0xC0, 0x53, 0x07, 0xFC, 0x4B, 0x81, 0xB0, 0x23, 0x0D, 0xFB, 0x4C, 0x0A, 0x97, 0x2D,
  0x4E, 0x71, 0xE4, 0xE7, 0x1E, 0x4D, 0x0E, 0x71, 0x0E, 0xD4, 0xB8, 0x94, 0x96, 0x60, 0x96, 0x44,
  0x69, 0x06, 0x69, 0xB4, 0xB0, 0x72, 0x04, 0xE0, 0x42, 0x07, 0xB4, 0xC8, 0x92, 0xA2, 0x01, 0x56,
  0x65, 0x10, 0x2A, 0xC4, 0xE8, 0x1A, 0x52, 0x28, 0x12, 0x5A, 0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF,
  0xE4, 0xFF, 0xE8, 0x0D, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_bedroom_baby() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_bedroom_baby_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_bedroom_child 24x24, 4-bit Alpha,  RLE, 77 bytes.
static const uint8_t ic_sharp_24_search_bedroom_child_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4D, 0x07, 0x71, 0x07,
  0xD4, 0xD0, 0x71, 0x80, 0x27, 0x10, 0x7D, 0x4D, 0x07, 0x1E, 0x10, 0x7D, 0x4C, 0x09, 0x04, 0x18,
  0x02, 0x71, 0x04, 0x09, 0xC4, 0xC7, 0x5C, 0x4C, 0x10, 0x7F, 0x90, 0x71, 0xC4, 0xC1, 0x07, 0xF9,
  0x07, 0x1C, 0x4C, 0x75, 0xC4, 0xC1, 0x03, 0x80, 0x47, 0x03, 0x1C, 0x4C, 0x10, 0x7F, 0x90, 0x71,
  0xC4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE8, 0x0D, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_bedroom_child() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_bedroom_child_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_bedroom_parent 24x24, 4-bit Alpha,  RLE, 90 bytes.
static const uint8_t ic_sharp_24_search_bedroom_parent_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4B, 0x0A, 0x50, 0x01,
  0x50, 0xAB, 0x4B, 0x89, 0x4A, 0x05, 0x77, 0x71, 0x17, 0x77, 0x50, 0xAB, 0x4B, 0x81, 0xA0, 0xBB,
  0x00, 0x3B, 0x81, 0xB0, 0xAB, 0x4B, 0x89, 0x4A, 0x05, 0x77, 0x71, 0x17, 0x77, 0x50, 0xAB, 0x4B,
  0x07, 0x75, 0x07, 0xB4, 0xB1, 0x07, 0xFB, 0x07, 0x1B, 0x4B, 0x10, 0x7F, 0xB0, 0x71, 0xB4, 0xB7,
  0x7B, 0x4B, 0x10, 0x38, 0x06, 0x70, 0x31, 0xB4, 0xB1, 0x07, 0xFB, 0x07, 0x1B, 0x4F, 0xFE, 0x4F,
  0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x80, 0xD6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_bedroom_parent() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_bedroom_parent_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_blender 24x24, 4-bit Alpha,  RLE, 94 bytes.
static const uint8_t ic_sharp_24_search_blender_data[] PROGMEM = {
  0x80, 0xE6, 0x0C, 0x76, 0xFF, 0x0E, 0x72, 0xFF, 0x0B, 0x72, 0xA1, 0x81, 0x9F, 0x66, 0x81, 0x6F,
  0x97, 0x2A, 0x18, 0x17, 0xF8, 0x68, 0x18, 0xF7, 0x72, 0xA1, 0x81, 0x4F, 0xB6, 0x81, 0xBF, 0x47,
  0x2A, 0x18, 0x12, 0xFD, 0x68, 0x1D, 0xF2, 0x72, 0xE6, 0xA7, 0x3E, 0x02, 0x48, 0x12, 0xFD, 0x77,
  0x81, 0xAF, 0x54, 0x81, 0x5F, 0xA7, 0x78, 0x18, 0xF7, 0x48, 0x17, 0xF8, 0x77, 0x81, 0x5F, 0x94,
  0x81, 0x9F, 0x57, 0x70, 0x3F, 0x90, 0x37, 0x70, 0x7F, 0x90, 0x77, 0x60, 0x7F, 0xB0, 0x77, 0x5D,
  0x00, 0x3D, 0x75, 0xD0, 0x03, 0xD7, 0x5F, 0xD7, 0x5F, 0xD7, 0x5F, 0xD8, 0x0E, 0x20,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_blender() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_blender_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_camera_indoor 24x24, 4-bit Alpha,  RLE, 71 bytes.
static const uint8_t ic_sharp_24_search_camera_indoor_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x00, 0x97, 0x76, 0x02, 0x0C, 0xA0, 0xC0, 0x27, 0x73, 0x05, 0x0E, 0xC0, 0xE0,
  0x57, 0x71, 0x09, 0xF9, 0x09, 0x75, 0x02, 0x0C, 0xFB, 0x0C, 0x02, 0x72, 0x05, 0x0E, 0xFD, 0x0E,
  0x05, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x71, 0xC6, 0xE7, 0x1C, 0x60, 0xB0, 0x3C, 0x71, 0xC7, 0x1C,
  0x71, 0xC7, 0x1C, 0x71, 0xC6, 0x0B, 0x03, 0xC7, 0x1C, 0x6E, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x71,
  0xFF, 0xA7, 0x1F, 0xFA, 0x80, 0x99, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_camera_indoor() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_camera_indoor_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_camera_outdoor 24x24, 4-bit Alpha,  RLE, 82 bytes.
static const uint8_t ic_sharp_24_search_camera_outdoor_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x00, 0x97, 0x76, 0x02, 0x0C, 0xA0, 0xC0, 0x27, 0x73, 0x86, 0x5E, 0xFC, 0xCF,
  0xE5, 0x77, 0x10, 0x9A, 0x09, 0x20, 0x9A, 0x09, 0x75, 0x83, 0x2C, 0xFE, 0x54, 0x83, 0x5E, 0xFC,
  0x27, 0x28, 0x35, 0xEF, 0xC2, 0x68, 0x32, 0xCF, 0xE5, 0x71, 0xA0, 0x97, 0x30, 0x9A, 0x71, 0xA7,
  0x5A, 0x71, 0xA7, 0x77, 0x1A, 0x6E, 0x73, 0xA6, 0xE0, 0x40, 0xC7, 0x1A, 0x6F, 0x97, 0x1A, 0x6F,
  0x97, 0x1A, 0x6E, 0x04, 0x0C, 0x71, 0xA6, 0xE7, 0x3A, 0x77, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x80,
  0x99, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_camera_outdoor() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_camera_outdoor_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_chair_alt 24x24, 4-bit Alpha,  RLE, 51 bytes.
static const uint8_t ic_sharp_24_search_chair_alt_data[] PROGMEM = {
  0x80, 0x99, 0x10, 0xFF, 0x73, 0xFF, 0x73, 0xA7, 0x3A, 0x73, 0xA7, 0x3A, 0x73, 0xA7, 0x3A, 0x73,
  0xFF, 0x73, 0xFF, 0x76, 0xA4, 0xA7, 0x72, 0xA4, 0xA7, 0x6F, 0xF7, 0x3F, 0xF7, 0x3A, 0x73, 0xA7,
  0x3A, 0x73, 0xA7, 0x3F, 0xF7, 0x3F, 0xF7, 0x3A, 0x73, 0xA7, 0x3A, 0x73, 0xA7, 0x3A, 0x73, 0xA8,
  0x09, 0x91, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_chair_alt() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_chair_alt_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_chair 24x24, 4-bit Alpha,  RLE, 56 bytes.
static const uint8_t ic_sharp_24_search_chair_data[] PROGMEM = {
  0x80, 0x99, 0x00, 0xFF, 0xA7, 0x1F, 0xFA, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x74, 0xFB, 0x77, 0xFB,
  0x71, 0xC2, 0xFB, 0x2C, 0x2C, 0x2F, 0xB2, 0xC2, 0xC2, 0xFB, 0x2C, 0x2C, 0x2F, 0xB2, 0xC2, 0xC7,
  0x7C, 0x2C, 0x77, 0xC2, 0xFF, 0xF9, 0x2F, 0xFF, 0x92, 0xFF, 0xF9, 0x2F, 0xFF, 0x95, 0xA7, 0x5A,
  0x71, 0x00, 0x87, 0x50, 0x08, 0x80, 0x99, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_chair() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_chair_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_coffee_maker 24x24, 4-bit Alpha,  RLE, 70 bytes.
static const uint8_t ic_sharp_24_search_coffee_maker_data[] PROGMEM = {
  0x80, 0xE0, 0x0F, 0xFA, 0x71, 0xFF, 0xA7, 0x1A, 0x2F, 0xB7, 0x3A, 0x2F, 0xB7, 0x3A, 0x2F, 0xB7,
  0x3A, 0x77, 0x71, 0xA6, 0x00, 0xB7, 0x7A, 0x60, 0x0B, 0x77, 0xA7, 0x77, 0x1A, 0x2F, 0xB7, 0x3A,
  0x2F, 0xB7, 0x3A, 0x2F, 0xB7, 0x3A, 0x2F, 0xB7, 0x3A, 0x2F, 0xB7, 0x3A, 0x20, 0xEF, 0x90, 0xE7,
  0x3A, 0x20, 0xBF, 0x90, 0xB7, 0x3A, 0x20, 0x4F, 0x90, 0x47, 0x3A, 0x30, 0x7E, 0x07, 0x74, 0xFF,
  0xA7, 0x1F, 0xFA, 0x80, 0xE0, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_coffee_maker() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_coffee_maker_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_coffee 24x24, 4-bit Alpha,  RLE, 77 bytes.
static const uint8_t ic_sharp_24_search_coffee_data[] PROGMEM = {
  0x80, 0x99, 0x00, 0xFF, 0x90, 0xB0, 0x47, 0xFF, 0xB0, 0x46, 0xA7, 0x3A, 0x18, 0x17, 0xFC, 0x6A,
  0x73, 0xA2, 0x90, 0xE6, 0xA7, 0x3A, 0x18, 0x17, 0xFC, 0x6F, 0xFB, 0x04, 0x6F, 0xF9, 0x0C, 0x04,
  0x7F, 0xF7, 0x30, 0xEF, 0xD0, 0xE7, 0x30, 0xCF, 0xD0, 0xC7, 0x30, 0x7F, 0xD0, 0x77, 0x30, 0x10,
  0xEF, 0xB0, 0xE0, 0x17, 0x40, 0x5F, 0xB0, 0x57, 0x60, 0x50, 0xEE, 0x0E, 0x05, 0x77, 0x18, 0x61,
  0x7C, 0xEE, 0xC7, 0x18, 0x0C, 0x10, 0xFF, 0xA7, 0x1F, 0xFA, 0x80, 0x99, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_coffee() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_coffee_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_dining 24x24, 4-bit Alpha,  RLE, 100 bytes.
static const uint8_t ic_sharp_24_search_dining_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4C, 0x82, 0x77, 0x3B, 0x1A, 0x82,
  0x81, 0x3D, 0xD4, 0xC8, 0x57, 0x73, 0xB0, 0xFB, 0x30, 0x3D, 0x4C, 0x85, 0x77, 0x3B, 0x0F, 0x54,
  0x0D, 0xC4, 0xC0, 0x74, 0x90, 0x44, 0x0C, 0xC4, 0xC0, 0x84, 0x90, 0x64, 0x0E, 0xC4, 0xC0, 0xD0,
  0x12, 0x81, 0x7F, 0xC3, 0x05, 0xD4, 0xD8, 0x1E, 0x06, 0xB8, 0x2B, 0x04, 0xED, 0x4E, 0x10, 0x7C,
  0x10, 0x7E, 0x4E, 0x10, 0x7C, 0x10, 0x7E, 0x4E, 0x10, 0x7C, 0x10, 0x7E, 0x4E, 0x10, 0x7C, 0x10,
  0x7E, 0x4E, 0x10, 0x7C, 0x10, 0x7E, 0x4E, 0x10, 0x7C, 0x10, 0x7E, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F,
  0xFE, 0x80, 0xD6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_dining() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_dining_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_door_back 24x24, 4-bit Alpha,  RLE, 44 bytes.
static const uint8_t ic_sharp_24_search_door_back_data[] PROGMEM = {
  0x80, 0x99, 0x10, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF,
  0x73, 0xFF, 0x73, 0xC2, 0xF9, 0x73, 0xC2, 0xF9, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF,
  0x73, 0xFF, 0x73, 0xFF, 0x71, 0xFF, 0xC6, 0xFF, 0xC8, 0x09, 0x87, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_door_back() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_door_back_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_doorbell 24x24, 4-bit Alpha,  RLE, 80 bytes.
static const uint8_t ic_sharp_24_search_doorbell_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0x09, 0x08, 0x77, 0x60, 0x20, 0xCA, 0x0B, 0x01, 0x77, 0x30, 0x50, 0xEC, 0x0E,
  0x04, 0x77, 0x10, 0x9F, 0x90, 0x87, 0x50, 0x20, 0xCF, 0xB0, 0xB0, 0x17, 0x20, 0x50, 0xED, 0x00,
  0x9D, 0x0E, 0x04, 0x71, 0xE8, 0x1E, 0x22, 0xF7, 0x1D, 0x0B, 0x01, 0x20, 0x20, 0xDD, 0x71, 0xD0,
  0x24, 0x06, 0xD7, 0x1D, 0x50, 0x1D, 0x71, 0xD6, 0xD7, 0x1D, 0x6D, 0x71, 0xC7, 0x1C, 0x71, 0xF0,
  0x09, 0xF7, 0x1F, 0x00, 0xDF, 0x71, 0xFF, 0xA7, 0x1F, 0xFA, 0x71, 0xFF, 0xA8, 0x09, 0x90, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_doorbell() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_doorbell_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_door_front 24x24, 4-bit Alpha,  RLE, 44 bytes.
static const uint8_t ic_sharp_24_search_door_front_data[] PROGMEM = {
  0x80, 0x99, 0x10, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF,
  0x73, 0xFF, 0x73, 0xF9, 0x2C, 0x73, 0xF9, 0x2C, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF, 0x73, 0xFF,
  0x73, 0xFF, 0x73, 0xFF, 0x71, 0xFF, 0xC6, 0xFF, 0xC8, 0x09, 0x87, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_door_front() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_door_front_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_door_sliding 24x24, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_sharp_24_search_door_sliding_data[] PROGMEM = {
  0x80, 0x99, 0x00, 0xF0, 0x03, 0xF7, 0x1F, 0x00, 0x3F, 0x71, 0xF0, 0x03, 0xF7, 0x1F, 0x00, 0x3F,
  0x71, 0xF0, 0x03, 0xF7, 0x1F, 0x00, 0x3F, 0x71, 0xF0, 0x03, 0xF7, 0x1F, 0x00, 0x3F, 0x71, 0xC2,
  0x90, 0x03, 0x92, 0xC7, 0x1C, 0x29, 0x00, 0x39, 0x2C, 0x71, 0xF0, 0x03, 0xF7, 0x1F, 0x00, 0x3F,
  0x71, 0xF0, 0x03, 0xF7, 0x1F, 0x00, 0x3F, 0x71, 0xF0, 0x03, 0xF7, 0x1F, 0x00, 0x3F, 0x7F, 0xFC,
  0x6F, 0xFC, 0x80, 0x98, 0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_door_sliding() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_door_sliding_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_feed 24x24, 4-bit Alpha,  RLE, 56 bytes.
static const uint8_t ic_sharp_24_search_feed_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0xFE, 0x07, 0x73, 0xFF, 0x07, 0x72, 0xFD, 0x07, 0xA0, 0x77, 0x1F, 0xD1, 0x07,
  0xA0, 0x77, 0xC5, 0xB2, 0x07, 0xA0, 0x76, 0xC5, 0xB3, 0x07, 0xA6, 0xFF, 0xC6, 0xFF, 0xC6, 0xC7,
  0x3C, 0x6C, 0x73, 0xC6, 0xFF, 0xC6, 0xFF, 0xC6, 0xC7, 0x3C, 0x6C, 0x73, 0xC6, 0xFF, 0xC6, 0xFF,
  0xC6, 0xFF, 0xC6, 0xFF, 0xC8, 0x09, 0x87, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_feed() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_feed_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_flatware 24x24, 4-bit Alpha,  RLE, 100 bytes.
static const uint8_t ic_sharp_24_search_flatware_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x98, 0x26, 0xBB, 0x69, 0x28, 0x25, 0xDD, 0x52, 0x81, 0xEB, 0x27, 0x98, 0x56,
  0xBB, 0x6F, 0x04, 0xC0, 0x41, 0xA0, 0xE0, 0x26, 0x98, 0x56, 0xBB, 0x6F, 0x0B, 0xC0, 0xB1, 0xB0,
  0xA6, 0x98, 0x56, 0xBB, 0x6F, 0x0E, 0xC0, 0xE1, 0xB0, 0xE6, 0xE1, 0x0E, 0xC0, 0xE1, 0xC6, 0xE1,
  0x0C, 0xC0, 0xC1, 0xC6, 0xE1, 0x05, 0xC0, 0x51, 0xC6, 0xE2, 0x08, 0xA0, 0x82, 0xC7, 0x1A, 0x5A,
  0x3C, 0x71, 0xA5, 0xA3, 0xC7, 0x1A, 0x5A, 0x3A, 0x73, 0xA5, 0xA3, 0xA7, 0x3A, 0x5A, 0x3A, 0x73,
  0xA5, 0xA3, 0xA7, 0x3A, 0x5A, 0x3A, 0x73, 0xA5, 0xA3, 0xA7, 0x3A, 0x5A, 0x3A, 0x73, 0xA5, 0xA3,
  0xA8, 0x09, 0x91, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_flatware() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_flatware_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_garage 24x24, 4-bit Alpha,  RLE, 88 bytes.
static const uint8_t ic_sharp_24_search_garage_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4C, 0x0D, 0x80, 0x67, 0x0E, 0xC4, 0xC0, 0x87,
  0x30, 0x8C, 0x4C, 0x81, 0x30, 0x58, 0x02, 0x78, 0x15, 0x03, 0xC4, 0xB0, 0xD2, 0x0E, 0xE0, 0xE2,
  0x0D, 0xB4, 0xB8, 0x18, 0x01, 0x80, 0x47, 0x81, 0x10, 0x8B, 0x4B, 0x03, 0x75, 0x03, 0xB4, 0xB7,
  0x7B, 0x4B, 0x30, 0x0B, 0x40, 0x0B, 0x3B, 0x4B, 0x30, 0x0B, 0x40, 0x0B, 0x3B, 0x4B, 0x77, 0xB4,
  0xB7, 0x7B, 0x4B, 0x28, 0x06, 0x72, 0xB4, 0xB2, 0xFB, 0x2B, 0x4B, 0x00, 0x7F, 0xB0, 0x07, 0xB4,
  0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE8, 0x0D, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_garage() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_garage_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_light 24x24, 4-bit Alpha,  RLE, 100 bytes.
static const uint8_t ic_sharp_24_search_light_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0xA7, 0x77, 0x1A, 0x77, 0x71, 0xA7, 0x75, 0x81, 0x39, 0xCA, 0x81, 0xC9, 0x37,
  0x70, 0x10, 0xBF, 0x90, 0xB0, 0x17, 0x48, 0x43, 0xEF, 0xE7, 0x22, 0x84, 0x27, 0xEF, 0xE3, 0x72,
  0x82, 0x2E, 0xFA, 0x71, 0x82, 0xAF, 0xE2, 0x71, 0x81, 0xBF, 0xA7, 0x38, 0x1A, 0xFB, 0x78, 0x14,
  0xFE, 0x75, 0x81, 0xEF, 0x46, 0x81, 0x9F, 0x77, 0x58, 0x17, 0xF9, 0x68, 0x1C, 0xF2, 0x75, 0x81,
  0x2F, 0xC6, 0x0E, 0x97, 0x79, 0x0E, 0x60, 0xEF, 0xFA, 0x0E, 0x60, 0xCF, 0xFA, 0x0C, 0x74, 0x0D,
  0xE0, 0xD7, 0x72, 0x0A, 0xE0, 0xA7, 0x72, 0x01, 0x0E, 0xC0, 0xE0, 0x17, 0x73, 0x84, 0x1A, 0xDD,
  0xA1, 0x80, 0x99, 0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_light() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_light_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_living 24x24, 4-bit Alpha,  RLE, 91 bytes.
static const uint8_t ic_sharp_24_search_living_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4C, 0x03, 0x73, 0x03, 0xC4, 0xC0,
  0x30, 0x18, 0x04, 0x70, 0x10, 0x3C, 0x4C, 0x00, 0x3F, 0x90, 0x03, 0xC4, 0xC0, 0x03, 0xF9, 0x00,
  0x3C, 0x4B, 0x5C, 0x5B, 0x4B, 0x5C, 0x5B, 0x4B, 0x18, 0x17, 0xF7, 0x1C, 0x18, 0x17, 0xF7, 0x1B,
  0x4B, 0x18, 0x17, 0xF7, 0x68, 0x17, 0xF7, 0x1B, 0x4B, 0x18, 0x17, 0xFB, 0x80, 0x27, 0x81, 0xBF,
  0x71, 0xB4, 0xB1, 0x07, 0xFB, 0x07, 0x1B, 0x4B, 0x10, 0x38, 0x06, 0x70, 0x31, 0xB4, 0xB7, 0x7B,
  0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x80, 0xD6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_living() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_living_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_manage_search 24x24, 4-bit Alpha,  RLE, 84 bytes.
static const uint8_t ic_sharp_24_search_manage_search_data[] PROGMEM = {
  0x80, 0xAA, 0x70, 0x84, 0x4B, 0xEE, 0xB4, 0x72, 0xD3, 0x08, 0xE0, 0x87, 0x1D, 0x20, 0x4A, 0x82,
  0x71, 0x17, 0xA0, 0x47, 0x78, 0x1B, 0xF7, 0x48, 0x17, 0xFB, 0x77, 0x81, 0xEF, 0x14, 0x81, 0x1F,
  0xE7, 0x78, 0x1E, 0xF1, 0x48, 0x11, 0xFE, 0x7D, 0x28, 0x1B, 0xF7, 0x48, 0x17, 0xFB, 0x7D, 0x20,
  0x4A, 0x82, 0x71, 0x17, 0xA0, 0x57, 0x71, 0x08, 0xF0, 0xC0, 0x17, 0x71, 0x89, 0x04, 0xBE, 0xEB,
  0x5C, 0xFC, 0x17, 0x76, 0x83, 0x1C, 0xFC, 0x14, 0xFB, 0x68, 0x21, 0xCF, 0xB4, 0xFB, 0x78, 0x11,
  0xB2, 0x80, 0x9E, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_manage_search() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_manage_search_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_podcasts 24x24, 4-bit Alpha,  RLE, 175 bytes.
static const uint8_t ic_sharp_24_search_podcasts_data[] PROGMEM = {
  0x80, 0xE4, 0x08, 0x65, 0x9D, 0xEE, 0xD9, 0x57, 0x70, 0x40, 0xDF, 0x90, 0xD0, 0x47, 0x40, 0x8A,
  0x81, 0xC6, 0x22, 0x81, 0x26, 0xCA, 0x08, 0x72, 0x08, 0xA0, 0x67, 0x10, 0x6A, 0x08, 0x70, 0x4A,
  0x04, 0x28, 0x46, 0xCE, 0xEC, 0x62, 0x04, 0xA0, 0x46, 0x84, 0xDF, 0x60, 0x1C, 0xE8, 0x4C, 0x10,
  0x6F, 0xD5, 0x81, 0x5F, 0xC2, 0x89, 0x0C, 0xFD, 0x51, 0x15, 0xDF, 0xC2, 0x81, 0xCF, 0x54, 0x86,
  0x9F, 0x60, 0x6F, 0xD1, 0x48, 0x61, 0xDF, 0x60, 0x6F, 0x94, 0x8A, 0x2D, 0xF2, 0x0C, 0xF5, 0x04,
  0xDD, 0x40, 0x5F, 0xC0, 0x2F, 0xD4, 0x0E, 0x92, 0x83, 0xEF, 0x10, 0xDA, 0x83, 0xD0, 0x1F, 0xE2,
  0x90, 0xE4, 0x0E, 0x92, 0x0E, 0x92, 0x0D, 0xA0, 0xD2, 0x90, 0xE2, 0x90, 0xE4, 0x87, 0xDF, 0x20,
  0xCF, 0x50, 0x4A, 0x87, 0x40, 0x5F, 0xC0, 0x2F, 0xD4, 0x86, 0x9F, 0x60, 0x6F, 0xD1, 0x1A, 0x18,
  0x61, 0xDF, 0x60, 0x6F, 0x94, 0x81, 0x5F, 0xC2, 0x00, 0xC2, 0xA2, 0x00, 0xC2, 0x81, 0xCF, 0x55,
  0x83, 0xDF, 0x60, 0x13, 0xA3, 0x83, 0x10, 0x6F, 0xD6, 0x04, 0xA0, 0x34, 0xA4, 0x03, 0xA0, 0x47,
  0x08, 0x0C, 0x5A, 0x50, 0xC0, 0x87, 0x71, 0xA7, 0x77, 0x1A, 0x77, 0x71, 0xA8, 0x0E, 0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_podcasts() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_podcasts_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_shower 24x24, 4-bit Alpha,  RLE, 77 bytes.
static const uint8_t ic_sharp_24_search_shower_data[] PROGMEM = {
  0x80, 0x99, 0x70, 0xA7, 0x77, 0x1A, 0x77, 0x58, 0x11, 0x7C, 0xA8, 0x1C, 0x71, 0x77, 0x10, 0x50,
  0xEE, 0x0E, 0x05, 0x76, 0x05, 0xFB, 0x05, 0x74, 0x01, 0x0E, 0xFB, 0x0E, 0x01, 0x73, 0x07, 0xFD,
  0x07, 0x73, 0x0C, 0xFD, 0x0C, 0x73, 0x0E, 0xFD, 0x0E, 0x73, 0xFF, 0x73, 0xFF, 0x80, 0xF0, 0x00,
  0x0B, 0x20, 0x0B, 0x20, 0x0B, 0x77, 0x00, 0xB2, 0x00, 0xB2, 0x00, 0xB8, 0x0C, 0x20, 0x00, 0xB2,
  0x00, 0xB2, 0x00, 0xB7, 0x70, 0x0B, 0x20, 0x0B, 0x20, 0x0B, 0x80, 0x99, 0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_shower() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_shower_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_window 24x24, 4-bit Alpha,  RLE, 59 bytes.
static const uint8_t ic_sharp_24_search_window_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A,
  0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4F, 0xFE, 0x4F, 0xFE, 0x4A,
  0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A, 0x7A, 0x4A, 0x7A,
  0x7A, 0x4A, 0x7A, 0x7A, 0x4F, 0xFE, 0x4F, 0xFE, 0x80, 0xD6, 0x00,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_window() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_window_data, Alpha4(color::Black));
  return value;
}
// Image file ic_sharp_24_search_yard 24x24, 4-bit Alpha,  RLE, 111 bytes.
static const uint8_t ic_sharp_24_search_yard_data[] PROGMEM = {
  0x80, 0xD6, 0x0F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0x98, 0x2E, 0x66, 0xEF, 0x94, 0xE8, 0x1E,
  0xB7, 0x28, 0x17, 0xBE, 0xE4, 0xE0, 0x36, 0x03, 0xE4, 0xE8, 0x61, 0x02, 0xCC, 0x20, 0x1E, 0x4E,
  0x81, 0x90, 0x7A, 0x81, 0x70, 0x9E, 0x4E, 0x81, 0x20, 0x3A, 0x81, 0x30, 0x2E, 0x4E, 0x01, 0x20,
  0x01, 0x20, 0x1E, 0x4E, 0x81, 0xC7, 0x42, 0x81, 0x47, 0xCE, 0x4C, 0x89, 0x21, 0x38, 0xFD, 0x22,
  0xDF, 0x83, 0x1C, 0x4C, 0x03, 0x20, 0x20, 0xDA, 0x0D, 0x02, 0x20, 0x3C, 0x4C, 0x08, 0x30, 0x2A,
  0x02, 0x30, 0x8C, 0x4D, 0x02, 0x30, 0x08, 0x30, 0x2D, 0x4D, 0x0D, 0x02, 0x20, 0x03, 0x20, 0x20,
  0xDD, 0x4F, 0x84, 0x83, 0x11, 0x38, 0xF4, 0xFF, 0xE4, 0xFF, 0xE4, 0xFF, 0xE8, 0x0D, 0x60,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_sharp_24_search_yard() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      24, 24, ic_sharp_24_search_yard_data, Alpha4(color::Black));
  return value;
}
