/*******************************************************************************
** Author:       Anthony Huynh
** Date:         8/8/2018
** Description:  cpp file for GBoard class 
*******************************************************************************/

#include "GBoard.hpp"
#include <iostream>

//default constructor that sets all elements of array to 'z' or empty
//and sets gameState to UNFINISHED
GBoard::GBoard()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			board[i][j] = 'z';
		}
	}
	gameState = UNFINISHED;
}

//method to display the board
void GBoard::displayBoard()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			std::cout << board[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

//method to get the gameState
gameStatus GBoard::getGameState()
{
	return gameState;
}

//method that updates game board
bool GBoard::makeMove(int row, int column, char player)
{
	//to return false if gamespace is not unfinished
	if (gameState != UNFINISHED)
	{
		std::cout << "Sorry, the game is over." << std::endl;
		return false;
	}

	//to return false if space was taken
	if (board[row][column] == 'o' || board[row][column] == 'x')
	{
		std::cout << "Sorry that space is already taken." << std::endl;
		return false;
	}

	//adds move to board
	board[row][column] = player;

	//updates game
	checkGame(row, column, player);
	return true;
}

//method to check if there is a winner after each move
void GBoard::checkGame(int row, int column, char player)
{
	int playerCount = 1;

	//loop that checks left and exits when no longer matches
	for (int i = 1; (column - i) >= 0; i++)
	{
		if (board[row][column] == board[row][column - i])
		{
			playerCount++;
		}
		else
			break;
	}

	//loop that checks right and exits when no longer matches
	for (int i = 1; (column + i) < 15; i++)
	{
		if (board[row][column] == board[row][column + i])
		{
			playerCount++;
		}
		else
			break;
	}

	//updates gameState if playerCount hits 5 or more
	if (playerCount >= 5)
	{
		updateGame(player);
		return;
	}

	//setting playerCount back to 1 to start checking vertically
	playerCount = 1;

	//loop that checks up and exits when no longer matches
	for (int i = 1; (row - i) >= 0; i++)
	{
		if (board[row][column] == board[row - i][column])
		{
			playerCount++;
		}
		else
			break;
	}

	//loop that checks down and exits when no longer matches
	for (int i = 1; (row + i) < 15; i++)
	{
		if (board[row][column] == board[row + 1][column])
		{
			playerCount++;
		}
		else
			break;
	}

	//updates gameState if playerCount hits 5 or more
	if (playerCount >= 5)
	{
		updateGame(player);
	}

	//setting playerCount back to 1 to start checking diagonally from bottom left to top right
	playerCount = 1;


	//loop that checks up and right diagonally
	for (int i = 1, j = 1; (row - i >= 0) && (column + j < 15); i++, j++)
	{
		if (board[row][column] == board[row - i][column + j])
		{
			playerCount++;
		}
		else
			break;
	}

	//loop that checks down and left diagonally
	for (int i = 1, j = 1; (row + i < 15) && (column - j >= 0); i++, j++)
	{
		if (board[row][column] == board[row + i][column - j])
		{
			playerCount++;
		}
		else
			break;
	}
	
	//change gameState if playerCount hits 5 or more
	if (playerCount >= 5)
	{
		updateGame(player);
	}


	//setting playerCount back to 1 to start checking diagonally from bottom right to top left
	playerCount = 1;


	//loop that checks up and left diagonally
	for (int i = 1, j = 1; (row - i >= 0) && (column - j >= 0); i++, j++)
	{
		if (board[row][column] == board[row - i][column - j])
		{
			playerCount++;
		}
		else
			break;
	}

	//loop that checks down and right diagonally
	for (int i = 1, j = 1; (row + i < 15) && (column + j < 15); i++, j++)
	{
		if (board[row][column] == board[row + i][column + j])
		{
			playerCount++;
		}
		else
			break;
	}

	//change gameState if playerCount hits 5 or more
	if (playerCount >= 5)
	{
		updateGame(player);
	}

	
	//checks to see if entire array is full and no victory has been declared
	bool arrayFull = checkDraw();
	if (arrayFull)
		updateGame('T');

	

}

//updates gameState based on player character sent
void GBoard::updateGame(char winner)
{

	
	if (winner == 'x')
	{
		gameState = X_WON;
		std::cout << "Player " << winner << " wins!" << std::endl;
	}

	else if (winner == 'o')
	{
		gameState = O_WON;
		std::cout << "Player " << winner << " wins!" << std::endl;
	}

	else if (winner == 'T')
	{
		gameState = DRAW;
		std::cout << "Game ended in a draw!" << std::endl;
	}
}

//will return false if there are any empty elements
bool GBoard::checkDraw()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (board[i][j] == 'z')
				return false;
		}
	}
}