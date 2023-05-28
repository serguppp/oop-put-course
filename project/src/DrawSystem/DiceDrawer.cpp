#include "DiceDrawer.h"

DiceDrawer::DiceDrawer() {}

void DiceDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int rollValue) const {
    sf::RectangleShape diceShape(sf::Vector2f(100, 100));
    diceShape.setOutlineThickness(2);
    diceShape.setOutlineColor(sf::Color::Black);
    diceShape.setFillColor(sf::Color::White);
    diceShape.setPosition(1780, 40);

    sf::Text diceText;
    diceText.setFont(font);
    diceText.setCharacterSize(40);
    diceText.setFillColor(sf::Color::Black);
    diceText.setOutlineThickness(2);
    diceText.setOutlineColor(sf::Color::White);
    diceText.setPosition(1820, 60);
    diceText.setString(std::to_string(rollValue));

    window.draw(diceShape);
    window.draw(diceText);
}

DiceDrawer::~DiceDrawer() {}