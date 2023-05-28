#pragma once

#include "ICube.h"

class Cube : public ICube {
private:
    std::mt19937 generator;
    std::uniform_int_distribution<int> distribution;

public:
    Cube();
    int Roll() override;
    ~Cube() {};
};
