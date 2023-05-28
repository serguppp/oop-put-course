#pragma once

#include "IFieldType.h"

class ChampionshipField : public IFieldType {
public:
    ChampionshipField() {}
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~ChampionshipField() {};
};
