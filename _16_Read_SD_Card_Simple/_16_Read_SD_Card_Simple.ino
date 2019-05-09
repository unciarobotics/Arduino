//Program to read data from text file on SD card

#include<SD.h>
int s_no=1; //serial number for data
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
  int temp;
File textFile=SD.open("info.txt");
if (textFile)
  {
    Serial.println("\n\nReading Text File");     
    while (textFile.available())              //check if text file is having data
    {
       Serial.print((char)textFile.read());   // if yes then read the data and convert it to char
      // Serial.write(textFile.read());       // you can use this format to directly print data in char format
    }
    //Serial.println('\n');
    textFile.close();                         // close the File
  }
  
else
{
  Serial.println("Couldn't Read the file");
  return;
}
delay(1000);
}
