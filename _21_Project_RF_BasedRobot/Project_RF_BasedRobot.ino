int const D0=2;
int const D1=3;
int const D2=4;
int const D3=5;
int const M0=8;
int const M1=9;
int const M2=10;
int const M3=11;

void setup()
{
  pinMode(D0,INPUT);
  pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  pinMode(D3,INPUT);
  pinMode(M0,OUTPUT);
  pinMode(M1,OUTPUT);
  pinMode(M2,OUTPUT);
  pinMode(M3,OUTPUT);
}

void loop()
{
  if (digitalRead(D0)==LOW)
  {
    digitalWrite(M0,HIGH);
    digitalWrite(M1,LOW);
  }
  
  if (digitalRead(D1)==LOW)
  {
    digitalWrite(M0,LOW);
    digitalWrite(M1,HIGH);
  }
  
  if (digitalRead(D2)==LOW)
  {
    digitalWrite(M2,HIGH);
    digitalWrite(M3,LOW);
  }
  
  if (digitalRead(D3)==LOW)
  {
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
  }
  
 else
   {
    digitalWrite(M0,LOW);
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
  }
}
