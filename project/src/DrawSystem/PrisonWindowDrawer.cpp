#include "PrisonWindowDrawer.h"

PrisonWindowDrawer::PrisonWindowDrawer() {}

void PrisonWindowDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const {
    sf::RectangleShape prisonWindowShape(sf::Vector2f(500, 250));
    prisonWindowShape.setOutlineThickness(2);
    prisonWindowShape.setOutlineColor(sf::Color::Black);
    prisonWindowShape.setFillColor(sf::Color::White);
    prisonWindowShape.setPosition(1300, 500);

    sf::Text prisonWindowText;
    prisonWindowText.setFont(font);
    prisonWindowText.setCharacterSize(33);
    prisonWindowText.setFillColor(sf::Color::Black);
    prisonWindowText.setOutlineThickness(2);
    prisonWindowText.setOutlineColor(sf::Color::White);
    prisonWindowText.setPosition(1320, 550);
    prisonWindowText.setString("You have been jailed for 3 rounds.");

    window.draw(prisonWindowShape);
    window.draw(prisonWindowText);
}

PrisonWindowDrawer::~PrisonWindowDrawer() {}
