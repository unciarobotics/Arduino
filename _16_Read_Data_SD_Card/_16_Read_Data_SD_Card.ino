#include<SD.h>
float refresh_rate = 0.0;
void setup() 
{
int CS_pin =10;
Serial.begin(9600);


/*____________________________________________________________________________________________________________
Initialize the card
______________________________________________________________________________________________________________*/

if(!SD.begin(CS_pin))       //check if card is ready
  {
    Serial.println("Failed to read Card");  
    return;
  }
Serial.println("Card is Ready");

/*____________________________________________________________________________________________________________
 Read the configuration information
______________________________________________________________________________________________________________*/


File commandFile=SD.open("COMMANDS.txt");

if(commandFile)
{
float decade=pow(10, (commandFile.available()-1));
while(commandFile.available())
 {
  float temp = (commandFile.read()-'0');
  refresh_rate=temp*decade+refresh_rate;
  decade=decade=decade/10;
 }
Serial.print("Refresh Rate = ");
Serial.print(refresh_rate);
Serial.println("ms");
}
else
  {
    Serial.println("Could not read command File");
    return; 
  }
}

/*________________________________________________________________________________________________________________________________________________
__________________________________________________________________________________________________________________________________________________ */

void loop()
 {
  String dataString  = "1000";
File dataFile=SD.open("COMMANDS.txt", FILE_WRITE);  // Open/create file
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
delay(refresh_rate);
  }

