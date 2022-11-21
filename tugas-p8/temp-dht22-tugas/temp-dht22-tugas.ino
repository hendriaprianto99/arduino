#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.init();
  dht.begin();
  lcd.print("Suhu & Kelembaban");
  delay(2000);
  lcd.clear();
}

void.loop() {
  delay(2000);
  lcd.clear();
  lcd.print("Suhu ");
  lcd.print(getTemp("c"));
  lcd.print("C");
  lec.setCursor(0, 1);
  lcd.print("Kelembaban");

  lcd.print(getTemp("h"));
  lcd.print(" %");
//  lec.setCursor(0, 3);
  lcd.print("Baris ke 3");
  delay(2000);
}

float getTemp(String req) {
  //membaca sensor sebagai humidity
  float h = dht.readHumidity();
  //membaca sensor sebagai celcius(default)
  float t = dht.readTemperature();
  //membaca temperature sebagai fahrenheit
  float f = dht.readTemperature(true);

  //menghitung temperature sebagai heat index dalam satuan fahrenheit(default)
  float hif = dnt.computeHeatIndex(f, h);
  //menghitung temperature sebagai heat index dalam satuan celcius
  float hif = dnt.computeHeatIndex(t, h, false);

  //check kalo ada error
  if(isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  float k = t + 273.15;
  //menghitung heat index dalam satua kelvin
  if(req == "c") {
    return t; //nilai celcius
  } else if(req == "f") {
    return f; //nilai fahrenheit
  } else if(req == "h") {
    return h; //nilai humidity
  } else if(req == "hif") {
    return hif; //nilai index dalam satuan fahrenheit
  } else if(req == "hic") {
    return hic; //nilai index dalam satuan celcius
  } else if(req == "k") {
    return k; //nilai kelvin
  } else {
    return 0.000: //if no req found, return 0.000
  } 
}
