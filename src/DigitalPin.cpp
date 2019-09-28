#ifndef DIGITALPIN_CPP
#define DIGITALPIN_CPP

#include "Arduino.h"
#include "DigitalPin.h"
using namespace::std;

DigitalPin::DigitalPin(uint8_t pin)
{
  _pin = pin;
  _on = false;
  off();
}

/*
 * The pin in this is the pin used on the arduino.
 * Use a digital pin, although in many boards you
 * can use an analog pin as if it were digital.
 *
 * The mode is transferred through the "Arduino.h" 
 * library.
 * if you need to look up the modes, look there.
 */
DigitalPin::DigitalPin(uint8_t pin, uint8_t mode)
{
  _pin = pin;
  _on = false;
  _mode = mode;
  off();
}

/*
 * Call this function in your sketch's setup() loop.
 */ 
void DigitalPin::setup()
{
  pinMode(_pin, _mode);
}

/*
 * Ensures that the pin is on with digitalWrite().
 */
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

/*
 * Ensures that the pin is off with digitalWrite().
 */
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

/*
 * Toggles the pin's status through the off() and on() methods.
 */
void DigitalPin::toggle()
{
  if(_on)
  {
    off();
  } else {
    on();
  }
}

/*
 * returns the DigitalPin's _on value.
 */
bool DigitalPin::value()
{
  return _on;
}

#endif
