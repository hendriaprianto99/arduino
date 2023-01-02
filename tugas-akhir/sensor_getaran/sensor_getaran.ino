#include "pitches.h"

int melody[] = {
  NOTE_E6
};

int noteDurations[] = {
  4
};

int PinAlarm = 8;  
int PinGetar = 2;

void setup() {  
  Serial.begin(9600);
  pinMode(PinAlarm, OUTPUT);
  pinMode(PinGetar, INPUT); 
}

long nilai() {
  delay(100);
  long nilaigetar=pulseIn (PinGetar, HIGH);
  return nilaigetar;
 }
      
void loop() {
  long nilaigetar = nilai();    
  Serial.print(nilaigetar); 
  if(nilaigetar == 00){
    Serial.println(nilaigetar);
    Serial.println("tidak ada getaran");
    digitalWrite(PinAlarm, LOW);
  } else if(nilaigetar > 1500) {
    Serial.println(nilaigetar); 
    Serial.println("getaran tinggi");
    if(nilai > 00){
    for (int thisNote = 0; thisNote < 4; thisNote++) {
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(8);
      }
    }
    digitalWrite(PinAlarm, HIGH);
  }
  Serial.println(""); 
}
