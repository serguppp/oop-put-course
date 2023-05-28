#include "Player.h"

Player::Player() : name(""), position(0), money(100000), color(sf::Color::White), isPrisoned(false), prisonRounds(0){}

Player::Player(std::string name, int position, sf::Color color) : name(name), position(position), money(100000), color(color), isPrisoned(false), prisonRounds(0) {}

void Player::movePlayer(int steps) {
    if (position + steps > 31) {
        position += steps - 32;
    }
    else {
        position += steps;
    }
}

void Player::setPosition(int fieldID) { this->position = fieldID; }

int Player::getPosition() { return position; };

int Player::getMoney() { return money; };

void Player::setMoney(int amount) { this->money += amount; }
std::string Player::getName() { return name; };

sf::Color Player::getColor() { return this->color; }

bool Player::getIsPrisoned() { return this->isPrisoned; }
void Player::setIsPrisoned(bool isPrisoned) { this->isPrisoned = isPrisoned; }

int Player::getPrisonRounds() { return this->prisonRounds; }
void Player::incrementPrisonRounds() { this->prisonRounds++; }
void Player::resetPrisonRounds() { this->prisonRounds = 0; };

Player::~Player() {}