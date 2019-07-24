/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/18/2018
** Description:  Box header file
*******************************************************************************/


#ifndef BOX_hpp
#define BOX_hpp

class Box
{
private:
	double height, width, length;
	
public: 
	Box();
	Box(double, double, double);
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	double getHeight();
	double getLength();
	double getWidth();
	double calcVolume();
	double calcSurfaceArea();
	

};
#endif
