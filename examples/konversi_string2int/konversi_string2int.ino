/*
   Arduino Library Jefripunza
   Version 1.0
   Konversi string2int
*/
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);
  
  String text = "2454";
  int nilai = string2int(text);
  
  Serial.print("hasil: ");
  Serial.println(nilai);
}

void loop() {
  // kosong
}
