#include <Arduino.h>
#include <Servo.h>
#include "esc.h"


Esc::Esc(int PinIn){
	pin = PinIn;
	esc.attach(pin);
	Serial.println("Skickar 'max' signalen");
	esc.writeMicroseconds(maxSignal);
	Serial.println("sätt i strömmen å andas i TRE sekunder");
  delay(3000);
	esc.writeMicroseconds(minSignal);	
}

void Esc::setSpeed(int speedIn){
	speed=speedIn;
	esc.writeMicroseconds(speed);
}

int Esc::getSpeed(void){
	return speed;
}	
