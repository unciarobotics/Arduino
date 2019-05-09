void setup() {
Serial.begin(9600);  
}

void loop() {
Serial.flush();
while(Serial.available()>0)
{Serial.read();}

if (Serial.find("$GPRMC,"))
{
  String temp=Serial.readStringUntil('\n');
  {
     Serial.print(temp);
     Serial.println('\n');
     delay(5); 
  }
}}
