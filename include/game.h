#pragma once

class Game {
private:
    int round;
    int pot;
    bool gameFinished;

public:
    void setup();
    int getPot() const;
};