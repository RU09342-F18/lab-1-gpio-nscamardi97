# Simple Blink
The objective for this portion of the exercise was to blink an LED at a constant rate on two of the development boards. The two boards used for the simple blink were the G2553 and the F5529.

# MSP430G2553
In order to blink an LED on the G2553, the correct port and pins had to be first selected and set to the proper direction (input/output). This was done using the P1DIR macro, which sets the direction of the pin to either input or output. In this case we wanted an output, which is accomplished by setting the specific bit to 1. This was accomplished by doing P1DIR OR BIT0, as P1.0 controls the green LED. After setting the proper direction, an infinite while loop was used to blink the LED indefinitely. P1.0 was toggled using an exclusive-OR operation with BIT0. The final step was delaying this process so that the blinking LED would be visible, otherwise it would just appear to be on at all time. This was done by incrementing the integer k and resetting it once it reached the desired value, which was 60000.

# MSP430F5529
To blink an LED on the F5529, a similiar approach was taken. Since the LED was controlled by the same port and pin, the same code could be used to blink the LED.
