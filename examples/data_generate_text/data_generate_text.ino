/*
 * Arduino Library Jefripunza
 * Version 1.0
 * Generate Text
 */
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  String generate = generateText(10); 
  Serial.println(generate);
  delay(1000);
}
