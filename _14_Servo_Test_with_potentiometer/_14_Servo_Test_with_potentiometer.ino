#include<Servo.h>
Servo s;
int pos =0;
void setup()
{
  Serial.begin(9600);
  s.attach(9);
  s.write(0);
}
void loop()
{
int x=analogRead(A0);
int value=map(x,0,1023,0,180);
s.write(value);
Serial.println(value);
}
