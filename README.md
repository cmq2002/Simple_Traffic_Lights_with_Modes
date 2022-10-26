# Microcontroller_Microprocess_LAB3
- The requirement is to build an application of a traffic light in a cross road.
- The system consists of:
  - 12 Leds
  - STM32F103C6 MCU
  - 4 7-segment Leds for displaying countdown number
  - At least 3 buttons
    - Button 1 for changing modes
    - Button 2 for increasing waiting time
    - Button 3 for decreasing waiting time
    - Button 4 for set changes
- The application has 4 modes which is controlled by the first button. Mode
1 is a normal mode, while modes 2 3 4 are modification modes. You can press the
first button to change the mode. Modes will change from 1 to 4 and back to 1 again.
  - Mode 1: Normal mode
  - Mode 2: Modify time duration for the red LEDs
  - Mode 3: Modify time duration for the amber LEDs
  - Mode 4: Modify time duration for the green LEDs
