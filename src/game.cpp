#include "game.hpp"

game::game() {}
game::~game() {}

void game::draw() { spaceship.draw(); }

void game::inputs() {
  if (IsKeyDown(KEY_LEFT)) {
    spaceship.moveL();
  } else if (IsKeyDown(KEY_RIGHT)) {
    spaceship.moveR();
  }
}
