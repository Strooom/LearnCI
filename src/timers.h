#pragma once

#include "Arduino.h"

class intervalTimer {
  public:
    explicit intervalTimer(unsigned long);        // constructor
    bool expired();                               // check if intervalTimer has expired

  private:
    unsigned long timerValue{0};
    unsigned long timerInterval;
};

class singleTimer {
  public:
    bool expired();                   // check if timer has expired
    void start(unsigned long);        // re-start a new timeout

  private:
    bool running{false};
    unsigned long timerStart;
    unsigned long timerDuration;
};
