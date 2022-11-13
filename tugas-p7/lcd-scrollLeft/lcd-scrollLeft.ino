#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  
  lcd.print("Scrolling Text");
  lcd.setCursor(0, 1);

  lcd.print("Scrolling Text");
  lcd.setCursor(9, 2);
}

void loop() {
  lcd.scrollDisplayRight();
  delay(300);
}
