#pragma once

#include "IFieldType.h"

class ChanceField : public IFieldType {
public:
    ChanceField() {}
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~ChanceField() {};
};
