/*
 * Senjata Tempur (.h)
 * Version : 1.0 
 * Release : 26 September 2020
 * Author  : Jefri Herdi Triyanto
 */
#ifndef jefripunza_h
#define jefripunza_h

#include <Arduino.h>


//remake + make
String generateText(int length);
String splitText(String data, char separator, int index);
String replaceText(String textTarget, String target, String replace);

//konversi
char* string2char(String text);
int char2int(const char *s);
long string2long(String value);

//EEPROM String
void writeStringToEEPROM(int addrOffset, const String &strToWrite);
String readStringFromEEPROM(int addrOffset);
void eraseValueEEPROM(int start);

// Extra
void blinkLED(int delayTime, int led);

//Main Musik
////*****************************************
//Defining note frequency
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988

//Define Speed Song
#define SPEED_0_BEAT 0
#define SPEED_1_BEAT 50
#define SPEED_2_BEAT SPEED_1_BEAT+SPEED_1_BEAT
#define SPEED_3_BEAT SPEED_2_BEAT+SPEED_1_BEAT
#define SPEED_4_BEAT SPEED_3_BEAT+SPEED_1_BEAT
#define SPEED_5_BEAT SPEED_4_BEAT+SPEED_1_BEAT
#define SPEED_6_BEAT SPEED_5_BEAT+SPEED_1_BEAT
#define SPEED_7_BEAT SPEED_6_BEAT+SPEED_1_BEAT
#define SPEED_8_BEAT SPEED_7_BEAT+SPEED_1_BEAT
#define SPEED_9_BEAT SPEED_8_BEAT+SPEED_1_BEAT
#define SPEED_10_BEAT SPEED_9_BEAT+SPEED_1_BEAT
#define SPEED_11_BEAT SPEED_10_BEAT+SPEED_1_BEAT
#define SPEED_12_BEAT SPEED_11_BEAT+SPEED_1_BEAT
////*****************************************
void bunyikan(const int buzzerPin, int note, int duration, int selang);

#endif
