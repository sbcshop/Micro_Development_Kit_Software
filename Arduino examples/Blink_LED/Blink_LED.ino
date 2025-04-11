//Demo code to Blink onboard LED
 
#define LED_PIN 7  // GPIO7, change GPIOs as per your micro board

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn LED ON
  Serial.println("LED ON");
  delay(500);

  digitalWrite(LED_PIN, LOW);  // Turn LED OFF
  Serial.println("LED OFF");
  delay(500);
}
