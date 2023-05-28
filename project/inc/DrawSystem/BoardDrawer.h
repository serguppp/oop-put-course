#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class BoardDrawer : public IDrawer {
public:
    BoardDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int arg1) const override;
    ~BoardDrawer();
};
