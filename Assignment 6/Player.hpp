/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Player hpp file
*******************************************************************************/

#ifndef PLAYER_hpp
#define PLAYER_hpp

#include <string>

class Player
{
private: 
	std::string name;
	int points, rebounds, assists;

public:
	Player();
	Player(std::string, int, int, int);
	std::string getName();
	int getPoints();
	int getRebounds();
	int getAssists();
	void setPoints(int);
	void setRebounds(int);
	void setAssists(int);
	bool hasMorePointsThan(Player);
};




#endif 

