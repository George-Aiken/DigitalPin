#ifndef DIGITALPIN_H
#define DIGITALPIN_H

#include "Arduino.h"

class DigitalPin	
{
  public:

    DigitalPin(uint8_t pin);
    DigitalPin(uint8_t pin, uint8_t mode);
    void setup();
    void on();
    void off();
    void change();
    bool value();

  private:
    uint8_t _pin;
    uint8_t _mode;
    bool _on;
};

#endif
