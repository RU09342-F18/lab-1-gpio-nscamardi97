#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD; // Disable the watchdog timer

  P1SEL &= ~BIT0;   // Set P1.0 to output direction using AND
  P1SEL2 &= ~BIT0;
  P1DIR |= BIT0;    // Set direction of P1.0 to output using OR

  // Infinite while loop
  while(1)
  {
    volatile unsigned int i;
    P1OUT ^= BIT0;  // Toggle P1.0 using exclusive-OR

    i = 50000;  // Delay; Allows LED blink to be visible
    do (i--);
    while (i != 0); // Decrement value i until it is not equal to zero
  }
}
