#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // Kalau gagal ganti 0x3F ke 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
}


void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Hello World!");
  
  lcd.setCursor(2,1);
  lcd.print("LCD Tutorial");
}
