#include "sounds.h"
#include "display.h"

#include <stdio.h>
#include <allegro5/allegro5.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_video.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

extern float fps;
extern bool colisions;
extern bool debug;
extern bool ai_pilots;
extern float movement_speed;

extern ALLEGRO_DISPLAY* display;
extern ALLEGRO_EVENT_QUEUE* queue;
extern ALLEGRO_TIMER* timer;
extern ALLEGRO_KEYBOARD_STATE key_state;

void init_environment();
void setup_sounds();
void setup_display();
void setup_events();
void destroy_environment();
