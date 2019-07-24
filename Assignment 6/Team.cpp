/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Team cpp file with function to add all points of all players on team together
*******************************************************************************/

#include "Team.hpp"

//constructor with 5 players as parameters
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
	pointGuard = p1;
	shootingGuard = p2;
	smallForward = p3;
	powerForward = p4;
	center = p5;
}

//to positions
void Team::setPointGuard(Player p)
{
	pointGuard = p;
}

void Team::setShootingGuard(Player p)
{
	shootingGuard = p;
}

void Team::setSmallForward(Player p)
{
	smallForward = p;
}

void Team::setPowerForward(Player p)
{
	powerForward = p;
}

void Team::setCenter(Player p)
{
	center = p;
}

//to get position
Player Team::getPointGuard()
{
	return pointGuard;
}

Player Team::getShootingGuard()
{
	return shootingGuard;
}

Player Team::getSmallForward()
{
	return smallForward;
}

Player Team::getPowerForward()
{
	return powerForward;
}

Player Team::getCenter() 
{
	return center;
}

//to get totalPoints of team
int Team::totalPoints()
{
	return (pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints()
		+ powerForward.getPoints() + center.getPoints());
	
}