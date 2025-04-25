#include "game.hpp"
#include <iostream>
#include <raylib.h>

#ifdef __APPLE__
#include <ApplicationServices/ApplicationServices.h> // macOS Framework
#elif __linux__
#define Font XFont
#include <X11/Xlib.h> // Linux X11 Library
#endif

Color grey = Color{29, 29, 27, 255};
Color yellow = Color{243, 216, 63, 255};

class ScreenInfo {
public:
  // Struct to hold resolution values
  struct Resolution {
    int width;
    int height;
  };

  // Function to get actual screen resolution
  static Resolution getScreenResolution() {
    Resolution res = {0, 0}; // Default values

#ifdef __APPLE__
                             // macOS Code
    CGDirectDisplayID mainDisplay = CGMainDisplayID();
    res.width = CGDisplayPixelsWide(mainDisplay);
    res.height = CGDisplayPixelsHigh(mainDisplay);

#elif __linux__
                             // Linux Code
    Display *display = XOpenDisplay(nullptr);
    if (display == nullptr) {
      std::cerr << "Unable to open X display" << '\n';
      return res;
    }

    Screen *screen = DefaultScreenOfDisplay(display);
    res.width = screen->width;
    res.height = screen->height;

    XCloseDisplay(display);
#endif

    return res;
  }

  // Function to return 71% of screen resolution
  static Resolution getScaledResolution() {
    Resolution res = getScreenResolution();
    return {static_cast<int>(res.width * 0.762),
            static_cast<int>(res.height * 0.762)};
  }
};

int main() {
  ScreenInfo::Resolution fullRes = ScreenInfo::getScreenResolution();
  ScreenInfo::Resolution scaledRes = ScreenInfo::getScaledResolution();
  int screen_w = scaledRes.width;
  int screen_h = scaledRes.height;
  int border = 20;

  InitWindow(screen_w, screen_h, "Space Invaders");
  // InitWindow(screen_w + border, screen_h + border, "Space Invaders");

  Font font = LoadFontEx("assets/font/monogram.ttf", 64, 0, 0);
  Texture2D spaceshipImage = LoadTexture("assets/spaceship.png");

  SetTargetFPS(60);

  Game game;

  while (!WindowShouldClose()) {
    game.inputs();
    game.update();

    BeginDrawing();
    ClearBackground(grey);
    // DrawRectangleRoundedLinesEx(
    //     {10, 10, static_cast<float>(screen_w), static_cast<float>(screen_h)},
    //     0.06f, 20, 2, yellow);
    DrawRectangleRoundedLinesEx({10, 10, static_cast<float>(screen_w - border),
                                 static_cast<float>(screen_h - border)},
                                0.06f, 20, 2, yellow);

    DrawRectangleRoundedLinesEx({screen_w * 0.03f, screen_h * 0.88f,
                                 screen_w * 0.94f, screen_h * 0.001f},
                                0.06f, 20, 5, yellow);
    // DrawLineEx({screen_w * 0.03f, screen_h * 0.88f},
    //            {screen_w * 0.97f, screen_h * 0.88f}, 5, yellow);

    if (game.run)
      DrawTextEx(font, "LEVEL 01", {screen_w * 0.85f, screen_h * 0.92f}, 35, 2,
                 yellow);
    else
      DrawTextEx(font, "GAME OVER", {screen_w * 0.85f, screen_h * 0.92f}, 35, 2,
                 yellow);

    float x = 50.0; //??
    for (int i = 0; i < game.lives; i++) {
      DrawTextureV(spaceshipImage, {x, screen_h * 0.92f}, WHITE);
      x += 50;
    }

    game.draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
