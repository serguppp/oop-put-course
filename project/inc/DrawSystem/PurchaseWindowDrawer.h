#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class PurchaseWindowDrawer : public IDrawer {
public:
    PurchaseWindowDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int arg1) const override;
    ~PurchaseWindowDrawer();
};
