#include "ExtensionWindowDrawer.h"

ExtensionWindowDrawer::ExtensionWindowDrawer() {}

void ExtensionWindowDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int arg1) const {
    sf::RectangleShape purchaseShape(sf::Vector2f(500, 250));
    purchaseShape.setOutlineThickness(2);
    purchaseShape.setOutlineColor(sf::Color::Black);
    purchaseShape.setFillColor(sf::Color::White);
    purchaseShape.setPosition(1300, 500);

    sf::Text purchaseText;
    purchaseText.setFont(font);
    purchaseText.setCharacterSize(33);
    purchaseText.setFillColor(sf::Color::Black);
    purchaseText.setOutlineThickness(2);
    purchaseText.setOutlineColor(sf::Color::White);
    purchaseText.setPosition(1320, 550);
    purchaseText.setString("Do you want to develop this field?");

    sf::RectangleShape yesButton(sf::Vector2f(150, 100));
    yesButton.setOutlineThickness(2);
    yesButton.setOutlineColor(sf::Color::Black);
    yesButton.setFillColor(sf::Color::White);
    yesButton.setPosition(1350, 620);

    sf::Text yesText;
    yesText.setFont(font);
    yesText.setCharacterSize(33);
    yesText.setFillColor(sf::Color::Black);
    yesText.setOutlineThickness(2);
    yesText.setOutlineColor(sf::Color::White);
    yesText.setPosition(1370, 640);
    yesText.setString("Yes");

    sf::RectangleShape noButton(sf::Vector2f(150, 100));
    noButton.setOutlineThickness(2);
    noButton.setOutlineColor(sf::Color::Black);
    noButton.setFillColor(sf::Color::White);
    noButton.setPosition(1600, 620);

    sf::Text noText;
    noText.setFont(font);
    noText.setCharacterSize(33);
    noText.setFillColor(sf::Color::Black);
    noText.setOutlineThickness(2);
    noText.setOutlineColor(sf::Color::White);
    noText.setPosition(1620, 640);
    noText.setString("No");

    window.draw(purchaseShape);
    window.draw(yesButton);
    window.draw(noButton);

    window.draw(purchaseText);
    window.draw(yesText);
    window.draw(noText);
}

ExtensionWindowDrawer::~ExtensionWindowDrawer() {}
