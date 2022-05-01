#pragma once

#include <string>
#include <ctime>

class BaseClock
{
private:
    std::time_t created_at_time_;

protected:
    std::time_t time() const;
    std::time_t created_at_time() const;

public:
    BaseClock();
    virtual ~BaseClock();

    virtual std::string get_type() = 0;
    virtual std::tm *get_time() = 0;
};
