#pragma once

#include "base_clock.hxx"

class BaseClockDisplayer
{
protected:
    BaseClock *clock_;

public:
    BaseClockDisplayer(BaseClock *clock);

    virtual void show() = 0;
};
