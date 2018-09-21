#include <msp430.h>

void main(void)
{
    WDTCTL = WDTPW + WDTHOLD;   // Disable the watchdog timer

    P1DIR = 0x01;   // Set P1.0 as output
    P1REN = 0x08;   // Enable internal resistor
    P1OUT = 0x08;   // Connects internal resistor to power (making it a pull-up)

    // Infinite while loop
    while(1)
    {
        if((P1IN & 0x08) != 0x08)   // When button is pressed, code will execute
        {
            volatile unsigned int i;

            P1OUT ^= 0x01;  // Turns LED ON
            for(i=0; i<30000; i++);
        }
    }
}

