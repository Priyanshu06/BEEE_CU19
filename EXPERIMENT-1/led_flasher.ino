void setup()
{
  pinmode(12,INPUT);
  pinmode(10,INPUT);
  pinmode(8,INPUT);
  pinmode(6,INPUT);
}

viod loop()
{ 
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  delay(200);
  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  digitalWrite(6,low);
  delay(200);
}