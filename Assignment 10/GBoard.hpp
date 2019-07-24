/*******************************************************************************
** Author:       Anthony Huynh
** Date:         8/8/2018
** Description:  hpp file for GBoard class for 15x15 tic-tac-toe game 
**					with 5 in a row to win
*******************************************************************************/

#ifndef GBOARD_hpp
#define GBOARD_hpp

enum gameStatus { X_WON, O_WON, DRAW, UNFINISHED };
class GBoard 
{
private:
	char board[15][15];
	gameStatus gameState;

public:
	GBoard();
	void displayBoard();
	gameStatus getGameState();
	bool makeMove(int, int, char);
	void checkGame(int, int, char);
	void updateGame(char);
	bool checkDraw();
};

#endif // !GBOARD_hpp

