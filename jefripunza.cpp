/*
   Senjata Tempur (.cpp)
   Version : 1.0
   Release : 26 September 2020
   Author  : Jefri Herdi Triyanto
*/
#include <Arduino.h>
#include <EEPROM.h>

#include "jefripunza.h"


//------------------------------- GET DATA -------------------------------//
//Example : String generate = generateText(10);
String generateText(int length) {
  char *alphabeth = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  const long alphabethLength = 62; //sizeof(alphabeth);
  char pass[length + 1]; //we add 1 extra for the NULL
  for (int n = 0; n < length; n++) {
    pass[n] = alphabeth[random(0, alphabethLength)];
  }
  return String(pass);
}

//Example : String data2 = splitText("#0#1#2#3#",'#',2);
String splitText(String data, char separator, int index) {
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length() - 1;
  for (int i = 0; i <= maxIndex && found <= index; i++) {
    if (data.charAt(i) == separator || i == maxIndex) {
      found++;
      strIndex[0] = strIndex[1] + 1;
      strIndex[1] = (i == maxIndex) ? i + 1 : i;
    }
  }
  return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}

// Example : String text = replaceText("Aku Belanda!", "Belanda", "Indonesia");
String replaceText(String textTarget, String target, String replace) {
  textTarget.replace(target, replace);
  return textTarget;
}

//Example : float sensor = sensorRange(A0,0,1023,0,10);
float sensorRange(int sensor,int awalkecil, int awalbesar, float akhirkecil, float akhirbesar) {
  int sensorValue = analogRead(sensor);
  sensorValue = map(sensorValue,awalkecil, awalbesar, akhirkecil, akhirbesar);
  return sensorValue;
}


//------------------------------- CONVERT -------------------------------//
//Example : char *text = string2char("akhsiap");
char* string2char(String text) {
  if (text.length() != 0) {
    char *p = const_cast<char*>(text.c_str());
    return p;
  }
}

// Example : int char2int('24.5');
int char2int(const char *s) {
  int sign = 1;
  if (*s == '-')
    sign = -1;
  s++;
  int num = 0;
  while (*s) {
    num = ((*s) - '0') + num * 10;
    s++;
  }
  return num * sign;
}

// Example : long string2long("24.5");
long string2long(String value) {
  long outLong=0;
  long inLong=1;
  int c = 0;
  int idx=value.length()-1;
  for(int i=0;i<=idx;i++){
    c=(int)value[idx-i];
    outLong+=inLong*(c-48);
    inLong*=10;
  }
  return outLong;
}







//------------------------------ EXTRA ZONE -------------------------------//
// Example : blinkLed(200);
void blinkLED(int delayTime, int led) {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
}




//----------------------------- EEPROM STRING -----------------------------//
// Example : writeStringToEEPROM(0, "i'm fine, thanks ouyeah");
void writeStringToEEPROM(int addrOffset, const String &strToWrite) {
  eraseValueEEPROM(addrOffset);

  byte len = strToWrite.length();
  EEPROM.write(addrOffset, len);

  for (int i = 0; i < len; i++){
    EEPROM.write(addrOffset + 1 + i, strToWrite[i]);
  }
}

// Example : String retrievedString = readStringFromEEPROM(0);
String readStringFromEEPROM(int addrOffset) {
  int newStrLen = EEPROM.read(addrOffset);
  char data[newStrLen + 1];
  for (int i = 0; i < newStrLen; i++){
    data[i] = EEPROM.read(addrOffset + 1 + i);
  }
  data[newStrLen] = '\0';
  return String(data);
};

// Example : eraseValueEEPROM(0);
void eraseValueEEPROM(int start){
  for (int i = start ; i < EEPROM.length() ; i++) {
    EEPROM.write(i, 0);
  }
}



//------------------------------ MAIN MUSIK -------------------------------//
// Example : bunyikan(NOTE_C5, 100, 50);
void bunyikan(const int buzzerPin, int note, int duration, int selang) {
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
  delay(duration);

  //Stop tone on buzzerPin
  noTone(buzzerPin);

  delay(selang); //selang waktu (50)
}