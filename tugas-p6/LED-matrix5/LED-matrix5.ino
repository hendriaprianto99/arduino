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
byte hurufD[] = {0x7E, 0x22, 0x22, 0x32, 0x32, 0x32, 0x7E, 0x00};
byte hurufI[] = {
    B00111100, //first frame of invader #1
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00111100,
    B00000000
  };

 void setup() {
  //buat led1
  lc.shutdown(0, false);
  lc.setIntensity(0, 1);
  lc.clearDisplay(0);

  //buat led2
  lc.shutdown(1, false);
  lc.setIntensity(1, 1);
  lc.clearDisplay(1);

  //buat led3
  lc.shutdown(2, false);
  lc.setIntensity(2, 1);
  lc.clearDisplay(2);

  //buat led3
  lc.shutdown(3, false);
  lc.setIntensity(3, 1);
  lc.clearDisplay(3);
 }

 void A(int dev) {
  for(int i=0; i<8; i++){
    lc.setRow(dev, i, hurufA[i]);
  }
 }

 void B(int dev) {
  for(int i=0; i<8; i++){
    lc.setRow(dev, i, hurufB[i]);
  }
 }

 void C(int dev) {
  for(int i=0; i<8; i++){
    lc.setRow(dev, i, hurufC[i]);
  }
 }

 void D(int dev) {
  for(int i=0; i<8; i++){
    lc.setRow(dev, i, hurufD[i]);
  }
 }

 void I(int dev) {
  for(int i=0; i<8; i++){
    lc.setRow(dev, i, hurufI[i]);
  }
 }

void loop(){
  for(int i=0; i<4; i++){
    A(i);
    D(i-1);
    I(i-2);
    I(i-3);
    delay(1000);
  }
  lc.clearDisplay(0);
  lc.clearDisplay(1);
  lc.clearDisplay(2);
  lc.clearDisplay(3);
  delay(1000);
}
