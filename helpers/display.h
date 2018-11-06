#include "fonts.h"

#include <allegro5/allegro5.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_video.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

extern int sw;
extern int sh;

extern ALLEGRO_BITMAP *GAME_ICON;
extern ALLEGRO_BITMAP *GAME_TITLE; // 406x182
extern ALLEGRO_BITMAP *LAS_VEGAS_LANDSCAPE_BITMAP; // 2600x200
extern ALLEGRO_BITMAP *LAS_VEGAS_ROAD_BITMAP; // 1300x500
extern ALLEGRO_BITMAP *FINISH_LINE; // 1295x691
extern ALLEGRO_BITMAP *ROAD_SIGN_LEFT; // 150x150

// Cars
// Octane
extern ALLEGRO_BITMAP *OCTANE_ZSR_ICON_BITMAP; // 187x88
extern ALLEGRO_BITMAP *OCTANE_ZSR_BLUE_BITMAP; // 166x120
extern ALLEGRO_BITMAP *OCTANE_ZSR_RED_BITMAP; // 166x120
extern ALLEGRO_BITMAP *OCTANE_ZSR_GREEN_BITMAP; // 166x120
extern ALLEGRO_BITMAP *OCTANE_ZSR_PURPLE_BITMAP; // 166x120
extern ALLEGRO_BITMAP *OCTANE_ZSR_GREY_BITMAP; // 166x120
extern ALLEGRO_BITMAP *OCTANE_ZSR_BLACK_BITMAP;
extern ALLEGRO_BITMAP *OCTANE_ZSR_YELLOW_BITMAP;
// Dominus
extern ALLEGRO_BITMAP *DOMINUS_GT_ICON_BITMAP; // 239x70
extern ALLEGRO_BITMAP *DOMINUS_GT_BLUE_BITMAP; // 166x103
extern ALLEGRO_BITMAP *DOMINUS_GT_RED_BITMAP; // 166x103
extern ALLEGRO_BITMAP *DOMINUS_GT_GREEN_BITMAP; // 166x103
extern ALLEGRO_BITMAP *DOMINUS_GT_PURPLE_BITMAP; // 166x103
extern ALLEGRO_BITMAP *DOMINUS_GT_GREY_BITMAP; // 166x103
extern ALLEGRO_BITMAP *DOMINUS_GT_BLACK_BITMAP; // 166x103
extern ALLEGRO_BITMAP *DOMINUS_GT_YELLOW_BITMAP; // 166x103
// Roadhog
extern ALLEGRO_BITMAP *ROADHOG_ICON_BITMAP; // 233x116
extern ALLEGRO_BITMAP *ROADHOG_BLUE_BITMAP; // 166x131
extern ALLEGRO_BITMAP *ROADHOG_RED_BITMAP; // 166x131
extern ALLEGRO_BITMAP *ROADHOG_GREEN_BITMAP; // 166x131
extern ALLEGRO_BITMAP *ROADHOG_PURPLE_BITMAP; // 166x131
extern ALLEGRO_BITMAP *ROADHOG_GREY_BITMAP; // 166x131
extern ALLEGRO_BITMAP *ROADHOG_BLACK_BITMAP; // 166x131
extern ALLEGRO_BITMAP *ROADHOG_YELLOW_BITMAP; // 166x131

void init_bitmaps();
float get_bitmap_width(ALLEGRO_BITMAP* bitmap);
float get_bitmap_height(ALLEGRO_BITMAP* bitmap);
void draw_text(char* font_name, int size, ALLEGRO_COLOR color, int position_x, int position_y, int align, char* text, bool flip);
void clear_display(ALLEGRO_COLOR color, bool flip);
void draw_title();
void destroy_bitmaps();
ALLEGRO_BITMAP* get_car(int car, int color);
