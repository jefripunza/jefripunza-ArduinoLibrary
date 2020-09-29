/*
   Arduino Library Jefripunza
   Version 1.0
   Sensor Range
*/
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensor = sensorRange(A0,0,1023,0,10);
  Serial.println(sensor);
  delay(100);
}
