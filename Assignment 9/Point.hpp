/*******************************************************************************
** Author:       Anthony Huynh
** Date:         8/2/2018
** Description:  hpp file for point class
*******************************************************************************/

#ifndef POINT_hpp
#define POINT_hpp

class Point
{
private:
	double xCoord;
	double yCoord; 

public:
	Point();
	Point(double, double);
	double getXCoord();
	double getYCoord();
	void setXCoord(double);
	void setYCoord(double);
	double distanceTo(Point);


};

#endif // !POINT_hpp

