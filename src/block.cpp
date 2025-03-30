#include "block.hpp"

Block::Block(Vector2 position) {
  // assign the position got as argument to position attribute
  this->position = position;
}

void Block::draw() {
  DrawRectangle(position.x, position.y, 3, 3, {255, 255, 255, 255});
}
