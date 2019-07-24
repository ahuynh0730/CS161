/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/1/2018
** Description:  Converts Celsius to Fahrenheit
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//declaring and initializing Celsius and Fahrenheit temperatures
	double celsTemp = 0, fahrTemp = 0;
	
	//getting temp from user
	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsTemp;

	//calculating and displaying Fahrenheit temperature
	fahrTemp = celsTemp * (9.0 / 5.0) + 32;
	cout << "The equivalent Fahrenheit temperature is:" << endl << fahrTemp << endl;

	return 0;
}
