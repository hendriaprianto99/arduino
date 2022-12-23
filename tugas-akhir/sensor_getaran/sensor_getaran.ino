#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int PinAlarm = 3;  
int PinGetar =2;

void setup() {  
  Serial.begin(9600);
  pinMode(PinAlarm, OUTPUT);
  pinMode(PinGetar, INPUT); 

  if(nilai > 00){
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote < 8; thisNote++) {
      // to calculate the note duration, take one second divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
      }
    }
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
  } else if(nilaigetar > 2500) {
    Serial.println(nilaigetar); 
    Serial.println("getaran tinggi");
    digitalWrite(PinAlarm, HIGH);
  }
  delay(10); 
  Serial.println(""); 

    
}
