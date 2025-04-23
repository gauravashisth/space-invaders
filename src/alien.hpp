#pragma once
#include "raylib.h"

class Alien {
public:
  Alien(int type, Vector2 position);
  void update(int direction);
  void draw();
  int getType();
  static void unloadImages();
  // Texture2D image;
  static Texture2D alienImages[3];
  int type;
  Vector2 position;

  Rectangle getRect();

private:
};
