// kickable_board.c.inc
#include "actors/common0.h"

s32 check_mario_attacking(UNUSED s32 sp18) {
    
}

void init_kickable_board_rock(void) {
    
}

void bhv_kickable_board_loop(void) {
    switch (o->oBehParams2ndByte) {
        case 0:
    o->oAnimations = shadow_sink_anims;
    cur_obj_init_animation(0);
    break;
    case 1: 

    break;
    }
}
