int L0=13;
int L1=12;
int L2=11;
int L3=10;
char incomingbyte;

void setup()
{
  Serial.begin(9600);
  pinMode(L0,OUTPUT);
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
}
void loop()
{
  if(Serial.available())
  {
    incomingbyte=Serial.read();
    switch(incomingbyte)
    {
      case 'a' : digitalWrite(L0,HIGH);digitalWrite(L1,LOW);digitalWrite(L2,LOW);digitalWrite(L3,LOW);Serial.println(incomingbyte);break;
      case 'b' : digitalWrite(L0,LOW);digitalWrite(L1,HIGH);digitalWrite(L2,LOW);digitalWrite(L3,LOW);Serial.println(incomingbyte);break;
      case 'c' : digitalWrite(L0,LOW);digitalWrite(L1,LOW);digitalWrite(L2,HIGH);digitalWrite(L3,LOW);Serial.println(incomingbyte);break;
      case 'd' : digitalWrite(L0,LOW);digitalWrite(L1,LOW);digitalWrite(L2,LOW);digitalWrite(L3,HIGH);Serial.println(incomingbyte);break;
      default  : break;
    }
  }
}


