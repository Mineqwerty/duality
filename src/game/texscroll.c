#include "types.h"
#include "include/segment_symbols.h"
#include "memory.h"
#include "engine/math_util.h"
#include "src/engine/behavior_script.h"
#include "texscroll.h"

#ifdef TARGET_N64
#define SCROLL_CONDITION(condition) condition
#else
#define SCROLL_CONDITION(condition) 1
#endif


#include "src/game/texscroll/common0_texscroll.inc.c"
#include "src/game/texscroll/sa_texscroll.inc.c"
#include "src/game/texscroll/lll_texscroll.inc.c"
#include "src/game/texscroll/pss_texscroll.inc.c"
#include "src/game/texscroll/bob_texscroll.inc.c"
void scroll_textures() {
	if(SCROLL_CONDITION(sSegmentROMTable[0x8] == (uintptr_t)_common0_yay0SegmentRomStart)) {
		scroll_textures_common0();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_sa_segment_7SegmentRomStart)) {
		scroll_textures_sa();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_lll_segment_7SegmentRomStart)) {
		scroll_textures_lll();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_pss_segment_7SegmentRomStart)) {
		scroll_textures_pss();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_bob_segment_7SegmentRomStart)) {
		scroll_textures_bob();
	}

}
