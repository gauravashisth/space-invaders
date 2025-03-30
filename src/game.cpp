#include "game.hpp"
#include "raylib.h"
// #include <iostream>

Game::Game() {}
Game::~Game() {}

void Game::update() {
  for (auto &laser : spaceship.lasers) {
    laser.update();
  }
  Dlasers();
  // std::cout << "lasers size: " << spaceship.lasers.size() << '\n';
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

// remove inactive lasers from "lasers" vector
void Game::Dlasers() {
  for (auto i = spaceship.lasers.begin(); i != spaceship.lasers.end();) {
    if (!i->active)
      i = spaceship.lasers.erase(i);
    else
      ++i;
  }
}
