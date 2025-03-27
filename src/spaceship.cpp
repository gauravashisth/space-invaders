#include "spaceship.hpp"
#include "raylib.h"

spaceship::spaceship() {
  image = LoadTexture("assets/spaceship.png");
  position.x = (GetScreenWidth() - image.width) * 0.5;
  position.y = GetScreenHeight() * 0.8;
}

spaceship::~spaceship() { UnloadTexture(image); }

void spaceship::draw() { DrawTextureV(image, position, WHITE); }

void spaceship::moveL() {
  position.x -= 7;
  if (position.x < 0 /*- image.width*/)
    position.x = GetScreenWidth() - image.width;
}
void spaceship::moveR() {
  position.x += 7;
  if (position.x > GetScreenWidth() - image.width)
    position.x = 0;
}
