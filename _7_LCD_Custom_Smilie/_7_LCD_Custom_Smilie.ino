#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);
byte smile1[8]={B00000,B00001,B00111,B01100,B01000,B11011,B10011,B10000};
byte smile2[8]={B11111,B10001,B00000,B00000,B00000,B00000,B00000,B00000};
byte smile3[8]={B00000,B10000,B11100,B00110,B00010,B11011,B11001,B00001};
byte smile4[8]={B10000,B10000,B11000,B01000,B01100,B00011,B00001,B00000};
byte smile5[8]={B00000,B00000,B00000,B10001,B01110,B00000,B10001,B11111};
byte smile6[8]={B00001,B00001,B00011,B00010,B00110,B11000,B10000,B00000};

void setup()
{
  lcd.begin(16,2);
//custom characters
  lcd.createChar(1,smile1);
  lcd.createChar(2,smile2);
  lcd.createChar(3,smile3);
  lcd.createChar(4,smile4);
  lcd.createChar(5,smile5);
  lcd.createChar(6,smile6);
 
  lcd.setCursor(0,0); 
  lcd.write(1);
  lcd.setCursor(1,0); 
  lcd.write(2);
  lcd.setCursor(2,0); 
  lcd.write(3);
  lcd.setCursor(0,1); 
  lcd.write(4);
  lcd.setCursor(1,1); 
  lcd.write(5);
  lcd.setCursor(2,1); 
  lcd.write(6);
}

void loop()
{}
