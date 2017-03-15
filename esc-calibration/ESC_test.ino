#include <Servo.h>

#define MAX_SIGNAL 2000
#define MIN_SIGNAL 700
#define MOTOR_PIN 12

int val = 700;

Servo motor;

void setup() {
  Serial.begin(9600);

  motor.attach(MOTOR_PIN);

  Serial.println("Skickar 'max' signalen");
  Serial.println("Tryck i batteriet, vänta 2 sekunder och tryck sedan in valfritt värde");
  motor.writeMicroseconds(MAX_SIGNAL);
  
  while (!Serial.available());
  Serial.read();
  
 Serial.println("Skickar 'max' signalen");
  motor.writeMicroseconds(MIN_SIGNAL);
  delay(10000);
}

void loop() { 
  motor.writeMicroseconds(val);
  Serial.println(val);
  delay(1000);
  val += 10;
}
