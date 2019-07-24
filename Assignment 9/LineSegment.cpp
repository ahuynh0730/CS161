/*******************************************************************************
** Author:       Anthony Huynh
** Date:         8/7/2018
** Description:  cpp file for LineSegment class including a method to get length and slope
*******************************************************************************/

#include "LineSegment.hpp"



//constructor that requires two Point pointers as parameters
LineSegment::LineSegment(Point* end1, Point* end2)
{
	setEnd1(end1);
	setEnd2(end2);
}

//setters
void LineSegment::setEnd1(Point* end1)
{
	end1Pointer = end1;
}

void LineSegment::setEnd2(Point* end2)
{
	end2Pointer = end2;
}

//getters that return Point pointers
Point* LineSegment::getEnd1()
{
	return end1Pointer;
}

Point* LineSegment::getEnd2()
{
	return end2Pointer;
}

//to get the length of the line segment
double LineSegment::length()
{
	double lineLength;
	lineLength = end1Pointer->distanceTo(*end2Pointer);
	return lineLength;
}

//to get the slope of the line
double LineSegment::slope()
{
	double lineSlope, yDistance, xDistance;
	yDistance = end2Pointer->getYCoord() - end1Pointer->getYCoord();
	xDistance = end2Pointer->getXCoord() - end1Pointer->getXCoord();

	//checks for division for 0, if division by 0 occurs, will return infinity
	if (xDistance != 0)
	{
		lineSlope = yDistance / xDistance;
		return lineSlope;
	}
	else
		return INFINITY; 
}