// variable declare buat pin
const int PIN_MERAH = 12;
const int PIN_KUNING = 11;
const int PIN_HIJAU = 10;

// var buat nampung nilai yang dipake delay
const int TUNDA_MERAH = 8000;
const int TUNDA_KUNING = 1000;
const int TUNDA_HIJAU = 3000;

void setup() {
  pinMode(PIN_MERAH,OUTPUT);
  pinMode(PIN_KUNING,OUTPUT);   
  pinMode(PIN_HIJAU,OUTPUT);
}

//berfungsi untuk memanipulasi arduino
void loop() {
  // pin hijau
  digitalWrite(PIN_HIJAU,HIGH); // lampu nyala
  delay(TUNDA_HIJAU);
  digitalWrite(PIN_HIJAU,LOW); // lampu mati

  // pin kuning
  digitalWrite(PIN_KUNING,HIGH); // lampu nyala
  delay(TUNDA_KUNING);
  digitalWrite(PIN_KUNING,LOW); // lampu mati

  // pin merah
  digitalWrite(PIN_MERAH,HIGH); // lampu nyala
  delay(TUNDA_MERAH);
  digitalWrite(PIN_MERAH,LOW); // lampu mati
}
