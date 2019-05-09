
int lightPin = 0;  //define a pin for Photo resistor
int ledPin=13;     //define a pin for LED

void setup()
{
    Serial.begin(9600);  //Begin serial communcation
    pinMode( ledPin, OUTPUT );
}

void loop()
{
    
    Serial.println(analogRead(lightPin)); //Write the value of the photoresistor to the serial monitor.
    delay(250);
    int val = analogRead(lightPin);
    
    if(val<=400)
    {
      digitalWrite(ledPin,HIGH);
    }
    else
    {
      digitalWrite(ledPin,LOW);
    }
}

