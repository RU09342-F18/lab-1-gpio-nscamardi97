# Button Blink
LED is controlled by an analog button input, rather than simply using a delay. With this implementation, if the button is pressed, the LED will toggle and remain in the ON state until the button is pressed again. If the button is held down, the LED will blink at the rate specified in the code.

# MSP430G2553
The code for the button blink is similiar to that of the other LED blinks, however, this one takes an input from the button to control the LED. P1.0 was set as an output by setting P1DIR equal to BIT0. The internal resistor was also enabled and connected to power in order to create a pull-up resistor. This allows for the button to be pressed and the LED to stay on until it is pressed again. An infinite while loop was then implemented. Inside of it is an if statement which checks if the button is pressed by checking P1IN and BIT4.

# MSP430F2559
To convert the code to run on the F2559, the port for the internal resistor had to be changed to P1.1. Other than that, the rest of the code was the same as the one for G2553.
