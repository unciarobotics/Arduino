#include<Servo.h>
Servo s;
int pos =0;
void setup()
{
  s.attach(9);
}
void loop()
{
  s.write(180);
  delay(1100);
  s.write(2);
  delay(1100);

}
