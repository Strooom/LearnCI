// #############################################################################
// ###                                                                       ###
// ### General Purpose Timer library for Arduno Framework                    ###
// ### https://github.com/Strooom/runTimer                                   ###
// ### Author(s) : Pascal Roobrouck - @strooom                               ###
// ### License : https://creativecommons.org/licenses/by-nc-sa/4.0/legalcode ###
// ###                                                                       ###
// #############################################################################

#include <Arduino.h>
#include "runtimer.h"

intervalTimer timerOne(1000);
intervalTimer timerTwo(3000);
intervalTimer timerThree(10000);

void setup() {
    Serial.begin(115200);        //		Configure Serial, which is the output channel for this example
    Serial.flush();              //		Clean up the Serial output
    Serial.println();            //		Start output with a clean line
    delay(250);                  //		Wait 250ms - just to show how the timestamping in the log output works
}

void loop() {
    if (timerOne.expired()) {
        Serial.println("timerOne expired");
    }
    if (timerTwo.expired()) {
        Serial.println("timerTwo expired");
    }
    if (timerThree.expired()) {
        Serial.println("timerThree expired");
    }
}
