#include <Arduino.h>

int counter = 0;
int runner = 0;

void setup() {
  // put your setup code here, to run once:
  runner++;
}

void loop() {
  // put your main code here, to run repeatedly:
  counter++;
  runner+=2;
}