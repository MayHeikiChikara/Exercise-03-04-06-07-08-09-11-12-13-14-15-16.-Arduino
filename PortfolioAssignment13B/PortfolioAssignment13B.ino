char val;
int speakerPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  while (Serial.available()) {
    val = Serial.read();
  }
  if (val == 'a') {
    tone(speakerPin, 262);
  }
  else if (val == 'b') {
    tone(speakerPin, 277);
  }
  else if (val == 'c') {
    tone(speakerPin, 294);
  }
  else if (val == 'd') {
    tone(speakerPin, 311);
  }
  else if (val == 'e') {
    tone(speakerPin, 330);
  }
  else if (val == 'f') {
    tone(speakerPin, 349);
  }
  else if (val == 'g') {
    tone(speakerPin, 370);
  }
  else if (val == 'h') {
    tone(speakerPin, 392);
  }
  else if (val == 'i') {
    tone(speakerPin, 415);
  }
  else if(val == 'j') {
    tone(speakerPin, 440);
  }
  else if (val == 'k') {
    tone(speakerPin, 466);
  }
  else if (val == 'l') {
    tone(speakerPin, 493);
  }
  else {
    tone(speakerPin, 523);
  }
}
