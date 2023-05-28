#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class RepurchaseWindowDrawer : public IDrawer {
public:
    RepurchaseWindowDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int arg1) const override;
    ~RepurchaseWindowDrawer();
};
