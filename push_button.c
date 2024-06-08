/*
    Project name : Push_button using Ardino UNO
    Modified Date : 28-05-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-buttons-switches
*/

#define LED 10  // Declared pin 10 as LED
#define btn 2   // Declared pin 2 as btn
int btn_state = 0;  // Declared a variable btn_state and set it as 0
int last_btn_state = 0; // Variable to store the last button state

void setup() {
  pinMode(LED, OUTPUT);  // Sets pin 10 (LED) as OUTPUT
  pinMode(btn, INPUT);   // Sets pin 2 (btn) as INPUT
  Serial.begin(9600);    // Initialize serial communication at 9600 bps
}

void loop()
 {
  btn_state = digitalRead(btn);  // Reads the input of pin 2 and save it in btn_state
  
  if (btn_state == HIGH && last_btn_state == LOW)
   { 
    digitalWrite(LED, HIGH);     // Turn on the LED
    Serial.println("Button Pressed");  // Print "Button Pressed" to the Serial Monitor
  }
  
   else if (btn_state == LOW && last_btn_state == HIGH)
  {
    digitalWrite(LED, LOW);      // Turn off the LED
  }
  
  last_btn_state = btn_state; // Update the last button state
  delay(50);  // Add a small delay to debounce the button
}