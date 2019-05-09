int Motion_Sensor = 9;
int LED = 13;
int reading;

void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(Motion_Sensor,INPUT);
}

void loop()
{
  reading=digitalRead(Motion_Sensor);
  Serial.println(reading);
  if (reading==HIGH)
  digitalWrite(LED,HIGH);
  
  if(reading==LOW)
  digitalWrite(LED,LOW);
  delay(200);
}
