### Push Button using Arduino UNO

#### Project Overview

This project demonstrates how to control an LED using a push button with an Arduino UNO. When the button is pressed, the LED turns on, and when it is released, the LED turns off.

#### Components Needed

1. **Arduino UNO Board**
2. **LED**
3. **Push Button**
4. **Resistor (220 ohms)**
5. **Breadboard**
6. **Jumper Wires**

#### Block Diagram

![Push Button Diagram](block_diagram.png)

#### Circuit Wiring

1. **LED and Button:**
   - Connect the LED's positive (longer) leg to pin 10 (LED) on the Arduino through a 220-ohm resistor.
   - Connect the LED's negative (shorter) leg to the ground (GND) on the Arduino.
   - Connect one leg of the push button to pin 2 (btn) on the Arduino.
   - Connect the other leg of the push button to the 5V pin on the Arduino.

#### Instructions

1. **Assemble the Circuit:**
   - Set up the circuit as per the wiring instructions.
   - Ensure all connections are secure and components are placed correctly on the breadboard.

2. **Upload the Code:**
   - Copy and paste the provided code into the Arduino IDE.
   - Verify and upload the code to your Arduino board.

3. **Observe the LED Behavior:**
   - When the push button is pressed, the LED turns on.
   - When the push button is released, the LED turns off.

#### Project Operation

- **Initialization:**
  - The Arduino initializes pin 10 (LED) as an output and pin 2 (btn) as an input.

- **Button Control:**
  - When the button is pressed (transition from LOW to HIGH state), the LED turns on, and "Button Pressed" is printed to the Serial Monitor.
  - When the button is released (transition from HIGH to LOW state), the LED turns off.

#### Applications

- **Simple Switch Control:** Use the push button to control various devices or functions in your projects.
- **Interactive Projects:** Incorporate push buttons for user interaction in your Arduino-based projects.
- **Learning and Experimentation:** Ideal for learning about digital input and output control with Arduino.

---

### For more Arduino projects and tutorials, visit Projects Learner - your destination for hands-on learning and experimentation with electronics and programming.

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Crafted with passion by ProjectsLearner 