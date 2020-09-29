/*
 * Arduino Library Jefripunza
 * Version 1.0
 * Manajemen EEPROM 
 * Menulis String, Membaca String, & Menghapus isi EEPROM
 */
#include <jefripunza.h>

void setup() {
  Serial.begin(9600);

  //menulis string ke EEPROM
  Serial.println("menulis EEPROM");
  writeStringToEEPROM(0, "i'm fine, thanks");
  Serial.println("EEPROM terisi");

  //membaca string dari EEPROM
  String ambilString = readStringFromEEPROM(0);
  Serial.print("baca: ");
  Serial.println(ambilString);

  //hapus isi EEPROM
  Serial.println("hapus EEPROM");
  eraseValueEEPROM(0);
  Serial.println("EEPROM bersih");

  //membaca string dari EEPROM
  ambilString = readStringFromEEPROM(0);
  Serial.print("baca: ");
  Serial.println(ambilString);
}

void loop() {
  // kosong
}
