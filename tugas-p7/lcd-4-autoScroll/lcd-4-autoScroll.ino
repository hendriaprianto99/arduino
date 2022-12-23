#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.autoscroll();
  lcd.setCursor(16, 0);

  for(int x=1; x <=11; x++) {
    lcd.print(x);
    lcd.print(" ");
    delay(300);
  }
  lcd.clear();
}
