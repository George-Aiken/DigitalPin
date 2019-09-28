
/*
 * This is to create a Digtal Pin on pin slot 3.
 * It accepts output, check "Arduino.h" for
 * other PIN_MODE options. Currently using
 * OUTPUT since this example may use something
 * like an LED to send out data. You can run it
 * with an LED.
 */
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
  delay(1000);
}

