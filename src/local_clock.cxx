#include "local_clock.hxx"

LocalClock::LocalClock()
{
}

LocalClock::~LocalClock()
{
}

std::string LocalClock::get_type()
{
    return std::string("local");
}

std::tm *LocalClock::get_time()
{
    const time_t t = time();
    return std::localtime(&t);
}
