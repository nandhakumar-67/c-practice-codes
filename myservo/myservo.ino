#include<Servo.h>
Servo myservo;
int pot = A0;
int value;
int angle;

void setup() {
  myservo.attach(13);
  pinMode(pot,INPUT);
  // put your setup code here, to run once:

}


void loop() {
  value = analogRead(pot);
  angle=map(value,0,1023,0,180);
  myservo.write(angle);
  
  // put your main code here, to run repeatedly:

}
