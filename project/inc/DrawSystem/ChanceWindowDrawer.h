#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class ChanceWindowDrawer : public IDrawer {
public:
    ChanceWindowDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int flag) const override;
    ~ChanceWindowDrawer();
};