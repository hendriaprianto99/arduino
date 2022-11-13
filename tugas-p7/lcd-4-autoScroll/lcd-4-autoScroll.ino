#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.autoscroll();
  lcd.setCursor(16, 0);

  for(int x=1; x <=14; x++) {
    lcd.print(x);
    delay(300);
  }
  lcd.clear();
}
