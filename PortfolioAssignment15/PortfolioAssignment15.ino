#include <Servo.h>
Servo myServo; // Declare a servo object for us to control
int servoPin = 9; // Var for the pin the servo connects to
int pos = 0; // Var to keep track of the servo's position

void setup() {
  myServo.attach(servoPin); // Tell the servo to what pin it's connected to
}

void loop() {
  for(pos = 0; pos < 50; pos += 1){ // Loop, pos is added to (from 0 to 160)
    myServo.write(pos); // Turn the servo to the position in pos
    delay(15); // Wait 15ms
  }
  for(pos = 50; pos < 90; pos += 2){// Loop, pos is deducted from (from 160 to 1)
    myServo.write(pos); // Turn the servo to the position in pos
    delay(15); // Wait 15ms
  }
  for(pos = 90; pos < 160; pos += 3){// Loop, pos is deducted from (from 160 to 1)
    myServo.write(pos); // Turn the servo to the position in pos
    delay(15); // Wait 15ms
  }
}
