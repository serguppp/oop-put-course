#pragma once

#include "IBoard.h"

class GameBoard : public IBoard {
private:
    int round;
    std::vector<Fields*> fields;
    std::vector<Player*> players;

public:
    GameBoard() = default;
    GameBoard(std::string name1, std::string name2, std::string name3, std::string name4);

    void movePlayer(int id, int steps) override;

    std::vector<Fields*> getFields() const;
    std::vector<Player*> getPlayers() const;
    Player* getPlayer(int id) const;
    Fields* getField(int id) const;

    ~GameBoard();
};
