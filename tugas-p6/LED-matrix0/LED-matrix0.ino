#include <LedControl.h>

LedControl lc = LedControl(12, 11, 10, 4); //pins: DIN, CLK, CS, display of content

unsigned long delayTime(200); //delay antara frames

//masukan values dalam array
byte hurufB[] = {
    B00000000, //first frame of invader #1
    B00111111,
    B01000000,
    B01100000,
    B01100000,
    B01000000,
    B00111111,
    B00000000
  };
byte hurufC[] = {
    B00000000, //first frame of invader #1
    B11111111,
    B10000000,
    B10000000,
    B10000000,
    B10000000,
    B11111111,
    B00000000
  };
byte hurufD[] = {
    B00000000, //first frame of invader #1
    B11111111,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B11111111,
    B00000000
  };
byte hurufI[] = {
    B11111110, //first frame of invader #1
    B00000001,
    B00000001,
    B00000011,
    B00000011,
    B00000001,
    B10000001,
    B11111110
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
    B(3);
    C(2);
    D(1);
    I(0);
//    delay(1000);

//  lc.clearDisplay(0);
//  lc.clearDisplay(1);
//  lc.clearDisplay(2);
//  lc.clearDisplay(3);
//  delay(1000);
}
