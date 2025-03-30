#include "laser.hpp"

laser::laser(Vector2 position, int speed) {
  // to set the values we get from constructor, to attributes.
  this->position = position;
  this->speed = speed;
}

void laser::draw() {
  DrawRectangle(position.x, position.y, 4, 15, {243, 216, 63, 255});
}

void laser::update() { position.y += speed; }
