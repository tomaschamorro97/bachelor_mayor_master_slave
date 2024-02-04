#include <Wire.h>
int led=22;

void setup()
{
  Wire.begin(2);                  
  Wire.onReceive(receiveEvent); 
  pinMode(led,OUTPUT);
  Serial.begin(9600);            
}

void loop()
{
}

void receiveEvent( )
{
  while(Wire.available()) 
  {
    int x = Wire.read();
    Serial.println(x);
    if(x<100)
      {
        digitalWrite(led,LOW);
      }
    else
     {
        digitalWrite(led,HIGH);
     }
  }
} 
