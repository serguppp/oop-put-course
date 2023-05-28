#pragma once

#include "IFields.h"

class Fields : public IFields {
private:
	int id;
	int ownerID;
	int building;
	std::string name;
	EnumFieldType type;
	IFieldType* attributes;

public:
	Fields(int id, int ownerID, int building, std::string name, EnumFieldType type);

	int getID() const override;
	std::string getName() const override;
	EnumFieldType getType() const override;
	int getOwnerID() const override;
	int getBuilding() const override;
	int getCost() const override;
	void setOwnerID(int ownerID) override;
	void buildBuilding() override;
	IFieldType* getAttributes() override;

	~Fields();
};
