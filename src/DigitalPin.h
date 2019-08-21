#ifndef DIGITALPIN_H
#define DIGITALPIN_H

#include "Arduino.h"

/* 
 * A representation of a pin. There is no logging in this version
 * in light of the size of data you can have, and potential 
 * performance issues.
 */
class DigitalPin	
{
  public:

    DigitalPin(uint8_t pin);
    DigitalPin(uint8_t pin, uint8_t mode);
    void setup();
    void on();
    void off();
    void toggle();
    bool value();
  
  private:
    uint8_t _pin;
    uint8_t _mode;
    bool _on;
};

#endif
