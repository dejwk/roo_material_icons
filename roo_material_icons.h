#pragma once

#include "roo_display/core/color.h"
#include "roo_display/core/drawable.h"
#include "roo_display/image/image.h"

namespace roo_display {

typedef RleImage4bppxBiased<Alpha4, PrgMemResource> MaterialIconDef;

class MaterialIcon : public Drawable {
 public:
  MaterialIcon(const MaterialIconDef& icon, Color color = color::Black)
      : icon_(icon), color_(color) {}

  Box extents() const override { return icon_.extents(); }

  void setColor(Color color) { color_ = color; }

 private:
  void drawTo(const Surface& s) const override;

  const MaterialIconDef& icon_;
  Color color_;
};

}  // namespace roo_display
