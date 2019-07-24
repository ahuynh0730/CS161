/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Box cpp file
*******************************************************************************/


#include "Box.hpp"



//default constructor
Box::Box()
{
	setHeight(1);
	setWidth(1);
	setLength(1);
	
}

//constructor with 3 doubles as parameter
Box::Box(double h, double w, double l)
{
	setHeight(h);
	setWidth(w);
	setLength(l);
}

//method to set height
void Box::setHeight(double h) 
{
	height = h;
}

//method to set length
void Box::setLength(double l)
{
	length = l;
}

//method to set width
void Box::setWidth(double w)
{
	width = w;
}

//method to get height
double Box::getHeight()
{
	return height;
}

//method to get length
double Box::getLength()
{
	return length;
}

//method to get width
double Box::getWidth()
{
	return width;
}

//method to calculate and return volume
double Box::calcVolume()
{
	return height * width * length;
}

//method to calculate and return surface area
double Box::calcSurfaceArea()
{
	return 2 * ((height * width) + (height * length) + (width * length));
}
