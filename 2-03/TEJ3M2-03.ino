/* 
Created Feb 2026
by Jack Langdon 
The blink program, with breadboard*/

int pin5 = 5; //set the variable to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin5, OUTPUT);
}

void loop() 
{
  // the loop funtion runs over and over again forever
  digitalWrite(pin5, HIGH); // turn LED on
  delay(1000); // wait a second
  digitalWrite(pin5, LOW); //turn LED off
  delay(1000);
}