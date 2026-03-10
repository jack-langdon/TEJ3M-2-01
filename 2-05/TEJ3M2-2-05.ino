/* 
Created Feb 2026
by Jack Langdon 
This program controls a servo motor
*/

#include <Servo.h>

Servo servoNumber1;

   // setup servo pins
void setup() {
   servoNumber1.attach(2);
   servoNumber1.write(0);
}

   //put main code here, to run repeadtedly
void loop() {
   servoNumber1.write(180);
   delay(1000);
   servoNumber1.write(0);
   delay(1000);
}