#include "game.hpp"
#include "alien.hpp"
#include "raylib.h"
#include <vector>
// #include <iostream>

Game::Game() {
  // vector bunkers, which holds 4 bunker objects.
  bunkers = newBunkers();
  aliens = newAliens();
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

  for (auto &alien : aliens) {
    alien.draw();
  }
}

void Game::inputs() {
  if (IsKeyDown(KEY_H))
    spaceship.moveL();
  else if (IsKeyDown(KEY_L))
    spaceship.moveR();
  else if (IsKeyDown(KEY_J))
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

std::vector<Alien> Game::newAliens() {
  std::vector<Alien> aliens;
  for (int r = 0; r < 5; r++) {
    for (int c = 0; c < 11; c++) {
      int alienType;
      if (r == 0)
        alienType = 3;
      else if (r == 1 || r == 2)
        alienType = 2;
      else
        alienType = 1;
      float x = 75 + c * 55;  // cell size
      float y = 100 + r * 55; // cell size
      aliens.push_back(Alien(alienType, {x, y}));
    }
  }
  return aliens;
}
