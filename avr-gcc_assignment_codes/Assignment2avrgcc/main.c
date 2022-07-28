#include<avr/io.h>
#include<util/delay.h>
#include<stdbool.h>

int main(void)
{

bool A,B,C,D ;
bool w,x,y,z ;

DDRD= 0b00111100;
DDRB= 0b00100000;

   while(1) {
 D= (!x&&!z)||(y&&!z)||(w&&x&&!y&&z);
 C= 0;
 B= 0;
 A= 0;
      PORTD= (D<<2);
      PORTD |= (C<<3);
      PORTD |= (B<<4);
      PORTD |= (A<<5);

      z= (PIND&(1<<PIND6))==(1<<PIND6);
      y= (PIND&(1<<PIND7))==(1<<PIND7);
      x= (PINB&(1<<PINB0))==(1<<PINB0);
      w= (PINB&(1<<PINB1))==(1<<PINB1);

   }
   return 0;
}
