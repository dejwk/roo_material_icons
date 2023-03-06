#include "home.h"

using namespace roo_display;

// Image file ic_round_18_home_auto_mode 18x18, 4-bit Alpha,  RLE, 101 bytes.
static const uint8_t ic_round_18_home_auto_mode_data[] PROGMEM = {
  0x58, 0x64, 0xAD, 0x33, 0xDA, 0x47, 0x18, 0x29, 0xFB, 0x62, 0x82, 0x6B, 0xF9, 0x70, 0x50, 0x46,
  0x04, 0x05, 0x50, 0x90, 0x57, 0x30, 0x50, 0x92, 0x81, 0x3F, 0x47, 0x38, 0x44, 0xF4, 0x0A, 0xB5,
  0x00, 0x75, 0x83, 0xBA, 0x0D, 0x65, 0x00, 0xE5, 0x82, 0x6D, 0x03, 0x40, 0x70, 0xEA, 0x0E, 0x07,
  0x40, 0x36, 0x07, 0x0E, 0xA0, 0xE0, 0x77, 0x60, 0x0E, 0x71, 0x0F, 0xB0, 0xA3, 0x00, 0x75, 0x81,
  0x73, 0x1A, 0x0C, 0x08, 0x72, 0x86, 0x4F, 0x31, 0xFD, 0xE2, 0x71, 0x89, 0x02, 0xD9, 0x01, 0xF4,
  0xCE, 0x46, 0x82, 0x4E, 0xC1, 0x20, 0x62, 0x89, 0x0A, 0xFC, 0x74, 0x57, 0xCF, 0xA7, 0x18, 0x13,
  0xAE, 0xA8, 0x1D, 0xA3, 0x40,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_auto_mode() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(0, 1, 16, 16), Box(0, 0, 17, 17),
      ic_round_18_home_auto_mode_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_blinds_closed 18x18, 4-bit Alpha,  RLE, 89 bytes.
static const uint8_t ic_round_18_home_blinds_closed_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x40, 0x60, 0xE4, 0x84, 0x1F, 0x30, 0xE6, 0x48,
  0x92, 0x6F, 0x55, 0x55, 0x6F, 0x85, 0xF6, 0x40, 0x6F, 0xB0, 0x64, 0x06, 0x0E, 0x48, 0x41, 0xF3,
  0x0E, 0x64, 0x89, 0x26, 0xF9, 0x99, 0x9A, 0xFB, 0x9F, 0x64, 0x89, 0x26, 0xF9, 0x99, 0x9A, 0xFB,
  0x9F, 0x64, 0x06, 0x0E, 0x48, 0x41, 0xF3, 0x0E, 0x64, 0x06, 0xFB, 0x06, 0x48, 0x92, 0x6F, 0x55,
  0x55, 0x6F, 0x85, 0xF6, 0x40, 0x60, 0xE4, 0x84, 0x1F, 0x30, 0xE6, 0x20, 0x1F, 0xF0, 0x11, 0x80,
  0x33, 0x81, 0x9F, 0xB8, 0x00, 0x37, 0x30, 0x50, 0x15,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_blinds_closed() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 16), Box(0, 0, 17, 17),
      ic_round_18_home_blinds_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_blinds 18x18, 4-bit Alpha,  RLE, 83 bytes.
static const uint8_t ic_round_18_home_blinds_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x40, 0x60, 0xE4, 0x84, 0x1F, 0x30, 0xE6, 0x48,
  0x92, 0x6F, 0x55, 0x55, 0x6F, 0x85, 0xF6, 0x40, 0x6F, 0xB0, 0x64, 0x06, 0x0E, 0x48, 0x41, 0xF3,
  0x0E, 0x64, 0x89, 0x26, 0xF9, 0x99, 0x9A, 0xFB, 0x9F, 0x64, 0x89, 0x26, 0xF9, 0x99, 0x9A, 0xFB,
  0x9F, 0x64, 0x06, 0x0E, 0x48, 0x41, 0xF3, 0x0E, 0x64, 0x06, 0x0E, 0x48, 0x46, 0xF8, 0x0E, 0x64,
  0x06, 0x0E, 0x48, 0x44, 0xF7, 0x0E, 0x64, 0x06, 0x0E, 0x71, 0x0E, 0x06, 0x20, 0x1F, 0xF0, 0x11,
  0x80, 0x92, 0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_blinds() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_round_18_home_blinds_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_broadcast_on_home 18x18, 4-bit Alpha,  RLE, 93 bytes.
