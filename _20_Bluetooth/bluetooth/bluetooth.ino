char incomingByte;

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);  
}

void loop()
{
  if (Serial.available()>0)
  {
    incomingByte = Serial.read();
    switch(incomingByte)
    {
 
      case 'a' : Serial.println("LED ON");digitalWrite(13,HIGH);break;
      case 'b' : Serial.println("LED OFF");digitalWrite(13,LOW);break;
      default  : break;
    }
  }
 delay(50);
}


