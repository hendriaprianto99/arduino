void setup() {
  Serial.begin(9600); //set kecepatan transmisi
}

void loop() {
  while(Serial.available() !=0) {
    char data = Serial.read(); //terima data dari port serial

    //kirim kembali data ke port serial
    Serial.print("Karakter: ");
    Serial.println(data);
    delay(20); 
  }
}
