#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class TaxWindowDrawer : public IDrawer {
public:
    TaxWindowDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const override;
    ~TaxWindowDrawer();
};
