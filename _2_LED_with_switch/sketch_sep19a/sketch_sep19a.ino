int L0=13;
int L1=12;
int L2=11;
int L3=10;

int sw0=A2;

void setup()
{
  pinMode(sw0,INPUT);
  pinMode(L0,OUTPUT);
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
}


void loop()
{ int var=digitalRead(sw0);

  if (var==HIGH)
  {
  digitalWrite(L0,HIGH);
  digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  }
  else
 {
  digitalWrite(L0,LOW);
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
 }
}








