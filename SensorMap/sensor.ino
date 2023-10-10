// C++ code
//
void setup()
{
Serial.begin(9600);
pinMode(A5,INPUT);
pinMode(3,OUTPUT);
}

void loop()
{
int mapping = map(analogRead(A5),344,1017,0,255);
analogWrite(3,mapping);
Serial.println(mapping);
}
//LED_BUILtIN - the l led that under the 13 pin
