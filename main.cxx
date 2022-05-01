#include "local_clock.hxx"
#include "pretty_clock_displayer.hxx"
#include "simple_clock_displayer.hxx"
#include "utc_clock.hxx"

int main()
{
    BaseClock *clock1 = new LocalClock();
    BaseClock *clock2 = new UTCClock();

    BaseClockDisplayer *displayer1 = new SimpleClockDisplayer(clock1);
    BaseClockDisplayer *displayer2 = new PrettyClockDisplayer(clock2);

    displayer1->show();
    displayer2->show();

    delete displayer1;
    delete clock2;
    delete clock1;
}
