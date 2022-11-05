void setup() {
  // put your setup code here, to run once:
  // LED berjalan
  for(int i = 10; i <= 13; i++) {
    pinMode(i, OUTPUT);
    // Set output awal
    digitalWrite(i, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // Menyalakan LED satu persatu
  for(int i = 10; i <= 13; i++) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
}
