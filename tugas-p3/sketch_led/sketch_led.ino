const int PIN_12 = 12;
const int TITIK = 300;
const int PANJANG = 900;
const int JEDA = 400;

void setup() {
    //  setup code, to run once
    pinMode(PIN_12,OUTPUT);
  }

void loop() {
    //  kode buat repeatly
    //  kirim satu titik
    digitalWrite(PIN_12,HIGH);
    delay(TITIK);
    digitalWrite(PIN_12,LOW);
    delay(100);
    
    digitalWrite(PIN_12,HIGH);
    delay(TITIK);
    digitalWrite(PIN_12,LOW);
    delay(100);

    digitalWrite(PIN_12,HIGH);
    delay(TITIK);
    digitalWrite(PIN_12,LOW);
    delay(100);
    delay(JEDA);

    digitalWrite(PIN_12,HIGH);
    delay(PANJANG);
    digitalWrite(PIN_12,LOW);
    delay(100);

    digitalWrite(PIN_12,HIGH);
    delay(PANJANG);
    digitalWrite(PIN_12,LOW);
    delay(100);

    digitalWrite(PIN_12,HIGH);
    delay(PANJANG);
    digitalWrite(PIN_12,LOW);
    delay(100);
    delay(JEDA);
  }
