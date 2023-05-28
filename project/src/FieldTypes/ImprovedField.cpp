#include "ImprovedField.h"

ImprovedField::ImprovedField()
    : purchaseCost(5000), rentCost(0), houseCost(20000), hotelCost(50000) {}

bool ImprovedField::canBuild(int building) const {
    if (building <= 5)
        return true;
    else
        return false;
}

int ImprovedField::getCurrentCost(int buildings) const {
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
