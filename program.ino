// 
// Test to print hey and bye every second
void setup()
{
Serial.begin(9600);
}

void loop()
{
  Serial.println("Hey");
  delay(1000);
  Serial.println("Bye");
  delay(1000);
}
