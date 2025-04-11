/* Demo code to test interfacing of LED and Button */

const int buttonPin = 7;  // GPIO7 for switch input
const int ledPin = 8;     // GPIO8 for LED output

void setup() {
  pinMode(buttonPin, INPUT);  // define as INPUT
  pinMode(ledPin, OUTPUT);    // define as OUTPUT
  Serial.begin(9600);  // Initialize serial for debugging
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {  // Button pressed (active low)
    digitalWrite(ledPin, HIGH);
    Serial.println("Button Pressed!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100);  // Small delay to avoid debounce issues
}
