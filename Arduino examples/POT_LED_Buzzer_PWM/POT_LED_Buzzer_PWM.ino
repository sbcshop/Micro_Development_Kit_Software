// Demo code to interface potentiometer and LED 
/*
  # Setup
  Potentiometer on ADC1 (GPIO27) - Pico RP2040,
  Change GPIO pin for ESP32 micro S3, S2, C3 and C6
  For Reference ADC pins checkout pinout details =>
  https://github.com/sbcshop/MicroFlex_MCU_Software/tree/main#pinout-and-interfacing-details
 */

const int potPin = 27;     // Potentiometer connected to analog pin GP27, change as per board
const int ledPin = 7;     // LED connected to digital pin GP7
const int buzzerPin = 4;  // Buzzer connected to digital pin GP4

int potValue = 0;
int ledBrightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  analogReadResolution(12);  // Setting ADC for 12-Bit resolution, default arduino is 10-bit
}

void loop() {
  potValue = analogRead(potPin);                        // Read analog value (0-4096, 12-Bit ADC resolution)
  ledBrightness = map(potValue, 0, 4095, 0, 255);       // Scale for PWM brightness
  analogWrite(ledPin, ledBrightness);                   // Set LED brightness

  // Map potentiometer to frequency range for buzzer (e.g., 200 Hz to 2000 Hz)
  int freq = map(potValue, 0, 4095, 200, 2000);

  if (potValue > 100) {
    tone(buzzerPin, freq);  // Generate tone on buzzer
  } else {
    noTone(buzzerPin);      // Stop buzzer if below threshold
  }

  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print("  LED PWM: ");
  Serial.print(ledBrightness);
  Serial.print("  Buzzer Freq: ");
  Serial.println(freq);

  delay(100);
}
