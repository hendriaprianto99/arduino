const int PIN_10 = 10;

void setup() {
  pinMode(PIN_10,OUTPUT);
  analogWrite(PIN_10,0);
}

void loop() {
  // naikin kecerahan
  for(int i=0; i<=256; i +=2){
    analogWrite(PIN_10,i);
    delay(100);
  }
  delay(2000);

  // menurunkan kecerahan
  for(int i=255; i<=1; i -=2){
    analogWrite(PIN_10,i);
    delay(100);
  }
}
