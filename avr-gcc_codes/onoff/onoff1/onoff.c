//Turns LED on and off
#include <avr/io.h>
#include <util/delay.h>

 
int main (void)
{
	
  DDRB    |= ((1 << DDB5));
  while (1) {
//turn led off    
    PORTB = ((0 <<  PB5));
_delay_ms (1000L);		

//
//turn led on
    PORTB = ((1 <<  PB5));
_delay_ms (1000L);		
  }

  /* . */
  return 0;

}

