char incomingByte;
int LED1=2;
int LED2=3;
int LED3=4;
int LED4=5;
int LED5=6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 while (Serial.available()>0)
  {
    incomingByte = Serial.read();
    Serial.println(incomingByte);
    switch(incomingByte)
    {
      case 'a':digitalWrite(LED1,HIGH);Serial.println("L1 ON");break;
      case 'b':digitalWrite(LED1,LOW);Serial.println("L1 OFF");break;
      case 'c':digitalWrite(LED2,HIGH);Serial.println("L2 ON");break;
      case 'd':digitalWrite(LED2,LOW);Serial.println("L2 OFF");break;
      case 'e':digitalWrite(LED3,HIGH);Serial.println("L3 ON");break;
      case 'f':digitalWrite(LED3,LOW);Serial.println("L3 OFF");break;
      case 'g':digitalWrite(LED4,HIGH);Serial.println("L4 ON");break;
      case 'h':digitalWrite(LED4,LOW);Serial.println("L4 OFF");break;
      case 'i':digitalWrite(LED5,HIGH);Serial.println("L5 ON");break;
      case 'j':digitalWrite(LED5,LOW);Serial.println("L5 OFF");break;
      default: break;
    }
  }
}
