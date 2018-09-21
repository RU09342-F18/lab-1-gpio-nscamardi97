// Author: Nick Scamardi
// Written: 9/17/2018
// Last Updated: 9/21/2018

#include <msp430.h> 

int main(void)
{

    WDTCTL = WDTPW | WDTHOLD;   // Disable the watchdog timer
    P1DIR |= BIT0;  // Set P1.0 (Red LED) to output direction using OR
    P4DIR |= BIT7;  // Set P4.7 (Green LED) to output direction using OR

    // Infinite while loop
    while (1) {
        unsigned volatile i, j;

        i++;    // increment counter i
        j++;    // increment counter j

        if(i > 3000){   // Delay for Red LED
            i = 0;
            P1OUT ^= BIT0;  // Toggle P1.0 using exclusive-OR
        }

        if (j > 30000) {    // Delay for Green LED
            j = 0;
            P4OUT ^= BIT7;  // Toggle P4.7 using exclusive-OR
        }
    }
}
