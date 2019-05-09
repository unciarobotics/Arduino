#define OneA 8
#define TwoA 9
#define ThreeA 10
#define FourA 11

void setup()
{
pinMode(OneA,OUTPUT);
pinMode(TwoA,OUTPUT);
pinMode(ThreeA,OUTPUT);
pinMode(FourA,OUTPUT);
}

void loop()
{
digitalWrite(OneA,HIGH);
digitalWrite(TwoA,LOW);
digitalWrite(ThreeA,LOW);
digitalWrite(FourA,LOW);
delay(50);

digitalWrite(OneA,HIGH);
digitalWrite(TwoA,HIGH);
digitalWrite(ThreeA,LOW);
digitalWrite(FourA,LOW);
delay(50);

digitalWrite(OneA,LOW);
digitalWrite(TwoA,HIGH);
digitalWrite(ThreeA,LOW);
digitalWrite(FourA,LOW);
delay(50);

digitalWrite(OneA,LOW);
digitalWrite(TwoA,HIGH);
digitalWrite(ThreeA,HIGH);
digitalWrite(FourA,LOW);
delay(50);

digitalWrite(OneA,LOW);
digitalWrite(TwoA,LOW);
digitalWrite(ThreeA,HIGH);
digitalWrite(FourA,LOW);
delay(50);

digitalWrite(OneA,LOW);
digitalWrite(TwoA,LOW);
digitalWrite(ThreeA,LOW);
digitalWrite(FourA,HIGH);
delay(50);

digitalWrite(OneA,HIGH);
digitalWrite(TwoA,LOW);
digitalWrite(ThreeA,LOW);
digitalWrite(FourA,HIGH);
delay(50);
}
