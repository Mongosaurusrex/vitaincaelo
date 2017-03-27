#include <Servo.h>

#define MAX_SIGNAL 2000
#define MIN_SIGNAL 700
#define MOTOR_PIN_1 5
#define MOTOR_PIN_2 4
#define MOTOR_PIN_3 3
#define MOTOR_PIN_4 2
int val = 1000;

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

void setup() {
  Serial.begin(9600);

  motor1.attach(MOTOR_PIN_1);
  motor2.attach(MOTOR_PIN_2);
 motor3.attach(MOTOR_PIN_3);
  motor4.attach(MOTOR_PIN_4);

  Serial.println("Skickar 'max' signalen");
  Serial.println("Tryck i batteriet, vänta 2 sekunder och tryck sedan in valfritt värde");
 motor1.writeMicroseconds(MAX_SIGNAL);
  motor2.writeMicroseconds(MAX_SIGNAL);
motor3.writeMicroseconds(MAX_SIGNAL);
  motor4.writeMicroseconds(MAX_SIGNAL);
  
  while (!Serial.available());
  Serial.read();
  
 Serial.println("Skickar 'max' signalen");
 motor1.writeMicroseconds(MIN_SIGNAL);
  motor2.writeMicroseconds(MIN_SIGNAL);
  motor3.writeMicroseconds(MIN_SIGNAL);
  motor4.writeMicroseconds(MIN_SIGNAL);
  delay(10000);
}

void loop() { 
 motor1.writeMicroseconds(val);
motor2.writeMicroseconds(val);
  motor3.writeMicroseconds(val);
 motor4.writeMicroseconds(val);
  Serial.println(val);
  delay(1000);
  val += 10;
}
