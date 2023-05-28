#pragma once

#include "IPlayer.h"

class Player : public IPlayer {
private:
    std::string name;
    int position;
    int money;
    
    int prisonRounds;
    bool isPrisoned;
    sf::Color color;
public:
    Player();
    Player(std::string name, int position, sf::Color color);

    void movePlayer(int steps) override;
    void setPosition(int fieldID) override;
    int getPosition() override;
    int getMoney() override;
    
    void setMoney(int amount) override;
    std::string getName() override;
    sf::Color getColor() override;

    bool getIsPrisoned() override;
    void setIsPrisoned(bool isPrisoned) override;

    int getPrisonRounds() override;
    void incrementPrisonRounds() override;
    void resetPrisonRounds() override;

    ~Player();
};