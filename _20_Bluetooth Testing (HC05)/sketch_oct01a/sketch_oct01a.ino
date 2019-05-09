char state=0;
void setup() 
{ pinMode(13,OUTPUT);               
  digitalWrite(13,LOW);
  Serial.begin(38400); 
}
void loop() 
{
if (Serial.available()>0)
  { state = Serial.read();}
  
   Serial.println(state);
   delay(500);
   
}
