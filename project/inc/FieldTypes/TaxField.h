#pragma once

#include "IFieldType.h"

class TaxField : public IFieldType {
public:
    TaxField() {}
    int getCurrentCost(int building) const override;
    bool canBuild(int building) const override;
    ~TaxField() {};
};
