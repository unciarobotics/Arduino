char incomingByte;
#define LMF 2
#define LMB 3
#define RMF 4
#define RMB 5
#define power 6

void setup()
{
  Serial.begin(9600);
  pinMode(LMF,OUTPUT);
  pinMode(LMB,OUTPUT);
  pinMode(RMF,OUTPUT);
  pinMode(RMB,OUTPUT);
  pinMode(power,OUTPUT);
  digitalWrite(power,HIGH);  
}

void loop()
{ 
  if (Serial.available()>0)
  {
    incomingByte = Serial.read();
    switch(incomingByte)
    {
      case 'u' : moveforward();break;
      case 'd' : movebackward();break;
      case 'r' : moveright();break;
      case 'l' : moveleft();break;
      case 'n' : moveforward();delay(20);moveleft();break;
      case 'e' : moveforward();delay(20);moveright();break;
      case 'w' : movebackward();delay(20);moveright();break;
      case 's' : movebackward();delay(20);moveright();break;
      case 'h' : halt();break;
      default  : break;
    }
  }
 delay(50);
}

void moveforward()
{
  Serial.println(incomingByte);
  digitalWrite(LMF,HIGH);
  digitalWrite(LMB,LOW);
  digitalWrite(RMF,HIGH);
  digitalWrite(RMB,LOW);
}

void movebackward()
{
  Serial.println(incomingByte);
  digitalWrite(LMF,LOW);
  digitalWrite(LMB,HIGH);
  digitalWrite(RMF,LOW);
  digitalWrite(RMB,HIGH);
}

void moveright()
{
  Serial.println(incomingByte);
  digitalWrite(LMF,HIGH);
  digitalWrite(LMB,LOW);
  digitalWrite(RMF,LOW);
  digitalWrite(RMB,LOW);
}

void moveleft()
{
  Serial.println(incomingByte);
  digitalWrite(LMF,LOW);
  digitalWrite(LMB,LOW);
  digitalWrite(RMF,HIGH);
  digitalWrite(RMB,LOW);
}

void halt()
{
  Serial.println(incomingByte);
  digitalWrite(LMF,LOW);
  digitalWrite(LMB,LOW);
  digitalWrite(RMF,LOW);
  digitalWrite(RMB,LOW);
}

