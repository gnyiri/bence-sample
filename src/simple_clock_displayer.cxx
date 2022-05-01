#include "simple_clock_displayer.hxx"

#include <iostream>

SimpleClockDisplayer::SimpleClockDisplayer(BaseClock *clock) : BaseClockDisplayer(clock)
{
}

void SimpleClockDisplayer::show()
{
    auto tm = clock_->get_time();
    std::cout << clock_->get_type() << " - " << tm->tm_hour << ":" << tm->tm_sec << std::endl;
}
