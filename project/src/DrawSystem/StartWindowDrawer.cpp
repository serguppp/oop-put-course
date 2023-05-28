#include "StartWindowDrawer.h"

StartWindowDrawer::StartWindowDrawer() {}

void StartWindowDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const {
    sf::RectangleShape startWindowShape(sf::Vector2f(500, 250));
    startWindowShape.setOutlineThickness(2);
    startWindowShape.setOutlineColor(sf::Color::Black);
    startWindowShape.setFillColor(sf::Color::White);
    startWindowShape.setPosition(1300, 500);

    sf::Text startWindowText;
    startWindowText.setFont(font);
    startWindowText.setCharacterSize(33);
    startWindowText.setFillColor(sf::Color::Black);
    startWindowText.setOutlineThickness(2);
    startWindowText.setOutlineColor(sf::Color::White);
    startWindowText.setPosition(1320, 550);
    startWindowText.setString("You have got $50 000");

    window.draw(startWindowShape);
    window.draw(startWindowText);
}

StartWindowDrawer::~StartWindowDrawer() {}
