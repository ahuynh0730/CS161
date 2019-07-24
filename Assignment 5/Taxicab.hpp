/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Taxicab header file
*******************************************************************************/

#ifndef TAXICAB_hpp
#define TAXICAB_hpp

class Taxicab
{
private:
	int xCoord, yCoord, distanceTraveled;

public: 
	Taxicab();
	Taxicab(int, int);
	int getXCoord();
	int getYCoord();
	int getDistanceTraveled();
	void moveX(int);
	void moveY(int);
};

#endif 

