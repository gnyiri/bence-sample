#include "base_clock.hxx"

BaseClock::BaseClock()
{
    created_at_time_ = std::time(0);
}

BaseClock::~BaseClock()
{
}

std::time_t BaseClock::time() const
{
    return std::time(0);
}

std::time_t BaseClock::created_at_time() const
{
    return created_at_time_;
}
