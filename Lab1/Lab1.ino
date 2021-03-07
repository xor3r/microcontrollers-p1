const int buttonPin = 65;


void setup() {
  DDRL = 0xFF;
  PORTL = 0x00;
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (!digitalRead(buttonPin)) {
    PORTL = 128;
    while (PORTL) {
      delay(400);
      PORTL = PORTL >> 1;
    }
  }
}
