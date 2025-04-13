#include "mystery.hpp"

Mystery::Mystery() {
  image = LoadTexture("assets/mystery.png");
  alive = false;
}

Mystery::~Mystery() { UnloadTexture(image); }

void Mystery::spawn() {
  position.y = GetScreenHeight() * 0.1;
  int side = GetRandomValue(0, 1);
  if (side == 0) {
    position.x = 0;
    speed = 3;
  } else {
    position.x = GetScreenWidth() - image.width;
    speed = -3;
  }
  alive = true;
}

void Mystery::update() {
  if (alive) {
    position.x += speed;
    if (position.x > GetScreenWidth() - image.width || position.x < 0) {
      alive = false;
    }
  }
}

void Mystery::draw() {
  if (alive) {
    DrawTextureV(image, position, WHITE);
  }
}
