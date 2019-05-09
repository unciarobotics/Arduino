int pot_pin=A0;
int LED=10;
void setup()
{
pinMode(LED,OUTPUT);
}
void loop()
{    
 int pot_val=analogRead(pot_pin);
 
 pot_val=constrain(pot_val,100,1000);
 int x=map(pot_val,100,1000,0,255);
 analogWrite(LED,x);
 

}
