
#define trigPin 9
#define echoPin 10

void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);pinMode(3,OUTPUT);pinMode(4,OUTPUT);pinMode(5,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(8,HIGH);
  digitalWrite(11,LOW);
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

if(distance>=25)
{digitalWrite(2,HIGH); digitalWrite(3,LOW); digitalWrite(4,HIGH); digitalWrite(5,LOW);
}
else
{ digitalWrite(2,LOW); digitalWrite(3,HIGH); digitalWrite(4,LOW); digitalWrite(5,HIGH); delay(400);
  digitalWrite(2,LOW); digitalWrite(3,LOW); digitalWrite(4,HIGH); digitalWrite(5,LOW);delay(500);}
  
}
