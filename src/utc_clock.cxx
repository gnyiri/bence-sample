#include "utc_clock.hxx"

UTCClock::UTCClock()
{
}

UTCClock::~UTCClock()
{
}

std::string UTCClock::get_type()
{
    return std::string("utc");
}

std::tm *UTCClock::get_time()
{
    const time_t t = time();
    return std::gmtime(&t);
}
