#include "base_clock_displayer.hxx"

class PrettyClockDisplayer : public BaseClockDisplayer
{
public:
    PrettyClockDisplayer(BaseClock *clock = 0);

    virtual void show();
};