#include "simple_clock_displayer.hxx"

#include <iostream>

SimpleClockDisplayer::SimpleClockDisplayer(BaseClock *clock) : BaseClockDisplayer(clock)
{
}

void SimpleClockDisplayer::show()
{
    if (0 == clock_)
    {
        return;
    }

    auto tm = clock_->get_time();
    std::cout << clock_->get_type() << " - " << tm->tm_hour << ":" << tm->tm_min << ":" << tm->tm_sec << std::endl;
}
