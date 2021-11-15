int led1=13;
int pushbutton = 2;
int PushData = 0;
void setup() 
{
 pinMode(led1,OUTPUT);
 pinMode(pushbutton,INPUT);
 digitalWrite(led1,LOW);
}

void loop() 
{
  PushData = digitalRead(pushbutton);
  if(PushData == HIGH) //HIGH->ON->1
  {
    digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led1,LOW);
  }
}
