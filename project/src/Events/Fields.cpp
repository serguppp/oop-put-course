#include "Fields.h"

Fields::Fields(int id, int ownerID, int building, std::string name, EnumFieldType type)
	: id(id), ownerID(ownerID), building(building), name(name), type(type), attributes(nullptr) {
	// initialize attributes based on the field type
	switch (type) {
	case EnumFieldType::Airport:
		attributes = new AirportField();
		break;
	case EnumFieldType::Championship:
		attributes = new ChampionshipField();
		break;
	case EnumFieldType::Chance:
		attributes = new ChanceField();
		break;
	case EnumFieldType::Default:
		attributes = new DefaultField();
		break;
	case EnumFieldType::Prison:
		attributes = new PrisonField();
		break;
	case EnumFieldType::Special:
		attributes = new SpecialField();
		break;
	case EnumFieldType::Start:
		attributes = new StartField();
		break;
	case EnumFieldType::Tax:
		attributes = new TaxField();
		break;
	default:
		attributes = nullptr;
		break;
	}
}

Fields::~Fields() {
	delete attributes;
}

int Fields::getID() const {
	return id;
}

std::string Fields::getName() const {
	return name;
}

EnumFieldType Fields::getType() const {
	return type;
}

int Fields::getOwnerID() const {
	return ownerID;
}

int Fields::getBuilding() const {
	return building;
}

int Fields::getCost() const {
	return attributes->getCurrentCost(building);
}

void Fields::setOwnerID(int ownerID) {
	this->ownerID = ownerID;
}

void Fields::buildBuilding() {
	if (attributes->canBuild(building + 1)) {
		building++;
	}
}

IFieldType* Fields::getAttributes() {
	return this->attributes;
}