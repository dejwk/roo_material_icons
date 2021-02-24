#include "places.h"

using namespace roo_display;

// Image file ic_24_places_all_inclusive 24x24, 4-bit Alpha,  RLE, 121 bytes 
static const uint8_t ic_24_places_all_inclusive_data[] PROGMEM = {
  0x80, 0xA9, 0x70, 0x82, 0x14, 0x54, 0x73, 0x82, 0x45, 0x41, 0x50, 0x8C, 0x0E, 0x06, 0x60, 0x60,
  0xEC, 0x08, 0x30, 0xAA, 0x81, 0xB9, 0xCA, 0x08, 0x40, 0x8A, 0x81, 0xC9, 0xBA, 0x84, 0xA0, 0x5F,
  0xE3, 0x38, 0x25, 0xFE, 0x22, 0x0A, 0xA0, 0x53, 0x85, 0x3E, 0xF5, 0xCF, 0x55, 0x86, 0x33, 0x01,
  0xBF, 0xE3, 0x58, 0x15, 0xFB, 0xA7, 0x18, 0x31, 0xDF, 0xD2, 0x68, 0x11, 0xFE, 0xA7, 0x83, 0x2D,
  0xFD, 0x17, 0x84, 0x1F, 0xEC, 0xF5, 0x58, 0x64, 0xEF, 0xB1, 0x03, 0x45, 0x85, 0x6F, 0xB5, 0xFE,
  0x33, 0x06, 0xA0, 0xA2, 0x03, 0xA0, 0x53, 0x84, 0x3E, 0xF5, 0x0A, 0xA8, 0x1B, 0x9C, 0xA0, 0x84,
  0x08, 0xA8, 0x1C, 0x9B, 0xA0, 0x93, 0x08, 0x0E, 0xB0, 0xE0, 0x56, 0x05, 0x0E, 0xB0, 0xE0, 0x76,
  0x81, 0x45, 0x37, 0x38, 0x13, 0x54, 0x80, 0xAA, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_all_inclusive() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_all_inclusive_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_kitchen 24x24, 4-bit Alpha,  RLE, 79 bytes 
static const uint8_t ic_24_places_kitchen_data[] PROGMEM = {
  0x80, 0xE0, 0x00, 0x40, 0xEF, 0xD0, 0xE0, 0x47, 0x10, 0xEF, 0xF0, 0xE7, 0x1A, 0x75, 0xA7, 0x1A,
  0x2A, 0x71, 0xA7, 0x1A, 0x2A, 0x71, 0xA7, 0x1A, 0x2A, 0x71, 0xA7, 0x1A, 0x75, 0xA7, 0x1F, 0xFA,
  0x71, 0xFF, 0xA7, 0x1A, 0x75, 0xA7, 0x1A, 0x2A, 0x71, 0xA7, 0x1A, 0x2A, 0x71, 0xA7, 0x1A, 0x2A,
  0x71, 0xA7, 0x1A, 0x2A, 0x71, 0xA7, 0x1A, 0x2A, 0x71, 0xA7, 0x1A, 0x75, 0xA7, 0x1A, 0x75, 0xA7,
  0x1A, 0x75, 0xA7, 0x10, 0xEF, 0xF0, 0xE7, 0x10, 0x40, 0xEF, 0xD0, 0xE0, 0x48, 0x0E, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_kitchen() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_kitchen_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_ac_unit 24x24, 4-bit Alpha,  RLE, 131 bytes 
static const uint8_t ic_24_places_ac_unit_data[] PROGMEM = {
  0x80, 0xE7, 0x0A, 0x77, 0x40, 0xB0, 0x52, 0xA2, 0x05, 0x0B, 0x76, 0x06, 0xA0, 0x51, 0xA1, 0x05,
  0xA0, 0x57, 0x60, 0x7A, 0x05, 0xA0, 0x5A, 0x07, 0x74, 0x06, 0x30, 0x7E, 0x07, 0x30, 0x67, 0x81,
  0xBF, 0x73, 0x07, 0xC0, 0x73, 0x81, 0x7F, 0xB6, 0x05, 0xA0, 0x73, 0x07, 0xA0, 0x73, 0x07, 0xA0,
  0x57, 0x05, 0xA0, 0x73, 0xA3, 0x07, 0xA0, 0x57, 0x20, 0x5A, 0x07, 0x2A, 0x20, 0x7A, 0x05, 0x7F,
  0xFE, 0x4F, 0xFE, 0x70, 0x5A, 0x07, 0x2A, 0x20, 0x7A, 0x05, 0x72, 0x05, 0xA0, 0x73, 0xA3, 0x07,
  0xA0, 0x57, 0x05, 0xA0, 0x73, 0x07, 0xA0, 0x73, 0x07, 0xA0, 0x56, 0x81, 0xBF, 0x73, 0x07, 0xC0,
  0x73, 0x81, 0x7F, 0xB7, 0x05, 0x30, 0x7E, 0x07, 0x30, 0x57, 0x40, 0x7A, 0x05, 0xA0, 0x5A, 0x07,
  0x76, 0x06, 0xA0, 0x51, 0xA1, 0x05, 0xA0, 0x57, 0x60, 0xB0, 0x52, 0xA2, 0x05, 0x0B, 0x77, 0x4A,
  0x80, 0xE7, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_ac_unit() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_ac_unit_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_rv_hookup 24x24, 4-bit Alpha,  RLE, 76 bytes 
static const uint8_t ic_24_places_rv_hookup_data[] PROGMEM = {
  0x80, 0xF5, 0x00, 0x77, 0x77, 0x29, 0x07, 0x77, 0xFB, 0x07, 0x76, 0xFB, 0x07, 0x77, 0x79, 0x07,
  0x74, 0x07, 0x73, 0x07, 0x74, 0x07, 0x97, 0x77, 0x07, 0xFE, 0x0E, 0x04, 0x71, 0x07, 0xFF, 0x0E,
  0x72, 0x07, 0x94, 0xB4, 0xA7, 0x30, 0x74, 0xB4, 0xA7, 0x71, 0xB4, 0xA7, 0x1F, 0xFA, 0x71, 0xFF,
  0xA7, 0x1F, 0xFA, 0x71, 0x0E, 0xFF, 0xB6, 0x04, 0x0E, 0xC0, 0x03, 0xFB, 0x73, 0x84, 0xDF, 0x33,
  0xFD, 0x77, 0x40, 0x8C, 0x08, 0x77, 0x58, 0x28, 0xDD, 0x88, 0x0E, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_rv_hookup() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_rv_hookup_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_smoke_free 24x24, 4-bit Alpha,  RLE, 144 bytes 
static const uint8_t ic_24_places_smoke_free_data[] PROGMEM = {
  0x80, 0xF0, 0x08, 0x15, 0xD7, 0x30, 0x50, 0x67, 0x71, 0x82, 0x4F, 0xC4, 0x28, 0x11, 0xEA, 0x70,
  0x17, 0x0B, 0x0C, 0x38, 0x25, 0xEF, 0x26, 0x81, 0x7D, 0x16, 0x0D, 0x0A, 0x38, 0x36, 0xEF, 0xB1,
  0x58, 0x27, 0xFD, 0x15, 0x81, 0x9E, 0x24, 0x81, 0x6E, 0xC6, 0x82, 0x7F, 0xD1, 0x48, 0x91, 0x2E,
  0xFB, 0xBB, 0x60, 0x4F, 0x66, 0x82, 0x7F, 0xD1, 0x48, 0x90, 0x18, 0xAA, 0xBF, 0xB0, 0xBC, 0x78,
  0x27, 0xFD, 0x17, 0x18, 0x26, 0xF5, 0x89, 0x71, 0x82, 0x7F, 0xD1, 0x71, 0x90, 0x07, 0x97, 0x28,
  0x27, 0xFD, 0x17, 0x90, 0x07, 0x97, 0x38, 0x27, 0xFD, 0x17, 0x7F, 0xA8, 0x2D, 0x10, 0x6A, 0x19,
  0x00, 0x79, 0x4F, 0xB8, 0x7D, 0x10, 0x6F, 0x0F, 0x77, 0x94, 0xFC, 0x86, 0xD1, 0x06, 0x0F, 0x77,
  0x97, 0x78, 0x27, 0xFD, 0x17, 0x77, 0x82, 0x7F, 0xD1, 0x77, 0x78, 0x27, 0xFD, 0x17, 0x77, 0x82,
  0x7F, 0xD1, 0x77, 0x78, 0x27, 0xFD, 0x17, 0x77, 0x81, 0x7F, 0xD7, 0x77, 0x10, 0x07, 0x77, 0x77,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_smoke_free() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_smoke_free_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_child_care 24x24, 4-bit Alpha,  RLE, 164 bytes 
static const uint8_t ic_24_places_child_care_data[] PROGMEM = {
  0x80, 0x99, 0x40, 0x81, 0x4A, 0xDA, 0x81, 0xD9, 0x47, 0x70, 0x20, 0xCF, 0x90, 0xC0, 0x27, 0x48,
  0x44, 0xEF, 0xD7, 0x22, 0x84, 0x27, 0xDF, 0xE3, 0x72, 0x82, 0x2E, 0xF9, 0x71, 0x82, 0xAF, 0xE2,
  0x71, 0x81, 0xCF, 0x97, 0x38, 0x1A, 0xFB, 0x68, 0x22, 0xBF, 0xD7, 0x58, 0x2E, 0xFB, 0x23, 0x02,
  0x0E, 0xA0, 0x72, 0x81, 0x4B, 0x42, 0x81, 0x4B, 0x42, 0x07, 0xA0, 0xE0, 0x22, 0x82, 0xBF, 0xA1,
  0x38, 0x1B, 0xFB, 0x28, 0x1B, 0xFB, 0x38, 0x21, 0xAF, 0xA2, 0xA0, 0x14, 0x81, 0x4B, 0x42, 0x81,
  0x4B, 0x44, 0x81, 0x1F, 0xE2, 0x81, 0xEF, 0x17, 0x72, 0x81, 0x1F, 0xE2, 0x82, 0xAF, 0xA1, 0x77,
  0x82, 0x1A, 0xFA, 0x20, 0x20, 0xEA, 0x81, 0x70, 0x3F, 0x98, 0x13, 0x07, 0xA0, 0xE0, 0x23, 0x82,
  0x2A, 0xFD, 0x20, 0x7E, 0x07, 0x28, 0x2E, 0xFA, 0x26, 0x81, 0xCF, 0xA2, 0x84, 0x4B, 0xEE, 0xB4,
  0x28, 0x1A, 0xFB, 0x71, 0x82, 0x2E, 0xFA, 0x71, 0x82, 0xAF, 0xE2, 0x72, 0x84, 0x3E, 0xFD, 0x72,
  0x28, 0x42, 0x7E, 0xFE, 0x37, 0x40, 0x20, 0xBF, 0x90, 0xB0, 0x27, 0x78, 0x14, 0x9D, 0xA8, 0x1D,
  0x94, 0x80, 0x99, 0x40,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_child_care() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_child_care_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_pool 24x24, 4-bit Alpha,  RLE, 135 bytes 
static const uint8_t ic_24_places_pool_data[] PROGMEM = {
  0x80, 0x99, 0x10, 0x98, 0x1E, 0xB6, 0x58, 0x32, 0xCF, 0xC2, 0x73, 0xC0, 0xC0, 0x13, 0x0C, 0xB0,
  0xB7, 0x38, 0x17, 0x9E, 0xA0, 0xD0, 0x12, 0xD7, 0x60, 0x8A, 0x82, 0xD1, 0x0C, 0xB0, 0xB7, 0x70,
  0x7A, 0x85, 0xD1, 0x2B, 0xFB, 0x27, 0x70, 0x7B, 0x0D, 0x01, 0x77, 0x30, 0x7D, 0x0D, 0x01, 0x77,
  0x10, 0x7F, 0x0D, 0x01, 0x77, 0x82, 0x9F, 0xC4, 0x28, 0x24, 0xCF, 0x77, 0x77, 0x76, 0x82, 0x16,
  0x75, 0x38, 0x23, 0x77, 0x33, 0x82, 0x57, 0x61, 0x50, 0x9C, 0x81, 0xD8, 0xBC, 0x81, 0xA8, 0xDB,
  0x0E, 0x08, 0x4A, 0x81, 0xA8, 0xDB, 0x82, 0xE8, 0x9E, 0xB8, 0x1D, 0x8A, 0xA4, 0x07, 0x03, 0x38,
  0x25, 0x76, 0x12, 0x82, 0x16, 0x74, 0x30, 0x30, 0x67, 0x77, 0x78, 0x71, 0x8E, 0xFC, 0x50, 0x3B,
  0xA8, 0x7B, 0x30, 0x6D, 0xFE, 0x81, 0x4F, 0xFE, 0x48, 0xA2, 0xEA, 0x30, 0x5C, 0xFE, 0x81, 0x18,
  0xEF, 0xC5, 0x03, 0xAE, 0x80, 0x98, 0x60,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_pool() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_pool_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_beach_access 24x24, 4-bit Alpha,  RLE, 135 bytes 
static const uint8_t ic_24_places_beach_access_data[] PROGMEM = {
  0x80, 0x99, 0x50, 0x81, 0x5A, 0xDA, 0x81, 0xDB, 0x67, 0x70, 0x40, 0xDF, 0x90, 0xE0, 0x67, 0x48,
  0x56, 0x96, 0x67, 0x9D, 0xE0, 0xA7, 0x20, 0x6A, 0x81, 0xEB, 0x52, 0x03, 0x0A, 0xC0, 0xA7, 0x10,
  0x40, 0x9D, 0x0E, 0x06, 0x28, 0x24, 0xEF, 0xA7, 0x28, 0x1D, 0x6E, 0xE8, 0x3C, 0x20, 0x18, 0x72,
  0x82, 0x5F, 0x6B, 0xF0, 0xE0, 0x37, 0x48, 0x2A, 0xF7, 0x5F, 0x90, 0xA7, 0x48, 0x3D, 0xF9, 0x0E,
  0xE0, 0xA7, 0x5A, 0x81, 0xD0, 0x6D, 0x0A, 0x76, 0xB8, 0x13, 0x0C, 0xB8, 0x2A, 0x09, 0x17, 0x40,
  0xDA, 0x89, 0x1A, 0x02, 0xEF, 0xA0, 0x9F, 0xD1, 0x73, 0x0B, 0xB8, 0x24, 0x03, 0xA2, 0x83, 0x1D,
  0xFD, 0x17, 0x20, 0x6B, 0x0E, 0x01, 0x58, 0x31, 0xDF, 0xD1, 0x72, 0x0E, 0xB0, 0x86, 0x83, 0x1D,
  0xFD, 0x17, 0x10, 0x6A, 0x0A, 0x71, 0x83, 0x1D, 0xFD, 0x17, 0x10, 0x0A, 0x73, 0x82, 0x1D, 0xFB,
  0x77, 0x78, 0x11, 0xB2, 0x80, 0x98, 0x70,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_beach_access() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_beach_access_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_smoking_rooms 24x24, 4-bit Alpha,  RLE, 97 bytes 
static const uint8_t ic_24_places_smoking_rooms_data[] PROGMEM = {
  0x80, 0xF4, 0x08, 0x17, 0xC4, 0x77, 0x78, 0x24, 0xCF, 0x47, 0x77, 0x10, 0xD0, 0xB7, 0x72, 0x81,
  0x6D, 0x73, 0x0A, 0x0C, 0x77, 0x18, 0x25, 0xFB, 0x32, 0x81, 0x2E, 0x97, 0x71, 0x0B, 0x0C, 0x30,
  0x6A, 0x02, 0x77, 0x10, 0xD0, 0xA3, 0x83, 0x5C, 0xFD, 0x27, 0x78, 0x19, 0xF3, 0x48, 0x23, 0xDD,
  0x17, 0x68, 0x91, 0x1D, 0xFC, 0xCB, 0x70, 0x3F, 0x87, 0x78, 0x90, 0x17, 0x99, 0xBF, 0xC0, 0xBD,
  0x77, 0x58, 0x25, 0xF5, 0x89, 0x77, 0x69, 0x00, 0x79, 0x77, 0x69, 0x00, 0x79, 0x77, 0x77, 0xFF,
  0x91, 0x90, 0x07, 0x94, 0xFF, 0x91, 0x90, 0x07, 0x94, 0xFF, 0x91, 0x90, 0x07, 0x98, 0x09, 0xE6,
  0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_smoking_rooms() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_smoking_rooms_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_spa 24x24, 4-bit Alpha,  RLE, 111 bytes 
static const uint8_t ic_24_places_spa_data[] PROGMEM = {
  0x80, 0xE7, 0x00, 0x60, 0x77, 0x77, 0x03, 0xA0, 0x47, 0x76, 0x0D, 0xA0, 0xE7, 0x75, 0x06, 0xC0,
  0x77, 0x74, 0x0C, 0xC0, 0xD7, 0x73, 0x01, 0xE0, 0x27, 0x72, 0x05, 0xE0, 0x57, 0x72, 0x05, 0xE0,
  0x57, 0x39, 0x82, 0xEB, 0x71, 0x20, 0x30, 0xDA, 0x0D, 0x03, 0x28, 0x31, 0x7B, 0xEE, 0x40, 0xEC,
  0x09, 0x01, 0x20, 0x0B, 0x20, 0x10, 0xAC, 0x0D, 0x40, 0xBD, 0x0E, 0x05, 0x40, 0x50, 0xED, 0x0B,
  0x40, 0x7F, 0x06, 0x20, 0x6F, 0x07, 0x40, 0x2F, 0x90, 0x40, 0x5F, 0x90, 0x25, 0x0A, 0xF0, 0x0E,
  0xF0, 0xA6, 0x02, 0xFF, 0xA0, 0x27, 0x06, 0xFF, 0x06, 0x72, 0x08, 0xFD, 0x08, 0x74, 0x07, 0xFB,
  0x07, 0x76, 0x03, 0x0C, 0xE0, 0xC0, 0x37, 0x72, 0x84, 0x49, 0xDD, 0x94, 0x80, 0xE5, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_spa() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_spa_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_hot_tub 24x24, 4-bit Alpha,  RLE, 108 bytes 
static const uint8_t ic_24_places_hot_tub_data[] PROGMEM = {
  0x80, 0x9A, 0x00, 0x00, 0xE2, 0x00, 0xE7, 0x48, 0x25, 0xEE, 0x43, 0x90, 0xE2, 0x90, 0xE7, 0x40,
  0xEA, 0x0E, 0x38, 0x5B, 0xF5, 0x0B, 0xF5, 0x73, 0x0E, 0xA0, 0xE3, 0x03, 0xA0, 0x03, 0xA0, 0x37,
  0x28, 0x24, 0xEE, 0x44, 0x85, 0x5F, 0xB0, 0x5F, 0xB7, 0x74, 0x00, 0xE2, 0x00, 0xE7, 0x28, 0x23,
  0xDF, 0x95, 0x00, 0xE2, 0x00, 0xE7, 0x20, 0xDB, 0x09, 0x77, 0x5D, 0x08, 0x77, 0x1F, 0xFE, 0x4F,
  0xFE, 0x4B, 0x2A, 0x2A, 0x2A, 0x2B, 0x4B, 0x2A, 0x2A, 0x2A, 0x2B, 0x4B, 0x2A, 0x2A, 0x2A, 0x2B,
  0x4B, 0x2A, 0x2A, 0x2A, 0x2B, 0x4B, 0x2A, 0x2A, 0x2A, 0x2B, 0x4B, 0x2A, 0x2A, 0x2A, 0x2B, 0x40,
  0xEF, 0xFC, 0x0E, 0x40, 0x40, 0xEF, 0xFA, 0x0E, 0x04, 0x80, 0xD6, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_hot_tub() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_hot_tub_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_fitness_center 24x24, 4-bit Alpha,  RLE, 134 bytes 
static const uint8_t ic_24_places_fitness_center_data[] PROGMEM = {
  0x80, 0xE0, 0x00, 0x12, 0x83, 0xB3, 0x1B, 0x27, 0x71, 0x87, 0xAC, 0x2B, 0xFE, 0xDF, 0xB7, 0x70,
  0x10, 0xDE, 0x0C, 0x01, 0x77, 0x10, 0x2D, 0x0C, 0x01, 0x77, 0x20, 0xBC, 0x0C, 0x01, 0x77, 0x20,
  0xBD, 0x0C, 0x01, 0x77, 0x20, 0x30, 0xEA, 0x83, 0xCC, 0xFC, 0x17, 0x71, 0x89, 0x01, 0xDF, 0xC1,
  0x1C, 0xFC, 0x17, 0x78, 0x2B, 0xFC, 0x12, 0x83, 0x1D, 0xFC, 0x17, 0x68, 0x12, 0xB1, 0x48, 0x31,
  0xDF, 0xD1, 0x77, 0x68, 0x31, 0xDF, 0xD1, 0x48, 0x11, 0xB2, 0x76, 0x83, 0x1D, 0xFD, 0x12, 0x82,
  0x1D, 0xFB, 0x77, 0x89, 0x01, 0xDF, 0xD1, 0x1D, 0xFD, 0x17, 0x71, 0x83, 0x1D, 0xFD, 0xDA, 0x0E,
  0x03, 0x77, 0x20, 0x10, 0xDD, 0x0A, 0x77, 0x20, 0x10, 0xDC, 0x0B, 0x77, 0x20, 0x10, 0xDD, 0x02,
  0x77, 0x10, 0x10, 0xDE, 0x0D, 0x01, 0x77, 0x87, 0xBF, 0xDE, 0xFB, 0x2D, 0x97, 0x71, 0x83, 0x2B,
  0x13, 0xA2, 0x01, 0x80, 0xE0, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_fitness_center() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_fitness_center_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_free_breakfast 24x24, 4-bit Alpha,  RLE, 60 bytes 
static const uint8_t ic_24_places_free_breakfast_data[] PROGMEM = {
  0x80, 0x99, 0x00, 0xFF, 0xA0, 0xE0, 0x46, 0xFF, 0xB0, 0xE6, 0xFF, 0x2A, 0x6F, 0xF2, 0xA6, 0xFF,
  0x2A, 0x6F, 0xFB, 0x0E, 0x6F, 0xFA, 0x0E, 0x04, 0x6F, 0xF7, 0x3F, 0xF7, 0x3F, 0xF7, 0x30, 0xEF,
  0xD0, 0xE7, 0x30, 0xAF, 0xD0, 0xA7, 0x30, 0x20, 0xEF, 0xB0, 0xE0, 0x27, 0x48, 0x12, 0xAE, 0xE8,
  0x1E, 0xA2, 0x80, 0xE7, 0x0F, 0xFA, 0x71, 0xFF, 0xA8, 0x09, 0x90, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_free_breakfast() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_free_breakfast_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_room_service 24x24, 4-bit Alpha,  RLE, 60 bytes 
static const uint8_t ic_24_places_room_service_data[] PROGMEM = {
  0x80, 0x9F, 0x60, 0x82, 0x5E, 0xE4, 0x77, 0x60, 0xEA, 0x0E, 0x77, 0x50, 0x10, 0xEA, 0x0E, 0x77,
  0x30, 0x30, 0xAE, 0x0A, 0x03, 0x76, 0x08, 0xFB, 0x08, 0x74, 0x09, 0xFD, 0x09, 0x72, 0x06, 0xFF,
  0x06, 0x70, 0x10, 0xEF, 0xF0, 0xE0, 0x16, 0x07, 0xFF, 0xA0, 0x76, 0x0B, 0xFF, 0xA0, 0xB6, 0x0E,
  0xFF, 0xA0, 0xE7, 0x77, 0x71, 0xFF, 0xE4, 0xFF, 0xE8, 0x09, 0xE6, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_room_service() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_room_service_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_airport_shuttle 24x24, 4-bit Alpha,  RLE, 87 bytes 
static const uint8_t ic_24_places_airport_shuttle_data[] PROGMEM = {
  0x80, 0x9E, 0x50, 0x04, 0x0E, 0xFF, 0x07, 0x70, 0xEF, 0xFA, 0x07, 0x6A, 0x4A, 0x4A, 0x10, 0x7A,
  0x07, 0x5A, 0x4A, 0x4A, 0x20, 0x7A, 0x07, 0x4A, 0x4A, 0x4A, 0x30, 0x7A, 0x07, 0x3A, 0x4A, 0x4A,
  0x40, 0x7A, 0x07, 0x2F, 0xFF, 0x92, 0xFF, 0xF9, 0x2F, 0xFF, 0x92, 0xC0, 0x09, 0xFA, 0x81, 0xD8,
  0xDC, 0x2B, 0x09, 0x20, 0x9F, 0x98, 0x11, 0x01, 0xC4, 0x0E, 0x09, 0x20, 0x90, 0xE5, 0x85, 0x6F,
  0x10, 0x1F, 0x66, 0x84, 0x8F, 0x99, 0xF8, 0x58, 0x51, 0xED, 0x8D, 0xE1, 0x78, 0x28, 0xEE, 0x87,
  0x83, 0x3C, 0xFC, 0x38, 0x09, 0xF0, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_airport_shuttle() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_airport_shuttle_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_business_center 24x24, 4-bit Alpha,  RLE, 65 bytes 
static const uint8_t ic_24_places_business_center_data[] PROGMEM = {
  0x80, 0x99, 0x50, 0x07, 0xC0, 0x77, 0x73, 0x07, 0xE0, 0x77, 0x72, 0xA4, 0xA7, 0x72, 0xA4, 0xA7,
  0x30, 0x40, 0xEF, 0xFA, 0x0E, 0x04, 0x40, 0xEF, 0xFC, 0x0E, 0x4F, 0xFE, 0x4F, 0xFE, 0x4F, 0xFE,
  0x40, 0xEF, 0x4F, 0x0E, 0x40, 0x40, 0xEE, 0x4E, 0x0E, 0x04, 0x77, 0x77, 0x1F, 0x4F, 0x6F, 0xFC,
  0x6F, 0xFC, 0x6F, 0xFC, 0x60, 0xEF, 0xFA, 0x0E, 0x60, 0x40, 0xEF, 0xF0, 0xE0, 0x48, 0x09, 0x87,
  0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_business_center() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_business_center_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_golf_course 24x24, 4-bit Alpha,  RLE, 83 bytes 
static const uint8_t ic_24_places_golf_course_data[] PROGMEM = {
  0x80, 0xE5, 0x00, 0xB0, 0x47, 0x77, 0x1A, 0x0C, 0x04, 0x77, 0x6C, 0x0C, 0x04, 0x77, 0x4E, 0x0C,
  0x05, 0x77, 0x2E, 0x0A, 0x02, 0x77, 0x2C, 0x0A, 0x02, 0x77, 0x4A, 0x0B, 0x03, 0x77, 0x6A, 0x77,
  0x71, 0xA7, 0x77, 0x1A, 0x77, 0x71, 0xA7, 0x77, 0x1A, 0x77, 0x71, 0xA7, 0x77, 0x1A, 0x77, 0x71,
  0xA7, 0x77, 0x1A, 0x77, 0x40, 0x50, 0x92, 0xA8, 0x2E, 0xC9, 0x43, 0x81, 0x8F, 0x87, 0x0B, 0xA2,
  0xE0, 0xB2, 0xB7, 0x0B, 0xFB, 0x0B, 0x28, 0x18, 0xF8, 0x71, 0x82, 0x49, 0xCE, 0xA8, 0x2E, 0xC9,
  0x48, 0x0E, 0x50,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_golf_course() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_golf_course_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_casino 24x24, 4-bit Alpha,  RLE, 83 bytes 
static const uint8_t ic_24_places_casino_data[] PROGMEM = {
  0x80, 0x98, 0x70, 0x04, 0x0E, 0xFF, 0x0E, 0x04, 0x60, 0xEF, 0xFA, 0x0E, 0x6F, 0xFC, 0x6B, 0x81,
  0x60, 0x7E, 0x81, 0x60, 0x7B, 0x6B, 0x3E, 0x3B, 0x6B, 0x81, 0x70, 0x7E, 0x81, 0x70, 0x7B, 0x6F,
  0xFC, 0x6F, 0x90, 0x09, 0xF9, 0x6F, 0x09, 0x20, 0x9F, 0x6F, 0x09, 0x20, 0x9F, 0x6F, 0x90, 0x09,
  0xF9, 0x6F, 0xFC, 0x6B, 0x81, 0x60, 0x7E, 0x81, 0x60, 0x7B, 0x6B, 0x3E, 0x3B, 0x6B, 0x81, 0x70,
  0x7E, 0x81, 0x70, 0x7B, 0x6F, 0xFC, 0x60, 0xEF, 0xFA, 0x0E, 0x60, 0x40, 0xEF, 0xF0, 0xE0, 0x48,
  0x09, 0x87, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_casino() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_casino_data, Alpha4(color::Black));
  return value;
}

// Image file ic_24_places_child_friendly 24x24, 4-bit Alpha,  RLE, 102 bytes 
static const uint8_t ic_24_places_child_friendly_data[] PROGMEM = {
  0x80, 0xF1, 0x09, 0x81, 0xD9, 0x27, 0x76, 0xC0, 0x97, 0x75, 0xD0, 0xB7, 0x74, 0xE0, 0x97, 0x73,
  0xF0, 0x27, 0x72, 0xF0, 0x97, 0x72, 0xF0, 0xD5, 0xB0, 0xB7, 0xF9, 0x5C, 0x03, 0x77, 0x70, 0x8F,
  0xFA, 0x70, 0x1F, 0xF9, 0x0D, 0x71, 0x09, 0xFF, 0x08, 0x71, 0x02, 0xFF, 0x02, 0x71, 0x01, 0x0D,
  0xFD, 0x09, 0x72, 0x0D, 0xFE, 0x0C, 0x71, 0x84, 0x5F, 0xD1, 0x1D, 0xD8, 0x4D, 0x11, 0xDF, 0x57,
  0x81, 0x7F, 0x82, 0x08, 0xD0, 0x82, 0x81, 0x8F, 0x77, 0x89, 0x75, 0xFD, 0x11, 0xDF, 0x50, 0x5F,
  0xD1, 0x1D, 0xF5, 0x71, 0x0C, 0xC0, 0xC3, 0x0C, 0xC0, 0xC7, 0x28, 0x41, 0x9E, 0xE9, 0x13, 0x84,
  0x19, 0xEE, 0x91, 0x80, 0xE0, 0x00,
};

const RleImage4bppxPolarized<Alpha4, PrgMemResource>& ic_24_places_child_friendly() {
  static RleImage4bppxPolarized<Alpha4, PrgMemResource> value(
      24, 24, ic_24_places_child_friendly_data, Alpha4(color::Black));
  return value;
}

