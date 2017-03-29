#include "escfuncs.h"
//#include <Servo.h>

/*
#define MAX_SIGNAL 2000
#define MIN_SIGNAL 700
#define NO_MOTORS 2
#define START_PIN 2

//function wrapper
void initiateMotors(Servo (&motors)[NO_MOTORS],int del = 10000);
*/
//Construct motors
Servo motorArray[NO_MOTORS];
int val = 1000;

void setup() {
  Serial.begin(9600);
  initiateMotors(motorArray);
}
void loop() { 
  
for(int i = 0; i<NO_MOTORS; i++){ 
  motorArray[i].writeMicroseconds(val);
}
  Serial.println(val);
  delay(1000);
  val += 10;
}

/* ------------functions----------*/

// void initiateMotors(Servo (&motors)[NO_MOTORS],int del){
/* HELP
 *  function to attach and calibrate the ect's
 *  ARG list
 *  1. a servo array 
 *  2. paus length after callibration (optional) defaault = 10000
 */
 /*
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
*/
