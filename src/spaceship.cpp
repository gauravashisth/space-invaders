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
  if (position.x < 0 /*- image.width*/)
    position.x = GetScreenWidth() - image.width;
}
void Spaceship::moveR() {
  position.x += 7;
  if (position.x > GetScreenWidth() - image.width)
    position.x = 0;
}

void Spaceship::shoot() {
  if (GetTime() - interval >= 0.13) {
    lasers.push_back(Laser(
        {position.x + (static_cast<float>(image.width) / 2) - 2, position.y},
        -3));
    interval = GetTime();
  }
}
