#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class GUIDrawer : public IDrawer {
public:
    GUIDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int round) const override;
    ~GUIDrawer();
};
