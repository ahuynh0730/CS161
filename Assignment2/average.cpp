/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/1/2018
** Description:  Asks the user for five numbers and prints their average
*******************************************************************************/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	//declaring and initializing variables
	double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, sum = 0, average = 0;

	//to get 5 numbers from user
	cout << "Please enter five numbers." << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	//to add 5 numbers together
	sum = num1 + num2 + num3 + num4 + num5;

	//to calculate and display average
	average = sum / 5;
	cout << "The average of those numbers is:" << endl << average << endl;
	
	return 0;
}