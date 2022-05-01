#include "base_clock_displayer.hxx"

class PrettyClockDisplayer : public BaseClockDisplayer
{
public:
    PrettyClockDisplayer(BaseClock *clock);

    virtual void show();
};