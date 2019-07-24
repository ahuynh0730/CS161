/*******************************************************************************
** Author:       Anthony Huynh
** Date:         8/2/2018
** Description:  cpp file for Point class including a method 
**					to get the distance between two points
*******************************************************************************/

#include "Point.hpp"
#include <cmath>

//default constructor
Point::Point()
{
	xCoord = 0;
	yCoord = 0;

}

//constructor with two doubles for parameter
Point::Point(double x, double y)
{
	xCoord = x;
	yCoord = y;
}

//methods to get x and y coordinates
double Point::getXCoord()
{
	return xCoord;
}
double Point::getYCoord()
{
	return yCoord;
}

//methods to set x and y coordinates
void Point::setXCoord(double x)
{
	xCoord = x;
}
void Point::setYCoord(double y)
{
	yCoord = y;
}

//method that will return distance between two points as a double
double Point::distanceTo(Point point2)
{
	double xDistance = xCoord - point2.xCoord;
	double yDistance = yCoord - point2.yCoord;
	return sqrt(pow(xDistance, 2) + pow(yDistance, 2));

}