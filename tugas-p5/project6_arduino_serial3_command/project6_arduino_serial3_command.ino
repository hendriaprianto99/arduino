int const LED_HIJAU = 4;
int const LED_KUNING = 5;
int const LED_MERAH = 6;

void setup() {
  pinMode(LED_HIJAU, OUTPUT);
  pinMode(LED_KUNING, OUTPUT);
  pinMode(LED_MERAH, OUTPUT);
  Serial.begin(9600); //set Baud reate serial
}

void loop() {
  boolean perintahFlag = true;
  String perintah = "";

  //baca perintah di serial port
  while(Serial.available() != 0) { //baca data dari serial
    perintah = perintah + char(Serial.read());
    delay(20);
  }

  if(perintah.length() == 0) {
    return;
  }
  perintah.trim(); //hapus karakter whitespace

  //hijau
  if(perintah == "HIJAU-ON") {  
    digitalWrite(LED_HIJAU, HIGH);
  }
  if(perintah == "HIJAU-OFF") {
    digitalWrite(LED_HIJAU, LOW);
  }

  //kuning
  if(perintah == "KUNING-ON") {
    digitalWrite(LED_KUNING, HIGH);
  }
  if(perintah == "KUNING-OFF") {
    digitalWrite(LED_KUNING, LOW);
  }

  //merah
  if(perintah == "MERAH-ON") {
    digitalWrite(LED_MERAH, HIGH);
  }
   if(perintah == "MERAH-OFF") {
    digitalWrite(LED_MERAH, LOW);
  }
}
