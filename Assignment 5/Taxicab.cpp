/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Taxicab cpp file
*******************************************************************************/

#include "Taxicab.hpp"
#include <cmath>


//default constructor
Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	distanceTraveled = 0;
}

//constructor with two parameters
Taxicab::Taxicab(int x, int y)
{
	xCoord = x;
	yCoord = y;
	distanceTraveled = 0;
}

//getting x coordinate
int Taxicab::getXCoord()
{
	return xCoord;
}

//getting y coordinate
int Taxicab::getYCoord()
{
	return yCoord;
}

//getting distance traveled
int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}

//moving left or right
void Taxicab::moveX(int spaces)
{
	xCoord += spaces;
	distanceTraveled += std::abs(spaces);
}

//moving up or down
void Taxicab::moveY(int spaces)
{
		yCoord += spaces;
		distanceTraveled += std::abs(spaces);
}
