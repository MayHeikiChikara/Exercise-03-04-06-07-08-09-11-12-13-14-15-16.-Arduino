int speakerPin = 8;

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  for (int sirenLow = 1500; sirenLow > 500; sirenLow--) {
    tone(speakerPin, sirenLow); // plays a tone of 500Hz for 200ms
    delay(15); // wait 15 ms
  }
  for (int sirenHigh = 500; sirenHigh < 1500; sirenHigh++) {
    tone(speakerPin, sirenHigh); // plays a tone of 1500Hz for 200ms
    delay(15); // wait 15 ms
  }
}
