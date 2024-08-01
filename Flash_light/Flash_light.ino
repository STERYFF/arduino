const byte startPin=8;
const byte endPin=12;

byte lightPin=startPin;

void setup() 
{
  for (byte i = startPin;i<=endPin;i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
}

void loop() 
{
  digitalWrite(lightPin,HIGH);
  delay(50);
  digitalWrite(lightPin,LOW);

  if (lightPin<endPin)
  {
    lightPin ++;
  }
  else
  {
    lightPin=startPin;
  }
}
