#pragma once
#include "spaceship.hpp"

// container for all the elements of the game.
class Game {
public:
  Game();
  ~Game();
  // draw all the game objects
  void draw();
  // update position of all game objects
  void update();
  // handles the player's input
  void inputs();

private:
  // attribute
  Spaceship spaceship;
};
