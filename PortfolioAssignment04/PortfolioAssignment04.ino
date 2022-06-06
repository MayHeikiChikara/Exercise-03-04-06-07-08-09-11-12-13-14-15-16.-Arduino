int redLedPin = 10;
int greenLedPin = 11;

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}

void loop() {
  for (int brightness=256; brightness >0; brightness--){
    analogWrite(redLedPin, brightness);
    delay(10);
  }
  for (int brightness=0; brightness <256; brightness++){
    analogWrite(greenLedPin, brightness);
    delay(10);
  }
}
