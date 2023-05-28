#pragma once

#include "IFieldType.h"

class SpecialField : public IFieldType {
private:
    int purchaseCost;
    int rentCost;
    int houseCost;
    int hotelCost;
public:
    SpecialField();
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~SpecialField() {};
};
