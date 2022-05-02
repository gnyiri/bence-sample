#include "local_clock.hxx"
#include "pretty_clock_displayer.hxx"
#include "simple_clock_displayer.hxx"
#include "utc_clock.hxx"

#include <vector>

int main()
{
    std::vector<BaseClock *> clocks;
    clocks.push_back(new LocalClock());
    clocks.push_back(new UTCClock());

    std::vector<BaseClockDisplayer *> clock_displayers;
    clock_displayers.push_back(new SimpleClockDisplayer());
    clock_displayers.push_back(new PrettyClockDisplayer());

    for (auto clock_iterator = clocks.begin(); clock_iterator != clocks.end(); clock_iterator++)
    {
        for (auto clock_displayer_iterator = clock_displayers.begin(); clock_displayer_iterator != clock_displayers.end(); clock_displayer_iterator++)
        {
            (*clock_displayer_iterator)->set_clock(*clock_iterator);
            (*clock_displayer_iterator)->show();
        }
    }

    for (auto clock_displayer_iterator = clock_displayers.begin(); clock_displayer_iterator != clock_displayers.end(); clock_displayer_iterator++)
    {
        delete *clock_displayer_iterator;
    }

    for (auto clock_iterator = clocks.begin(); clock_iterator != clocks.end(); clock_iterator++)
    {
        delete *clock_iterator;
    }
}
