#include "game.hpp"
#include "raylib.h"

Game::Game() {}
Game::~Game() {}

void Game::update() {
  for (auto &laser : spaceship.lasers) {
    laser.update();
  }
}

void Game::draw() {
  spaceship.draw();

  for (auto &laser : spaceship.lasers) {
    laser.draw();
  }
}

void Game::inputs() {
  if (IsKeyDown(KEY_H))
    spaceship.moveL();
  else if (IsKeyDown(KEY_L))
    spaceship.moveR();
  else if (IsKeyDown(KEY_SPACE))
    spaceship.shoot();
}
