int ch1 = 2;

void setup() {
  pinMode(ch1, OUTPUT);

}

void loop() {
  digitalWrite(ch1, HIGH);
  delay(1000);
  digitalWrite(ch1, LOW);
  delay(1000);
}
