int LED1=10;
int LED2=11;
int potentiometer=A0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  
}
void loop()
{
  int val=analogRead(potentiometer);
   val=constrain(val,100,900);
   int ledValue1=map(val,100,900,0,255);
   int ledValue2=map(val,100,900,255,0);
   
  analogWrite(LED1,ledValue1);
  analogWrite(LED2,ledValue2);
}

