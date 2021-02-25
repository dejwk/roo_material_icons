#include "roo_material_icons.h"

namespace roo_display {

void MaterialIcon::drawTo(const Surface& s) const {
  MaterialIconDef recolored(
      MaterialIconDef(icon_.extents(), icon_.resource(), Alpha4(color_)));
  s.drawObject(recolored);
}

}  // namespace roo_display
