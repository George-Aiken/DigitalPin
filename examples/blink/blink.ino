#include <DigitalPin.h>


/*
 * This is to greate a Digtal Pin on pin slot 3.
 * It accepts output, check "Arduino.h" for
 * other PIN_MODE options. Currently using
 * OUTPUT since this example may use something
 * like an LED to send out data.
 */
DigitalPin myLed(3, OUTPUT);
void setup() {
  // put your setup code here, to run once:
  myLed.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  myLed.toggle();
  delay(1000);
}
