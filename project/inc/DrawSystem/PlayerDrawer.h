#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class PlayerDrawer : public IDrawer {
public:
    PlayerDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int currentID) const override;
    ~PlayerDrawer();
};
