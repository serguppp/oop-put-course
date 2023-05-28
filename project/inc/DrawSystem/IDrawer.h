#pragma once

#include <SFML/Graphics.hpp>
#include "GameBoard.h"

class IDrawer {
public:
    virtual void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int arg1) const = 0;
    virtual ~IDrawer() {}
};
