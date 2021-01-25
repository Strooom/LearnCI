#include <Arduino.h>
#include <ArduinoUnitTests.h>
#include "timers.h"

unittest(intervalTimer) {
    intervalTimer aTimer(1000);
    assertEqual(false, aTimer.expired());
}

unittest_main()