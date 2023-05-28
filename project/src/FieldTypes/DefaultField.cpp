#include "DefaultField.h"

DefaultField::DefaultField()
    : purchaseCost(2500), rentCost(0), houseCost(10000), hotelCost(25000){}

bool DefaultField::canBuild(int buildings) const{
    if (buildings <= 5)
        return true;
    else
        return false;
}

int DefaultField::getCurrentCost(int buildings) const{
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
