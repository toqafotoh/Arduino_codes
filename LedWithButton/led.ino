// C++ code
//
void setup()
{
Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(4,INPUT);
}

void loop()
{
  static int prevstate;
  int state = digitalRead(4);
  if (state!=prevstate) {
    Serial.println(state); 
    prevstate = state;
  }
    if (state==1){
  digitalWrite(12, HIGH);
      delay(2000);
  }
  else {
      digitalWrite(12,LOW);
  }
}
//LED_BUILtIN - the l led that under the 13 pin
