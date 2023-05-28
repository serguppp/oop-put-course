#include "GameBoard.h"

GameBoard::GameBoard(std::string name1, std::string name2, std::string name3, std::string name4) {
    round = 0;
    // Set up fields on the board: Fields(int id, int owner_id, int building, std::string name, EnumFieldType type)
    fields.push_back(new Fields(0, -1, 0, "Start", EnumFieldType::Start));
    fields.push_back(new Fields(1, -1, 0, "Lisbona", EnumFieldType::Default));
    fields.push_back(new Fields(2, -1, 0, "Madrid", EnumFieldType::Default));
    fields.push_back(new Fields(3, -1, 0, "Paris", EnumFieldType::Default));
    fields.push_back(new Fields(4, -1, 0, "Cyprus", EnumFieldType::Special));
    fields.push_back(new Fields(5, -1, 0, "Rome", EnumFieldType::Default));
    fields.push_back(new Fields(6, -1, 0, "Berlin", EnumFieldType::Default));
    fields.push_back(new Fields(7, -1, 0, "London", EnumFieldType::Default));
    fields.push_back(new Fields(8, -1, 0, "Prison", EnumFieldType::Prison));
    fields.push_back(new Fields(9, -1, 0, "Panama", EnumFieldType::Default));
    fields.push_back(new Fields(10, -1, 0, "Mexico", EnumFieldType::Default));
    fields.push_back(new Fields(11, -1, 0, "Los Angeles", EnumFieldType::Default));
    fields.push_back(new Fields(12, -1, 0, "Chance", EnumFieldType::Chance));
    fields.push_back(new Fields(13, -1, 0, "New York", EnumFieldType::Default));
    fields.push_back(new Fields(14, -1, 0, "Hawaii", EnumFieldType::Special));
    fields.push_back(new Fields(15, -1, 0, "Ottawa", EnumFieldType::Default));
    fields.push_back(new Fields(16, -1, 0, "World Championship", EnumFieldType::Championship));
    fields.push_back(new Fields(17, -1, 0, "Tokyo", EnumFieldType::Default));
    fields.push_back(new Fields(18, -1, 0, "Pekin", EnumFieldType::Default));
    fields.push_back(new Fields(19, -1, 0, "Tax", EnumFieldType::Tax));
    fields.push_back(new Fields(20, -1, 0, "Shanghai", EnumFieldType::Default));
    fields.push_back(new Fields(21, -1, 0, "Dubai", EnumFieldType::Special));
    fields.push_back(new Fields(22, -1, 0, "Sydney", EnumFieldType::Default));
    fields.push_back(new Fields(23, -1, 0, "Chance", EnumFieldType::Chance));
    fields.push_back(new Fields(24, -1, 0, "Airport", EnumFieldType::Airport));
    fields.push_back(new Fields(25, -1, 0, "Buenos Aires", EnumFieldType::Default));
    fields.push_back(new Fields(26, -1, 0, "Chance", EnumFieldType::Chance));
    fields.push_back(new Fields(27, -1, 0, "Montevideo", EnumFieldType::Default));
    fields.push_back(new Fields(28, -1, 0, "Ilha Grande", EnumFieldType::Special));
    fields.push_back(new Fields(29, -1, 0, "Rio de Janeiro", EnumFieldType::Default));
    fields.push_back(new Fields(30, -1, 0, "Sao Paulo", EnumFieldType::Default));
    fields.push_back(new Fields(31, -1, 0, "Santiago", EnumFieldType::Default));

    players.push_back(new Player(name1, 0, sf::Color::Red));
    players.push_back(new Player(name2, 0, sf::Color::Blue));
    players.push_back(new Player(name3, 0, sf::Color::Magenta));
    players.push_back(new Player(name4, 0, sf::Color::Yellow));
}

void GameBoard::movePlayer(int id, int steps) {
    this->players[id]->movePlayer(steps);
}

std::vector<Fields*> GameBoard::getFields() const {
    return fields;
}

std::vector<Player*> GameBoard::getPlayers() const {
    return players;
}

Player* GameBoard::getPlayer(int id) const {
    return this->players[id];
}

Fields* GameBoard::getField(int id) const {
    return this->fields[id];
}

GameBoard::~GameBoard() {
    for (auto field : fields) {
        delete field;
    }

    for (auto player : players) {
        delete player;
    }
}
