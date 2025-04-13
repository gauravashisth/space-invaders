#include "game.hpp"
#include "alien.hpp"
#include "raylib.h"
// #include <iostream>

Game::Game() {
  // vector bunkers, which holds 4 bunker objects.
  bunkers = newBunkers();
  aliens = newAliens();

  alien_dir = 1;
  lastAlien_fire = 0.0;

  mystery.spawn();
}
Game::~Game() { Alien::unloadImages(); }

void Game::update() {
  for (auto &laser : spaceship.lasers) {
    laser.update();
  }

  moveAliens();
  alienLaser();
  for (auto &laser : alienLasers) {
    laser.update();
  }

  Dlasers();
  // std::cout << "lasers size: " << spaceship.lasers.size() << '\n';

  mystery.update();
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

  for (auto &laser : alienLasers) {
    laser.draw();
  }

  mystery.draw();
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
  // for alien lasers
  for (auto i = alienLasers.begin(); i != alienLasers.end();) {
    if (!i->active)
      i = alienLasers.erase(i);
    else
      ++i;
  }
}

std::vector<Bunker> Game::newBunkers() {
  int bunker_w = Bunker::grid[0].size() * 3;
  float spacing = (GetScreenWidth() - (4 * bunker_w)) * 0.15;
  int bunker_num = GetScreenWidth() * 0.004; // no. of bunkers drawn

  for (int i = 0; i < bunker_num; i++) {
    // calculates H position of each bunker
    float offsetX = (i + 1) * spacing + i * bunker_w;
    bunkers.push_back(Bunker({offsetX, float(GetScreenHeight() * 0.65)}));
  }
  return bunkers;
}

std::vector<Alien> Game::newAliens() {
  int alien_row = GetScreenHeight() * 0.007;
  int alien_col = GetScreenWidth() * 0.010;
  int pad_H = GetScreenWidth() * 0.024;
  int pad_K = GetScreenHeight() * 0.15;

  std::vector<Alien> aliens;
  for (int r = 0; r < alien_row; r++) {
    for (int c = 0; c < alien_col; c++) {
      int alienType;
      if (r == 0)
        alienType = 3;
      else if (r == 1 || r == 2)
        alienType = 2;
      else
        alienType = 1;
      float x = pad_H + c * 55; // cell size
      float y = pad_K + r * 55; // cell size
      aliens.push_back(Alien(alienType, {x, y}));
    }
  }
  return aliens;
}

void Game::moveAliens() {
  for (auto &alien : aliens) {
    if (alien.position.x + alien.alienImages[alien.type - 1].width >
        GetScreenWidth()) {
      alien_dir = -1;
      moveJAliens(4);
    }
    if (alien.position.x < 0) {
      alien_dir = 1;
      moveJAliens(4);
    }
    alien.update(alien_dir);
  }
}

void Game::moveJAliens(int distance) {
  for (auto &alien : aliens) {
    alien.position.y += distance;
  }
}

void Game::alienLaser() {
  double currentTime = GetTime();
  if (currentTime - lastAlien_fire >= alienLaser_interval && !aliens.empty()) {
    int random_index = GetRandomValue(0, aliens.size() - 1);

    Alien &alien = aliens[random_index];
    alienLasers.push_back(
        Laser({alien.position.x + alien.alienImages[alien.type - 1].width / 2,
               alien.position.y + alien.alienImages[alien.type - 1].height},
              6));

    lastAlien_fire = GetTime();
  }
}
