#pragma once
#include "alien.hpp"
#include "bunker.hpp"
#include "mystery.hpp"
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
  bool run;

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
  void moveJAliens(int distance);
  int alien_dir;
  std::vector<Laser> alienLasers;
  void alienLaser();
  constexpr static float alienLaser_interval = 0.30;
  float lastAlien_fire;

  Mystery mystery;
  float mystry_spawn_interval;
  float mystery_last_spawn;

  void checkCollisions();

  int lives;
  void GAMEOVER();
  void reset();
  void initGame();
};
