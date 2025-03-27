#include "game.hpp"
#include "raylib.h"

game::game() {}
game::~game() {}

void game::draw() { spaceship.draw(); }

void game::inputs() {
  if (IsKeyDown(KEY_H)) {
    spaceship.moveL();
  } else if (IsKeyDown(KEY_L)) {
    spaceship.moveR();
  }
}
