/*******************************************************************************
** Author:       Anthony Huynh
** Date:         7/11/2018
** Description:  Program that divides by 2 if even and multiplies by 3 and adds
				1 if odd, will count number of steps until reaches one
*******************************************************************************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int hailstone(int);

//commenting out main function
/*
int main() 
{
	//to get integer from user and call function
	cout << "Please enter an integer" << endl;
	int posNum, loopCount;
	cin >> posNum;
	loopCount = hailstone(posNum);
	
	cout << "This looped " << loopCount << " times." << endl;

	return 0;
}
*/

int hailstone(int posNum) {
	int loopCount = 0;
	//loop as long as number is not 1
	while (posNum != 1)
	{
		//if number is even
		if (posNum % 2 == 0)
			posNum /= 2;

		//if number is odd
		else
			posNum = (3 * posNum) + 1;

		//adding to how many times it has gone through loop
		loopCount++;
	}

	return loopCount;
}