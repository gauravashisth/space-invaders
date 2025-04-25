#include "game.hpp"
#include "alien.hpp"
#include "raylib.h"
#include <iostream>
// #include <iostream>

Game::Game() { initGame(); }
Game::~Game() { Alien::unloadImages(); }

void Game::update() {
  if (run) {

    double currentTime = GetTime();
    if (currentTime - mystery_last_spawn > mystry_spawn_interval) {
      mystery.spawn();
      mystery_last_spawn = GetTime();
      mystry_spawn_interval = GetRandomValue(10, 20);
    }

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

    checkCollisions();
  } else {
    if (IsKeyDown(KEY_ENTER)) {
      reset();
      initGame();
    }
  }
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
  if (run) {
    if (IsKeyDown(KEY_H))
      spaceship.moveL();
    else if (IsKeyDown(KEY_L))
      spaceship.moveR();
    else if (IsKeyDown(KEY_J))
      spaceship.shoot();
  }
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
    // determine the height of a bunker
    bunkers.push_back(Bunker({offsetX, float(GetScreenHeight() * 0.70)}));
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
        GetScreenWidth() - 10) {
      alien_dir = -2;
      moveJAliens(4);
    }
    if (alien.position.x < 10) {
      alien_dir = 2;
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
    alienLasers.push_back(Laser(
        {alien.position.x + alien.alienImages[alien.type - 1].width / 2.0f,
         alien.position.y + alien.alienImages[alien.type - 1].height},
        6));

    lastAlien_fire = GetTime();
  }
}

void Game::checkCollisions() {
  // spaceship lasers
  for (auto &laser : spaceship.lasers) {
    auto i = aliens.begin();
    while (i != aliens.end()) {
      if (CheckCollisionRecs(i->getRect(), laser.getRect())) {
        i = aliens.erase(i);
        laser.active = false;
      } else {
        ++i;
      }
    }

    for (auto &bunker : bunkers) {
      auto i = bunker.blocks.begin();
      while (i != bunker.blocks.end()) {
        if (CheckCollisionRecs(i->getRect(), laser.getRect())) {
          i = bunker.blocks.erase(i);
          laser.active = false;
        } else {
          ++i;
        }
      }
    }

    if (CheckCollisionRecs(mystery.getRect(), laser.getRect())) {
      mystery.alive = false;
      laser.active = false;
    }
  }

  // alien lasers
  for (auto &laser : alienLasers) {
    if (CheckCollisionRecs(laser.getRect(), spaceship.getRect())) {
      laser.active = false;
      // std::cout << "SPACESHIP HIT\n";
      lives--;
      if (lives == 0)
        GAMEOVER();
    }
    for (auto &bunker : bunkers) {
      auto i = bunker.blocks.begin();
      while (i != bunker.blocks.end()) {
        if (CheckCollisionRecs(i->getRect(), laser.getRect())) {
          i = bunker.blocks.erase(i);
          laser.active = false;
        } else {
          ++i;
        }
      }
    }
  }

  // alien collision w/ bunker
  for (auto &alien : aliens) {
    for (auto &bunker : bunkers) {
      auto i = bunker.blocks.begin();
      while (i != bunker.blocks.end()) {
        if (CheckCollisionRecs(i->getRect(), alien.getRect())) {
          i = bunker.blocks.erase(i);
        } else {
          i++;
        }
      }
    }
    if (CheckCollisionRecs(alien.getRect(), spaceship.getRect())) {
      // std::cout << "SPACESHIP HIT BY ALIEN\n";
      GAMEOVER();
    }
  }
}

void Game::GAMEOVER() {
  // std::cout << "Game Over!\n";
  run = false;
}

void Game::initGame() {
  // vector bunkers, which holds 4 bunker objects.
  bunkers = newBunkers();
  aliens = newAliens();

  alien_dir = 2;
  lastAlien_fire = 0.0;

  // mystery.spawn();
  mystery_last_spawn = 0;
  mystry_spawn_interval = GetRandomValue(10, 20);

  // spaceship life lines
  lives = 3;

  run = true;
}

void Game::reset() {
  spaceship.reset();
  aliens.clear();
  alienLasers.clear();
  bunkers.clear();
}
