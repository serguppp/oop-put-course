#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class DiceDrawer : public IDrawer {
public:
    DiceDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int rollValue) const override;
    ~DiceDrawer();
};
