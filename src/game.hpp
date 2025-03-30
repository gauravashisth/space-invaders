#pragma once
#include "spaceship.hpp"

// container for all the elements of the game.
class game {
public:
  game();
  ~game();
  // draw all the game objects
  void draw();
  // update position of all game objects
  void update();
  // handles the player's input
  void inputs();

private:
  spaceship spaceship;
};
