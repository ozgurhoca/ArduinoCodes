#include <Servo.h>
#define pot A0
Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
  int deger=analogRead(pot);
  int aci=map(deger,0,1023,0,180);
  myservo.write(aci);
  delay(50);
}