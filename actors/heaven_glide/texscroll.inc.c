void scroll_heaven_glide_Plane_mesh_vtx_0() {
	int i = 0;
	int count = 32;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(heaven_glide_Plane_mesh_vtx_0);

	deltaY = (int)(0.7300000190734863 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_actor_geo_heaven_glide() {
	scroll_heaven_glide_Plane_mesh_vtx_0();

}
