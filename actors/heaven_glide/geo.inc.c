#include "src/game/envfx_snow.h"

const GeoLayout heaven_glide_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, heaven_glide_Plane_mesh),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, heaven_glide_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
