#pragma once

#include <string>
#include "enumFieldType.h"
#include "AirportField.h"
#include "ChampionshipField.h"
#include "ChanceField.h"
#include "DefaultField.h"
#include "ImprovedField.h"
#include "PrisonField.h"
#include "SpecialField.h"
#include "StartField.h"
#include "TaxField.h"

class IFields {
public:
	virtual int getID() const = 0;
	virtual std::string getName() const = 0;
	virtual EnumFieldType getType() const = 0;
	virtual int getOwnerID() const = 0;
	virtual int getBuilding() const = 0;
	virtual int getCost() const = 0;
	virtual void setOwnerID(int ownerID) = 0;
	virtual void buildBuilding() = 0;
	virtual IFieldType* getAttributes() = 0;
	virtual ~IFields() {}
};