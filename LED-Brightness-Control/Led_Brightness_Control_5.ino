int Led1 =11;
int PotPin = A0;
int PotData;

void setup() 
{
  Serial.begin(9600);
  pinMode(Led1,OUTPUT);
  pinMode(PotPin,INPUT);
  
}

void loop() 
{
    PotData = analogRead(PotPin);
    Serial.println(PotData);
    analogWrite(Led1,PotData);

}
