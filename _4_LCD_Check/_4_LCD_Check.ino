#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

void setup()
{
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);
    pinMode(9,OUTPUT);
  digitalWrite(9,HIGH);
    pinMode(10,OUTPUT);
  digitalWrite(10,LOW);
  lcd.begin(16,2);
  lcd.print("WELCOME");
  
}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print("Robolabs");
}
