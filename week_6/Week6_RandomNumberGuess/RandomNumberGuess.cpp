#include "RandomNumberGuess.h"
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For current time()

using namespace std;

void RandomNumberGuess::setRandomNumber(int counter)		
{
	srand(unsigned int(time(0)));            // Seed the random number generator with the current time
	secretNumber = (rand() % 100) + 1;  // Random number between 1 and 100

	counter = 0;
	while (guess != secretNumber) {
		cout << "Enter your guess (1-100):\n";
		cin >> guess;
		counter++;

		randomNumberGuess(guess, secretNumber);


	}
	cout << "Congratulations! You guessed the secret number: " << secretNumber << endl;
	cout << "It took you " << counter << " attempts to guess the number." << endl;
}

void RandomNumberGuess::randomNumberGuess(int guess, int secretNumber)
{
	if (guess > secretNumber) {
		cout << "Too high! Try again.\n";
	}
	else if (guess < secretNumber) {
		cout << "Too low! Try again.\n";
	}
	else {
		cout << "Correct!\n";
	}
}
