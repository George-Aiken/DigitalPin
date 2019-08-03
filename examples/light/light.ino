#include <DigitalPin.h>

DigitalPin myLed(3, OUTPUT);
void setup() {
  // put your setup code here, to run once:
  myLed.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  myLed.on();
  delay(500);
  myLed.off();
  delay(500);
}
