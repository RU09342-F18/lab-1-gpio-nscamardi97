# Multiple Blink
For this portion of the lab, two LEDs were blinked independently at different rates.

# MSP430G2553
Pins 1.0 and 1.6 were both set to output directions by OR-ing P1DIR with the respective bits (BIT0 and BIT6). P1.0 controls the green LED and P1.6 controls the red LED. An infinite for loop was used to blink the LEDs indefinitely. Since the LEDs were required to blink at different rates, two counters had to be implemented (i and j). Inside the for loop are two if statements, which control the blinking rates for the LEDs. The two if statements have different conditions, which is what ultimately makes the LEDs blink at different speeds. For the green LED, i was incremented up to 3000 before toggling. As for the red LED, j was incremented up to 30000. The toggling of LEDs was done using exclusive-OR.

# MSP430F2559
The only notable change in the code for the F2559 was the pin and port for the second LED. Instead of using P1.0 and P1.6, the F2559 uses P1.0 and P4.7 to control the LEDS. So coverting the code to run on the F2559 was simply a matter of OR-ing P4DIR with BIT7, and changing the second if statement to toggle P4.7 by using exclusive-OR with P4OUT and BIT7.

