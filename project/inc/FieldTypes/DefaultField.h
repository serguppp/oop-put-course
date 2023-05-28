#pragma once

#include "IFieldType.h"

class DefaultField : public IFieldType {
private:
    int purchaseCost;
    int rentCost;
    int houseCost;
    int hotelCost;
public:
    DefaultField();
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~DefaultField() {};
};
