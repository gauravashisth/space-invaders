#pragma once
#include "raylib.h"

class Alien {
public:
  Alien(int type, Vector2 position);
  void update();
  void draw();
  int getType();
  Texture2D image;
  int type;
  Vector2 position;

private:
};
