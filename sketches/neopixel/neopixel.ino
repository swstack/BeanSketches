#include <Adafruit_NeoPixel.h>

#define PIN 5

#define RED 200
#define GREEN 200
#define BLUE 0

Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, PIN, NEO_RGB + NEO_KHZ400);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  strip.setPixelColor(0, RED, GREEN, BLUE);
  strip.setPixelColor(1, RED, GREEN, BLUE);
  strip.setPixelColor(2, RED, GREEN, BLUE);
  strip.setPixelColor(3, RED, GREEN, BLUE);
  strip.setPixelColor(4, RED, GREEN, BLUE);
  strip.setPixelColor(5, RED, GREEN, BLUE);
  strip.setPixelColor(6, RED, GREEN, BLUE);
  strip.setPixelColor(7, RED, GREEN, BLUE);
  strip.show();

  delay(100);
}
