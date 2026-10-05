#pragma once

class RandomNumberGuess {

private:
    int secretNumber = -1;
    int maxAttempts = -1;


public:

    int guess = -1;
    int counter = 0;
    void setRandomNumber(int counter);

    void randomNumberGuess(int guess, int secretNumber);


};