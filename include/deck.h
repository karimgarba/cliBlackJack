#pragma once

#include "card.h"
#include <vector>
#include <algorithm>
#include <random>

class Deck {
private:
    std::vector<Card> deck;
    
public:
    Deck();
    void shuffle();
    Card dealCard();
};