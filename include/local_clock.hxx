#pragma once

#include "base_clock.hxx"

class LocalClock : public BaseClock
{
public:
    LocalClock();
    virtual ~LocalClock();

    virtual std::string get_type();
    virtual std::tm *get_time();
};
