int buzzerPin = 11;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  beep(0);
  delay(0);
}

void loop() {
  beep(1000);
  delay(0);
}

void beep(unsigned char delayms) {
  analogWrite(buzzerPin, 20);
  delay(delayms);
  analogWrite(buzzerPin ,0);
}
