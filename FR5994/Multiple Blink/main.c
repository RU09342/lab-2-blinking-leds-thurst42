#include <msp430.h> 




// Blink time constants

#define CTR1 30000

#define CTR2 3000

// led bit assignment

#define LED1 BIT0

#define LED2 BIT1



void main(void)

{

int i,j;

WDTCTL = WDTPW + WDTHOLD;
PM5CTL0 &= ~LOCKLPM5;

P1DIR |= (LED1|LED2);

i=j=0;

for(;;)

{ // increment both counter

  i++;

  j++;

// check first counter, if end value reset and toggle led

  if (i>CTR1)

      { i=0; P1OUT^=LED1;}

// check 2nd counter, if end value reset and toggle led
  if (j>CTR2)

     { j=0; P1OUT^=LED2;}

} // forever

// End main

}