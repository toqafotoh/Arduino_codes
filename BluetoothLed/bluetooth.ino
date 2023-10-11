void setup()
{
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop()
{
  if (Serial.available()){
    char data = Serial.read();
    if (data == 'o')
      digitalWrite(13,HIGH);
    else if (data == 'f')
      digitalWrite(13,LOW);
  }
  
}
