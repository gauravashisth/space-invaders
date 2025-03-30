#include "laser.hpp"
#include <iostream>

laser::laser(Vector2 position, int speed) {
  // to set the values we get from constructor, to attributes.
  this->position = position;
  this->speed = speed;
  active = true;
}
void laser::draw() {
  if (active)
    DrawRectangle(position.x, position.y, 4, 15, {243, 216, 63, 255});
}

void laser::update() {
  position.y += speed;
  if (active)
    if (position.y > GetScreenHeight() || position.y < 0) {
      active = false;
      std::cout << "LASER INACTIVE\n";
    }
}
