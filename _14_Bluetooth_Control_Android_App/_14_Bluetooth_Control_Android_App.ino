String state;
void setup() 
{ pinMode(13,OUTPUT);               
  digitalWrite(13,LOW);
  Serial.begin(9600); 
}
void loop() 
{
if (Serial.available()>0)
  { state = Serial.readString();}

if (state=='a')
  {digitalWrite(13,HIGH);
   Serial.println("LED ON");
   }
if (state=='b')
  {digitalWrite(13,LOW);
   Serial.println("LED OFF");
   }
else
{Serial.println(state);}

delay(100);
}
