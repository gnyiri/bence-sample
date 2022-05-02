#include "pretty_clock_displayer.hxx"

#include <iostream>

PrettyClockDisplayer::PrettyClockDisplayer(BaseClock *clock) : BaseClockDisplayer(clock)
{
}

void PrettyClockDisplayer::show()
{
    if (0 == clock_)
    {
        return;
    }

    auto tm = clock_->get_time();
    std::cout << "######################################################" << std::endl;
    std::cout << "A pontos " << clock_->get_type() << " idő: " << tm->tm_hour << " óra " << tm->tm_min << " perc " << tm->tm_sec << " másodperc" << std::endl;
    std::cout << "######################################################" << std::endl;
}
