#include <msp430.h>

void main( void )
{


  WDTCTL = WDTPW | WDTHOLD; // Stop watchdog timer
  PM5CTL0 &= ~LOCKLPM5;


  P1REN |= 0x60; // Enable resistor on P1.1
  P5OUT  = 0x60; // Set resistor to pull-up, P1.0 low

  P1DIR  = 0x01; // Set P1.0 as output and P1.1 as intput

  P5DIR = 0x60;


  while( 1 )
  {
    if( !(P5IN & 0x60) ) // If push button is pressed
    {
      P1OUT |= 0b00000011;
     }

    else {
      P1OUT = 0b00000010;
    }

  }
}
