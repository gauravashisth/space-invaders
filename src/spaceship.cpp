#include "spaceship.hpp"

spaceship::spaceship() {
  image = LoadTexture("assets/spaceship.png");
  position.x = 100;
  position.y = 100;
}

spaceship::~spaceship() { UnloadTexture(image); }

void spaceship::draw() { DrawTextureV(image, position, WHITE); }

void spaceship::moveL() { position.x -= 7; }
void spaceship::moveR() { position.x += 7; }
