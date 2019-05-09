const int s0=2;const int s1=3;const int s2=4;const int s3=5;const int sensorData=6;

const int OE=7;
int data = 0;

void setup()
{ Serial.begin(9600);
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(sensorData,INPUT);
  pinMode(OE,OUTPUT); digitalWrite(OE,HIGH);
  
  //frequency scale 100%
  digitalWrite(s0,HIGH);digitalWrite(s1,LOW);
  
}
void loop()
{
  //Getting Red color data s2 = LOW , s3 = LOW
  digitalWrite(s2,LOW);digitalWrite(s3,LOW);
  data=pulseIn(sensorData,LOW);
  Serial.print("R");Serial.print(data);
  Serial.print('\t');

  //Getting Green color data s2 = HIGH , s3 = HIGH
  digitalWrite(s2,HIGH);digitalWrite(s3,HIGH);
  data=pulseIn(sensorData,LOW);
  Serial.print("G ");Serial.print(data);
  Serial.print('\t');  

  //Getting Blue color data s2 = LOW , s3 = HIGH
  digitalWrite(s2,LOW);digitalWrite(s3,HIGH);
  data=pulseIn(sensorData,LOW);
  Serial.print("B ");Serial.print(data);
  Serial.print('\t');
  
  //Getting Clear filter data s2 = HIGH , s3 = LOW
  digitalWrite(s2,HIGH);digitalWrite(s3,LOW);
  data=pulseIn(sensorData,LOW);
  Serial.print("W ");Serial.print(data);
  Serial.println(""); 
  delay(700);
  
}
