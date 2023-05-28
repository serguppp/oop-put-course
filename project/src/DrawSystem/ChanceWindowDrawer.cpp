#include "ChanceWindowDrawer.h"

ChanceWindowDrawer::ChanceWindowDrawer() {}

void ChanceWindowDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int flag) const {
    sf::RectangleShape chanceWindowShape(sf::Vector2f(500, 250));
    chanceWindowShape.setOutlineThickness(2);
    chanceWindowShape.setOutlineColor(sf::Color::Black);
    chanceWindowShape.setFillColor(sf::Color::White);
    chanceWindowShape.setPosition(1300, 500);

    sf::Text chanceWindowText;
    chanceWindowText.setFont(font);
    chanceWindowText.setCharacterSize(33);
    chanceWindowText.setFillColor(sf::Color::Black);
    chanceWindowText.setOutlineThickness(2);
    chanceWindowText.setOutlineColor(sf::Color::White);
    chanceWindowText.setPosition(1320, 550);
    chanceWindowText.setString("You have drawn ");
    window.draw(chanceWindowShape);
    window.draw(chanceWindowText);
}

ChanceWindowDrawer::~ChanceWindowDrawer() {}
