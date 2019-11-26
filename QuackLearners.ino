#include <Servo.h>

//random change

//Defining servos
Servo servo1;
Servo servo2;

//Servo position is degrees
int servoPos = 0;
int buttonPin;

void setup()
{
  //Define servos signal inputs (Digital PWM 3-5)
  buttonPin = 7;
  pinMode(buttonPin, INPUT_PULLUP);
  servo1.attach(3);
  servo2.attach(5);
}

void loop()
{
  while(1){
    if(digitalRead(buttonPin) == LOW){
      servo1.write(0);
      servo2.write(0);
      for(servoPos = 0; servoPos < 180; servoPos++){
        servo1.write(servoPos);
        delay(5);
      }
      for(servoPos = 180; servoPos > 0; servoPos--){
        servo1.write(servoPos);
        delay(5);
      }
      for(servoPos = 0; servoPos < 180; servoPos++){
        servo2.write(servoPos);
        delay(5);
      }
      for(servoPos = 180; servoPos > 0; servoPos--){
        servo2.write(servoPos);
        delay(5);
      }
    }
  }
}
