int led1 = 13;
int pushbutton = 2;
int buttondata;
int buttonpre = LOW;
int ledState = HIGH;

void setup() 
{
 pinMode(led1,OUTPUT);
 pinMode(pushbutton,INPUT);
}

void loop() 
{
    buttondata = digitalRead(pushbutton);
    if (buttondata == HIGH && buttonpre ==LOW)
    {
      if(ledState == HIGH)
      {
        ledState=LOW;
      }
      else
      {
        ledState=HIGH;
      }
    }
    digitalWrite(led1,ledState);
    buttonpre = buttondata;
}
