//#ifndef __ESCFUNCS_H_INCLUDED__
//#define __ESCFUNCS_H_INCLUDED__
#ifndef H_ESCFUNCS
#define H_ESCFUNCS

#include <Servo.h>
#include <Arduino.h>
#include <string.h>
#define MAX_SIGNAL 2000
#define MIN_SIGNAL 700
#define NO_MOTORS 2
#define START_PIN 2

void initiateMotors(Servo (&motors)[NO_MOTORS],int del = 10000);

#endif
