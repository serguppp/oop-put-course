#pragma once

class IFieldType {
public:
	virtual int getCurrentCost(int building) const = 0;
	virtual bool canBuild(int building) const = 0;
	virtual ~IFieldType() {}
};
