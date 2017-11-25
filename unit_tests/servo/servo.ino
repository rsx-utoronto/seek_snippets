/* Servo Unit Test

The servo should move back and forth between 0 and 30 degrees. 

Servo:   black  red   brown/ orange 
Arduino: GND    VCC   3

*/

#include <Servo.h>         // allows you to use the library
Servo myServo;             // give a name to your servo
void setup() {
  myServo.attach(3);   // connect servo to pin 3
}

void loop() {
  myServo.write(0);    // set the servo’s position to 0
  delay(300);          // sleep for a bit
  myServo.write(30);   // set position to 30 degrees
  delay(300);
}