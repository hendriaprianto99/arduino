void setup() {
  Serial.begin(9600); //set kecepatan transmisi
}

void loop() {
  while(Serial.available() !=0) { //terima data dari port serial
//    int data = Serial.parseInt();
    float data = Serial.parseFloat();
    if(data != 0) {
      Serial.print("Bilangan: ");
      Serial.println(data);
      delay(20);
    }
  }
}
