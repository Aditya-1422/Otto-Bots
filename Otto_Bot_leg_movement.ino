#include <Servo.h>  

Servo myServoLL; //9 
Servo myServoRL; //11

void setup() {
  myServoLL.attach(9); 
  myServoRL.attach(11); 
}

void loop() {

  myServoLL.write(180);
  myServoRL.write(90);
  delay(1000); 

  myServoLL.write(180);
  myServoRL.write(90);
  delay(1000);
}
