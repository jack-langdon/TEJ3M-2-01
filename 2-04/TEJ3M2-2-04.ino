/* 
Created Feb 2026
by Jack Langdon 
Turns on LED for one second then off for one second repeadted.
*/

void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
  // the loop funtion runs over and over again forever
  digitalWrite(11, HIGH); // turn LED on
  digitalWrite(12, LOW); //turn LED off
  digitalWrite(13, LOW); //turn LED off
  delay(1000); // wait a second

   // 
  digitalWrite(11, LOW); //turn LED off
  digitalWrite(12, HIGH); // turn LED on
  digitalWrite(13, LOW); //turn LED off
  delay(1000); // wait a second

  // 
  digitalWrite(11, LOW); //turn LED off
  digitalWrite(12, LOW); // turn LED on
  digitalWrite(13, HIGH); //turn LED off
  delay(1000); // wait a second
  
   // 
  digitalWrite(11, HIGH); //turn LED off
  digitalWrite(12, LOW); // turn LED on
  digitalWrite(13, HIGH); //turn LED off
  delay(1000); // wait a second

  // 
  digitalWrite(11, HIGH); //turn LED off
  digitalWrite(12, HIGH); // turn LED on
  digitalWrite(13, LOW); //turn LED off
  delay(1000); // wait a second

  // 
  digitalWrite(11, LOW); //turn LED off
  digitalWrite(12, HIGH); //turn LED off
  digitalWrite(13, HIGH); // turn LED on
  delay(1000); // wait a second
  // 
  
  digitalWrite(11, HIGH); //turn LED off
  digitalWrite(12, HIGH); //turn LED off
  digitalWrite(13, HIGH); // turn LED on
  delay(1000); // wait a second
}