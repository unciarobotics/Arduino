int pot_pin=A0;
int a=2;int b=3;int c=4;int d=5;int e=6;int f=7;int g=8;int dp=9;
int enable_1=10;int enable_2=11;
void print_digit(int number);
void disp(int p,int q);
void setup()
{ Serial.begin(9600);
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
 int pot_val=analogRead(pot_pin);
 Serial.println(pot_val);
 pot_val=constrain(pot_val,100,1000);
 int x=map(pot_val,100,1000,0,50);
 
 disp(x/10,x-((x/10)*10));       
}

void disp(int p,int q)
{ for(int r=0;r<50;r++)
                 {
                   print_digit(p);
                   digitalWrite(dp,1);
                  digitalWrite(enable_1,HIGH);
                  delay(5);
                  digitalWrite(enable_1,LOW);
                  
                  print_digit(q);
                  digitalWrite(enable_2,HIGH);
                  delay(5);
                  digitalWrite(enable_2,LOW);
                }
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
