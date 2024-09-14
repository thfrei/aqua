/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

void setup()
{
  // Initialize LED digital pins as outputs
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // Device 1 on pin 8
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);

  // Device 2 on pin 9
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);

  // Device 3 on pin 10
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);

  // Optional: Add a delay between cycles
  delay(1000);
}