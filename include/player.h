#pragma once

#include <vector>
#include "card.h"


class Player {
private:
    int money;
    int bet;
    std::vector<Card> hand;
public:
    Player(int startingAmount);
    int getMoney() const;
    void addMoney(int amount);
    int getBet() const;
    void setBet(int amount);
    void addCard(const Card& card);
    void clearHand();
    const std::vector<Card>& getHand() const;
};