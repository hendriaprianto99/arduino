#include <MD_Parola.h>

// mendefinisikan pin
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CLK_PIN   13
#define DATA_PIN  11
#define CS_PIN    10

// HARDWARE SPI
MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

uint8_t scrollSpeed = 50; //kecepatan teks
textEffect_t scrollEffect = PA_SCROLL_LEFT; //menentukan posisi teks
textPosition_t scrollAlign = PA_LEFT;

// Global message buffers shared by Serial and Scrolling functions
#define  BUF_SIZE  75
char curMessage[BUF_SIZE] = { "" };
char newMessage[BUF_SIZE] = { "Kelompok 12   **   " };
bool newMessageAvailable = true;

void readSerial(void) {
  static char *cp = newMessage;
}

void setup() {
  Serial.begin(57600);

  P.begin();
  P.displayText(curMessage, scrollAlign, scrollSpeed, scrollEffect, scrollEffect);
}

void loop()
{
  if (P.displayAnimate())
  {
    if (newMessageAvailable)
    {
      strcpy(curMessage, newMessage);
      newMessageAvailable = false;
    }
    P.displayReset();
  }
  readSerial();
}
