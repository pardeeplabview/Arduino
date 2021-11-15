#include<Servo.h>
int Potdata = A0;
Servo myservo;
int value;
int Value1;

void setup() {
  pinMode(Potdata,INPUT);
  myservo.attach(8);

}

void loop() {
 value = analogRead(Potdata); // 0 to 1023......0-180
 Value1 = map(value,0,1023,0,180);
 myservo.write(Value1);
 delay(15);
 

}
