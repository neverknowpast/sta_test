#include "Arduino.h"

extern "C" void app_main()
{
    initArduino();
    pinMode(4, OUTPUT);
    delay(500);
    digitalWrite(4, HIGH);
    delay(500);
    // Do your own thing
}