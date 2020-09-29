/*
   Arduino Library Jefripunza
   Version 1.0
   Main Musik
   TIPE-X - SALAM RINDU
*/
#include <jefripunza.h>

int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  intro();
  intro();
  delay(SPEED_6_BEAT);
  verse_1();
  verse_2();

  //lanjutkan lagi ya untuk belajar ^_^ hehee
}

void intro() {
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_G5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_G5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);

  bunyikan(buzzerPin, NOTE_B4, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_4_BEAT , SPEED_2_BEAT);
}

void verse_1() {
  // saat bulan purnama bersinar
  bunyikan(buzzerPin, NOTE_C5, SPEED_6_BEAT , SPEED_3_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_B4, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_B4, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_9_BEAT);

  // terangi malam ku
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_B4, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_B4, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_B4, SPEED_4_BEAT , SPEED_5_BEAT);

  // teringat padamu
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_4_BEAT , SPEED_2_BEAT);

  // kan ku kirimkan salam
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_4_BEAT , SPEED_2_BEAT);

  // tentang rasa rindu ku
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_G5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_G5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);

  //bersama angin malam
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_B4, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_2_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_5_BEAT);

  // ku setia menunggu
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_4_BEAT , SPEED_2_BEAT);
}

void verse_2() {
  // mimpikan mimpikan
  bunyikan(buzzerPin, NOTE_C5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_4_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_5_BEAT , SPEED_1_BEAT);

  // aku oh sayang ku
  bunyikan(buzzerPin, NOTE_G5, SPEED_5_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_G5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_2_BEAT);

  delay(SPEED_2_BEAT );

  // peluk erat hati ini
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);

  // dan jagalah slalu
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_4_BEAT , SPEED_2_BEAT);

  // akan ku dendangkan
  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_4_BEAT , SPEED_2_BEAT);

  // lagu ini untuk mu
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_G5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_G5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_F5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_4_BEAT , SPEED_1_BEAT);

  //dengarlah, dengarlah sayang
  bunyikan(buzzerPin, NOTE_A4, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_B4, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_C5, SPEED_12_BEAT , SPEED_4_BEAT);

  bunyikan(buzzerPin, NOTE_F5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_E5, SPEED_3_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_12_BEAT , SPEED_1_BEAT);

  bunyikan(buzzerPin, NOTE_C5, SPEED_2_BEAT , SPEED_1_BEAT);
  bunyikan(buzzerPin, NOTE_D5, SPEED_2_BEAT , SPEED_1_BEAT);
}
