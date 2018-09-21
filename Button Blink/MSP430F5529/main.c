// Author: Nick Scamardi
// Written: 9/18/2018
// Last Updated: 9/21/2018

#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;     // Disable the watchdog timer

  P1DIR = BIT0;
  P1REN = BIT1;
  P1OUT = BIT1;

  for (;;)
  {
    volatile unsigned int i;

    if(!(P1IN & BIT1))
    {
        P1OUT ^= BIT0;
        for(i=0; i<30000; i++);
    }
  }
}
