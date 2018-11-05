/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/8/2018
** Description:  User enters number for a player to guess, program will tell
**				 player if number is too high or too low
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//asks user for correct answer
	cout << "Enter the number for the player to guess." << endl;
	int correctNum;
	cin >> correctNum;

	//has user/player guess
	cout << "Enter your guess." << endl;
	int guess, numbGuess = 1;
	cin >> guess;

	//loop to determine if guess is correct
	while (guess != correctNum)
	{
		//if guess is too high
		if (guess > correctNum) {
			cout << "Too high - try again." << endl;
			cin >> guess;
		}

		//if guess is too low
		else
		{
			cout << "Too low - try again." << endl;
			cin >> guess;
		}

		//to increment the number of guesses
		numbGuess++;

	}

	//to tell user guess is correct and in how many tries
	cout << "You guessed it in " << numbGuess << " tries." << endl;

	return 0;
}
