#include "escfuncs.h"
void initiateMotors(Servo (&motors)[NO_MOTORS],int del){
/* HELP
 *  function to attach and calibrate the ect's
 *  ARG list
 *  1. a servo array 
 *  2. paus length after callibration (optional) defaault = 10000
 */
 
for(int i = 0; i<NO_MOTORS; i++){
  motors[i].attach(START_PIN + i);
}
  Serial.println("Skickar 'max' signalen");
  Serial.println("Tryck i batteriet, vänta 2 sekunder och tryck sedan in valfritt värde");
for(int i = 0; i<NO_MOTORS; i++){  
  motors[i].writeMicroseconds(MAX_SIGNAL);
}
  while (!Serial.available());
  Serial.read();
  
 Serial.println("Skickar 'max' signalen");
for(int i = 0; i<NO_MOTORS; i++){ 
  motors[i].writeMicroseconds(MIN_SIGNAL);
}
  delay(del);
}