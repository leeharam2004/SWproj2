#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);

  digitalWrite(PIN_LED, 0);
  delay(1000);
  for(int i=0;i<=10;i++) {
    digitalWrite(PIN_LED, !(i%2));
    delay(100);
  }
}

void loop() {
  while(1) {}
}
