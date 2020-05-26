#include <Servo.h>

Servo myservo;
int pos = 10;

void setup() {
  myservo.attach(8);
  myservo.attach(pos);
  delay(2000);
}

void loop() {
  for (pos = 10; pos <= 180; pos++)
  {
    myservo.write(pos);
    delay(15);
  } 

  for (pos = 180; pos >= 10; pos--)
  {
    myservo.write(pos);
    delay(15);
  } 
}
