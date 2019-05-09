int LED=13;
int button=2;
boolean LEDstate=false;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  if(digitalRead(button)==HIGH)
  {
    delay(5);
    LEDstate=!LEDstate;
  }
  digitalWrite(LED,LEDstate};
}
