
#define trigPin 9
#define echoPin 10
int M0 = 2;
int M1 = 3;
int M2 = 4;
int M3 = 5;
int power = 8;
int ground =11;
void turnright();
void turnright();
void turnmoreleft();
void turnmoreright();

void setup()
{
  Serial.begin(9600);
  pinMode(power,OUTPUT); pinMode(ground,OUTPUT);
  digitalWrite(power,HIGH);  digitalWrite(ground,LOW);  pinMode(trigPin,OUTPUT);  pinMode(echoPin,INPUT);
  pinMode(M0,OUTPUT);  pinMode(M1,OUTPUT);  pinMode(M2,OUTPUT);  pinMode(M3,OUTPUT);
  digitalWrite(M0,LOW);  digitalWrite(M1,LOW);  digitalWrite(M2,LOW);  digitalWrite(M3,LOW);
  delay(500);
}

void loop()
{
  int duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance= (duration/2)/29.1;
  Serial.print(distance);
  Serial.println("cm");
  
  if (distance<=30)
  { turnright();}
  else
  { moveforward();}
   
 delay(50);
}

void moveforward()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,HIGH);
    digitalWrite(M3,LOW);
    Serial.println("Forward");
}

void turnright()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    Serial.println("Motor is turning");
    delay(10);
    digitalWrite(M0,LOW); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
    delay(50);
}

void turnleft()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    Serial.println("Motor is turning");
    delay(10);
    digitalWrite(M0,LOW); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
    delay(50);
}

void turnmoreright()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    Serial.println("Motor is turning");
    delay(25);
    digitalWrite(M0,LOW); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
    delay(50);
}

void turnmoreleft()
{
    digitalWrite(M0,HIGH); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,HIGH);
    Serial.println("Motor is turning");
    delay(25);
    digitalWrite(M0,LOW); 
    digitalWrite(M1,LOW);
    digitalWrite(M2,LOW);
    digitalWrite(M3,LOW);
    delay(50);
}
