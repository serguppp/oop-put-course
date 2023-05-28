#pragma once

#include "IFieldType.h"

class ImprovedField : public IFieldType {
private:
    int purchaseCost;
    int rentCost;
    int houseCost;
    int hotelCost;
public:
    ImprovedField();
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~ImprovedField() {};
};
