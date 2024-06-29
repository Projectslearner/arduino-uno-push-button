/*
    Project name : Arduino Uno Push Button
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-push-button
*/

// Pin connected to the push button
const int buttonPin = 2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP);  // Set button pin as input with internal pull-up resistor
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // Read button state

  if (buttonState == LOW) {
    Serial.println("Button pressed!");
  } else {
    Serial.println("Button not pressed");
  }

  delay(100);  // Delay for readability
}
