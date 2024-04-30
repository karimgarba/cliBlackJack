#pragma once
#include <string>
#include <iostream>

enum Suit {Hearts, Spades, Diamonds, Clubs}; 

// struct to represent class
class Card {
private:
    Suit cardSuit;
    int cardVal;
public:
    // card constructor
    Card(int value, Suit suit);

    // function to return card suit
    Suit getSuit() const;

    // function to return card value
    int getVal() const;

    // function to print card
    void printCard() const;
};