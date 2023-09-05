#include "../include/header.hpp"
#include "../include/functions.hpp"

#define TFT_CS   10
#define TFT_RESET 8
#define TFT_DC    9
#define TFT_MOSI 11
#define TFT_SCK  13
#define TFT_MISO 12

const int tft_height = 240;
const int tft_width = 320;

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RESET);

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);

  digitalWrite(TFT_CS, HIGH);

  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(ILI9341_BLACK);
}

void loop() {
  
  int c = add(4,5);

}