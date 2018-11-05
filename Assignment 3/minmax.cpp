/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/8/2018
** Description:  Finds the minimum and maximum integers
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//getting number of integers from user
	int numbInt;
	cout << "How many integers would you like to enter?" << endl;
	cin >> numbInt;
	cout << "Please enter " << numbInt << " integers." << endl;

	//declaring variables for max/min integers
	int maxNumb = 0, minNumb = 0;

	for (int i = 0; i < numbInt; i++)
	{
		int tempNumb;
		cin >> tempNumb;

		//to make the first number both the maximum and minimum
		if (i == 0) {
			maxNumb = tempNumb;
			minNumb = tempNumb;
		}

		//to change min/max number if the new number is smaller/larger respectively
		if (tempNumb < minNumb)
			minNumb = tempNumb;
		if (tempNumb > maxNumb)
			maxNumb = tempNumb;

	}

	cout << "min: " << minNumb << endl;
	cout << "max: " << maxNumb << endl;

	
	

	return 0;
}