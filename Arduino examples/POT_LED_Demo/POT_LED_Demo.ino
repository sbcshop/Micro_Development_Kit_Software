// Demo code to interface potentiometer and LED 
/*
  # Setup
  Potentiometer on ADC1 (GPIO27) - Pico RP2040,
  Change GPIO pin for ESP32 micro S3, S2, C3 and C6
  For Reference ADC pins checkout pinout details =>
  https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main#pinout-and-interfacing-details
 */
 
const int potPin = 27;     // Analog pin 
const int ledPin = 7;     // GPIO pin connected to LED
int potValue = 0;          // Variable to store analog value
int ledBrightness = 0;     // Variable for LED brightness (PWM)

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);             // Read analog value (0-1023)
  ledBrightness = map(potValue, 0, 1023, 0, 255); // Scale to 0-255 for PWM
  analogWrite(ledPin, ledBrightness);        // Set LED brightness
  Serial.println(ledBrightness);             // Debug output
  delay(50);
}
