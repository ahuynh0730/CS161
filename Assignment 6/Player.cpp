/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Player cpp file than can determine if one player scored more than another
*******************************************************************************/

#include "Player.hpp"

#include <string>
#include <iostream>


//Default constructor that sets name to "" and each stat to -100
Player::Player()
{
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;

}

//constructor with 4 parameters
Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn)
{
	name = nameIn;
	points = pointsIn;
	rebounds = reboundsIn;
	assists = assistsIn;
}

//to get name
std::string Player::getName()
{
	return name;
}

//to get points
int Player::getPoints() 
{
	return points;
}

//to get rebounds
int Player::getRebounds()
{
	return rebounds;
}

//to get assists
int Player::getAssists()
{
	return assists;
}

//to set points
void Player::setPoints(int pointsIn)
{
	points = pointsIn;
}

//to set rebounds
void Player::setRebounds(int reboundsIn)
{
	rebounds = reboundsIn;
}

//to set assists
void Player::setAssists(int setAssists)
{
	assists = setAssists;
}

//to determine if one player has more points than another
bool Player::hasMorePointsThan(Player player2)
{
	if (points > player2.points)
		return true;
	else
		return false;
}