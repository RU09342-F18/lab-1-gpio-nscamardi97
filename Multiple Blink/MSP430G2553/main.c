// Author: Nick Scamardi
// Written: 9/17/2018
// Last Updated: 9/21/2018

#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
  P1DIR |= BIT0;    // Set P1.0 (Green LED) to output direction using OR
  P1DIR |= BIT6;    // Set P1.6 (Red LED) to output direction using OR

  for (;;)  // infinite for loop
  {
    volatile unsigned int i,j;

    i++;    // increment counter i
    j++;    // increment counter j

    if (i > 3000){  // Controls blink rate for P1.0 LED
        i=0;
        P1OUT ^= BIT0;  // Toggle P1.0 using exclusive-OR
    }

    if (j > 30000){ // Controls blink rate for P1.6 LED
        j=0;
        P1OUT ^= BIT6;  // Toggle P1.6 using exclusive-OR
    }
  }
}
