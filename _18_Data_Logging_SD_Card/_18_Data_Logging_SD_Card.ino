//Program to read values from sensors on A0 A1 ans A2 and save them in excel file

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
int x=analogRead(A0);
int y=analogRead(A1);
int z=analogRead(A2);

String dataString  = String(s_no)+", "+String(x)+", "+String(y)+", "+String(z); // Concatenation of Strings

File dataFile=SD.open("Info.csv", FILE_WRITE);  // Open/create excel file
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
s_no++;
delay(500);
}
