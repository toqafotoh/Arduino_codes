void setup()
{
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  //9,10 left side pins
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  //8,7 right side pins
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  //enable pins
}

void loop()
{

  if (Serial.available())
  {
    analogWrite(3,255);
    analogWrite(6,255);
    char receved_pattern = Serial.read();
    if (receved_pattern == 'f')
    {
        digitalWrite(7,0);
        digitalWrite(8,1);
        digitalWrite(9,0);
        digitalWrite(10,1);
    }
    else if (receved_pattern == 'b')
    {
        digitalWrite(7,1);
        digitalWrite(8,0);
        digitalWrite(9,1);
        digitalWrite(10,0);
    }
    else if (receved_pattern == 'r')
    {
        digitalWrite(7,1);
        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalWrite(10,1);
    }

    else if (receved_pattern == 'l')
    {
        digitalWrite(7,0);
        digitalWrite(8,1);
        digitalWrite(9,1);
        digitalWrite(10,0);
    }

    else if (receved_pattern == 's')
    {
        digitalWrite(7,0);
        digitalWrite(8,0);
        digitalWrite(9,0);
        digitalWrite(10,0);
    }
  }

}
