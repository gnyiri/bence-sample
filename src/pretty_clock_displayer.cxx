#include "pretty_clock_displayer.hxx"

#include <iostream>

PrettyClockDisplayer::PrettyClockDisplayer(BaseClock *clock) : BaseClockDisplayer(clock)
{
}

void PrettyClockDisplayer::show()
{
    auto tm = clock_->get_time();
    std::cout << "######################################################" << std::endl;
    std::cout << "A pontos " << clock_->get_type() << " idő: " << tm->tm_hour << " óra " << tm->tm_sec << " perc" << std::endl;
    std::cout << "######################################################" << std::endl;
}
