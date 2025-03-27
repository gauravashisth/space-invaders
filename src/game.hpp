#pragma once
#include "spaceship.hpp"

// container for all the elements of the game.
class game {
public:
  game();
  ~game();
  void draw();
  void update();
  void inputs();

private:
  spaceship spaceship;
};
