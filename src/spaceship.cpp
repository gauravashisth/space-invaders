#include "spaceship.hpp"
#include "raylib.h"

Spaceship::Spaceship() {
  image = LoadTexture("assets/spaceship.png");
  position.x = (GetScreenWidth() - image.width) * 0.5;
  position.y = GetScreenHeight() * 0.8;
  interval = 0.0;
}

Spaceship::~Spaceship() { UnloadTexture(image); }

void Spaceship::draw() { DrawTextureV(image, position, WHITE); }

void Spaceship::moveL() {
  position.x -= 7;
  if (position.x < 10 /*- image.width*/)
    position.x = GetScreenWidth() - image.width - 10;
}
void Spaceship::moveR() {
  position.x += 7;
  if (position.x > GetScreenWidth() - image.width - 10)
    position.x = 10;
}

void Spaceship::shoot() {
  if (GetTime() - interval >= 0.30) {
    lasers.push_back(Laser(
        {position.x + (static_cast<float>(image.width) / 2) - 2, position.y},
        -3));
    interval = GetTime();
  }
}

Rectangle Spaceship::getRect() {
  return {position.x, position.y, float(image.width), float(image.height)};
}

void Spaceship::reset() {
  position.x = (GetScreenWidth() - image.width) * 0.5;
  position.y = GetScreenHeight() * 0.8;
  lasers.clear();
}
