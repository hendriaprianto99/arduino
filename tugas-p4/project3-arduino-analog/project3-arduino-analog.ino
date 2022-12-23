// var declare
const int PIN_9 = 9;
const int PIN_10 = 10;
const int PIN_11 = 11;

void setup() {
  pinMode(PIN_9,OUTPUT);
  pinMode(PIN_10,OUTPUT);
  pinMode(PIN_11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(PIN_9, random(50)+100);
  analogWrite(PIN_10, random(156)+100);
  analogWrite(PIN_11, random(156)+100);
}
