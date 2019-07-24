/*******************************************************************************
** Author:       Anthony Huynh
** Date:         8/7/2018
** Description:  hpp file for LineSegment class
*******************************************************************************/

#ifndef LINESEGMENT_hpp
#define LINESEGMENT_hpp

#include "Point.hpp"

class LineSegment
{
private:
	Point* end1Pointer;
	Point* end2Pointer;
public:
	LineSegment(Point*, Point*);
	void setEnd1(Point*);
	void setEnd2(Point*);
	Point* getEnd1();
	Point* getEnd2();
	double length();
	double slope();

};

#endif 
