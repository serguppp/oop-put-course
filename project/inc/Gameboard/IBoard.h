#pragma once

#include "Fields.h"
#include "Player.h"

#include <vector>
#include <string>

class IBoard {
public:
    virtual void movePlayer(int id, int roll) = 0;

    virtual ~IBoard() {}
};

