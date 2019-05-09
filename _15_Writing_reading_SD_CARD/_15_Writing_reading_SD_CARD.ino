#include<SD.h>
void setup() {
int CS_pin =10;
Serial.begin(9600);
if(!SD.begin(CS_pin))       //check if card is ready
  {
    Serial.println("Failed to read Card");  
    return;
  }
  Serial.println("Card is Ready");
}

void loop() {
String dataString  = "Hello Ashish Kumar , ashishmarch12@gmail.com !";
File dataFile=SD.open("Info.xml", FILE_WRITE);  // Open/create file
if (dataFile)                                     
 {
  dataFile.println(dataString);                   // Write the data 
  dataFile.close();                               // Close the File
  Serial.println(dataString);                     // Print on Serial Monitor
  }
else
 {
  Serial.println("Couldn't Write"); 
  }
delay(500);
}
