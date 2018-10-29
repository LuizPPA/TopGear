#include <allegro5/allegro5.h>
#include <allegro5/allegro_image.h>

#define GRASS_SLOW_EFFECT 0.13333333333
#define NO_ACCELERATE_EFFECT 0.05433333333
#define BREAK_EFFECT 0.73
#define WRONG_GEAR_EFFECT 0.00166666666

struct CAR_TYPE {
  float width;
  float height;
  float speed;
  float fuel;
  int gear;
  int max_gear;
  ALLEGRO_BITMAP* texture;
};
typedef struct CAR_TYPE CAR;

CAR new_car();
float speed_increase(int gear, float speed);
float max_speed(int gear);
