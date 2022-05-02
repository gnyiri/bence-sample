#pragma once

#include "base_clock.hxx"

class BaseClockDisplayer
{
protected:
    BaseClock *clock_;

public:
    BaseClockDisplayer(BaseClock *clock = 0);

    void set_clock(BaseClock *clock);
    virtual void show() = 0;
};