static const uint8_t ic_round_18_home_broadcast_on_home_data[] PROGMEM = {
  0x38, 0x07, 0x50, 0x34, 0x03, 0xFD, 0x01, 0x77, 0x81, 0x2F, 0x32, 0x02, 0x0F, 0x37, 0x18, 0x31,
  0xF3, 0x01, 0xC0, 0xA3, 0x89, 0x43, 0x9B, 0xA5, 0x31, 0x03, 0xF3, 0x1A, 0xB2, 0x85, 0x7C, 0x43,
  0x4B, 0xA2, 0x89, 0x83, 0x3F, 0x20, 0x9B, 0x04, 0xB2, 0xAE, 0xC3, 0xA7, 0x03, 0xF2, 0x09, 0xB0,
  0xA3, 0xB5, 0x13, 0xD1, 0xD0, 0x3F, 0x20, 0x9B, 0x0D, 0x1D, 0x3F, 0x6A, 0x3D, 0x13, 0xF2, 0x09,
  0xB0, 0xC1, 0xE1, 0xE2, 0xC2, 0xD0, 0x2C, 0x89, 0x1A, 0x07, 0x73, 0x0D, 0x04, 0x5A, 0x28, 0x34,
  0x55, 0x51, 0x20, 0x72, 0x0D, 0x20, 0x80, 0x17, 0x50, 0xC7, 0x72, 0x01, 0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_broadcast_on_home() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 3, 17, 16), Box(0, 0, 17, 17),
      ic_round_18_home_broadcast_on_home_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_broadcast_on_personal 18x18, 4-bit Alpha,  RLE, 87 bytes.
static const uint8_t ic_round_18_home_broadcast_on_personal_data[] PROGMEM = {
  0x60, 0x17, 0x68, 0x21, 0xBE, 0x57, 0x40, 0x40, 0xEB, 0x08, 0x72, 0x08, 0xE0, 0xC0, 0x25, 0x01,
  0x0B, 0xF0, 0xC0, 0x65, 0x03, 0xE8, 0x5E, 0x53, 0x8B, 0x95, 0x20, 0x3E, 0x89, 0x05, 0x7C, 0x52,
  0x4B, 0xA0, 0x3D, 0x89, 0x1B, 0x3C, 0x2B, 0xEC, 0x39, 0x63, 0xD8, 0x91, 0x6A, 0x4B, 0x51, 0x3D,
  0x1D, 0x3D, 0x89, 0x13, 0xD1, 0xD2, 0xF5, 0xA3, 0xD3, 0xD8, 0x91, 0x4C, 0x2D, 0x1E, 0x2C, 0x1D,
  0x3D, 0x89, 0x18, 0x78, 0x40, 0xD1, 0x55, 0xA3, 0xD8, 0x1E, 0x29, 0x20, 0xD2, 0x0A, 0x02, 0x18,
  0x02, 0x30, 0x13, 0x0D, 0x77, 0x10, 0x34,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_broadcast_on_personal() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 16), Box(0, 0, 17, 17),
      ic_round_18_home_broadcast_on_personal_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_curtains_closed 18x18, 4-bit Alpha,  RLE, 65 bytes.
static const uint8_t ic_round_18_home_curtains_closed_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x40, 0x6C, 0x00, 0x1C, 0x06, 0x40, 0x6C, 0x00,
  0x1C, 0x06, 0x40, 0x6C, 0x00, 0x1C, 0x06, 0x40, 0x6C, 0x00, 0x1C, 0x06, 0x40, 0x6C, 0x00, 0x1C,
  0x06, 0x40, 0x6C, 0x00, 0x1C, 0x06, 0x40, 0x6C, 0x00, 0x1C, 0x06, 0x40, 0x6C, 0x00, 0x1C, 0x06,
  0x40, 0x6C, 0x00, 0x1C, 0x06, 0x40, 0x6C, 0x00, 0x1C, 0x06, 0x20, 0x1F, 0xF0, 0x11, 0x80, 0x92,
  0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_curtains_closed() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_round_18_home_curtains_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_curtains 18x18, 4-bit Alpha,  RLE, 71 bytes.
