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

  InitWindow(screen_w, screen_h, "Space Invaders");
  SetTargetFPS(60);

  Game game;

  while (!WindowShouldClose()) {
    game.inputs();
    game.update();

    BeginDrawing();
    ClearBackground(grey);
    game.draw();
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
