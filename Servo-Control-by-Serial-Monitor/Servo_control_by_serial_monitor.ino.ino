#include<Servo.h>
Servo deep;
int pos=0;

void setup() 
{
 Serial.begin(9600);
 deep.attach(9); 
}

void loop() 
{
 if(Serial.available()>0)
 {
  int data = Serial.read();
  if(data == '1')
  {
    deep.write(0);
  }
  if(data == '2')
  {
    deep.write(90);
  }
  if(data == '3')
  {
    deep.write(180);
  }
 }

}
