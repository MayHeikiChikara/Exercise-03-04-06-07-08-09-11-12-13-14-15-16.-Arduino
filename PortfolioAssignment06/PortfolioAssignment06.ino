float sensorValue = 0; // variable for sensor value
float sensorValueYellow = 0;
int sensorPin = A0; // variable for sensor pin
int yellowLedPin = 9;
int greenLedPin = 10;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin); // read the value/voltage on the sensor
  // pin and store that value in the
  // variable sensorValue
  Serial.println(sensorValue); // print out sensorValue to the Serial
  // Monitor
  sensorValue = map(sensorValue, 0, 1023, 0, 255);
  sensorValueYellow = map(sensorValue, 0, 1023, 255, 0);
  analogWrite (greenLedPin, sensorValue/4);
  analogWrite (yellowLedPin, sensorValueYellow*4);
}
