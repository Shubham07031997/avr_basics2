#include<avr/io.h>
int main(void)
{
  unsigned char temp;
DDRC=0x00;
DDRB=0xFF;
PORTC=0xFF;

while(1)
{
  temp=PINC;
PORTB=temp;
}
return 0;
}
