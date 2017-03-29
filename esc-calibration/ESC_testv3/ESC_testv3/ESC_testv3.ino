#include "esc.h"

Esc motor(2);
void setup() {
  Serial.begin(9600);
}

void loop() {
  motor.setSpeed(2000);
  motor.getSpeed();
}
