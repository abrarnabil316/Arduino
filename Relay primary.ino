int relay_pin= 12;
void setup() {
  pinMode(relay_pin, OUTPUT);

}

void loop() {
  digitalWrite(relay_pin, HIGH);
}
