#ifndef DIGITALPIN_CPP
#define DIGITALPIN_CPP

#include "Arduino.h"
#include "DigitalPin.h"
using namespace::std;

DigitalPin::DigitalPin(uint8_t pin)
{
  _pin = pin;
  _on = false;
}

DigitalPin::DigitalPin(uint8_t pin, uint8_t mode)
{
  _pin = pin;
  _on = false;
  _mode = mode;
  digitalWrite(_pin, LOW);
}

void DigitalPin::setup()
{
  pinMode(_pin, _mode);
}

void DigitalPin::on()
{
  if(_mode != OUTPUT)
  {
    pinMode(_pin, OUTPUT);
    _mode = OUTPUT;
  } 
  if(!_on)
  {
    digitalWrite(_pin, HIGH);
    _on = true;
  }
}

void DigitalPin::off()
{
  if(_mode != OUTPUT)
  {
    pinMode(_pin, OUTPUT);
    _mode = OUTPUT;
  } 
  if(_on)
  {
    digitalWrite(_pin, LOW);
    _on = false;
  }
}

void DigitalPin::change()
{
  if(_on)
  {
    off();
  } else {
    on();
  }
}

bool DigitalPin::value()
{
  return _on;
}

#endif
