void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(12, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(10, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(10, LOW);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(8, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(8, LOW);
  delay(100); // Wait for 100 millisecond(s)
}