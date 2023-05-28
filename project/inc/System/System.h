#pragma once
#include <SFML/Graphics.hpp>

#include "Gameboard.h"
#include "Cube.h"

class System {
private:
    int round;
    int current_id;
    int rollValue;

    bool rollDice;

    Cube cube;
    GameBoard gameboard;
public:
    System(std::string name1, std::string name2, std::string name3, std::string name4);

    void setRollValue();
    int getRollValue();

    void movePlayer();

    void setRound();
    int getRound();
    
    void setCurrentID(int player_id);
    int getCurrentID();

    bool getRollDice();
    void setRollDice(bool rollDice);

    GameBoard& getGameBoard();

    IFieldType* getFieldAttributes(int player_id);
    Fields* getField(volatile int player_id);
    Player* getPlayer(int player_id);
};
