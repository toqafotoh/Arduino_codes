// C++ code
//
void setup()
{
Serial.begin(9600);
pinMode(3,OUTPUT);
}

void loop()
{
  for (int i=0;i<=255;i++){
    analogWrite(3,i);
    delay(50);
  }
  Serial.println("Lights onnn ^.^");
  for (int i=255;i>=0;i--){
    analogWrite(3,i);
    delay(50);
  }
   Serial.println("Darkness ~.~");
}
//LED_BUILtIN - the l led that under the 13 pin
