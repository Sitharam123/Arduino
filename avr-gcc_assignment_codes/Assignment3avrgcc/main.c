//Takes a number as input and prints the next number as output

#include <avr/io.h>

#include <util/delay.h>

#include <stdbool.h>




int main (void)

{

 bool A,B,C,D;

 bool w,x,y;

 DDRD = 0b00111100;

 DDRB = 0b00100000;

 

        while(1){




  

  D=0;

  C=(w&&y)||(w&&x)||(!w&&!x&&!y);

  B=(!x&&!y)||(x&&y);

  A=(!y);
  

                PORTD = (D << 2);

                PORTD |= (C << 3);

                PORTD |= (B << 4);

                PORTD |= (A << 5);

               
                
                y = (PIND & (1 << PIND6)) == (1 << PIND6);

                x = (PIND & (1 << PIND7)) == (1 << PIND7);

                w = (PINB & (1 << PINB0)) == (1 << PINB0);

  

 }

        return 0;

}
