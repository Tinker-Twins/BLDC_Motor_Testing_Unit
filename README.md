# BLDC Motor Testing Unit
BLDC Motor Testing Unit is driven by Arduino Uno and uses SimonK ESC. It uses a potentiometer to vary the speed of a Brush-Less DC (BLDC) Motor and tests its performance.

YouTube Link: https://www.youtube.com/watch?v=fQ6iEZ0bkEs

Hardware connctions are as follows:

  POT right    - Arduino +5V

  POT middle   - Arduino A2

  POT left     - Arduino GND

  ESC data wire (white/yellow) - Arduino pin 3 (PWM)

  ESC GND wire (black)         - Arduino GND

  ESC power wire (red)         - DO NOT CONNECT
