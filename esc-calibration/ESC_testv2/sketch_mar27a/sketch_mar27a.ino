#include <Servo.h>
#define MAX_SIGNAL 2000
#define MIN_SIGNAL 700
#define NO_MOTORS 2
#define START_PIN 2

//Construct motors
Servo motor[4];
int val = 1000;

void setup() {
  Serial.begin(9600);
for(int i = 0; i<NO_MOTORS; i++){
  motor[i].attach(START_PIN + i);
}

  Serial.println("Skickar 'max' signalen");
  Serial.println("Tryck i batteriet, vänta 2 sekunder och tryck sedan in valfritt värde");
for(int i = 0; i<NO_MOTORS; i++){  
  motor[i].writeMicroseconds(MAX_SIGNAL);
}
  while (!Serial.available());
  Serial.read();
  
 Serial.println("Skickar 'max' signalen");
for(int i = 0; i<NO_MOTORS; i++){ 
  motor[i].writeMicroseconds(MIN_SIGNAL);
}
  delay(10000);
}

void loop() { 
  
for(int i = 0; i<NO_MOTORS; i++){ 
  motor[i].writeMicroseconds(val);
}
  Serial.println(val);
  delay(1000);
  val += 10;
}




