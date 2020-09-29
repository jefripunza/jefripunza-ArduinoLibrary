/*
   Arduino Library Jefripunza
   Version 1.0
   Konversi string2char
*/
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);
  
  String awal = "akhsiap";
  char *text = string2char(awal);
  
  Serial.print("hasil: ");
  Serial.println(text);
}

void loop() {
  // kosong
}
