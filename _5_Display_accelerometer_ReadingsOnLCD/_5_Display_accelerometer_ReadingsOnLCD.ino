#include<LiquidCrystal.h>
const int ground = 12;
const int power = 13;

const int xDir = A0;
const int yDir = A1;
const int zDir = A2;
int x,y,z;
LiquidCrystal lcd(2,3,4,5,6,7);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("   x   y    z   ");
  pinMode(ground,OUTPUT);
  pinMode(power,OUTPUT);
  digitalWrite(ground,LOW);
  digitalWrite(power,HIGH);
}

void loop()
{
  x=analogRead(xDir);
  Serial.print(analogRead(x));
  Serial.print("\t");
  lcd.setCursor(2,1);
  lcd.print(x);
  y=analogRead(yDir);
  Serial.print(analogRead(y));
  Serial.print("\t");
  lcd.setCursor(6,1);
  lcd.print(y);
  z=analogRead(xDir);
  Serial.print(analogRead(z));
  Serial.println();
  lcd.setCursor(11,1);
  lcd.print(x);
  delay(100);
}
