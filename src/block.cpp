#include "block.hpp"

Block::Block(Vector2 position) {
  // assign the position got as argument to position attribute
  this->position = position;
}

void Block::draw() {
  DrawRectangle(position.x, position.y, 3, 3, {255, 255, 255, 255});
}

Rectangle Block::getRect() {
  Rectangle rect;
  rect.x = position.x;
  rect.y = position.y;
  rect.width = 3;
  rect.height = 3;
  return rect;
}
