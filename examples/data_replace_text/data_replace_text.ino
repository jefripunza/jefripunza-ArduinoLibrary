/*
   Arduino Library Jefripunza
   Version 1.0
   Replace Text
*/
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);
  String awal = "Aku Belanda!";
  String hasil = replaceText(awal, "Belanda", "Indonesia");
  Serial.println(hasil);
}

void loop() {
  // kosong
}
