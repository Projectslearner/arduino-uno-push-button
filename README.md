# Arduino Uno Push Button

#### Project Overview

This project demonstrates how to interface a push button with an Arduino Uno. The Arduino reads the state of the push button and prints a message to the Serial Monitor indicating whether the button is pressed or not.

#### Components Needed

- **Arduino Uno**
- **Push Button**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup

1. **Connect Push Button to Arduino Uno:**
   - Connect one leg of the push button to digital pin 2 on the Arduino Uno.
   - Connect the other leg of the push button to GND on the Arduino Uno.
   - Optionally, connect a pull-up resistor (10kΩ) between the digital pin 2 and +5V to ensure reliable operation.

#### Instructions

1. **Circuit Setup:**
   - Wire up the push button to the Arduino Uno according to the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Observe the output on the Serial Monitor, which will indicate "Button pressed!" when the button is pressed.

#### Applications

- **User Input:** Use the push button for user input in interactive projects.
- **Control Systems:** Implement as a control input for various systems.
- **Interrupts:** Use in combination with interrupts to trigger specific actions based on button presses.

#### Notes

- Ensure the push button is connected correctly to avoid unintentional triggering.
- Consider debounce techniques if the button input is erratic due to mechanical bouncing.
- Customize the code to perform specific actions based on button presses as required by your project.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-push-button)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner