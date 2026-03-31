/* 
Created March 2026
by Jack Langdon 
This program controls a distance sensor and Servo
*/
#include <Servo.h>

const int trigPin = 3;    // Trig Pin
const int echoPin = 4;   // Echo Pin
const int servoPin = 2;   // Servo Signal Pin
const int threshold = 50; // Distance in cm

long duration;
int distance;
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);  
 
  myServo.attach(servoPin);
  myServo.write(0);         // Start at 0 degrees
 
  Serial.begin(9600);       // To monitor distance in Serial Monitor
}

void loop() {
  // Get Distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Logic
  if (distance > 0 && distance < threshold) {
    // Continuous rotation/sweeping while object is close
    for (int pos = 0; pos <= 180; pos += 2) {
      myServo.write(pos);              
      delay(5);
    }
    for (int pos = 180; pos >= 0; pos -= 2) {
      myServo.write(pos);              
      delay(5);
    }
  } else {
    // Stay at idle position if nothing is detected
    myServo.write(0);
  }

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(50);
}