// C++ code
//
#include <Servo.h>
Servo servo1;
int pin=A5;
void setup()
{
Serial.begin(9600);
servo1.attach(3);
}

void loop()
{
int value= analogRead(pin);
int mapping = map(value,0,1023,0,180);
servo1.write(mapping);
delay(15);
}
//LED_BUILtIN - the l led that under the 13 pin