static const uint8_t ic_round_18_home_curtains_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x40, 0x6F, 0xB0, 0x64, 0x06, 0xC0, 0x0E, 0xC0,
  0x64, 0x06, 0xC0, 0x08, 0xC0, 0x64, 0x06, 0xB8, 0x2E, 0x11, 0xEB, 0x06, 0x40, 0x6A, 0x0E, 0x03,
  0x20, 0x30, 0xEA, 0x06, 0x40, 0x6A, 0x0E, 0x03, 0x20, 0x30, 0xEA, 0x06, 0x40, 0x6B, 0x82, 0xE1,
  0x1E, 0xB0, 0x64, 0x06, 0xC0, 0x08, 0xC0, 0x64, 0x06, 0xC0, 0x0E, 0xC0, 0x64, 0x06, 0xFB, 0x06,
  0x20, 0x1F, 0xF0, 0x11, 0x80, 0x92, 0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_curtains() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_round_18_home_curtains_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_electric_bolt 18x18, 4-bit Alpha,  RLE, 59 bytes.
static const uint8_t ic_round_18_home_electric_bolt_data[] PROGMEM = {
  0x78, 0x12, 0xD9, 0x73, 0x82, 0x2D, 0xF2, 0x72, 0x82, 0x3E, 0xF7, 0x72, 0x82, 0x4E, 0xFB, 0x72,
  0x05, 0xA0, 0xE0, 0x17, 0x10, 0x6B, 0x83, 0xA3, 0x31, 0x14, 0x07, 0xFB, 0x82, 0xE2, 0x2E, 0xFB,
  0x07, 0x48, 0x31, 0x13, 0x3A, 0xB0, 0x67, 0x10, 0x10, 0xEA, 0x05, 0x72, 0x82, 0xBF, 0xE4, 0x72,
  0x82, 0x7F, 0xE3, 0x72, 0x82, 0x2F, 0xD2, 0x73, 0x81, 0x9D, 0x27,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_electric_bolt() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_round_18_home_electric_bolt_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_electric_meter 18x18, 4-bit Alpha,  RLE, 83 bytes.
static const uint8_t ic_round_18_home_electric_meter_data[] PROGMEM = {
  0x60, 0x02, 0x72, 0x81, 0x19, 0xEA, 0x81, 0xEA, 0x25, 0x04, 0x0E, 0xE0, 0xE0, 0x43, 0x02, 0x0E,
  0xF9, 0x0E, 0x02, 0x20, 0xAA, 0x84, 0xB5, 0x55, 0x5B, 0xA8, 0x1B, 0x01, 0xB8, 0x49, 0x33, 0x33,
  0x9B, 0x01, 0x03, 0xE0, 0xCD, 0x00, 0x3D, 0x81, 0x80, 0xCC, 0x03, 0x01, 0xC8, 0x2B, 0x01, 0xEC,
  0x81, 0x10, 0xBC, 0x81, 0x10, 0xCB, 0x0B, 0x20, 0x3B, 0x81, 0xC0, 0xBC, 0x03, 0x30, 0x6F, 0x90,
  0x65, 0x04, 0x0C, 0xC0, 0xC0, 0x47, 0x84, 0x3F, 0x66, 0xF3, 0x71, 0x84, 0x3F, 0x11, 0xF3, 0x72,
  0x01, 0x20, 0x15,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_electric_meter() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(2, 1, 15, 16), Box(0, 0, 17, 17),
      ic_round_18_home_electric_meter_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_energy_savings_leaf 18x18, 4-bit Alpha,  RLE, 76 bytes.
static const uint8_t ic_round_18_home_energy_savings_leaf_data[] PROGMEM = {
  0x50, 0x18, 0x02, 0x30, 0x24, 0x03, 0x0B, 0xF9, 0x02, 0x20, 0x5F, 0xB8, 0x14, 0x03, 0xD0, 0xC0,
  0xBC, 0x81, 0x40, 0xBC, 0x81, 0xC2, 0xDC, 0x04, 0x01, 0xC8, 0x1B, 0x0B, 0xD0, 0x40, 0x3B, 0x84,
  0xA0, 0x15, 0x6A, 0xB0, 0x40, 0x3B, 0x84, 0xA6, 0x51, 0x0A, 0xB0, 0x30, 0x1D, 0x81, 0xB0, 0xBC,
  0x81, 0x10, 0xBB, 0x81, 0xD2, 0xBC, 0x0B, 0x20, 0x3B, 0x0B, 0x0C, 0xD0, 0x32, 0x07, 0xFA, 0x05,
  0x28, 0x32, 0xF7, 0x3B, 0xC0, 0xB0, 0x34, 0x02, 0x38, 0x21, 0x33, 0x15,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_energy_savings_leaf() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_round_18_home_energy_savings_leaf_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_gas_meter 18x18, 4-bit Alpha,  RLE, 73 bytes.
static const uint8_t ic_round_18_home_gas_meter_data[] PROGMEM = {
  0x40, 0x12, 0x01, 0x78, 0x43, 0xF1, 0x1F, 0x34, 0x89, 0x32, 0xAD, 0xFD, 0xDF, 0xDA, 0x20, 0x1E,
  0xF9, 0x81, 0xE1, 0x5B, 0x80, 0x0D, 0xB0, 0x50, 0x6A, 0x06, 0x40, 0x6A, 0x00, 0x6A, 0x84, 0xEB,
  0xBB, 0xBE, 0xA0, 0x06, 0xC0, 0x0E, 0xC0, 0x06, 0xB8, 0x2E, 0x33, 0xEB, 0x00, 0x6B, 0x06, 0x20,
  0x6B, 0x00, 0x6B, 0x04, 0x20, 0x4B, 0x00, 0x6B, 0x82, 0xB1, 0x1B, 0xB0, 0x60, 0x5F, 0xB0, 0x50,
  0x2F, 0xB8, 0x12, 0x06, 0xF9, 0x06, 0x48, 0x02, 0x33,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_gas_meter() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(3, 1, 14, 16), Box(0, 0, 17, 17),
      ic_round_18_home_gas_meter_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_heat_pump 18x18, 4-bit Alpha,  RLE, 74 bytes.
static const uint8_t ic_round_18_home_heat_pump_data[] PROGMEM = {
  0x10, 0x28, 0x06, 0x38, 0x12, 0x02, 0xFD, 0x02, 0x04, 0xFD, 0x00, 0x4C, 0x82, 0xED, 0xDE, 0xC0,
  0x04, 0xC8, 0x24, 0x66, 0x4C, 0x00, 0x4A, 0x86, 0xE4, 0xDA, 0xAD, 0x4E, 0xA0, 0x04, 0xA8, 0x6D,
  0x7A, 0xAA, 0xA7, 0xDA, 0x00, 0x4A, 0x86, 0xD7, 0xAA, 0xAA, 0x7D, 0xA0, 0x04, 0xA8, 0x6E, 0x4D,
  0xAA, 0xD4, 0xEA, 0x00, 0x4C, 0x82, 0x46, 0x64, 0xC0, 0x04, 0xC8, 0x2E, 0xDD, 0xEC, 0x00, 0x4F,
  0xD0, 0x40, 0x2F, 0xD8, 0x12, 0x02, 0x80, 0x63, 0x02, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_heat_pump() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_round_18_home_heat_pump_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_mode_fan_off 18x18, 4-bit Alpha,  RLE, 88 bytes.
static const uint8_t ic_round_18_home_mode_fan_off_data[] PROGMEM = {
  0x71, 0x01, 0x02, 0x75, 0x06, 0x0E, 0xA0, 0x96, 0x0E, 0x07, 0x20, 0x4D, 0x68, 0x36, 0xF7, 0x07,
  0xC0, 0xC7, 0x83, 0x6F, 0x70, 0x9A, 0x0D, 0x01, 0x60, 0x9B, 0x87, 0x70, 0x9F, 0x53, 0x89, 0x52,
  0x02, 0xD8, 0x17, 0x09, 0xD8, 0x16, 0x01, 0xE8, 0x17, 0x09, 0xC0, 0xE2, 0x0E, 0xE8, 0x17, 0x09,
  0xC8, 0x11, 0x06, 0xF8, 0x17, 0x09, 0xB0, 0x22, 0x83, 0x59, 0x83, 0x5B, 0x83, 0x70, 0x9F, 0x96,
  0x01, 0x0D, 0xC0, 0x77, 0x20, 0xCC, 0x81, 0xDF, 0x77, 0x1D, 0x82, 0x46, 0xF7, 0x70, 0x9A, 0x0E,
  0x06, 0x20, 0x60, 0xE7, 0x10, 0x20, 0x17, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_mode_fan_off() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_round_18_home_mode_fan_off_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_nest_cam_wired_stand 18x18, 4-bit Alpha,  RLE, 61 bytes.
static const uint8_t ic_round_18_home_nest_cam_wired_stand_data[] PROGMEM = {
  0x38, 0x90, 0x49, 0xBD, 0xFE, 0x30, 0x1B, 0xE8, 0x17, 0x0A, 0xF0, 0x70, 0x2F, 0x90, 0x70, 0x6F,
  0x90, 0x70, 0x6F, 0x90, 0x70, 0x3F, 0x98, 0x17, 0x0B, 0xF8, 0x27, 0x01, 0xCE, 0x07, 0x38, 0x16,
  0xBE, 0xB0, 0x44, 0x83, 0x37, 0xF5, 0x23, 0x03, 0x0D, 0xA0, 0xE0, 0x43, 0x01, 0x0E, 0xC0, 0xE0,
  0x12, 0x06, 0xE0, 0x72, 0x09, 0xE0, 0x92, 0x08, 0xE0, 0x83, 0x80, 0x21, 0x20,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_nest_cam_wired_stand() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(4, 1, 13, 17), Box(0, 0, 17, 17),
      ic_round_18_home_nest_cam_wired_stand_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_oil_barrel 18x18, 4-bit Alpha,  RLE, 61 bytes.
static const uint8_t ic_round_18_home_oil_barrel_data[] PROGMEM = {
  0x18, 0x09, 0x03, 0x10, 0x2F, 0xD0, 0x22, 0x0E, 0xF9, 0x0E, 0x40, 0xEF, 0x90, 0xE4, 0x0E, 0xF9,
  0x0E, 0x40, 0xEB, 0x00, 0x4B, 0x0E, 0x20, 0x10, 0x9B, 0x06, 0x20, 0x6B, 0x82, 0x91, 0x19, 0xB4,
  0xB0, 0x90, 0x12, 0x0E, 0xA0, 0x32, 0x03, 0xA0, 0xE4, 0x0E, 0xA8, 0x2D, 0x66, 0xDA, 0x0E, 0x40,
  0xEF, 0x90, 0xE4, 0x0E, 0xF9, 0x0E, 0x20, 0x2F, 0xD0, 0x21, 0x80, 0x90, 0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_oil_barrel() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_round_18_home_oil_barrel_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_propane 18x18, 4-bit Alpha,  RLE, 60 bytes.
static const uint8_t ic_round_18_home_propane_data[] PROGMEM = {
  0x58, 0x42, 0xAB, 0xBA, 0x27, 0x38, 0x4A, 0xD9, 0x9D, 0xA7, 0x18, 0x90, 0x47, 0xDC, 0x77, 0xCD,
  0x74, 0x40, 0x50, 0xEF, 0xB8, 0x2E, 0x50, 0x3F, 0xF0, 0x30, 0xBF, 0xF0, 0xBF, 0xFF, 0xFC, 0x0C,
  0xFF, 0x0C, 0x04, 0xFF, 0x82, 0x40, 0x6E, 0xFB, 0x0E, 0x06, 0x38, 0x92, 0x15, 0xCD, 0x77, 0x77,
  0xDC, 0x51, 0x60, 0x80, 0xB4, 0x0B, 0x08, 0x71, 0x00, 0x14, 0x00, 0x14,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_propane() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_round_18_home_propane_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_propane_tank 18x18, 4-bit Alpha,  RLE, 54 bytes.
static const uint8_t ic_round_18_home_propane_tank_data[] PROGMEM = {
  0x38, 0x42, 0x33, 0x33, 0x25, 0x05, 0xE0, 0x54, 0x86, 0x9C, 0x12, 0x21, 0xC9, 0x48, 0x6A, 0xD7,
  0xCC, 0x7D, 0xA3, 0x0B, 0xF9, 0x81, 0xB0, 0x4F, 0xB0, 0x40, 0x6F, 0xB0, 0x06, 0xFB, 0x06, 0x03,
  0x80, 0x69, 0x03, 0x75, 0x06, 0xFB, 0x00, 0x6F, 0xB0, 0x60, 0x5F, 0xB0, 0x50, 0x2F, 0xB8, 0x12,
  0x06, 0xF9, 0x06, 0x48, 0x02, 0x33,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_propane_tank() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(3, 1, 14, 16), Box(0, 0, 17, 17),
      ic_round_18_home_propane_tank_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_roller_shades_closed 18x18, 4-bit Alpha,  RLE, 65 bytes.
static const uint8_t ic_round_18_home_roller_shades_closed_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x40, 0x6F, 0xB0, 0x64, 0x06, 0xFB, 0x06, 0x40,
  0x6F, 0xB0, 0x64, 0x06, 0xFB, 0x06, 0x40, 0x6F, 0xB0, 0x64, 0x06, 0xFB, 0x06, 0x40, 0x6F, 0xB0,
  0x64, 0x06, 0xFB, 0x06, 0x48, 0x92, 0x6F, 0x99, 0x9D, 0xD9, 0x99, 0xF6, 0x40, 0x60, 0xE3, 0x00,
  0xA3, 0x0E, 0x06, 0x20, 0x1F, 0xF0, 0x11, 0x80, 0x13, 0x04, 0xA0, 0x48, 0x01, 0x37, 0x10, 0x03,
  0x70,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_roller_shades_closed() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 16), Box(0, 0, 17, 17),
      ic_round_18_home_roller_shades_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_roller_shades 18x18, 4-bit Alpha,  RLE, 67 bytes.
static const uint8_t ic_round_18_home_roller_shades_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x40, 0x6F, 0xB0, 0x64, 0x06, 0xFB, 0x06, 0x40,
  0x6F, 0xB0, 0x64, 0x06, 0xFB, 0x06, 0x40, 0x6F, 0xB0, 0x64, 0x89, 0x26, 0xF9, 0x99, 0xDD, 0x99,
  0x9F, 0x64, 0x06, 0x0E, 0x30, 0x0A, 0x30, 0xE0, 0x64, 0x06, 0x0E, 0x30, 0x0E, 0x30, 0xE0, 0x64,
  0x06, 0x0E, 0x30, 0x0D, 0x30, 0xE0, 0x64, 0x06, 0x0E, 0x71, 0x0E, 0x06, 0x20, 0x1F, 0xF0, 0x11,
  0x80, 0x92, 0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_roller_shades() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_round_18_home_roller_shades_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_sensor_door 18x18, 4-bit Alpha,  RLE, 42 bytes.
static const uint8_t ic_round_18_home_sensor_door_data[] PROGMEM = {
  0x18, 0x06, 0x31, 0x05, 0xFB, 0x05, 0x06, 0xFB, 0x00, 0x6F, 0xB0, 0x06, 0xFB, 0x00, 0x6F, 0xB0,
  0x06, 0xE8, 0x4E, 0x3A, 0xF6, 0x6E, 0x84, 0xE3, 0xAF, 0x66, 0xFB, 0x00, 0x6F, 0xB0, 0x06, 0xFB,
  0x00, 0x6F, 0xB0, 0x60, 0x5F, 0xB0, 0x51, 0x80, 0x63, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_sensor_door() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(3, 2, 14, 15), Box(0, 0, 17, 17),
      ic_round_18_home_sensor_door_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_sensor_occupied 18x18, 4-bit Alpha,  RLE, 85 bytes.
static const uint8_t ic_round_18_home_sensor_occupied_data[] PROGMEM = {
  0x28, 0x12, 0xBB, 0x68, 0x1B, 0xB2, 0x38, 0x23, 0xEC, 0x36, 0x86, 0x3C, 0xE3, 0x02, 0xEA, 0x40,
  0x04, 0x48, 0x3A, 0xE2, 0xBC, 0x40, 0xBA, 0x0B, 0x48, 0x2C, 0xBB, 0x33, 0x02, 0xC0, 0x23, 0x03,
  0x0B, 0x50, 0x1C, 0x01, 0x74, 0x06, 0xA0, 0x67, 0x77, 0x58, 0x61, 0x8C, 0xEE, 0xC8, 0x17, 0x03,
  0x0E, 0xE0, 0xE0, 0x36, 0x07, 0xF9, 0x07, 0x38, 0x2B, 0x30, 0x38, 0x04, 0x98, 0x43, 0x03, 0xBB,
  0xC7, 0x58, 0x3C, 0xB2, 0xEA, 0x73, 0x86, 0xAE, 0x20, 0x3E, 0xC3, 0x68, 0x23, 0xCE, 0x33, 0x81,
  0x2B, 0xB6, 0x81, 0xBB, 0x22,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_sensor_occupied() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_round_18_home_sensor_occupied_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_sensor_window 18x18, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_round_18_home_sensor_window_data[] PROGMEM = {
  0x18, 0x06, 0x31, 0x05, 0x0C, 0x80, 0x49, 0x83, 0xC5, 0x67, 0x48, 0x02, 0x78, 0x44, 0x76, 0x67,
  0x9E, 0x84, 0x97, 0x66, 0x79, 0xE8, 0x97, 0x97, 0x66, 0x79, 0xFB, 0x33, 0xBF, 0x97, 0x66, 0x70,
  0xF1, 0x20, 0xF1, 0x83, 0x76, 0x67, 0x9E, 0x84, 0x97, 0x66, 0x79, 0xE8, 0x49, 0x76, 0x67, 0x9E,
  0x84, 0x97, 0x66, 0x79, 0xE8, 0x49, 0x76, 0x67, 0x48, 0x02, 0x78, 0x34, 0x76, 0x5C, 0x80, 0x49,
  0x0C, 0x05, 0x18, 0x06, 0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_sensor_window() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(3, 2, 14, 15), Box(0, 0, 17, 17),
      ic_round_18_home_sensor_window_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_shield_moon 18x18, 4-bit Alpha,  RLE, 71 bytes.
static const uint8_t ic_round_18_home_shield_moon_data[] PROGMEM = {
  0x38, 0x43, 0x9E, 0xE9, 0x34, 0x07, 0x0D, 0xE8, 0x2D, 0x70, 0xAF, 0xB0, 0xA0, 0xDB, 0x81, 0xD7,
  0xEC, 0x00, 0xDA, 0x0D, 0x01, 0x1D, 0x00, 0xDA, 0x05, 0x20, 0xEC, 0x0D, 0x0C, 0xA0, 0x32, 0x09,
  0xC0, 0xC0, 0xBA, 0x06, 0x30, 0x9B, 0x0B, 0x08, 0xA0, 0xD0, 0x13, 0x05, 0xA0, 0x80, 0x2B, 0x82,
  0xD7, 0x59, 0xB8, 0x12, 0x0A, 0xF9, 0x0A, 0x20, 0x10, 0xEE, 0x0E, 0x01, 0x30, 0x20, 0xDC, 0x0D,
  0x02, 0x50, 0x10, 0x9A, 0x09, 0x01, 0x30,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_shield_moon() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(3, 2, 14, 15), Box(0, 0, 17, 17),
      ic_round_18_home_shield_moon_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_solar_power 18x18, 4-bit Alpha,  RLE, 84 bytes.
static const uint8_t ic_round_18_home_solar_power_data[] PROGMEM = {
  0x18, 0x11, 0x02, 0x80, 0x23, 0x86, 0x20, 0x10, 0x3F, 0x67, 0xE8, 0x77, 0x6F, 0x30, 0x20, 0x2E,
  0xC8, 0x2E, 0x20, 0x25, 0x05, 0x0E, 0xA0, 0xE0, 0x56, 0x89, 0x08, 0xA0, 0x14, 0x41, 0x0A, 0x84,
  0x06, 0x03, 0x20, 0x05, 0x20, 0x30, 0x67, 0x10, 0x09, 0x77, 0x70, 0xAC, 0x00, 0x5C, 0x81, 0xA0,
  0x2D, 0x00, 0x5D, 0x02, 0x04, 0x80, 0x1D, 0x00, 0x48, 0x01, 0xD0, 0x47, 0x70, 0x88, 0x01, 0xB0,
  0x03, 0x80, 0x1B, 0x08, 0x0D, 0xD0, 0x05, 0xD0, 0xD0, 0xAD, 0x00, 0x5D, 0x0A, 0x18, 0x01, 0x30,
  0x01, 0x80, 0x13, 0x10,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_solar_power() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(2, 1, 15, 16), Box(0, 0, 17, 17),
      ic_round_18_home_solar_power_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_vertical_shades_closed 18x18, 4-bit Alpha,  RLE, 95 bytes.
static const uint8_t ic_round_18_home_vertical_shades_closed_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6,
  0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6, 0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6,
  0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6, 0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6,
  0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6, 0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6,
  0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6, 0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6,
  0x48, 0x92, 0x6E, 0x0F, 0x4A, 0xA4, 0xF0, 0xE6, 0x20, 0x1F, 0xF0, 0x11, 0x80, 0x92, 0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_vertical_shades_closed() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_round_18_home_vertical_shades_closed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_vertical_shades 18x18, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_round_18_home_vertical_shades_data[] PROGMEM = {
  0x30, 0x28, 0x04, 0x30, 0x25, 0x03, 0xFB, 0x03, 0x40, 0x6B, 0x0A, 0x20, 0xAB, 0x06, 0x40, 0x6B,
  0x0A, 0x20, 0xAB, 0x06, 0x40, 0x6B, 0x0A, 0x20, 0xAB, 0x06, 0x40, 0x6B, 0x0A, 0x20, 0xAB, 0x06,
  0x40, 0x6B, 0x0A, 0x20, 0xAB, 0x06, 0x40, 0x6B, 0x0A, 0x20, 0xAB, 0x06, 0x40, 0x6B, 0x0A, 0x20,
  0xAB, 0x06, 0x40, 0x6B, 0x0A, 0x20, 0xAB, 0x06, 0x40, 0x6B, 0x0A, 0x20, 0xAB, 0x06, 0x40, 0x6B,
  0x0A, 0x20, 0xAB, 0x06, 0x20, 0x1F, 0xF0, 0x11, 0x80, 0x92, 0x31,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_vertical_shades() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 2, 16, 15), Box(0, 0, 17, 17),
      ic_round_18_home_vertical_shades_data, Alpha4(color::Black));
  return value;
}

// Image file ic_round_18_home_wind_power 18x18, 4-bit Alpha,  RLE, 97 bytes.
static const uint8_t ic_round_18_home_wind_power_data[] PROGMEM = {
  0x74, 0x08, 0x07, 0x58, 0x00, 0x33, 0x01, 0x0C, 0xA0, 0x73, 0x02, 0xC8, 0x21, 0x01, 0xDB, 0x07,
  0x73, 0x0C, 0xB0, 0xE3, 0x0F, 0x15, 0xC0, 0x53, 0xB0, 0x64, 0xB0, 0xB4, 0x81, 0x23, 0x35, 0x82,
  0xAE, 0xF2, 0x40, 0x78, 0x01, 0xD8, 0x39, 0x16, 0x16, 0x5E, 0x83, 0x4C, 0xFA, 0x15, 0x0C, 0xD8,
  0x65, 0xAF, 0x96, 0xFC, 0x23, 0x89, 0x06, 0xAE, 0xFE, 0x40, 0x32, 0xDA, 0x0B, 0x60, 0x32, 0x81,
  0x3D, 0xCC, 0x04, 0x71, 0x82, 0x3F, 0x2B, 0xB0, 0xC2, 0x02, 0xB8, 0x52, 0x03, 0xF1, 0x0B, 0xB0,
  0x12, 0x0F, 0x32, 0x81, 0x6F, 0x52, 0x81, 0xBF, 0xC7, 0x09, 0xB0, 0x72, 0x02, 0x71, 0x80, 0x11,
  0x50,
};

const RleImage4bppxBiased<Alpha4, PrgMemResource>& ic_round_18_home_wind_power() {
  static RleImage4bppxBiased<Alpha4, PrgMemResource> value(
      Box(1, 1, 16, 17), Box(0, 0, 17, 17),
      ic_round_18_home_wind_power_data, Alpha4(color::Black));
  return value;
}
