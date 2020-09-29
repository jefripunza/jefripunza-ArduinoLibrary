/*
   Arduino Library Jefripunza
   Version 1.0
   Split Text
*/
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);
  String text = "#0#1#2#3#";
  String data2 = splitText(text, '#', 2);
  Serial.println(data2);
}

void loop() {
  // kosong
}
