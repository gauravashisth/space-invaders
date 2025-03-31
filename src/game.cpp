#include "game.hpp"
#include "raylib.h"
// #include <iostream>

Game::Game() {
  // vector bunkers, which holds 4 bunker objects.
  bunkers = newBunkers();
}
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

  for (auto &bunker : bunkers) {
    bunker.draw();
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

std::vector<Bunker> Game::newBunkers() {
  int bunker_w = Bunker::grid[0].size() * 3;
  float spacing = (GetScreenWidth() - (4 * bunker_w)) * 0.2;

  for (int i = 0; i < 4; i++) {
    // calculates H position of each bunker
    float offsetX = (i + 1) * spacing + i * bunker_w;
    bunkers.push_back(Bunker({offsetX, float(GetScreenHeight() * 0.65)}));
  }
  return bunkers;
}
