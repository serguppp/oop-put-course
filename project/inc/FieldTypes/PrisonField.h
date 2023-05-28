#pragma once

#include "IFieldType.h"

class PrisonField : public IFieldType {
public:
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~PrisonField() {};
};
