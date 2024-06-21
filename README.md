# ESP8266 LED Chaser Project

#### Project Overview
This project demonstrates how to create an LED chaser effect using an ESP8266 microcontroller. LEDs connected to GPIO pins D1 to D4 will sequentially light up and then turn off in both forward and reverse directions, creating a chasing or running light effect.

#### Components Needed
- **ESP8266 Microcontroller**
- **LEDs (4 pieces)**
- **Resistors (if necessary for the LEDs)**
- **Jumper Wires**
- **Breadboard (optional)**

#### Circuit Setup
1. **Connecting LEDs to ESP8266:**
   - Connect each LED's cathode (short leg) to individual GPIO pins (D1 to D4).
   - Connect each LED's anode (long leg) to ground through a current-limiting resistor (if required).

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, observe the LEDs connected to pins D1 to D4.
   - LEDs will sequentially light up in a forward direction (D1 to D4) and then in reverse (D4 to D1), creating a chasing effect.

#### Applications
- **Decoration:** Use in decorative lighting projects.
- **Signaling:** Visual indication or signaling.
- **Education:** Learn about sequencing and control of multiple LEDs.

#### Notes
- **LED Orientation:** Ensure correct orientation of LEDs (cathode to GPIO pin, anode to ground through resistor).
- **Current Limiting:** Use resistors if necessary to prevent damage to the LEDs.
- **Timing:** Adjust delay times (`delay()` function) for different chase speeds.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 LED Chaser](https://projectslearner.com/learn/esp8266-led-chaser)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner