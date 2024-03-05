#include <Arduino.h>
#include <main.hpp>

void setup()
{
  Serial.begin(9600);
  state = MANUAL;
}

void loop()
{
  switch (state)
  {
  case MANUAL:
    break;
  case AUTOPILOT:
    break;
  }
}