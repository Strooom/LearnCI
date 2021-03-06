#include "timers.h"

intervalTimer::intervalTimer(unsigned long interval) : timerInterval{interval} {
}
bool intervalTimer::expired() {
    if (millis() - timerValue > timerInterval) {        // check if actual time >= previous time + interval
        timerValue += timerInterval;                    // set new compare time
        return true;
    } else {
        return false;
    }
}

bool singleTimer::expired() {
    if (running) {
        if (millis() - timerStart > timerDuration) {        // check if actual time >= startTime + duration
            running = false;
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
void singleTimer::start(unsigned long theTimerDuration) {        // re-start a new timeout
    timerStart    = millis();
    timerDuration = theTimerDuration;
    running       = true;
}

