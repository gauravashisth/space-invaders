#pragma once

#include "raylib.h"
class laser {
public:
  laser(Vector2 position, int speed);
  void update();
  void draw();

private:
  Vector2 position;
  int speed;
};
