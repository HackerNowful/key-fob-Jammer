/* 
 *  Author    = M.Nohammed Nowful Khan 
 *  Title     = Rf Key Jammer with D1 Mini 
 *  Insta     = hacker_nowful
 *  Youtube   = https://www.youtube.com/channel/UClNQL9DA_3Aq3Uql4jW60Eg
 *  GitHub    = https://github.com/HackerNowful
 *  GitHub    = https://github.com/HackerSanjeev
 */
#include <Arduino.h>
#define FS1000A_DATA_PIN 15

void setup() {
  pinMode(FS1000A_DATA_PIN, OUTPUT);
  digitalWrite(FS1000A_DATA_PIN, LOW);
}

void loop() {
  uint8_t widthsize;
  uint8_t sequence;
  uint8_t duration;

  for (sequence = 1; sequence < 50; sequence++) {
    for (duration = 1; duration <= 3; duration++) {
      digitalWrite(FS1000A_DATA_PIN, HIGH);
      for (widthsize = 1; widthsize <= (1 + sequence); widthsize++) {
        delayMicroseconds(50);
      }

      digitalWrite(FS1000A_DATA_PIN, LOW);
      for (widthsize = 1; widthsize <= (1 + sequence); widthsize++) {
        delayMicroseconds(50);
      }
    }
  }
}
