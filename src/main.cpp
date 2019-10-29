#include <Arduino.h>
#include "b.h"


blink b;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  Serial.println("start");
}

// the loop function runs over and over again forever
void loop() {
  Serial.println(millis());
  b.on();  // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  b.off();    // turn the LED off by making the voltage LOW
  b.blinkFast(100);
}

