#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class PenaltyWindowDrawer : public IDrawer {
public:
    PenaltyWindowDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const override;
    ~PenaltyWindowDrawer();
};
