#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.print("Senin");
  delay(2000);
  lcd.clear();
  
  lcd.print("Baris ke 0 ");
  lcd.print("13:45");
  lcd.setCursor(0,1);

  lcd.print("Baris ke 1 ");
  lcd.setCursor(0,2);
  delay(2000);
}
