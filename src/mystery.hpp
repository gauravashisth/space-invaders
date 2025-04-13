#pragma once
#include "raylib.h"

class Mystery {
public:
  Mystery();
  ~Mystery();
  void update();
  void draw();
  void spawn();
  bool alive;

private:
  Vector2 position;
  Texture2D image;
  int speed;
};
