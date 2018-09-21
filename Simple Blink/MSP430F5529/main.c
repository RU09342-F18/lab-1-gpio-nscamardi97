#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD; // Disable the watchdog timer

  P1SEL &= ~BIT0;   // Set P1.0 to output direction using AND & the bitwise negation of BIT0
  P1DIR |= BIT0;    // Set direction of P1.0 using OR

  // Infinite while loop
  while(1)
  {
    volatile unsigned int k;
    P1OUT ^= BIT0;  // Toggle P1.0 using exclusive-OR

    k = 50000;  // Delay; Allows LED blink to be visible
    do (k--);
    while (k != 0); // Decrement value of k until it is equal to 0

  }
}
