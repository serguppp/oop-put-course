#pragma once

#include <string>

#include <SFML/Graphics.hpp>

class IPlayer {
public:
	virtual void movePlayer(int steps) = 0;
	virtual void setPosition(int fieldID) = 0;
	virtual int getPosition() = 0;
	virtual int getMoney() = 0;
	virtual void setMoney(int amount) = 0;
	virtual std::string getName() = 0;
	virtual sf::Color getColor() = 0;

	virtual bool getIsPrisoned() = 0;
	virtual void setIsPrisoned(bool isPrisoned) = 0;

	virtual int getPrisonRounds() = 0;
	virtual void incrementPrisonRounds() = 0;
	virtual void resetPrisonRounds() = 0;

	virtual ~IPlayer() {}
};