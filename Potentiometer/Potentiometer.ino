int PotPinno = A0;
int PotData;
void setup()
{
  Serial.begin(9600);
  pinMode(PotPinno,INPUT);
}

void loop()
{
  PotData = analogRead( PotPinno);
  Serial.println(PotData);
  //delay(100);
}
