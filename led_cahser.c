/*
    Project name : ESP8266 led chaser
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-led-chaser
*/

// Define LED pins
const int ledPins[] = {D1, D2, D3, D4}; // GPIO pins D1 to D4 on NodeMCU
const int numPins = sizeof(ledPins) / sizeof(ledPins[0]); // Number of LED pins

void setup() {
  // Set LED pins as outputs
  for (int i = 0; i < numPins; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on LEDs in sequence
  for (int i = 0; i < numPins; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on LED
    delay(100); // Delay between each LED
    digitalWrite(ledPins[i], LOW); // Turn off LED
  }

  // Turn off LEDs in reverse sequence
  for (int i = numPins - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn on LED
    delay(100); // Delay between each LED
    digitalWrite(ledPins[i], LOW); // Turn off LED
  }
}
