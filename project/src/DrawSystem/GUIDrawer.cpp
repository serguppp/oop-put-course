#include "GUIDrawer.h"

GUIDrawer::GUIDrawer() {}

void GUIDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int round) const {

    for (size_t i = 0; i < gameboard->getPlayers().size(); i++) {
        int x = 0, y = 0, i_x = 0, i_y = 0;
        if (i == 0 || i == 1) {
            if (i == 0) {
                i_x = -750;
            }
            else {
                i_x = -500;
            }
        }
        else if (i == 2 || i == 3) {
            if (i == 2) {
                i_x = -750;
                i_y = 100;
            }
            else {
                i_x = -500;
                i_y = 100;
            }
        }
        sf::Text playerText;
        playerText.setFont(font);
        playerText.setCharacterSize(20);
        playerText.setFillColor(sf::Color::White);
        playerText.setPosition(window.getSize().x + i_x, 20 + i_y); 

        std::string playerInfo = "Name: " + gameboard->getPlayer(i)->getName() + "\n";
        playerInfo += "ID: " + std::to_string(i) + "\n";
        playerInfo += "Money: " + std::to_string(gameboard->getPlayer(i)->getMoney()) + "\n\n";
        playerText.setString(playerInfo);

        window.draw(playerText);
    }

    sf::Text roundText;
    roundText.setFont(font);
    roundText.setCharacterSize(20);
    roundText.setFillColor(sf::Color::White);
    roundText.setPosition(1700, 60);
    roundText.setString("round:"+std::to_string(round));
    window.draw(roundText);
}

GUIDrawer::~GUIDrawer() {}