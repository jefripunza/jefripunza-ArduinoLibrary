/*
   Arduino Library Jefripunza
   Version 1.0
   Konversi char2int
*/
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);
  
  char *text = "24.5";
  int nilai = char2int(text);
  
  Serial.print("hasil: ");
  Serial.println(nilai);
}

void loop() {
  // kosong
}
