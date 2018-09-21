#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer

  P1SEL &= ~BIT0;   // Set P1.0 to output direction
  P1SEL2 &= ~BIT0;
  P1DIR |= BIT0;

  P1SEL &= ~BIT6;   // Set P1.6 to output direction
  P1SEL2 &= ~BIT6;  // Set P2.6 to output direction
  P1DIR |= BIT6;


  for(;;)  // infinite for loop
  {
    volatile unsigned int i,j;

    i++;    // increment counter i
    j++;    // increment counter j

    if (i > 6000){  // controls blink rate for P1.0 LED
        i=0;
        P1OUT ^= BIT0;
    }

    if (j > 30000){ // controls blink rate for P1.6 LED
        j=0;
        P1OUT ^= BIT6;
    }
  }
}
