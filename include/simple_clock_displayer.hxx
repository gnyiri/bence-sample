#include "base_clock_displayer.hxx"

class SimpleClockDisplayer : public BaseClockDisplayer
{
public:
    SimpleClockDisplayer(BaseClock *clock = 0);

    virtual void show();
};
