#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"
int print_digit(int z);

int dp= 0;
int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int en0 = 9;
int en1 = 8;

void setup()
{
 pinMode(a ,OUTPUT);   
  pinMode(b, OUTPUT);  
  pinMode(c, OUTPUT);  
  pinMode(d, OUTPUT);  
  pinMode(e, OUTPUT);  
  pinMode(f, OUTPUT);  
  pinMode(g, OUTPUT);  
  pinMode(dp,OUTPUT);  
  
  pinMode(en0, OUTPUT);
  pinMode(en1, OUTPUT);
}

void loop()
{
  for(int i=0;i<10;i++)
  {for(int j=0;j<10;j++)
           { for(int p=0;p<50;p++)
                 {print_digit(i);
                  digitalWrite(en1,HIGH);
                  delay(5);
                  digitalWrite(en1,LOW);
                  print_digit(j);
                  digitalWrite(en0,HIGH);
                  delay(5);
                  digitalWrite(en0,LOW);}
             }
    }
}

int print_digit(int z)
	{
	if(z<10)
		{
		switch(z)
			{
			case 0:
                          digitalWrite(a, HIGH);   
                          digitalWrite(b, HIGH);    
                          digitalWrite(c, HIGH);    
                          digitalWrite(d, HIGH);   
                          digitalWrite(e, HIGH);   
                          digitalWrite(f, HIGH);   
                          digitalWrite(g, LOW);       
			  			  break;

			case 1:
                          digitalWrite(a, LOW);   
                          digitalWrite(b, HIGH);    
                          digitalWrite(c, HIGH);    
                          digitalWrite(d, LOW);   
                          digitalWrite(e, LOW);    
                          digitalWrite(f, LOW);   
                          digitalWrite(g, LOW);    
                          break;

			case 2:
                          digitalWrite(a, HIGH);   
                          digitalWrite(b, HIGH);   
                          digitalWrite(c, LOW);    
                          digitalWrite(d, HIGH);   
                          digitalWrite(e, HIGH);    
                          digitalWrite(f, LOW);    
                          digitalWrite(g, HIGH);    
                          break;

			case 3:
			
                          digitalWrite(a, HIGH);   
                          digitalWrite(b, HIGH);   
                          digitalWrite(c, HIGH);    
                          digitalWrite(d, HIGH);   
                          digitalWrite(e, LOW);   
                          digitalWrite(f, LOW);  
                          digitalWrite(g, HIGH);  
                          break;

			case 4:
                          digitalWrite(a, LOW);   
                          digitalWrite(b, HIGH);   
                          digitalWrite(c, HIGH); 
                          digitalWrite(d, LOW); 
                          digitalWrite(e, LOW); 
                          digitalWrite(f, HIGH); 
                          digitalWrite(g, HIGH);
                          break;

			case 5:
                          digitalWrite(a, HIGH);   
                          digitalWrite(b, LOW);    
                          digitalWrite(c, HIGH); 
                          digitalWrite(d, HIGH); 
                          digitalWrite(e, LOW);  
                          digitalWrite(f, HIGH); 
                          digitalWrite(g, HIGH);  
                          break;

			case 6:
                          digitalWrite(a, HIGH);   
                          digitalWrite(b, LOW);    
                          digitalWrite(c, HIGH);   
                          digitalWrite(d, HIGH);   
                          digitalWrite(e, HIGH);   
                          digitalWrite(f, HIGH);  
                          digitalWrite(g, HIGH); 
                          break;

			case 7:
                          digitalWrite(a, HIGH);   
                          digitalWrite(b, HIGH);    
                          digitalWrite(c, HIGH);   
                          digitalWrite(d, LOW);   
                          digitalWrite(e, LOW);   
                          digitalWrite(f, LOW);   
                          digitalWrite(g, LOW);    
                          break;

			case 8:
                          digitalWrite(a, HIGH);  
                          digitalWrite(b, HIGH);   
                          digitalWrite(c, HIGH);  
                          digitalWrite(d, HIGH);  
                          digitalWrite(e, HIGH); 
                          digitalWrite(f, HIGH);  
                          digitalWrite(g, HIGH);  
                          break;

			case 9:
                          digitalWrite(a, HIGH); 
                          digitalWrite(b, HIGH);  
                          digitalWrite(c, HIGH); 
                          digitalWrite(d, HIGH); 
                          digitalWrite(e, LOW); 
                          digitalWrite(f, HIGH); 
                          digitalWrite(g, HIGH);  
                          break;
			}
		}
	}

