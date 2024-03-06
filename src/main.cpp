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
    manual_control_handler();
    break;
  case AUTOPILOT:
    autopilot_control_handler();
    break;
  }
}

void autopilot_control_handler()
{
}

void manual_control_handler()
{
}