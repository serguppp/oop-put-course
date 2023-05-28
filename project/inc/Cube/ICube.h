#pragma once

#include <random>

class ICube {
public:
    virtual int Roll() = 0;
    virtual ~ICube() {}
};
