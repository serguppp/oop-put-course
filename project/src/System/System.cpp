#include "System.h"

System::System(std::string name1, std::string name2, std::string name3, std::string name4)
    : gameboard(name1, name2, name3, name4), round(1), current_id(0), rollValue(0), rollDice(false){}

void System::setRollValue() { this->rollValue = cube.Roll(); }
int System::getRollValue() { return this->rollValue; }

void System::movePlayer() { this->gameboard.movePlayer(this->current_id, this->rollValue); }

void System::setRound() { this->round++; }
int System::getRound() { return this->round; }

void System::setCurrentID(int player_id) { this->current_id = player_id; }
int System::getCurrentID() { return this->current_id; }

bool System::getRollDice() { return this->rollDice; }
void System::setRollDice(bool rollDice) { this-> rollDice = rollDice; }
GameBoard& System::getGameBoard() { return this->gameboard; }

IFieldType* System::getFieldAttributes(int player_id) { return this->gameboard.getField(this->gameboard.getPlayer(player_id)->getPosition())->getAttributes(); }

Fields* System::getField(volatile int player_id) { return this->gameboard.getField(this->gameboard.getPlayer(player_id)->getPosition()); }

Player* System::getPlayer(int player_id) { return this->gameboard.getPlayer(player_id); }

