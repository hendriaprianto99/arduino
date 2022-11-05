#include <LedControl.h>

LedControl lc = LedControl(12, 11, 10, 4); //pins: DIN, CLK, CS, display of content

unsigned long delayTime(200); //delay antara frames

//masukan values dalam array
byte hurufA[] = {0x3C, 0x24, 0x24, 0x7E, 0x62, 0x62, 0x62, 0x00};
byte hurufB[] = {0x7C, 0x24, 0x24, 0x3E, 0x32, 0x32, 0x7E, 0x00};
byte hurufC[] = {
    B00111110, //first frame of invader #1
    B00100010,
    B00100000,
    B01100000,
    B01100000,
    B01100010,
    B01111110,
    B00000000
  };

 void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 2);
  lc.clearDisplay(0);
 }

 void A() {
  for(int i=0; i<8; i++){
    lc.setRow(0, i, hurufA[i]);
  }
 }

 void B() {
  for(int i=0; i<8; i++){
    lc.setRow(0, i, hurufB[i]);
  }
 }

 void C() {
  for(int i=0; i<8; i++){
    lc.setRow(0, i, hurufC[i]);
  }
 }

void loop(){
  A();
  delay(1000);
  
  B();
  delay(1000);

  C();
  delay(1000);
}
