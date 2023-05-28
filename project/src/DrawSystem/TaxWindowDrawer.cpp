#include "TaxWindowDrawer.h"

TaxWindowDrawer::TaxWindowDrawer() {}

void TaxWindowDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const {
    sf::RectangleShape taxWindowShape(sf::Vector2f(500, 250));
    taxWindowShape.setOutlineThickness(2);
    taxWindowShape.setOutlineColor(sf::Color::Black);
    taxWindowShape.setFillColor(sf::Color::White);
    taxWindowShape.setPosition(1300, 500);

    sf::Text taxWindowText;
    taxWindowText.setFont(font);
    taxWindowText.setCharacterSize(33);
    taxWindowText.setFillColor(sf::Color::Black);
    taxWindowText.setOutlineThickness(2);
    taxWindowText.setOutlineColor(sf::Color::White);
    taxWindowText.setPosition(1320, 550);
    taxWindowText.setString("You have lost $75 000");

    window.draw(taxWindowShape);
    window.draw(taxWindowText);
}

TaxWindowDrawer::~TaxWindowDrawer() {}
