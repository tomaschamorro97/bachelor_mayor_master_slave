#include <Wire.h>
void setup()
{
  Serial.begin(9600);
  Wire.begin();
}

void loop()
{
    int pot1 = analogRead(0);
    pot1=map(pot1,0,1023,0,255);
    Serial.println(pot1);
    int pot2 = analogRead(1);
    pot2=map(pot2,0,1023,0,255);
    Serial.println(pot2);
    Wire.beginTransmission(1);  
    Wire.write(pot1);           
    Wire.endTransmission();  
    
    Wire.beginTransmission(2);  
    Wire.write(pot2);           
    Wire.endTransmission();    
    delay(500);
 }
