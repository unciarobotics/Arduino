void setup()
{
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available() == 0);
  
  //read Input
  int val = Serial.read() - '0';
  
  if (val==1)
  {Serial.println("Led is ON");
  digitalWrite(13,HIGH);
  }
  else if (val ==0)
  {Serial.println("LED is OFF");
  digitalWrite(13,LOW);
  }
  else
  {
    Serial.println("Invalid !!!");
  }
  Serial.flush();
}
