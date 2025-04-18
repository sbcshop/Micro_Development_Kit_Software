#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

//Define and configure Display SPI interface pins, change as per your connections
// =================== BOARD-SPECIFIC PIN SETUP ===================
#if defined(ESP32)
// === ESP32 Custom Pins ===
  #define TFT_DC     8
  #define TFT_CS     7
  #define TFT_CLK    6
  #define TFT_MOSI   5
  #define TFT_RST    4
  #define TFT_BL     3

#elif defined(ARDUINO_RASPBERRY_PI_PICO) || defined(ARDUINO_RASPBERRY_PI_PICO_W)
// === Raspberry Pi Pico Custom Pins ===
  #define TFT_DC     12
  #define TFT_CS     13
  #define TFT_CLK    10
  #define TFT_MOSI   11
  #define TFT_RST    9
  #define TFT_BL     8

#else
  #error "Board not supported! Define pin mapping for your board."
#endif

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST);

void setup() {
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);  // Turn on backlight

  tft.init(240, 240);          // Init ST7789 display 240x240
  tft.setRotation(3);
  tft.fillScreen(ST77XX_BLACK);

  // Display text
  tft.setTextColor(ST77XX_YELLOW);
  tft.setTextSize(2);
  tft.setCursor(15, 40);
  tft.print("HELLO WORLD!!");

  tft.fillRect(0, 72, 240, 5, ST77XX_RED);
  delay(500);

  tft.setTextColor(ST77XX_CYAN);
  tft.setCursor(25, 120);
  tft.print("MicroFlex SERIES");

  tft.fillRect(0, 152, 240, 5, ST77XX_GREEN);
}

void loop() {
  // Nothing here
}
