#pragma once
#include "block.hpp"
#include <vector>

class Bunker {
public:
  Bunker(Vector2 position);
  void draw();
  Vector2 position;
  // vector that contains all the blocks of bunker
  std::vector<Block> blocks;
  std::vector<std::vector<int>> grid;

private:
};
