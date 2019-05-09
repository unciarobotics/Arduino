
int lightPin = 0;  //define a pin for Photo resistor
int ledPin=9;     //define a pin for LED

void setup()
{
    Serial.begin(9600);  //Begin serial communcation
    pinMode( ledPin, OUTPUT );
}

void loop()
{
    
    Serial.println(analogRead(lightPin)); //Write the value of the photoresistor to the serial monitor.
    
    int val = analogRead(lightPin);
    
    val = constrain(val, 200, 300);
    int ledLevel = map(val,200,300,255,0);
   
   analogWrite(ledPin,ledLevel);
}

