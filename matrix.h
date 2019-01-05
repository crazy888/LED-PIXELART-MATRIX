#ifndef MATRIX_H
#define MATRIX_H

#include <FastLED.h>
#include "config.h"

class Matrix
{
  private:
    CRGB leds[MATRIX_WIDTH * MATRIX_HEIGHT];
    int rotation = 180;
    void loadPgmImage(const long *image);
    const long errorImage[256] PROGMEM = {
      0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b,
      0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b,
      0x0b0b0b, 0x0b0b0b, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0x0b0b0b, 0x0b0b0b,
      0x0b0b0b, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0x0b0b0b,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff,
      0x0b0b0b, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0x0b0b0b,
      0x0b0b0b, 0x0b0b0b, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff0000, 0xff0000, 0xffffff, 0x0b0b0b, 0x0b0b0b,
      0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0xffffff, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0xffffff, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b,
      0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b, 0x0b0b0b
    };

  public:
    Matrix();
    void setPixel(byte x, byte y, CRGB color);
    CRGB getPixel(byte x, byte y);
    void swapPixel(byte x1, byte y1, byte x2, byte y2);
    void showError();
    void update();
    



};
#endif