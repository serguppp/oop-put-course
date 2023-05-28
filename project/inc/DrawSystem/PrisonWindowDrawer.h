#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class PrisonWindowDrawer : public IDrawer {
public:
    PrisonWindowDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const override;
    ~PrisonWindowDrawer();
};
