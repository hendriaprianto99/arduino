#include <Wire.h>
#include <BH1750.h>
#include <LiquidCrystal_I2C.h>

BH1750 lightMeter;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  Wire.begin();
  lightMeter.begin();
  Serial.println(f("BH1750 Test"));
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Kelompok 12");
  lcd.setCursor(0,1);
  lcd.print("Light Meter(BH1750)");

  delay(5000);
  lcd.clear();
}

void loop() {
  float lux = lightMeter.readLightLevel();
  Serial.print("Light: ");
  Serial.print(Lux);
  Serial.println(" lx");

  lcd.setCursor(0,0);
  lcd.print(" Light Meter");
  lcd.setCursor(0,1);
  lcd.print("Light: ");
  lcd.setCursor(0,1);
  lcd.print("Light: ");
  lcd.setCursor(6,1);
  lcd.print(lux);
  lcd.print(" lux");
  
  delay 1000();
}
