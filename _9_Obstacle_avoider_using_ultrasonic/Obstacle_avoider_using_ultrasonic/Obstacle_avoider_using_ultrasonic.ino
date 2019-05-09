
#define trigPin 3
#define echoPin 2
int M0 = 4;int M1 = 5;int M2 = 6;int M3 = 7;
int power = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(power,OUTPUT);pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(M0,OUTPUT); pinMode(M1,OUTPUT);
  pinMode(M2,OUTPUT); pinMode(M3,OUTPUT);
  digitalWrite(power,HIGH);
  digitalWrite(M0,HIGH);  digitalWrite(M1,HIGH);
  digitalWrite(M2,HIGH);  digitalWrite(M3,HIGH);
  delay(500);
}

void loop()
{
  int duration, distance, t=0;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(500);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance= (duration/2)/29.1;
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance<=50)
  { do
     {if (distance<=50&&t<=2)
       {turnright();
        halt();
        t++;}
       if (distance<=50&&t==2)
       {
         turnlittleright();
         halt();
       }
     }
     while(distance>=60);
     t=0; 
  }
  
   if(distance>=50&&distance<=70)
   {
     turnlittleleft();
     halt();
   }
  
  else
  {
     moveforward();
  }
}

void moveforward()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,HIGH);
    digitalWrite(M3,LOW);
    Serial.println("Forward");
    delay(100);
}

void turnlittleright()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    Serial.println("Motor is turning");
    delay(25);
    void halt();
    delay(100);
}
void turnright()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    Serial.println("Motor is turning");
    delay(50);
    void halt();
    delay(100);
}

void turnleft()
{
    digitalWrite(M0,LOW); 
    digitalWrite(M1,HIGH);
    digitalWrite(M2,HIGH);
    digitalWrite(M3,LOW);
    Serial.println("Motor is turning");
    delay(50);
    void halt();
    delay(100);
}

void turnmoreright()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    Serial.println("Motor is turning");
    delay(70);
    void halt();
    delay(150);
}

void turnmoreleft()
{
    digitalWrite(M0,LOW); 
    digitalWrite(M1,HIGH);
    digitalWrite(M2,HIGH);
    digitalWrite(M3,LOW);
    Serial.println("Motor is turning");
    delay(70);
    void halt();
    delay(150);
}
void turnlittleleft()
{
    digitalWrite(M0,LOW); 
    digitalWrite(M1,HIGH);
    digitalWrite(M2,HIGH);
    digitalWrite(M3,LOW);
    Serial.println("Motor is turning");
    delay(10);
    void halt();
    delay(150);
}

void halt()
{
    digitalWrite(M0,LOW); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
    delay(800);
}
