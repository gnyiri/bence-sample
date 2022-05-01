#include "base_clock.hxx"

class UTCClock : public BaseClock
{
public:
    UTCClock();
    virtual ~UTCClock();

    virtual std::string get_type();
    virtual std::tm *get_time();
};
