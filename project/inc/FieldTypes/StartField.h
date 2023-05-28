#pragma once

#include "IFieldType.h"

class StartField : public IFieldType {
public:
    StartField() {}
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~StartField() {};
};
