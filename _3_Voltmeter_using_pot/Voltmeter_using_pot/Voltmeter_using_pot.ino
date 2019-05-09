int a=2;int b=3;int c=4;int d=5;int e=6;int f=7;int g=8;int dp=9;
int enable_1=10;int enable_2=11;
void print_digit(int number);
void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);
  pinMode(enable_1,OUTPUT);
  pinMode(enable_2,OUTPUT);
}

void loop()
{
  int x,y,pot=analogRead(A0);
 int n= map(pot,0,1023,0,50);

  x=n/10;
  y=n-((n/10)*10);

 
  print_digit(x);
   digitalWrite(dp,1);
    digitalWrite(enable_2,HIGH);
    delay(5); 
   digitalWrite(enable_2,LOW);

 
  print_digit(y);
   digitalWrite(enable_1,HIGH);
    delay(5);
   digitalWrite(enable_1,LOW);
   
}

void print_digit(int number)
{
  switch(number)
  {
    case 0: digitalWrite(dp,LOW);digitalWrite(g,LOW);digitalWrite(f,HIGH);digitalWrite(e,HIGH);digitalWrite(d,HIGH);digitalWrite(c,HIGH);digitalWrite(b,HIGH);digitalWrite(a,HIGH); break;
    case 1: digitalWrite(dp,LOW);digitalWrite(g,LOW);digitalWrite(f,LOW);digitalWrite(e,LOW);digitalWrite(d,LOW);digitalWrite(c,HIGH);digitalWrite(b,HIGH);digitalWrite(a,LOW); break;
    case 2: digitalWrite(dp,LOW);digitalWrite(g,HIGH);digitalWrite(f,LOW);digitalWrite(e,HIGH);digitalWrite(d,HIGH);digitalWrite(c,LOW);digitalWrite(b,HIGH);digitalWrite(a,HIGH); break;
    case 3: digitalWrite(dp,LOW);digitalWrite(g,HIGH);digitalWrite(f,LOW);digitalWrite(e,LOW);digitalWrite(d,HIGH);digitalWrite(c,HIGH);digitalWrite(b,HIGH);digitalWrite(a,HIGH); break;
    case 4: digitalWrite(dp,LOW);digitalWrite(g,HIGH);digitalWrite(f,HIGH);digitalWrite(e,LOW);digitalWrite(d,LOW);digitalWrite(c,HIGH);digitalWrite(b,HIGH);digitalWrite(a,LOW); break;
    case 5: digitalWrite(dp,LOW);digitalWrite(g,HIGH);digitalWrite(f,HIGH);digitalWrite(e,LOW);digitalWrite(d,HIGH);digitalWrite(c,HIGH);digitalWrite(b,LOW);digitalWrite(a,HIGH); break;
    case 6: digitalWrite(dp,LOW);digitalWrite(g,HIGH);digitalWrite(f,HIGH);digitalWrite(e,HIGH);digitalWrite(d,HIGH);digitalWrite(c,HIGH);digitalWrite(b,LOW);digitalWrite(a,HIGH); break;
    case 7: digitalWrite(dp,LOW);digitalWrite(g,LOW);digitalWrite(f,LOW);digitalWrite(e,LOW);digitalWrite(d,LOW);digitalWrite(c,HIGH);digitalWrite(b,HIGH);digitalWrite(a,HIGH); break;
    case 8: digitalWrite(dp,LOW);digitalWrite(g,HIGH);digitalWrite(f,HIGH);digitalWrite(e,HIGH);digitalWrite(d,HIGH);digitalWrite(c,HIGH);digitalWrite(b,HIGH);digitalWrite(a,HIGH); break;
    case 9: digitalWrite(dp,LOW);digitalWrite(g,HIGH);digitalWrite(f,HIGH);digitalWrite(e,LOW);digitalWrite(d,HIGH);digitalWrite(c,HIGH);digitalWrite(b,HIGH);digitalWrite(a,HIGH); break;    
  }
}
