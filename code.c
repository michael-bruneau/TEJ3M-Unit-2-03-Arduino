/*
  Created by: Michael Bruneau
  Created on: Feb 2025

  Turns an LED on for one second, then off for one second, repeatedly.
*/


// C code

// variables
int blinkDelay = 1000;
const int PIN_5 = 5;

void setup()
{
  pinMode(PIN_5, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_5, HIGH);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
  
  digitalWrite(PIN_5, LOW);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
}
