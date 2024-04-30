#include "card.h"

// Constructor
Card::Card(int value, Suit suit) : cardVal(value), cardSuit(suit) {}

// Getter functions
Suit Card::getSuit() const {
    return cardSuit;
}

int Card::getVal() const {
    // For face cards (Jack, Queen, King), return a value of 10
    if (cardVal > 10) {
        return 10;
    }
    return cardVal;
}

// Function to print card
void Card::printCard() const {
    std::string faceValue;
    switch (cardVal) {
        case 1:
            faceValue = "Ace";
            break;
        case 11:
            faceValue = "Jack";
            break;
        case 12:
            faceValue = "Queen";
            break;
        case 13:
            faceValue = "King";
            break;
        default:
            faceValue = std::to_string(cardVal);
            break;
    }

    std::string suitString;
    switch (cardSuit) {
        case Hearts:
            suitString = "Hearts";
            break;
        case Spades:
            suitString = "Spades";
            break;
        case Diamonds:
            suitString = "Diamonds";
            break;
        case Clubs:
            suitString = "Clubs";
            break;
    }

    std::cout << faceValue << " of " << suitString << std::endl;
}
