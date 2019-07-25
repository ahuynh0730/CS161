/*

It should have a method called makeMove that takes as parameters an int for the row,
an int for the column, and a char for the player.The player will be either 'x' or 'o'.
This method should return false if the square is already occupied or the game had already finished.
Otherwise it should add the move to the board, update the gameState, and return true.Be careful to
not access your array out of bounds - including in the condition of an if statement or loop.


*/
#include <iostream>
#include "GBoard.hpp"

using std::cin;
using std::cout;
using std::endl;

int main() {
	GBoard board;
	board.displayBoard();
	while (board.getGameState() == UNFINISHED)
	{
		int userRow, userColumn;
		char player;
		cout << "Please enter the row, the column, and the player all seperated by a space." << endl;
		cin >> userRow >> userColumn >> player;
		if (player != 'x' && player != 'o')
		{
			cout << "Invalid player choice. Please try again." << endl;
		}
		else
		{
			board.makeMove(userRow, userColumn, player);
			board.displayBoard();
		}
	}
	cout << endl;


	return 0;
}