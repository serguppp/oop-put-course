#include "BoardDrawer.h"

BoardDrawer::BoardDrawer() {}

void BoardDrawer::Draw(sf::RenderWindow& window, const GameBoard* gameboard, sf::Font& font, int arg1) const {
    const int windowWidth = 1920;
    const int windowHeight = 1080;
    const int fieldSize = windowWidth / 16 - 2;

    for (size_t i = 0; i < gameboard->getFields().size(); i++) {
        int x, y;

        if (i < 8) {
            x = 0;
            y = 1080 - (i + 1) * 120;
        }
        else if (i >= 8 && i < 16) {
            x = (i - 8) * 120;
            y = 0;
        }
        else if (i >= 16 && i < 24) {
            x = 8 * 120;
            y = 0 + (i - 16) * 120;
        }
        else if (i >= 24 && i < 32) {
            x = 1080 - (i - 23) * 120;
            y = 1080 - 120;
        }

        // Rysowanie pól
        sf::RectangleShape fieldShape(sf::Vector2f(fieldSize, fieldSize));
        fieldShape.setOutlineThickness(2);
        fieldShape.setOutlineColor(sf::Color::Red);
        fieldShape.setPosition(x, y);

        // Ustawianie koloru pola w zależności od jego typu
        switch (gameboard->getField(i)->getType()) {
        case EnumFieldType::Start:
            fieldShape.setFillColor(sf::Color::White);
            break;
        case EnumFieldType::Default:
            if (gameboard->getField(i)->getOwnerID() == -1)
                fieldShape.setFillColor(sf::Color(128,128,128));
            else
            {
                sf::Color color = gameboard->getPlayer(gameboard->getField(i)->getOwnerID())->getColor();
                fieldShape.setFillColor(color);
            }
            break;
        case EnumFieldType::Chance:
            fieldShape.setFillColor(sf::Color::White);
            break;
        case EnumFieldType::Special:
            fieldShape.setFillColor(sf::Color(200,120,25));
            break;
        case EnumFieldType::Prison:
            fieldShape.setFillColor(sf::Color::Cyan);
            break;
        case EnumFieldType::Championship:
            fieldShape.setFillColor(sf::Color::Cyan);
            break;
        case EnumFieldType::Tax:
            fieldShape.setFillColor(sf::Color(128, 128, 128)); // Szary kolor
            break;
        case EnumFieldType::Airport:
            fieldShape.setFillColor(sf::Color::White);
            break;
        }

        //nazwa pola
        sf::Text fieldNameText;
        fieldNameText.setFont(font);
        fieldNameText.setCharacterSize(fieldSize / 8); // Rozmiar czcionki jako 1/8 rozmiaru pola
        fieldNameText.setFillColor(sf::Color::White);
        fieldNameText.setOutlineThickness(1);
        fieldNameText.setOutlineColor(sf::Color::Black);
        fieldNameText.setStyle(sf::Text::Bold);
        fieldNameText.setString(gameboard->getField(i)->getName());
        fieldNameText.setPosition(x + fieldSize / 2 - fieldNameText.getLocalBounds().width / 2,
            y + fieldSize / 2 - fieldNameText.getLocalBounds().height / 2);

        //wartość pola
        sf::Text fieldCostText;
        sf::Text levelOfBuildings;
        if (gameboard->getField(i)->getAttributes()->canBuild(gameboard->getField(i)->getBuilding())) {
            fieldCostText.setFont(font);
            fieldCostText.setCharacterSize(fieldSize / 9);
            fieldCostText.setFillColor(sf::Color::Green);
            fieldCostText.setOutlineThickness(1);
            fieldCostText.setOutlineColor(sf::Color::Black);
            fieldCostText.setStyle(sf::Text::Bold);
            fieldCostText.setString(std::to_string(gameboard->getField(i)->getCost())+"$");
            fieldCostText.setPosition(x + fieldSize / 2 - fieldCostText.getLocalBounds().width / 4 - 8,
                y + fieldSize/8.33);

            //ilosc budynkow
            levelOfBuildings.setFont(font);
            levelOfBuildings.setCharacterSize(fieldSize / 9);
            levelOfBuildings.setFillColor(sf::Color::White);
            levelOfBuildings.setOutlineThickness(1);
            levelOfBuildings.setOutlineColor(sf::Color::Black);
            levelOfBuildings.setStyle(sf::Text::Bold);
            levelOfBuildings.setString(std::to_string(gameboard->getField(i)->getBuilding()));
            levelOfBuildings.setPosition(x+fieldSize/2, y + fieldSize/4);
        }

        window.draw(fieldShape);
        window.draw(fieldNameText);
        window.draw(levelOfBuildings);
        window.draw(fieldCostText);

    }
}

BoardDrawer::~BoardDrawer() {}
