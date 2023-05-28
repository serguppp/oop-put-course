#pragma once

#include <SFML/Graphics.hpp>
#include "IDrawer.h"

class ExtensionWindowDrawer : public IDrawer {
public:
    ExtensionWindowDrawer();
    void Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const override;
    ~ExtensionWindowDrawer();
};
