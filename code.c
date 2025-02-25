/*
  Created by: Michael Bruneau
  Created on: Feb 2025

  Turns an LED on for one second, then off for one second, repeatedly.
*/


// C code

// variables
int blinkDelay = 1000;
int pin5 = 5;

void setup()
{
  pinMode(pin5, OUTPUT);
}

void loop()
{
  digitalWrite(pin5, HIGH);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
  
  digitalWrite(pin5, LOW);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
}
