#include <msp430g2553.h>

int main(void) {
  volatile int i;

  // stop watchdog timer
  WDTCTL = WDTPW | WDTHOLD;
  // set up bit 0 of P1 as output
  P1DIR = 0b00000011;
  // intialize bit 0 of P1 to 0
  P1OUT = 0b00000011;

  // loop forever
  for (;;) {
    // toggle bit 0 of P1
    P1OUT ^= 0b00000011;
    // delay for a while
    for (i = 0; i < 0x6000; i++);
  }
}

