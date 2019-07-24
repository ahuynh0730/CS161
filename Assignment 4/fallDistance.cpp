/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/11/2018
** Description:  Determines how far an object fell based on time
*******************************************************************************/

/*
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double fallDistance(double);
*/

//main function commented out
/*
int main()
{
	//getting fall time from user
	cout << "Please enter amount of time object has been falling." << endl;
	double fallTime, distance;
	cin >> fallTime;

	//calls fallDistance function
	distance = fallDistance(fallTime);

	return 0;

}
*/

double fallDistance(double fallTime)
{
	//declaring GRAVITY as a constant and distance as a variable
	const double GRAVITY = 9.8;
	double distance;

	//formula to determine distance from time
	distance = (fallTime * fallTime) * GRAVITY / 2;

	//to return distance
	return distance;

}