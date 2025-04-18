// Interfacing code for Potentiometer, Button and LCD display with MicroFlex MCU board

#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

// =================== BOARD-SPECIFIC PIN SETUP ===================
#if defined(ESP32)
  #define TFT_DC     8
  #define TFT_CS     7
  #define TFT_CLK    6
  #define TFT_MOSI   5
  #define TFT_RST    4
  #define TFT_BL     3
  #define POT_PIN    1
  #define BUTTON_PIN 2

#elif defined(ARDUINO_RASPBERRY_PI_PICO) || defined(ARDUINO_RASPBERRY_PI_PICO_W)
  #define TFT_DC     12
  #define TFT_CS     13
  #define TFT_CLK    10
  #define TFT_MOSI   11
  #define TFT_RST    9
  #define TFT_BL     8
  #define POT_PIN    27
  #define BUTTON_PIN 7

#else
  #error "Board not supported! Define pin mapping for your board."
#endif

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST);

// Previous states
int prevPotRaw = -1;

void setup() {
  Serial.begin(9600);
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);  // Turn on backlight

  pinMode(POT_PIN, INPUT);
  pinMode(BUTTON_PIN, INPUT);

  tft.init(240, 240);          // Init ST7789 display 240x240
  tft.setRotation(3);
  tft.fillScreen(ST77XX_BLACK);

  // Static welcome text
  tft.setTextColor(ST77XX_YELLOW);
  tft.setTextSize(2);
  tft.setCursor(15, 40);
  tft.print("MicroFlex DevKit");

  tft.fillRect(0, 72, 240, 5, ST77XX_RED);
  delay(500);
}

void loop() {
  int potRaw = analogRead(POT_PIN);
  float voltage = (potRaw / 4095.0) * 3.3;
  bool buttonPressed = digitalRead(BUTTON_PIN);
  const int potThreshold = 20;

  // Update potentiometer reading only if significantly changed
  if (abs(potRaw - prevPotRaw) >= potThreshold) {
    tft.fillRect(0, 150, 240, 40, ST77XX_BLACK);
    tft.setCursor(10, 150);
    tft.setTextColor(ST77XX_GREEN);
    tft.setTextSize(2);
    tft.print("POT: ");
    tft.print(potRaw);
    tft.print("  ");
    tft.setTextColor(ST77XX_ORANGE);
    tft.print(voltage, 2);
    tft.println("V");
    prevPotRaw = potRaw;
  }

  // Display button status when pressed, HIGH - normally and LOW - when pressed
  if (buttonPressed == 0) {
    tft.setCursor(30, 200);
    tft.setTextColor(ST77XX_WHITE);
    tft.setTextSize(2);
    tft.println("Button Pressed");

    delay(500);
    tft.fillRect(0, 200, 240, 30, ST77XX_BLACK);
  }

   // === Debug Info ===
  Serial.print("Raw: ");
  Serial.print(potRaw);
  Serial.print(" | Volt: ");
  Serial.print(voltage, 2);
  Serial.print(" V | Button: ");
  Serial.println(!buttonPressed ? "Pressed" : "Released");
  delay(10);
}
