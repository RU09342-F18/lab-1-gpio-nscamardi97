#include <msp430.h>

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD; // Disable the watchdog timer
  P1DIR |= BIT0;    // Set direction of P1.0 to output using OR

  // Infinite while loop
  while(1)
  {
    volatile unsigned int k;
    P1OUT ^= BIT0;  // Toggle P1.0 using exclusive-OR

    k = 0;  // Delay; Allows LED blink to be visible
    do (k++);
    while (k != 60000); // Increment value k until it is equal to 60000
  }
}
