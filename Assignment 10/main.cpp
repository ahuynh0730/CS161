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
	//board.makeMove(1, 5, 'x');
	//board.makeMove(1, 4, 'x');
	//board.makeMove(1, 3, 'x');
	//board.makeMove(1, 2, 'x');
	//board.makeMove(1, 1, 'x');
	//board.makeMove(1, 0, 'x');
	//board.makeMove(1, 3, 'x');
	//board.makeMove(1, 4, 'x');
	//board.makeMove(1, 6, 'x');
	/*board.displayBoard();
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
	/*for (int i = 0; i < 15; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 15; j++)
			{
				if (j % 3 == 0)
					board.makeMove(i, j, 'o');
				else
					board.makeMove(i, j, 'x');
			}
		}
		else
		{
			for (int j = 0; j < 15; j++)
			{
				if (j % 3 != 0)
					board.makeMove(i, j, 'o');
				else
					board.makeMove(i, j, 'x');
			}
		}

	}
	cout << endl;*/
	board.makeMove(7, 5, 'o');
	board.makeMove(7, 6, 'o');
	board.makeMove(7, 8, 'o');
	board.makeMove(7, 9, 'o');
	board.makeMove(7, 10, 'o');

	board.makeMove(3, 7, 'x');
	board.makeMove(4, 7, 'x');
	board.makeMove(5, 7, 'x');
	board.makeMove(6, 7, 'x');

	cout << board.getGameState() << endl;
	board.makeMove(7, 7, 'o');
	cout << board.getGameState() << endl;
	board.displayBoard();


	system("pause");
	return 0;
}