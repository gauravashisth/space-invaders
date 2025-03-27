#pragma once
#include "raylib.h"

class spaceship {
public:
  spaceship();
  ~spaceship();
  void draw();
  void moveL();
  void moveR();
  void laser();

private:
  Texture2D image;
  Vector2 position;
};
