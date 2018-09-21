# Off Board Blink
For the final portion of the lab, the microprocessor chip was pulled off the development board and placed into a breadboard. It was then used to drive two LEDs and blink them at different speeds. The MSP430G2553 was used for this exercise.

# Code
The code used for the off board blink is identical to that of the mutliple blink. Refer to the READ ME for multiple blink for an in depth description.

# Circuit
The circuit used to blink the LEDs was fairly simple. The development board was used to provide power to the chip. Wires were connected from the 3.3V power output and GND to pins 1 and 20 respectively on the chip. An LED was then connected with the annode going into pin 2 of the chip and the cathode going through a 1k resistor into GND. Another LED was then connected from pin 14 to GND with another 1k resistor. After flashing the multiple blink code through the chip, the LEDs blinked on the breadboard. A GIF was created to show functionality of the LEDs blinking off the board. This can be seen by following the link below.

# Link for Off Board Blink Functionality
https://media.giphy.com/media/wJQEXx63gIZHIzI45b/giphy.gif
