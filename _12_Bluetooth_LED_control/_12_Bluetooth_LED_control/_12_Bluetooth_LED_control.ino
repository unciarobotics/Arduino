char incomingByte;
int LED1=2;
int LED2=3;
int LED3=4;
int LED4=5;

void setup()
{
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop()
{
  if (Serial.available()>0)
  {
    incomingByte = Serial.read();
    Serial.println(incomingByte);
    switch(incomingByte)
    {
      case 'u' : digitalWrite(LED1,HIGH);digitalWrite(LED2,LOW);digitalWrite(LED3,LOW),digitalWrite(LED4,HIGH);break;
      case 'd' : digitalWrite(LED1,LOW);digitalWrite(LED2,HIGH);digitalWrite(LED3,HIGH),digitalWrite(LED4,LOW);break;
      case 'r' : digitalWrite(LED1,HIGH);digitalWrite(LED2,LOW);digitalWrite(LED3,LOW),digitalWrite(LED4,LOW);break;
      case 'l' : digitalWrite(LED1,LOW);digitalWrite(LED2,LOW);digitalWrite(LED3,LOW),digitalWrite(LED4,HIGH);break;
      case 'h' : digitalWrite(LED1,LOW);digitalWrite(LED2,LOW);digitalWrite(LED3,LOW),digitalWrite(LED4,LOW);break;
      default  : break;
    }
  }
 delay(50);
}

