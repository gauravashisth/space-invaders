#pragma once
#include "laser.hpp"
#include "raylib.h"
#include <vector>

class Spaceship {
public:
  Spaceship();
  ~Spaceship();
  void draw();
  void moveL();
  void moveR();
  void shoot();
  // vector that hold all the lasers
  std::vector<Laser> lasers;

private:
  Texture2D image;
  Vector2 position;
};
