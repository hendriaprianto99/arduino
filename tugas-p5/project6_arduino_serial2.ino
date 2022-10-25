void setup() {
  Serial.begin(9600); //set kecepatan transmisi
}

void loop() {
  while(Serial.available() !=0) {
    char data = Serial.read(); //terima data dari port serial

    //kirim kembali data ke port serial
    //data awal
    Serial.print("Karakter: ");
    Serial.print(data);

    //data dalam bentuk ASCII
    Serial.print(", ASCII: ");
    Serial.print(data, DEC);

    //data dalam bentuk binary
    Serial.print(", Binary: ");
    Serial.print(data, BIN);

    //data dalam bentuk hexa
    Serial.print(", Hexadecimal: ");
    Serial.println(data, HEX);
    delay(20); 
  }
}
