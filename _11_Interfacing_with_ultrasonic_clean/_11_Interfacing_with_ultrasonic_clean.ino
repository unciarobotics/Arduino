
#define trigPin 9
#define echoPin 10

void setup()
{
  Serial.begin(9600);
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
  delay(500);
}
