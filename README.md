# Arduino UNO with Button Switch: Simple Guide and Code

#### Description
In this project, you'll use a button switch to turn an LED on and off, with the state of the button (pressed or not pressed) displayed on the Serial Monitor.

# Components Needed
- Arduino UNO
- Push button switch
- 10k ohm resistor
- LED
- 220-ohm resistor
- Breadboard
- Jumper wires

# Instructions

1. **Connect the Button and LED to the Breadboard:**
   - Insert the push button switch into the breadboard.
   - Place the LED on the breadboard.

2. **Wire the Button to the Arduino:**
   - Connect one leg of the push button to pin 2 on the Arduino.
   - Connect the other leg of the push button to 5V on the Arduino.
   - Connect a 10k ohm resistor from the leg connected to pin 2 to GND on the Arduino.

3. **Wire the LED to the Arduino:**
   - Connect the longer leg (anode) of the LED to pin 10 on the Arduino.
   - Connect the shorter leg (cathode) of the LED to one end of the 220-ohm resistor.
   - Connect the other end of the 220-ohm resistor to GND on the Arduino.

# Complete Process
1. **Connect the Button and LED to the Breadboard:**
   - Insert the push button switch into the breadboard.
   - Place the LED on the breadboard.

2. **Wire the Button to the Arduino:**
   - Connect one leg of the push button to pin 2 on the Arduino.
   - Connect the other leg of the push button to 5V on the Arduino.
   - Connect a 10k ohm resistor from the leg connected to pin 2 to GND on the Arduino.

3. **Wire the LED to the Arduino:**
   - Connect the longer leg (anode) of the LED to pin 10 on the Arduino.
   - Connect the shorter leg (cathode) of the LED to one end of the 220-ohm resistor.
   - Connect the other end of the 220-ohm resistor to GND on the Arduino.

4. **Upload the Code:**
   - Open the Arduino IDE and copy the code provided above into the IDE.
   - Connect your Arduino to your computer using a USB cable.
   - Click the Upload button to upload the code to your Arduino.

5. **Open the Serial Monitor:**
   - In the Arduino IDE, go to `Tools` -> `Serial Monitor`.
   - Set the baud rate to 9600.
   - Press the button to see "Button Pressed" messages displayed on the Serial Monitor, along with the LED turning on. When the button is released, the LED turns off, and no messages are printed.

   # End of Push button