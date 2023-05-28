#pragma once

#include "IFieldType.h"

class AirportField : public IFieldType {
public:
    AirportField() {}
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~AirportField() {};
};
