#include <Arduino.h>
#include <Timer.h>
#include <BlinkLeds.h>

BlinkLeds blinkLeds = BlinkLeds();

void setup() 
{
  blinkLeds.onSetup();
}

void loop() 
{
  blinkLeds.onLoop();
}