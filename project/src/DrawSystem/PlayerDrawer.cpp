#include "PlayerDrawer.h"

PlayerDrawer::PlayerDrawer() {}

void PlayerDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int currentID) const {
    const int fieldSize = 1920 /  16 - 2;
    for (size_t i = 0; i < gameboard->getPlayers().size(); i++) {
        sf::CircleShape playerShape(fieldSize / 8);
        playerShape.setOutlineThickness(2);
        if (i==currentID) playerShape.setOutlineColor(sf::Color::Yellow);
        else playerShape.setOutlineColor(sf::Color::Black);

        int playerPosition = gameboard->getPlayer(i)->getPosition();
        playerShape.setFillColor(gameboard->getPlayer(i)->getColor());
        int x = 0, y = 0, i_x = 0, i_y = 0;
        if (i == 0 || i == 1) {
            if (i == 0) {
                i_x = 10;
                i_y = 10;
            }
            else {
                i_x = 80;
                i_y = 10;
            }
        }
        else if (i == 2 || i == 3) {
            if (i == 2) {
                i_x = 10;
                i_y = 85;
            }
            else {
                i_x = 80;
                i_y = 85;
            }
        }
        if (playerPosition < 8) {
            x = 0 + i_x;
            y = 1080 - (playerPosition + 1) * 120 + i_y;
        }
        else if (playerPosition >= 8 && playerPosition < 16) {
            x = (playerPosition - 8) * 120 + i_x;
            y = i_y;
        }
        else if (playerPosition >= 16 && playerPosition < 24) {
            x = 8 * 120 + i_x;
            y = 0 + (playerPosition - 16) * 120 + i_y;
        }
        else if (playerPosition >= 24 && playerPosition < 32) {
            x = 1080 - (playerPosition - 23) * 120 + i_x;
            y = 1080 - 120 + i_y;
        }
        playerShape.setPosition(x, y);

        sf::Text playerNumberText;
        playerNumberText.setFont(font);
        playerNumberText.setCharacterSize(fieldSize / 8); 
        playerNumberText.setFillColor(sf::Color::White);
        playerNumberText.setOutlineThickness(1);
        playerNumberText.setOutlineColor(sf::Color::Black);
        playerNumberText.setStyle(sf::Text::Bold);
        playerNumberText.setString(std::to_string(i + 1)); 
        playerNumberText.setPosition(x + fieldSize / 16, y + fieldSize / 16); 

        window.draw(playerShape);
        window.draw(playerNumberText);
    }
}

PlayerDrawer::~PlayerDrawer() {}
