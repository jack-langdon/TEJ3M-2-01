/* Adds one second to the length of time the LED stays on
Created Feb 18 2026
by Jack Langdon */

int blinkTime = 1000; //set the variable to 1000

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // the loop funtion runs over and over again forever
  digitalWrite(LED_BUILTIN, HIGH); // turn LED on
  delay(blinkTime); // wait a second
  digitalWrite(LED_BUILTIN, LOW); //turn LED off
  delay(1000);
  
  blinkTime = blinkTime + 1000; // add 1 second to blinkTime variable
}
