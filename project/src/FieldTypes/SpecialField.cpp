#include "SpecialField.h"

SpecialField::SpecialField()
    : purchaseCost(500), rentCost(0), houseCost(1000), hotelCost(2500) {
}

bool SpecialField::canBuild(int building) const {
    if (building <= 5)
        return true;
    else
        return false;
}

int SpecialField::getCurrentCost(int buildings) const {
    if (buildings == 1)
        return purchaseCost + houseCost;
    else if (buildings == 2)
        return purchaseCost + 2 * houseCost;
    else if (buildings == 3)
        return purchaseCost + 3 * houseCost;
    else if (buildings == 4)
        return purchaseCost + 4 * houseCost;
    else if (buildings == 5)
        return purchaseCost + hotelCost;
    else
        return purchaseCost;
}
