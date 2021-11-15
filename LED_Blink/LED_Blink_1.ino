int led1=13;
void setup() 
{
  pinMode(led1,OUTPUT);
}

void loop() 
{
  digitalWrite(led1,HIGH); //HIGH->1->ON
  delay(1000);
  digitalWrite(led1,LOW); //LOW->0-> OFF
  delay(1000);
}

