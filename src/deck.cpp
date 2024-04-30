#include "deck.h"

// function to create card deck
Deck::Deck() {
    // uses 6 standard decks
    for (int i = 0; i <= 6; i++) {
        for (int suit = 1; suit <= 4; suit++) {
            for (int val = 1; val <= 13; val++) {
                deck.push_back(Card(val, static_cast<Suit>(suit)));
            }
        }
    }
}

void Deck::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(deck.begin(), deck.end(), g);
}

Card Deck::dealCard() {
    Card topCard = deck.back();
    deck.pop_back();
    return topCard;
}