/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/11/2018
** Description:  Sorts 3 integers by reference from smallest to largest
*******************************************************************************/

#include "Box.hpp"
#include "Taxicab.hpp"
#include <iostream>


using std::cout;
using std::endl;



int main()
{
	/*Box box1(2.4, 7.1, 5.0);
	Box box2;
	double volume1 = box1.calcVolume();
	double surfaceArea1 = box1.calcSurfaceArea();
	double volume2 = box2.calcVolume();
	double surfaceArea2 = box2.calcSurfaceArea();

	cout << "Volume of Box1: " << volume1 << endl;
	cout << "Surface Area of Box1: " << surfaceArea1 << endl;
	cout << "Volume of Box2: " << volume2 << endl;
	cout << "Surface Area of Box2: " << surfaceArea2 << endl;*/

	Taxicab cab1;
	Taxicab cab2(5, -8);
	cab1.moveX(3);
	cab1.moveY(-4);
	cab1.moveX(-1);
	cout << cab1.getDistanceTraveled() << endl;
	cab2.moveY(7);
	cout << cab2.getYCoord() << endl;

	return 0;
}