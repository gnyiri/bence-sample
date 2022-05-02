#include "base_clock_displayer.hxx"

BaseClockDisplayer::BaseClockDisplayer(BaseClock *clock)
{
    clock_ = clock;
}

void BaseClockDisplayer::set_clock(BaseClock *clock)
{
    clock_ = clock;
}
