#include "laser.hpp"
#include <iostream>

Laser::Laser(Vector2 position, int speed) {
  // to set the values we get from constructor, to attributes.
  this->position = position;
  this->speed = speed;
  active = true;
}
void Laser::draw() {
  if (active)
    DrawRectangle(position.x, position.y, 4, 15, {243, 216, 63, 255});
}

void Laser::update() {
  position.y += speed;
  if (active)
    if (position.y > GetScreenHeight() || position.y < 0) {
      active = false;
      std::cout << "LASER INACTIVE\n";
    }
}
