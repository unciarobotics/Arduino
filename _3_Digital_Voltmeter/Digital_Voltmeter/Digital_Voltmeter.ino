#include<SevenSegment.h>
int pot_pin=A0;

void setup()
{
digit_begin();
}
void loop()
{    
 int pot_val=analogRead(pot_pin);
 
 pot_val=constrain(pot_val,100,1000);
 int x=map(pot_val,100,1000,0,50);
 
 disp(x/10,x-((x/10)*10));
}


void disp(int p,int q)
{for(int i=0;i<=50;i++)
  {
     digitalWrite(en0,HIGH);
     delay(5);
     digitalWrite(en0,LOW);
     digitalWrite(dp,HIGH);
     print_digit(p);
               
     digitalWrite(en1,HIGH);
     delay(5);
     digitalWrite(en1,LOW);
     digitalWrite(dp,LOW);
     print_digit(q);
     }
}
