#pragma once
#include "alien.hpp"
#include "bunker.hpp"
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
  // deletes the inactive lasers
  void Dlasers();
  // attribute
  Spaceship spaceship;
  // vector holds nth bunkers
  std::vector<Bunker> bunkers;
  // below method return a vector of bunkers
  std::vector<Bunker> newBunkers();
  std::vector<Alien> aliens;
  std::vector<Alien> newAliens();
  void moveAliens();
  int alien_dir;
};
