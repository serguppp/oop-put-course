#include "PenaltyWindowDrawer.h"

PenaltyWindowDrawer::PenaltyWindowDrawer() {}

void PenaltyWindowDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int current_id) const {
    sf::RectangleShape penaltyWindowShape(sf::Vector2f(500, 250));
    penaltyWindowShape.setOutlineThickness(2);
    penaltyWindowShape.setOutlineColor(sf::Color::Black);
    penaltyWindowShape.setFillColor(sf::Color::White);
    penaltyWindowShape.setPosition(1300, 500);

    sf::Text penaltyWindowText;
    penaltyWindowText.setFont(font);
    penaltyWindowText.setCharacterSize(33);
    penaltyWindowText.setFillColor(sf::Color::Black);
    penaltyWindowText.setOutlineThickness(2);
    penaltyWindowText.setOutlineColor(sf::Color::White);
    penaltyWindowText.setPosition(1320, 550);
    penaltyWindowText.setString("You have paid " + std::to_string(gameboard->getField(gameboard->getPlayer(current_id)->getPosition())->getCost()) + "$ penalty");

    window.draw(penaltyWindowShape);
    window.draw(penaltyWindowText);
}

PenaltyWindowDrawer::~PenaltyWindowDrawer() {}
