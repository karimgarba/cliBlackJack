#include "player.h"

Player::Player(int startingAmount) : money(startingAmount) {}

int Player::getMoney() const {
    return money;
}

void Player::addMoney(int amount) {
    money += amount;
}

int Player::getBet() const {
    return bet;
}

void setBet(int amount);