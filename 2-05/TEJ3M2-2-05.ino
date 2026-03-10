/* 
Created Feb 2026
by Jack Langdon 
This program controls a servo motor
*/

#include <Servo.h>

Servo servoNumber1;

void setup() {
  // setup servo pins
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
   //put main code here, to run repeadtedly
   servoNumber1.write(180);
   delay(1000);
   servoNumber1.write(0);
   delay(1000);
}