int reading;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop()
{
 reading = digitalRead(4);
  if(reading == HIGH)
  {
    digitalWrite(2,HIGH);
  }
  else{digitalWrite(2,LOW);}
}