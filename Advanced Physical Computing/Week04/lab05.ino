#include <CapacitiveSensor.h>

CapacitiveSensor   cs_4_2 = CapacitiveSensor(4,2);       
  
void setup()                    
{
   Serial.begin(9600);
}

void loop()                    
{
    long start = millis();
    long total =  cs_4_2.capacitiveSensor(30);
    if(total>30){
      digitalWrite(11,HIGH); 
    }else{
      digitalWrite(11,LOW); 
    }
    Serial.print(millis() - start);       
    Serial.print("\t");                 
    Serial.print(total);                      
    delay(10);                             
}
